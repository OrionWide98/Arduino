int led=13;
int i,a = 0;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  if (a==0) {
   for (i=0;i<10; i++) {
    digitalWrite(led, HIGH);
    delay(20); // Wait for 1000 millisecond(s)
    digitalWrite(led, LOW);
    delay(20); // Wait for 1000 millisecond(s)
   } 
   }
  digitalWrite(led,HIGH);
  a = 1;
 }
