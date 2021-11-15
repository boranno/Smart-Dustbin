 //Techatronic.com  
 //smart dustbin  
 #include <Servo.h>  //servo library  
 int IRsensor = 7; // connect ir sensor to arduino digital 7 pin  
 Servo myservo;   //create servo object  
 int pos=0;      //set the default position to zero  
 void setup()  
 {  
  Serial.begin(9600);  
  pinMode (IRsensor, INPUT); // sensor pin INPUT  
  myservo.attach(9);  
  myservo.write(0);     //close cap on power on  
  delay(100);    
 }  
 void loop()  
 {  
  int value = digitalRead (IRsensor);  
  if (value == 1)  
   { Serial.print("HIGH-  Opening the lid of bin\n");  
   myservo.write(90);  
   delay(3000);  
   }  
  else  
   { Serial.print("LOW-  lid remains close\n");  
   myservo.write(0);  
   delay(3000);  
   }  
 }  
