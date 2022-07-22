/*
feito em 10/10/2013 por: Hugo B. S. Borges, E-mail:hugoboareto@gmail.com e Jose Roberto Magalhaes, E-mail:joserobertomagalhaes@gmail.com
atualizado em 2/10/2014
atualizado em 19/11/2015
*/



#define STEP_1 2
#define DIR_1 3
#define EN_1 4

#define STEP_2 6
#define DIR_2 8
#define EN_2 9

#define STEP_3 10
#define DIR_3 11
#define EN_3 12

#define STEP_4 14
#define DIR_4 15
#define EN_4 16



int pontos_hor_var, pontos_ver_var, passos_hor_var, passos_ver_var, tcoleta_var, motor_hor_var, motor_ver_var; //variaveis para a tecnica de varredura bidimensional
int tcoleta_rot, pontos_rot, passos_rot, motor_rot;                                                            //variaveis para a tecnica de rotação
int passos_cen, motor_cen, direcao_cen;                                                                        //variaveis para a tecnica de centralização
char tecnica, dado_cen, dado_var, dado_rot;  //variáveis usadas para 


void setup()
{
  
  Serial.begin(19200);
    
  for (int i = 2; i <= 16; i++)  
    pinMode(i, OUTPUT);
  
  digitalWrite(STEP_1, LOW );
  digitalWrite(STEP_2, LOW );
  digitalWrite(STEP_3, LOW );
  digitalWrite(STEP_4, LOW );
  digitalWrite(DIR_1, LOW );
  digitalWrite(DIR_2, LOW );
  digitalWrite(DIR_3, LOW );
  digitalWrite(DIR_4, LOW );
  digitalWrite(EN_1, HIGH);
  digitalWrite(EN_2, HIGH);
  digitalWrite(EN_3, HIGH);
  digitalWrite(EN_4, HIGH);
  
}


char get_command()

{
  char inChar = ' ';
  int inByte;
  
  do  

    if (Serial.available())
    {
      inByte = Serial.read();
      inChar = char(inByte);
      Serial.print(inChar);  //eco
    } 
    
  while ( ! ( (inChar == 'a') || (inChar == 'b') || (inChar == 'c') || (inChar == 'd') || (inChar == 'e') || (inChar == 'f') || (inChar == 'g') || (inChar == 'h') || (inChar == 'r')|| (inChar == 'v') ) );
  
  return inChar;  
}


int get_num()
{
  char inChar = ' ';
  int inByte;
  int num  = 0;

  int fim = 0;
 do 
 {
    if (Serial.available())
    { 
      inByte = Serial.read();
      inChar = char(inByte);
      Serial.print(inChar); //eco
      if (inChar == '*') fim = 1;
      else
      {
        num = num*10 + atoi(&inChar);
     
      }
    }
 } while (fim == 0);
 return num;  
  
}


void ligar_1_motor(int motor)
{
   switch (motor)
   {
     case 1 :
       digitalWrite(EN_1,  LOW); //   liga o motor 1
       digitalWrite(EN_2, HIGH); //desliga o motor 2
       digitalWrite(EN_3, HIGH); //desliga o motor 3
       digitalWrite(EN_4, HIGH); //desliga o motor 4   
     break;        

     case 2 :
       digitalWrite(EN_1, HIGH); //desliga o motor 1
       digitalWrite(EN_2, LOW ); //   liga o motor 2
       digitalWrite(EN_3, HIGH); //desliga o motor 3
       digitalWrite(EN_4, HIGH); //desliga o motor 4
     break;
       
     case 3 :
       digitalWrite(EN_1, HIGH); //desliga o motor 1
       digitalWrite(EN_2, HIGH); //desliga o motor 2
       digitalWrite(EN_3, LOW ); //   liga o motor 3
       digitalWrite(EN_4, HIGH); //desliga o motor 4
     break;
       
     case 4 :
       digitalWrite(EN_1, HIGH); //desliga o motor 1
       digitalWrite(EN_2, HIGH); //desliga o motor 2
       digitalWrite(EN_3, HIGH); //desliga o motor 3
       digitalWrite(EN_4, LOW ); //   liga o motor 4
     break;   
   }
}


