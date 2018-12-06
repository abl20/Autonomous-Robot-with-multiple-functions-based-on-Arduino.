// *****************************************************************
// **** Codigo ARDUINO MEGA realizado por ALBERTO BARROSO LÓPEZ ****
// *****************************************************************


#include <Arduino.h>
#include <IRLibAll.h>     //Libreria para mando IR
#include <Ultrasonic.h>   //Libreria para sensores de distancia
#include <Servo.h>        //Libreria para servomotores

// Definicion Pin interruptor/selector de modo
#define SEL1 11

// Definiciones Botones Mando IR
#define MY_PROTOCOL NEC
#define IZQUIERDA 0xFF22DD 
#define DERECHA   0xFFC23D 
#define DELANTE   0xFF629D 
#define DETRAS    0xFFA857 
#define PINZAS    0xFF02FD

// Configuracion Mando IR
IRrecv miReceptor(9); //Pin del receptor IR
IRdecode miDecod;
uint32_t Anterior;  // Variable para cuando se repita por usar protocolo NEC
bool pinzas;        // Variable para cambiar de estado las pinzas

// Definicion Servomotores
Servo motor_FRONTizq;     
Servo motor_FRONTder;
Servo motor_BACKizq;
Servo motor_BACKder;
Servo pinza_izq;
Servo pinza_dcha;

// Definicion angulos servomotores pinzas
#define cerrarD 50        
#define cerrarI 110
#define abrirD 0  
#define abrirI  180
#define cerrarDesq 30        
#define cerrarIesq 130

// Definiciones Sensores distancia ultrasonicos
#define ECHOizq      10    // PIN ECHO IZQ
#define TRIGGERizq    22   // PIN TRIG IZQ
#define ECHOdcha      13  // PIN ECHO DCHA
#define TRIGGERdcha    24 // PIN TRIG DCHA
#define ECHOfrente  12    // PIN ECHO FRENTE
#define TRIGGERfrente 23  // PINT TRIG FRENTE
Ultrasonic SonarFRENTE(TRIGGERfrente,ECHOfrente);  //SONAR FRONTAL
Ultrasonic SonarIZQ(TRIGGERizq,ECHOizq);           //SONAR IZQUIERDA
Ultrasonic SonarDCHA(TRIGGERdcha,ECHOdcha) ;       //SONAR DERECHA

  void setup() {
    motor_FRONTder.attach(7); //Configuracion de pines de los servos (ruedas)
    motor_FRONTizq.attach(8);
    motor_BACKder.attach(5);
    motor_BACKizq.attach(6);
    pinza_dcha.attach(2);     //Configuracion de pines de servos (pinzas)
    pinza_izq.attach(4);       
    Serial.begin(9600);
    miReceptor.enableIRIn(); //Inicializacion del receptor IR
    abrirPINZAS();           //El robot siempre comienza con las pinzas abiertas
    pinzas=0;                //Variable de estado de las pinzas
   }//END SETUP


