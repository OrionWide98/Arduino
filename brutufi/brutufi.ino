#include <SoftwareSerial.h>
SoftwareSerial HC05(10,11);

void setup() {
  Serial.begin(115200);
  HC05.begin(38400);
  Serial.println("Envie os comandos AT para configurar o HC05");
}

void loop() {
  if(HC05.available()){
    while(HC05.available()){
      char c = HC05.read();
      Serial.write(c);
    }
  }

  if(Serial.available()){
    delay(10);
    String comando = "";

    while(Serial.available()){
      comando += (char) Serial.read();
    }

    Serial.print("Comando: ");
    Serial.print(comando);
    HC05.println(comando);
  }
}