void desligar_motores(void) //desliga todos os motores
{
   digitalWrite(EN_1, HIGH); //desliga o motor 1
   digitalWrite(EN_2, HIGH); //desliga o motor 2
   digitalWrite(EN_3, HIGH); //desliga o motor 3
   digitalWrite(EN_4, HIGH); //desliga o motor 4   
}


void varrer_amostra(int motor_h, int motor_v, int pah, int pav, int poh, int pov, int tc)
{
 
  boolean dirh=LOW;
  int pontos_v = 0;
  
  digitalWrite(DIR_1, dirh);
  
// Alinhamento

  Serial.println("Alinhando para a primeira medida"); //informa ao software no computador que a mesa xy esta alinhando
  
  ligar_1_motor(motor_h);  // liga somente o motor horizontal
  for (int i = 1; i <=(pah/2); i++) 
  {
     digitalWrite(STEP_1, HIGH);
     delay(10);
     digitalWrite(STEP_1, LOW);
     delay(10);
  };
  
  ligar_1_motor(motor_v);  // liga somente o motor vertical
  for (int i = 1; i <=(pav/2); i++) 
  {
     digitalWrite(STEP_1, HIGH);
     delay(10);
     digitalWrite(STEP_1, LOW);
     delay(10);
  };
  pontos_v++;
  Serial.println(pontos_v); //informa ao software no computador que a mesa xy esta alinhando
  delay(tc*1000);

// fim Alinhamento

        
 
// Bloco básico
  
  for (int i = 1; i <=(pov-1); i++) 
  {        
     for (int i = 1; i <=(poh-1); i++) 
     { 
        ligar_1_motor(motor_h);  // liga somente o motor horizontal
        for (int i = 1; i <=(pah); i++) 
        {
           digitalWrite(STEP_1, HIGH);
           delay(10);
           digitalWrite(STEP_1, LOW);
           delay(10);
        };
        pontos_v++;
        Serial.println(pontos_v);
        delay(tc*1000);
     }
    
     digitalWrite(DIR_1, LOW); // reajusta a direção para o motor vertical
     ligar_1_motor(motor_v);   // liga somente o motor vertical
     for (int i = 1; i <=(pav); i++) 
     {
        digitalWrite(STEP_1, HIGH);
        delay(10);
        digitalWrite(STEP_1, LOW);
        delay(10);
     };
     pontos_v++;
     Serial.println(pontos_v);
     delay(tc*1000);

     dirh = !dirh;              // inversão de sentido do motor horizontal 
     digitalWrite(DIR_1, dirh);
     
  }
  
  for (int i = 1; i <=(poh-1); i++) 
  { 
     ligar_1_motor(motor_h);  // liga somente o motor horizontal
     for (int i = 1; i <=(pah); i++) 
     {
        digitalWrite(STEP_1, HIGH);
        delay(10);
        digitalWrite(STEP_1, LOW);
        delay(10);
     };
     pontos_v++;
     Serial.println(pontos_v);
     delay(tc*1000);
  }
  
//retorno ao ponto inicial

  Serial.println("Retornando ao ponto inicial");
  digitalWrite(DIR_1, HIGH);

  ligar_1_motor(motor_v);  // liga somente o motor vertical
  for (int i = 1; i <=(pav*(pov-1)+(pav/2)); i++) 
  {
     digitalWrite(STEP_1, HIGH);
     delay(10);
     digitalWrite(STEP_1, LOW);
     delay(10);
  };
  
  if (dirh)
  {
     digitalWrite(DIR_1, HIGH);
     
     ligar_1_motor(motor_h);  // liga somente o motor horizontal
     for (int i = 1; i <=(pah/2); i++) 
     {
       digitalWrite(STEP_1, HIGH);
       delay(10);
       digitalWrite(STEP_1, LOW);
       delay(10);
     };
    
    
  }
  else
  {
     digitalWrite(DIR_1, HIGH);

     ligar_1_motor(motor_h);  // liga somente o motor horizontal
     for (int i = 1; i <=(pah*(poh-1)+(pah/2)); i++) 
     {
        digitalWrite(STEP_1, HIGH);
        delay(10);
        digitalWrite(STEP_1, LOW);
        delay(10);
     };  
  }
//fim retorno ao ponto inicial
    
// Fim Bloco Básico
  
  
  desligar_motores();
  digitalWrite(DIR_1, LOW); // ajusta o pino de direção do motor horizontal para o valor inicial
  pontos_v = 0;
  Serial.println("Fim");
}


