//pinos usados
#define InterruptPin 19

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(19200);

  //pino da interrupção como INPUT
  pinMode(InterruptPin, INPUT_PULLUP);
  
  //configura interrupção por qualquer mudança no pino 19
  attachInterrupt(digitalPinToInterrupt(InterruptPin), pressionado, FALLING);
  attachInterrupt(digitalPinToInterrupt(InterruptPin), soltado, RISING);
}

void loop()
{
  // put your main code here, to run repeatedly:
  Serial.println("loop principal");
  delay(250);
}

void pressionado()
{
  Serial.println("------------");
  Serial.println("pressionou");
  Serial.println("------------");
}

void soltado()
{
  Serial.println("------------");
  Serial.println("soltou");
  Serial.println("------------");
}
