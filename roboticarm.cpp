
 
/* Declaration section: 
Here we declare our all required variables that we are going to use in our program and also we will declare our all required objects and servo here. */ 
 
#include <Servo.h> // including servo library. 
 
//define the servos for each degree of freedom.  Servo servo1; // for ground movement. Servo servo2; // for upside movement  
Servo servo3; // for downside movement.  
Servo servo4; // for claw movement. 
 
//define the push buttons const int button1 = 10; // button for saving the value.  
const int button2 = 11; // button for execution of the value  int led1 = 2; // indicator led-1( leds for indication ). int led2 = 4; // indicator led-2. 
 
//define variable for values of the button.  int button1Pressed = 0; boolean button2Pressed = false; 
 
//define pins to connect potentiometers to input all the position values.  
const int vr1 = A0; const int vr2 = A1;  const int vr3 = A2;  const int vr4 = A3; 
 
//define variables to temporary save angles of the potentiometer.  
int servo1pos; int servo2pos; int servo3pos;  int servo4pos; 
 
//define variable to save permanent positions of the servos. 
 int servo1position[]={1,1,1,1,1,1,1,1}; int servo2position[]={1,1,1,1,1,1,1,1}; 
 int servo3position[]={1,1,1,1,1,1,1,1}; int servo4position[]={1,1,1,1,1,1,1,1}; /* initialization section. 
Here we will initialize our variables as input/output and will attach our servos to their respective pins by software commands. 
*/ 
void setup() { 
 
Serial.begin(9600); // activating the serial communication for debugging purpose and making the serial communication at 9600 baud/seconds rate. 
 
//define attached servos to their respective PWM pins.  servo1.attach(3); servo2.attach(5);  servo3.attach(6); servo4.attach(9); 
 
//declaration of pushbuttons as INPUT for saving values and starting the movement  pinMode(button1, INPUT); pinMode(button2, INPUT); 
 
// declaraion of LEDs as a output.  
pinMode(led1, OUTPUT); pinMode(led2, OUTPUT); 
 
// writing the initial values for the servo motors.  
servo1.write(90); servo2.write(90); servo3.write(90); servo4.write(90); 
 
} 
 
/* infinite loop movement: 
Here we will write our main code which will execute continuously until the power cuts. In this section we will firstly save all the values (angles) of of servo motor and the will move the servo motors continuously on the basis of its saved values. */ 
 
void loop() { 
 
//read the potentiometer values and define the servo angle to. 
//the potentiometer value with the map function.  
 
servo1pos = map (analogRead(vr1), 0, 1023, 5, 175); servo2pos = map (analogRead(vr2), 0, 1023, 5, 175); servo3pos = map 
(analogRead(vr3), 0, 1023, 5, 175); servo4pos = map (analogRead(vr4), 0, 1023, 5, 175); 
 
 
//servos move to mapped angles  servo1.write(servo1pos); servo2.write(servo2pos);  servo3.write(servo3pos); servo4.write(servo4pos); 
 
//if button1 is pressed then the positions will be saved.  
digitalWrite(led1,LOW); 
 
if(digitalRead(button1) == HIGH){ // condition for button press.  delay(10); digitalWrite(led1,HIGH);  
button1Pressed++; 
 
switch(button1Pressed){// 'SWITCH CASE' is used to save all the position values. 
 
case 1: // case for position-1. 
servo1position[0] = servo1pos; servo2position[0] = servo2pos; servo3position[0] = servo3pos; servo4position[0] = servo4pos;  delay(500); break; 
 
case 2: // case for position-2. 
servo1position[1] = servo1pos;  servo2position[1] = servo2pos;  servo3position[1] = servo3pos;  servo4position[1] = servo4pos; delay(500); 
break; 
 
 case 3: // case for position-3.  
servo1position[2] = servo1pos;  servo2position[2] = servo2pos; servo3position[2] = servo3pos; servo4position[2] = servo4pos;  
delay(500); break; case 4: // case for position-4.  
servo1position[3] = servo1pos;  servo2position[3] = servo2pos; servo3position[3] = servo3pos; servo4position[3] = servo4pos;  delay(500); 
break; 
  case 5: // case for position-5.  
servo1position[4] = servo1pos;  servo2position[4] = servo2pos;  servo3position[4] = servo3pos;  servo4position[4] = servo4pos; delay(500); break; 
 
case 6: // case for position-6.  
servo1position[5] = servo1pos;  servo2position[5] = servo2pos;  servo3position[5] = servo3pos; servo4position[5] = servo4pos;  delay(500); 
break; 
 
case 7: // case for position-7. 
servo1position[6] = servo1pos;  servo2position[6] = servo2pos;  servo3position[6] = servo3pos; servo4position[6] = servo4pos; delay(500); 
break; 
 
case 8: // case for position-8. 
servo1position[7] = servo1pos; servo2position[7] = servo2pos;  servo3position[7] = servo3pos; servo4position[7] = servo4pos;  delay(500); 
break; 
 
} 
} 