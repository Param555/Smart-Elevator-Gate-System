#include <Servo.h>
Servo myservo;
int pos=0;
int ir= A0;
int rled= 10;
int gled= 11;
int buzz= 12;
int val=0;
bool gatestate= false;
void setup() {
  Serial.begin(9600);
  myservo.attach(3);
  pinMode(ir, INPUT);
  pinMode(rled, OUTPUT);
  pinMode(gled, OUTPUT);
  pinMode(buzz, OUTPUT);
}
void loop(){
 val= analogRead(ir);
 digitalWrite(rled, HIGH);
  if(val>30){ if (!gatestate) 
  {
    Serial.println("the gate is opening.......");
    for (pos=0; pos<180; pos++)
    {
    myservo.write(pos);
    digitalWrite(buzz, HIGH);
    delay(30);
    }
    Serial.println("gate has opened");
    gatestate= true;
  }
    digitalWrite(rled, LOW);
    digitalWrite(gled, HIGH);
    digitalWrite(buzz,LOW);
    delay(5000);
    { 
      
      if (gatestate) 
      {
         Serial.println("the gate is closing.......");
        for (pos=180; pos>0; pos--)
      {
        myservo.write(pos);
        delay(30);
        digitalWrite(buzz,HIGH);
        digitalWrite(gled,LOW);
        digitalWrite(rled,HIGH);
      }
        Serial.println("gate has closed");
       gatestate = false;
      digitalWrite(gled, LOW);
      digitalWrite(buzz, LOW);
    }
   }
  } 
}
