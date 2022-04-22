#include <SoftwareSerial.h>
const int anemoPin4 =  4;// the number of the LED pin
const int pluviPin7 =  7;// the number of the LED pin
int conta1=0, conta2=0;
int Reg_anemo=0;
int Reg_pluvi=0;
int sensorValue = 0; 
int sensorPin = A1;
float sensorValue1=0;
void setup() {
Serial.begin(9600);
  pinMode(anemoPin4, INPUT);//blujula
  pinMode(pluviPin7, INPUT);//plumiometro
  
}

void loop() 
{
//Reg_anemo= digitalRead(anemoPin4); 
//if(Reg_anemo == 0)conta1++;delay(1);
//Reg_pluvi= digitalRead(pluviPin7); 
//if(Reg_pluvi == 0)conta2++;delay(1);
//Serial.println(conta1);
////Serial.println(conta2);
//delay(10);
sensorValue = analogRead(sensorPin);
sensorValue1 =(sensorValue*5)/102.3 ;
sensorValue1 =sensorValue1/10;
/*Serial.print("voltaje:....");
Serial.println(sensorValue1);*/

if(sensorValue1>3.83 && sensorValue1<3.87 )
Serial.println("Norte 0g ");
if(sensorValue1>1.96 && sensorValue1<2.00 )
Serial.println("NorEste 22.6g ");
if(sensorValue1>2.24 && sensorValue1<2.28 )
Serial.println("NorEste 45g");
if(sensorValue1>0.38 && sensorValue1<0.42 )
Serial.println("NorEste 67.5");
if(sensorValue1>0.42 && sensorValue1<0.46 )
Serial.println("Este 90g");
if(sensorValue1>0.29 && sensorValue1<0.33 )
Serial.println("SurEste 112.5g");
if(sensorValue1>0.88 && sensorValue1<0.92 )
Serial.println("SurEste 135g");
if(sensorValue1>0.59 && sensorValue1<0.63 )
Serial.println("SurEste 157.5g");
if(sensorValue1>1.38 && sensorValue1<1.42 )
Serial.println("Sur 180g");
if(sensorValue1>1.17 && sensorValue1<1.21 )
Serial.println("SurOeste 202.5g");
if(sensorValue1>3.07 && sensorValue1<3.11 )
Serial.println("SurOeste 225g");
if(sensorValue1>2.92 && sensorValue1<2.96 )
Serial.println("SurOeste 247.5g");
if(sensorValue1>4.60 && sensorValue1<4.64 )
Serial.println("Oeste 270g");
if(sensorValue1>4.03 && sensorValue1<4.07 )
Serial.println("NorOeste 292.5g");
if(sensorValue1>4.32 && sensorValue1<4.36 )
Serial.println("NorOeste 315g");
if(sensorValue1>3.43 && sensorValue1<3.47 )
Serial.println("NorOeste 337.5g");


delay(100);

}
