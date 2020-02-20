int ldr = A0;
int bz = 3;
int led = 4;
int entrada = 0;

void setup() {
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  pinMode(bz, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  entrada = analogRead(ldr);
  if(entrada<=10){
    analogWrite(bz, 1000);
    digitalWrite(led, HIGH);
    delay(500);
    analogWrite(bz, 0);
    digitalWrite(led, LOW);
    delay(500); 
  }
  else{
    analogWrite(led, 0); 
  }
  Serial.print("Leitura do sensor: ");
  Serial.println(entrada);
  delay(1000);
}