void loop() {
           
  int selector1 = digitalRead(SEL1);         //Leemos el valor del interruptor para saber en que modo se encuentra
  int sonarFRENTE = SonarFRENTE.Ranging(CM); //Se convierta la distancia a centimetros de los ultrasonicos
  int sonarDCHA = SonarDCHA.Ranging(CM);
  int sonarIZQ = SonarIZQ.Ranging(CM);
  
  detener();
 
  if (selector1==HIGH){      //el robot esta con el modo esquivaobstaculos activado
               cerrarPINZASesq();     //Se cierran las pinzas parcialmente para no interferir en el sensor de distancia
               avanceESQ();   
   
                     if(sonarFRENTE>3 && sonarFRENTE<20){   //Obstaculo frontal
                       retrocesoESQ();
                       giroDCHAESQ();}
                    
                    else if(sonarDCHA>3 && sonarDCHA<25)   //Obstaculo derecha
                        giroIZQESQ();
                    
                    else if(sonarIZQ>3 && sonarIZQ<25)     //Obstaculo izquierda
                        giroDCHAESQ();
   }//END IF

  else if (selector1==LOW){      //Modo control remoto mediante mando IR
     detener();                  //Detiene el robot
     if (miReceptor.getResults()) {    
           miDecod.decode();          //Decodifica la direccion del boton en hexadecimal
              if(miDecod.protocolNum==MY_PROTOCOL) { //Comprobacion protocolo NEC
                   if(miDecod.value==0xFFFFFFFF)     //Sustitucion de Repeticion por valor correcto
                     miDecod.value=Anterior;
              
              switch(miDecod.value) {       //Dependiendo del boton pulsado, realiza su funcion
              
                case IZQUIERDA:   giroIZQ();      break;
                
                case DERECHA:     giroDCHA();     break;
                
                case DELANTE:     avance();       break;
                
                case DETRAS:      retroceso();    break;

                case PINZAS:     
                
                   if(pinzas==1){
                    abrirPINZAS();
                    pinzas=!pinzas;}
                
                   else if (pinzas==0){
                    cerrarPINZAS();
                    pinzas=!pinzas;}
    
                break;
             } //END SWITCH
               
          Anterior=miDecod.value;}   //Almacena el valor anterior
           
      miReceptor.enableIRIn();}     //Vuelve a activar el receptor IR
    }    
}


//Funciones 
void abrirPINZAS(){  //Abre anmbas pinzas(servos)
  pinza_izq.write(abrirI);
  pinza_dcha.write(abrirD);
  delay(100);}

void cerrarPINZAS(){  //Cierra ambas pinzas(servos)
  pinza_izq.write(cerrarI);
  pinza_dcha.write(cerrarD);
  delay(100);}
  
void avanceESQ(){   // Movimiento continuo hacia delante en modo esquiva-obstaculos
  motor_FRONTizq.write(160); 
   motor_FRONTder.write(70); 
   motor_BACKizq.write(160); 
   motor_BACKder.write(70);
   delay(50);}

void giroDCHAESQ(){   //GIRO derecha en modo esquiva-obstaculos
   motor_FRONTizq.write(180);  
   motor_FRONTder.write(180);
   motor_BACKizq.write(180);
   motor_BACKder.write(180);
   delay(600);}

void giroIZQESQ(){   //GIRO izquierda en modo esquiva-obstaculos
   motor_FRONTizq.write(0);  
   motor_FRONTder.write(0);
   motor_BACKizq.write(0);
   motor_BACKder.write(0);
   delay(600);}

void retrocesoESQ(){  //Movimiento continuo hacia detras
   motor_FRONTizq.write(70);  
   motor_FRONTder.write(160);
   motor_BACKizq.write(70);
   motor_BACKder.write(160);
   delay(500);}

void avance(){  //Movimiento continuo hacia delante
   motor_FRONTizq.write(180); 
   motor_FRONTder.write(0); 
   motor_BACKizq.write(180); 
   motor_BACKder.write(0);
   delay(200);
   detener();}
  
void giroDCHA(){   //GIRO derecha
   motor_FRONTizq.write(180);  
   motor_FRONTder.write(180);
   motor_BACKizq.write(180);
   motor_BACKder.write(180);
   delay(100);
   detener();}
   
 void giroIZQ(){   //GIRO izquierda
   motor_FRONTizq.write(0);  
   motor_FRONTder.write(0);
   motor_BACKizq.write(0);
   motor_BACKder.write(0);
   delay(100);
   detener();
   }
   
void detener(){    //Detiene el robot
  motor_FRONTizq.write(90); 
   motor_FRONTder.write(90);
   motor_BACKizq.write(90);
   motor_BACKder.write(90);}

 void retroceso(){
   motor_FRONTizq.write(0);  //Movimiento continuo hacia detras
   motor_FRONTder.write(180);
   motor_BACKizq.write(0);
   motor_BACKder.write(180);
   delay(200);
   detener();}

void cerrarPINZASesq(){   //Cierra las pinzas parcialmente para no afectar al sensor de distancia
  pinza_izq.write(cerrarIesq);
  pinza_dcha.write(cerrarDesq);}
  
 
