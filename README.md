# IOT based Automatic-Working-Robotic-Arm


Screenshots 


![image](https://user-images.githubusercontent.com/84896867/202794779-2c12c8e8-ea76-4f8c-a969-e1ca6119ed27.png)


![image](https://user-images.githubusercontent.com/84896867/202794811-f3717577-2fea-4707-b52a-ca1297e6169d.png)




Video


https://user-images.githubusercontent.com/84896867/202795779-bc1f6502-2817-4127-8192-7b69987e9087.mp4


Abstract
 
 
The main focus of our project is to design and develop a mechanism like a robotic arm for the lifting and movement of objects which is completely user friendly. 
 
The meaning of user friendly in our case is that to operate our robotic arm is very easy so that anyone can use it very easily and the operation is not complicated. 
 
Our robotic arm is designed with 4 Degrees Of Freedom (4-DOF) with 1-DOF for movement in X-axis and 3-DOF for movement in Y-axis 
 
Here we have used a simple lightweight ABS material filament for the construction for physical assembly of our robotic arm. And 3D printing method is used to to fabricate all the parts of our robotic arm. 
 
For the accurate movement is X and Y axis, our robotic arm is equipped with 4 servo motors and a manual knobs consists of potentiometers for each servo to change the positions. 
 
And to control all the servos and to connect all the potentiometers here we have used a very popular AVR development board Arduino, which is open source computer hardware and easily available in market at affordable rates. And the Arduino IDE which we have used to program this board is also user friendly. 


Literature review 
 
 
Since many years people are trying to replace the human work with machines. Machines called as robots which are faster than human and can reduce the human efforts. 
 
The term robotics is practically defined as the study, design and study of robots system for manufacturing. 
 
Robots are generally used to perform unsafe, hazardous, highly repetitive, and unpleasant tasks. They have many different functions such as material handling, assembly, arc welding, resistance welding and machine tool load and unload functions, painting, spraying, etc. 
 
The automation is playing important role to save human efforts in most of the regular and frequently used process. One of the major and most commonly performed works is picking and placing of jobs from source to destination. 
 
The automation is playing important role to save human efforts in most of the regular and frequently used process. One of the major and most commonly performed works is picking and placing of jobs from source to destination. 
 
The use of Electro-mechanical robotic arm capable of performing a variety of manufacturing functions in a flexible environment and at lower costs. They are concentrated on simple repetitive tasks, which tend not to require high precision. 


 
Objective 
 
To develop and control the displacement of robotic arm so that the arm can be used  to pick the object from source place and place it to the destination. 
 
Also to develop a robotic arm in such a way that it will be easy to maintain and operate by anyone (technical or non-technical person) and can reduce the maximum usage of manpower. 
 
The another objective of our robotic arm is that the whole production and maintenance cost is affordable to all small and medium scale industries. 
 

Component list and specification 
 
1.	Servo motors. 
2.	Arduino board (UNO or NANO) 3. Potentiometers. 
4.	Physical assembly. 
5.	High current power supply. 
6.	Other components. 

Hardware description 
 
Controlling of servo motor: 
There are 3 wires coming out from the servo motor: 
1)	Orange wire: This is the signal pin wire where we have to apply the appropriate PWM signal from micro-controller. In some servo motors this wire is of white colour. 
2)	Red wire: This wire is used to connect the positive terminal of power supply. 
3)	Brown wire: This wire is used to connect ground terminal of the power supply. In some servo motors this wire is found in black colour.  
Here first the servo motor is connected to the DC power supply, in our case 5V DC. 
 
Then the signal pin is connected to the PWM output pins of micro-controller. 
![image](https://user-images.githubusercontent.com/84896867/202790478-99a51e11-1219-4202-a7f5-2d38aa9fac90.png)

Here when we apply the PWM signal of 1ms then it will move at the 0 degree position. 
 
Then to achieve the position of 90 degree 1.5 ms of PWM pulse is required.  
 
And to get the position of 180 degree 2ms of PWM pulse signal is required. 
 
To maintain the current position of servo motor there will be a same pulse of same duration required after every 20ms on the signal pin. 


![image](https://user-images.githubusercontent.com/84896867/202790555-64fbd7c9-20a0-4c3f-8af4-bfb6f2bee8b0.png)



Potentiometers: 
A potentiometer (commonly known as ‘pot’ or ‘potmeter’) is nothing but a variable resistor whose resistance between 2 terminal changes according to the movement of it’s knob. 
 
Here we are using a individual potentiometer for individual servo motor to control its angular movement. 


![image](https://user-images.githubusercontent.com/84896867/202790633-1969fc83-e8cc-43f5-a96e-eac7004ac512.png)


It is a three terminal device in which there is a dedicated slider which rotates and we get the variable resistance at its any 2 pins. 
 
Here if we apply fixed voltage to its both side pins and if we connect it to our microcontroller’s DC so we get the analog voltage variation at its center pin. 
 	 
![image](https://user-images.githubusercontent.com/84896867/202791325-2f3d0071-2150-49ff-9cbf-69dd2b5e916d.png)


Here we have taken 4 potentiometers and applied the fixed voltage (5V) to its end pins and then it’s middle pin is connected to the analog input pins of arduino which has a builtin ADC of 10-bit resolution. 
 
Due to its 10-bit resolution we can get the digital values in range of 0 to 1024 with the change in voltage range of 0V to 5V.And after getting the digital values we can easily map those values using the map instruction in arduino. 
Physical structure of robotic arm. 

![image](https://user-images.githubusercontent.com/84896867/202791448-b9f36d5c-ac83-440e-b0db-3ae733d7fecd.png)


The arm is the main section of the robotic arm and consists of shoulder & elbow. 
 
All these joints resting at the base of the arm, typically connected to the arduino and it can move upward, downward or spin. The elbow is in the middle and shoulder allows the upper section of the arm to move upward or downward independently.  
 
Claw connected to arm is used to grab objects. Body of Robotic Arm has been designed and developed with 3D Printer. 



Working Principle 


Block diagram of project: 

![image](https://user-images.githubusercontent.com/84896867/202791873-00c48d0b-83a3-47f2-9b07-b4805dacb7da.png)

Description of Working Principle: 
 
Here all the hardware is connected to the arduino board firstly. 
 
Then the high current supply is stepped down using some regulator ICs. 
 
Now this stepped down supply is provided to the arduino board, potentiometer board and push button switches. 
 
Then the high current is directly fed to the servo motor assembly board whose input is connected with the arduino board output. 
 
Here the both powers supplies are isolated with each other and the finally everything is connected to the physical assembly. 



Circuit diagram of project and Flowchart 

![image](https://user-images.githubusercontent.com/84896867/202792010-12f77f05-3937-4123-8514-f1a9af8d444a.png)


![image](https://user-images.githubusercontent.com/84896867/202794693-3029371b-df5b-4744-b6be-858372ebd11a.png)






