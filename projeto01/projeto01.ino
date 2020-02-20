int i=65, led=13;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.write (i);
  if (i%2 == 0) {
    digitalWrite(led, HIGH);
  }
  else
  {
   digitalWrite(led, LOW);
    }
  delay (100);
  i ++;
  if (i > 90) {
    i = 65;
  }
  Serial.println();
}
