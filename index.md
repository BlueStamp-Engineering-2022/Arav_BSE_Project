# Project Automated Door Lock controlled By Smartphone 
This will serve as a brief description of your project. Limit this to three sentences because it can become overly long at that point. This copy should draw the user in and make she/him want to read more.

| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Arav | Los Gatos High | Mechanical Engineering | Incoming Sophmore

![IMG_3374](https://user-images.githubusercontent.com/107636256/174343360-5205d995-5982-4d61-a0ca-3b9098cd22a9.jpg)

  
# Final Milestone
My final milestone was creating my main code, and connecting it to my app. This milestone was by far my hardest milestone so far and I definently struggled on it. I spent alot of time on this milestone, especially on the code. I didnt take me too long to make the code but debugging it took a long time for me. There were a lot of issues I ran into and it got very frustrating, but through the help of my instructors and the internet, I was able to solve what the problem was and finish my project. I had alot of fun doing this project and it taught me alot about the Arduino IDE, C++, and coding in general. 

[![Final Milestone](https://res.cloudinary.com/marcomontalbano/image/upload/v1612573869/video_to_markdown/images/youtube--F7M7imOVGug-c05b58ac6eb4c4700831b2b3070cd403.jpg )](https://www.youtube.com/watch?v=F7M7imOVGug&feature=emb_logo "Final Milestone"){:target="_blank" rel="noopener"}

# Second Milestone
My second milestone is building the app. For my project, the servo and Arduino are connected to a Bluetooth module which is connected to my phone allowing me to use my phone to open and close the door. I built my app through the MIT app inventor using scratch. I had a lot of fun building the app and messing around with different components. In the app, there is a ListPicker where if I click it on the app, it opens up the list with all my connected Bluetooth devices. In there the HC-06, my Bluetooth module will pop up and allows my phone to connect. Because it is a password-based lock, I added a password option there as well so to open and close the lock I would have to put in the password first. My two buttons were the Open and Close. These buttons just tell the servo to Open or Close. To test if my app worked, I created a small code where it would move the servo whenever I pressed Open or Close. This process was annoying because I wasn't working for a long time. I checked my code to make sure everything was correct but eventually, we figured out that the problem was through the RX and TX pins in the Arduino. The reason it was not working was that the Bluetooth serial also sat on that port and the RX and TX pins would interfere with that connection. My workaround for that was to take out the pins before I uploaded and then put them back in after I had uploaded them. After I fixed that problem, both my app and my code worked fine. 

[![Third Milestone](https://res.cloudinary.com/marcomontalbano/image/upload/v1612574014/video_to_markdown/images/youtube--y3VAmNlER5Y-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://www.youtube.com/watch?v=y3VAmNlER5Y&feature=emb_logo "Second Milestone"){:target="_blank" rel="noopener"}
# First Milestone
  
My first milestone was setting up the Ardiuno and the motor to check to see if my motor worked. I wrote a small code where it turns the motor 180 degrees from its orginal position, waits 2 seconds and then turns 180 degrees back to its orginal position. I had some trouble in the beggining figuring out how to stop void loops from going on continously. I figured out that I had to use the exit() command for it to repeat once and stop until I uploaded it again. I also did struggle a bit when coding it but I got it down at the end without too much difficulty.

[![Arav A Milestone 1](https://res.cloudinary.com/marcomontalbano/image/upload/v1655741586/video_to_markdown/images/youtube--xX2YCIsWFto-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://youtu.be/xX2YCIsWFto "Arav A Milestone 1")
# Starter Project

My starter project was the TV-B-Gone Kit. This project is a remote control that solely turns off the television. TV-B-Gone, like other Universal Remote Controls, works by shining an invisible pulsing light at a television. Infra-Red is the name given to the unseen light. The IR emitter is an LED, which is a light-emitting electronic semiconductor device with a high efficiency. All of these diverse techniques that manufacturers have of pulsing IR light are emulated by TV-B-Gone remote controls. It does so in the same way that practically all other remote controls do: a small computer chip sends out the appropriately timed pulses to the IR LED based on information stored in its own database.But unlike most universal remote controls, TV-B-Gone only emits pulses for POWER, which, of course, is the only important function of any remote control, since this will put televisions in their most beneficial state: OFF. 

[![Arav A Starter Project](https://res.cloudinary.com/marcomontalbano/image/upload/v1655741417/video_to_markdown/images/youtube--l2L5atMuXcE-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://youtu.be/l2L5atMuXcE "Arav A Starter Project")
