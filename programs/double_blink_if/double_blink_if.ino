

int LEDPIN = 13;
int LEDPIN2 = 1;


void setup() {
  // put your setup code here, to run once:
  
  pinMode(LEDPIN, OUTPUT);
  pinMode(LEDPIN2, OUTPUT);
} 

void loop() 
{ 
  digitalWrite(LEDPIN, HIGH);
  delay(100);
 
  if (LEDPIN, HIGH)
  {
    digitalWrite(LEDPIN, LOW); 
    digitalWrite(LEDPIN2, HIGH);
  }
  else if (LEDPIN2, HIGH)
  {
    delay(100);
    digitalWrite(LEDPIN2, LOW); 
  }
}
