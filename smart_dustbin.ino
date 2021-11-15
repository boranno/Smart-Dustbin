 
 #include <Servo.h>
 int IRsensor = 7;
 Servo myservo;
 int pos=0;
 void setup()  
 {  
  Serial.begin(9600);  
  pinMode (IRsensor, INPUT);
  myservo.attach(9);  
  myservo.write(0);
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
