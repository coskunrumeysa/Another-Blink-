//yARADAN ALLAHIN ADIYLA OKU!!!
#define blue_led 10
#define yellow_led 9
#define red_led 7
#define white_led 6
#define green_led 5
#define buton 8
int buton_station = 0;
void setup() {
pinMode(red_led,OUTPUT);
pinMode(white_led,OUTPUT);
pinMode(green_led,OUTPUT);
pinMode(yellow_led,OUTPUT);
pinMode(blue_led,OUTPUT);
pinMode(buton,INPUT);
}

void loop() {
 buton_station=digitalRead(buton);
if(buton_station==1)
{ digitalWrite(blue_led,HIGH);
  delay(100);
  digitalWrite(yellow_led,HIGH);
  delay(100);
  digitalWrite(red_led,HIGH);
  delay(100);
  digitalWrite(white_led,HIGH);
  delay(100);
  digitalWrite(green_led,HIGH);
 }

else if (buton_station==0)
{ 
  digitalWrite(green_led,LOW);
  delay(100);
  digitalWrite(white_led,LOW);
  delay(100);
  digitalWrite(red_led,LOW);
  delay(100);
  digitalWrite(yellow_led,LOW);
  delay(100);
  digitalWrite(blue_led,LOW);
}
}
