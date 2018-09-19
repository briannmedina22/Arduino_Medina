#include <EEPROM.h>
int direccion=0;
byte val1;
byte val2;
byte Dec;

void setup (){
  Serial.begin (9600);
  byte informacion = B11001;
  int valor = analogRead (0);
  EEPROM.write(direccion, informacion);
  EEPROM.write(direccion+1,valor);}

void loop() {
  EEPROM.read(direccion);
  EEPROM.read(direccion+1);
  Serial.print("En la direccion esta;");
  Serial.print(direccion);
  Serial.print("Se encuentra");
  Serial.print(val1,Dec);
  delay(100);
  Serial.print("En la direccion esta:");
  Serial.print(direccion+1);
  Serial.print("Se encuentra");
  Serial.print(val2,Dec);
  delay(100);
}
