void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  for(int contVerde = 0; contVerde < 10;contVerde++)
{//inicio do for
 RafaLinda();
}//fim do for
  
  for(int contAmarelo = 0; contAmarelo < 2;contAmarelo++)
{
  RafaFofa();
}
  
 for(int contVermelho = 0; contVermelho < 18;contVermelho++)
{
 RafaXuxuzinho();
}
  
  for(int contAzul = 0; contAzul < 30;contAzul++)
{
  RafaAmorDaTuaVida();
}
  
}

void RafaLinda()
{
digitalWrite(13, HIGH); //led verde
  delay(1000); 
  digitalWrite(13, LOW);
  delay(1000); 
}

void RafaFofa()
{
digitalWrite(12, HIGH); //led amarelo
  delay(1000); 
  digitalWrite(12, LOW);
  delay(1000); 
}

void RafaXuxuzinho()
{
digitalWrite(11, HIGH); //led vermelho
  delay(1000); 
  digitalWrite(11, LOW);
  delay(1000); 
}

void RafaAmorDaTuaVida()
{
digitalWrite(10, HIGH); //led azul
  delay(1000); 
  digitalWrite(10, LOW);
  delay(1000); 
}
