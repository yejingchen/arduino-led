// LED blinking :)
int i = 0;

#define LED 2
void setup (void) 
{
  pinMode (LED, OUTPUT);
}

void loop (void) 
{
  if (i < 3) 
  {
	  digitalWrite(LED, HIGH);
	  delay(1000 + 1000 * i);
	  i = i + 1;
  } else 
  {
	  i = 0;
  }
  digitalWrite(LED, LOW);
  delay(1000);
}
