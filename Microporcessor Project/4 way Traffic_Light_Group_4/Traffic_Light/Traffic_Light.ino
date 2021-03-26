void setup() 
{
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);//Red
  pinMode(12,OUTPUT);//Yellow
  pinMode(11,OUTPUT);//Green
  pinMode(7,OUTPUT); //Red
  pinMode(6,OUTPUT); //Yellow
  pinMode(5,OUTPUT); //Green
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  digitalWrite(5,HIGH);
  delay(5000); //Mili Second
  digitalWrite(13,LOW);
  digitalWrite(5,LOW);
  delay(1000);
  digitalWrite(12,HIGH);
  digitalWrite(6,HIGH);
  delay(4000);
  digitalWrite(12,LOW);
  digitalWrite(6,LOW);
  delay(1000);
  digitalWrite(11,HIGH);
  digitalWrite(7,HIGH);
  delay(5000);
  digitalWrite(11,LOW);
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(12,HIGH);
  digitalWrite(6,HIGH);
  delay(4000);
  digitalWrite(12,LOW);
  digitalWrite(6,LOW);
  delay(1000);

}
