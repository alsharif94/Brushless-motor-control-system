int VR = 9 ;
int ZF = 7 ;
int sw = 12 ;   // Change the Direction of the BLDC motor 
 
void setup() {
  pinMode(VR,OUTPUT) ;   // speed control (0..5v)
  pinMode(ZF,OUTPUT) ;  //Direction of the brushless Motor (1: clockwise ,   0: anti clokwise  ) 

}

void loop() {
int x = digitalRead(sw) ;  //Rrad the state of push button 
int y = analogRead(A0) ;   //Read the value of potentiometer 
int z= map(y,0,1023,0,250);  // convert the value to the output value of arduino 
digitalWrite(ZF,x) ;   // change the direction 
analogWrite(VR,z) ;   //Change the speed of the motor 
delay(10);

}