void rotacao_amostra(int motor,int pontos,int passos,int t_coleta)
{
   digitalWrite(DIR_1, LOW); //define sendido de rotação do motor
   int pontos_r = 0;

   //liga o motor selecionado e desliga os outros
   ligar_1_motor(motor);

   Serial.println("Inicio");
   // rotaciona  a amostra
   for (int i = 1; i <=(pontos); i++)
   {
       for (int i = 1; i <=(passos); i++) 
       {
           digitalWrite(STEP_1, HIGH);
           delay(10);
           digitalWrite(STEP_1, LOW);
           delay(10);
       };
       pontos_r++;               //incrementa o contador de pontos
       Serial.println(pontos_r); //envia pela usb o numero do ultimo ponto medido
       delay(t_coleta*1000);
   }

   //desliga todos os motores
   desligar_motores();

   Serial.println("Fim");
}


void translacao_amostra(int motor, int passos, boolean direcao)
{
   int dir_trans = DIR_1;
   int step_trans = STEP_1;
   switch (motor)
   {
      case 1:
        dir_trans = DIR_1;
        step_trans = STEP_1;
      break;
        
      case 2:
        dir_trans = DIR_2;
        step_trans = STEP_2;
      break;

      case 3:
        dir_trans = DIR_3;
        step_trans = STEP_3;
      break;

      case 4:
        dir_trans = DIR_4;
        step_trans = STEP_4;
      break;
    
   }
   
   digitalWrite(dir_trans, direcao); //ajusta o pino DIR para a direção selecionada
   
   //liga o motor selecionado e desliga os outros
   ligar_1_motor(motor);
   
   //move a amostra e informa pela usb inicio e fim do movimento
   Serial.println("Inicio");
   for (int i = 1; i <=(passos); i++) 
   {
      digitalWrite(step_trans, HIGH);
      delay(10);
      digitalWrite(step_trans, LOW);
      delay(10);
   };
   Serial.println("Fim");

   //desliga o motor selecionado
   desligar_motores();    
}


void loop ()
{
  tecnica = get_command();
  switch (tecnica)
  {
     case 'c' :
       dado_cen = get_command();
       switch (dado_cen)
       {
         case 'd' :
          motor_cen = get_num();
         break;        

         case 'e' :
           passos_cen = get_num();
         break;
       
         case 'f' :
           direcao_cen = get_num();
           translacao_amostra(motor_cen, passos_cen, boolean (direcao_cen));
         break;  
       }
     break;
                            
     case 'r' :
       dado_rot = get_command();
       switch (dado_rot)
       {
         case 'd' :
          motor_rot = get_num();
         break;        

         case 'e' :
           pontos_rot = get_num();
         break;
       
         case 'f' :
           passos_rot = get_num();
         break;
       
         case 'g' :
           tcoleta_rot = get_num();
           rotacao_amostra(motor_rot, pontos_rot, passos_rot, tcoleta_rot);
         break;  
       }
     break;

     
     case 'v' :
       dado_var = get_command();
       switch (dado_var)
       {
         case 'd' :
           motor_hor_var = get_num();
         break;        

         case 'e' :
           motor_ver_var = get_num();
         break;
       
         case 'f' :
           pontos_hor_var = get_num();
         break;
       
         case 'g' :
           pontos_ver_var = get_num();
         break;  
       
         case 'h' :
           tcoleta_var = get_num();
         break;
   
         case 'i' :
           passos_hor_var = get_num();
         break;

         case 'j' :
           passos_ver_var = get_num();
           varrer_amostra(motor_hor_var, motor_ver_var, passos_hor_var, passos_ver_var, pontos_hor_var, pontos_ver_var, tcoleta_var);
         break;
       }
     break;
  }
}
  
  
  
