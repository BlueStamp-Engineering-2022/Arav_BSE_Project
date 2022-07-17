#include <Servo.h>
#include<SoftwareSerial.h>  


#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif


int pin         =  6;
int numPixels   = 16;
int pixelFormat = NEO_GRB + NEO_KHZ800;
Adafruit_NeoPixel *pixels;
#define DELAYVAL 50

Servo myservo;  

String inputString = "";
String command = "";
String value = "";
String openPassword = "OPEN=aa"; 
String closePassword = "CLOSE=aa";
boolean stringComplete = false; 

SoftwareSerial BTserial(12, 13); 

int pos = 0;

void setup()
{
  
  Serial.begin(9600); 
  inputString.reserve(50); 
  command.reserve(50);
  value.reserve(50);
  BTserial.begin(9600);
  
  myservo.attach(9); 
  pinMode(8, OUTPUT); 

  pixels = new Adafruit_NeoPixel(numPixels, pin, pixelFormat);
  pixels->begin();
  pixels->clear();
  pixels->show();
    
}

void serialEvent() 
{
  while (BTserial.available())
  {
    //Serial.println("in top loop");
    char inChar = (char)BTserial.read();
    inputString += inChar;
    if (inChar == '\n' || inChar == '\r') 
    {

      //Serial.print("inputString: ")
      //Serial.println(inputString);
      stringComplete = true;
    } 
  }
}

void loop()
{
  int buzzer = (8);
  serialEvent();
  if (stringComplete) 
  {
    Serial.println("in here");
    delay(100);
    //value = BTserial.read();
    //Serial.print(BTserial.read());
    Serial.println(inputString.substring(0,8));
    Serial.println(closePassword);
    if(inputString.substring(0,7).equals(openPassword))
          {
           openDoor();
           colorLight(0,100,0);
           playSound();
           Serial.println(" OPEN");
           delay(100);       
          }
    if(inputString.substring(0,8).equals(closePassword))
          {
           closeDoor();
           colorLight(100,0,0);
           playSound();
           Serial.println(" CLOSE");
           delay(100);
           }
    stringComplete = false;
    inputString = "";
    
  }
} 

void openDoor()
{
  myservo.write(0); 
  delay(100);   
}

void closeDoor()
{
  myservo.write(150);
  delay(100); 
}

void playSound()
{
  int buzzer = (8);
  tone(buzzer, 1000); 
  delay(1000);       
  noTone(buzzer);     
  delay(1000);  
}

void colorLight(int R,int G,int B) 
{
  // The first NeoPixel in a strand is #0, second is 1, all the way up
  // to the count of pixels minus one.
  for(int i=0; i<numPixels; i++) 
  { // For each pixel...

    // pixels->Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels->setPixelColor(i, pixels->Color(R, G, B));

    pixels->show();   // Send the updated pixel colors to the hardware.

    delay(DELAYVAL); // Pause before next pass through loop
  }
  pixels->clear();
  delay(500);
  pixels->show();
}
