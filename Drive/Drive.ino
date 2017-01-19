// Senior Project Autonomous Car

#include <Servo.h> 

Servo servo1;  // Signal Port 6

int IN3 = 5; // Input3  pin 5
int IN4 = 4; // Input4  pin 4
int ENB = 3; // ENB

void setup() {
  pinMode (ENB, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  
  servo1.attach(6);
  
  
  Serial.begin(96000);
}

void loop() {
  //forward();
  right();
  //center();
}
void forward(){
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB,0);
  Serial.println("Foward");
}

void backward(){
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB,90);
  Serial.println("Foward");
}
void right(){
  servo1.write(0);
}

void center(){
  servo1.write(16);
}

void left(){
  servo1.write(31);
}


