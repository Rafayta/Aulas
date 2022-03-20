void setup()
{
pinMode(13, OUTPUT); 
pinMode (5, OUTPUT) ;
}
void loop()
{
// led vermelho
 digitalWrite(13, 1); 
delay(1000); 
digitalWrite(13, 0); 
delay(1000);
// led azul
digitalWrite(5, 1); 
delay(1000); 
digitalWrite(5, 0); 
delay(1000) ;
}
