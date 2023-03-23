int Red=7;
int button=8;
void setup(){
pinMode(button,INPUT);
  pinMode(Red,OUTPUT);
  
}

void loop(){
  if ( digitalRead(button)== HIGH) {
     digitalWrite(7,HIGH);
 
 
  
}
   else  { 
     digitalWrite(7,LOW);
   }
     }