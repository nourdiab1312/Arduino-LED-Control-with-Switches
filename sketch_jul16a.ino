int Reading=0;
void setup()
{
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop()
{
 Reading=analogRead(A0);
  analogWrite(12,Reading/4);
   Reading=analogRead(A1);
  analogWrite(7,Reading/4);
  
 /* digitalWrite(12,HIGH);
  delay(Reading);
  digitalWrite(12,LOW);
  delay(Reading);*/
  
   digitalWrite(11,HIGH);
  delay(Reading);
  digitalWrite(11,LOW);
  delay(Reading);
  
   digitalWrite(10,HIGH);
  delay(Reading);
  digitalWrite(10,LOW);
  delay(Reading);
  
   digitalWrite(9,HIGH);
  delay(Reading);
  digitalWrite(9,LOW);
  delay(Reading);
  
   digitalWrite(8,HIGH);
  delay(Reading);
  digitalWrite(8,LOW);
  delay(Reading);
  
  /* digitalWrite(7,HIGH);
  delay(Reading);
  digitalWrite(7,LOW);
  delay(Reading);*/
  
   
  
}
