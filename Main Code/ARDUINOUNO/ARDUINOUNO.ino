// *****************************************************************
// **** Codigo ARDUINO UNO realizado por ALBERTO BARROSO LÓPEZ ****
// *****************************************************************

#include <LedControlMS.h>  //Control encendido matrices LEDs
#include <MaxMatrix.h>     //Control matrices LEDs para transicion
#include <avr/pgmspace.h>

//Formas para Matriz LED
byte OjosON[] = {B00111100,
B01100110,
B11000011,
B10011001,
B10011001,
B11000011,
B01100110,
B00111100};

byte OjosOFF[] = {B00000000,
B00000000,
B00111100,
B01111110,
B11000011,
B10000001,
B00000000,
B00000000};

byte HI[] = {B00000000,
B00000100,
B00000000,
B01010100,
B01110100,
B01010100,
B00000000,
B00000000};

//Cargar en memoria letras codificadas en binario para texto en scrolling
PROGMEM const unsigned char CH[] = {
3, 8, B00000000, B00000000, B00000000, B00000000, B00000000, // space
1, 8, B01011111, B00000000, B00000000, B00000000, B00000000, // !
3, 8, B00000011, B00000000, B00000011, B00000000, B00000000, // "
5, 8, B00010100, B00111110, B00010100, B00111110, B00010100, // #
4, 8, B00100100, B01101010, B00101011, B00010010, B00000000, // $
5, 8, B01100011, B00010011, B00001000, B01100100, B01100011, // %
5, 8, B00110110, B01001001, B01010110, B00100000, B01010000, // &
1, 8, B00000011, B00000000, B00000000, B00000000, B00000000, // '
3, 8, B00011100, B00100010, B01000001, B00000000, B00000000, // (
3, 8, B01000001, B00100010, B00011100, B00000000, B00000000, // )
5, 8, B00101000, B00011000, B00001110, B00011000, B00101000, // *
5, 8, B00001000, B00001000, B00111110, B00001000, B00001000, // +
2, 8, B10110000, B01110000, B00000000, B00000000, B00000000, // ,
4, 8, B00001000, B00001000, B00001000, B00001000, B00000000, // -
2, 8, B01100000, B01100000, B00000000, B00000000, B00000000, // .
4, 8, B01100000, B00011000, B00000110, B00000001, B00000000, // /
4, 8, B00111110, B01000001, B01000001, B00111110, B00000000, // 0
3, 8, B01000010, B01111111, B01000000, B00000000, B00000000, // 1
4, 8, B01100010, B01010001, B01001001, B01000110, B00000000, // 2
4, 8, B00100010, B01000001, B01001001, B00110110, B00000000, // 3
4, 8, B00011000, B00010100, B00010010, B01111111, B00000000, // 4
4, 8, B00100111, B01000101, B01000101, B00111001, B00000000, // 5
4, 8, B00111110, B01001001, B01001001, B00110000, B00000000, // 6
4, 8, B01100001, B00010001, B00001001, B00000111, B00000000, // 7
4, 8, B00110110, B01001001, B01001001, B00110110, B00000000, // 8
4, 8, B00000110, B01001001, B01001001, B00111110, B00000000, // 9
2, 8, B01010000, B00000000, B00000000, B00000000, B00000000, // :
2, 8, B10000000, B01010000, B00000000, B00000000, B00000000, // ;
3, 8, B00010000, B00101000, B01000100, B00000000, B00000000, // <
3, 8, B00010100, B00010100, B00010100, B00000000, B00000000, // =
3, 8, B01000100, B00101000, B00010000, B00000000, B00000000, // >
4, 8, B00000010, B01011001, B00001001, B00000110, B00000000, // ?
5, 8, B00111110, B01001001, B01010101, B01011101, B00001110, // @
4, 8, B01111110, B00010001, B00010001, B01111110, B00000000, // A
4, 8, B01111111, B01001001, B01001001, B00110110, B00000000, // B
4, 8, B00111110, B01000001, B01000001, B00100010, B00000000, // C
4, 8, B01111111, B01000001, B01000001, B00111110, B00000000, // D
4, 8, B01111111, B01001001, B01001001, B01000001, B00000000, // E
4, 8, B01111111, B00001001, B00001001, B00000001, B00000000, // F
4, 8, B00111110, B01000001, B01001001, B01111010, B00000000, // G
4, 8, B01111111, B00001000, B00001000, B01111111, B00000000, // H
3, 8, B01000001, B01111111, B01000001, B00000000, B00000000, // I
4, 8, B00110000, B01000000, B01000001, B00111111, B00000000, // J
4, 8, B01111111, B00001000, B00010100, B01100011, B00000000, // K
4, 8, B01111111, B01000000, B01000000, B01000000, B00000000, // L
5, 8, B01111111, B00000010, B00001100, B00000010, B01111111, // M
5, 8, B01111111, B00000100, B00001000, B00010000, B01111111, // N
4, 8, B00111110, B01000001, B01000001, B00111110, B00000000, // O
4, 8, B01111111, B00001001, B00001001, B00000110, B00000000, // P
4, 8, B00111110, B01000001, B01000001, B10111110, B00000000, // Q
4, 8, B01111111, B00001001, B00001001, B01110110, B00000000, // R
4, 8, B01000110, B01001001, B01001001, B00110010, B00000000, // S
5, 8, B00000001, B00000001, B01111111, B00000001, B00000001, // T
4, 8, B00111111, B01000000, B01000000, B00111111, B00000000, // U
5, 8, B00001111, B00110000, B01000000, B00110000, B00001111, // V
5, 8, B00111111, B01000000, B00111000, B01000000, B00111111, // W
5, 8, B01100011, B00010100, B00001000, B00010100, B01100011, // X
5, 8, B00000111, B00001000, B01110000, B00001000, B00000111, // Y
4, 8, B01100001, B01010001, B01001001, B01000111, B00000000, // Z
2, 8, B01111111, B01000001, B00000000, B00000000, B00000000, // [
4, 8, B00000001, B00000110, B00011000, B01100000, B00000000, // \ backslash
2, 8, B01000001, B01111111, B00000000, B00000000, B00000000, // ]
3, 8, B00000010, B00000001, B00000010, B00000000, B00000000, // hat
4, 8, B01000000, B01000000, B01000000, B01000000, B00000000, // _
2, 8, B00000001, B00000010, B00000000, B00000000, B00000000, // `
4, 8, B00100000, B01010100, B01010100, B01111000, B00000000, // a
4, 8, B01111111, B01000100, B01000100, B00111000, B00000000, // b
4, 8, B00111000, B01000100, B01000100, B00101000, B00000000, // c
4, 8, B00111000, B01000100, B01000100, B01111111, B00000000, // d
4, 8, B00111000, B01010100, B01010100, B00011000, B00000000, // e
3, 8, B00000100, B01111110, B00000101, B00000000, B00000000, // f
4, 8, B10011000, B10100100, B10100100, B01111000, B00000000, // g
4, 8, B01111111, B00000100, B00000100, B01111000, B00000000, // h
3, 8, B01000100, B01111101, B01000000, B00000000, B00000000, // i
4, 8, B01000000, B10000000, B10000100, B01111101, B00000000, // j
4, 8, B01111111, B00010000, B00101000, B01000100, B00000000, // k
3, 8, B01000001, B01111111, B01000000, B00000000, B00000000, // l
5, 8, B01111100, B00000100, B01111100, B00000100, B01111000, // m
4, 8, B01111100, B00000100, B00000100, B01111000, B00000000, // n
4, 8, B00111000, B01000100, B01000100, B00111000, B00000000, // o
4, 8, B11111100, B00100100, B00100100, B00011000, B00000000, // p
4, 8, B00011000, B00100100, B00100100, B11111100, B00000000, // q
4, 8, B01111100, B00001000, B00000100, B00000100, B00000000, // r
4, 8, B01001000, B01010100, B01010100, B00100100, B00000000, // s
3, 8, B00000100, B00111111, B01000100, B00000000, B00000000, // t
4, 8, B00111100, B01000000, B01000000, B01111100, B00000000, // u
5, 8, B00011100, B00100000, B01000000, B00100000, B00011100, // v
5, 8, B00111100, B01000000, B00111100, B01000000, B00111100, // w
5, 8, B01000100, B00101000, B00010000, B00101000, B01000100, // x
4, 8, B10011100, B10100000, B10100000, B01111100, B00000000, // y
3, 8, B01100100, B01010100, B01001100, B00000000, B00000000, // z
3, 8, B00001000, B00110110, B01000001, B00000000, B00000000, // {
1, 8, B01111111, B00000000, B00000000, B00000000, B00000000, // |
3, 8, B01000001, B00110110, B00001000, B00000000, B00000000, // }
4, 8, B00001000, B00000100, B00001000, B00000100, B00000000, // ~
};

//Pines de LEDs y altavoz
int ledPinR = 2;
int ledPinB = 13;
int speakerOut = 4; 

//Matrices LEDs
int data = 12;     // DIN, data in
int load = 5;      // CS, load
int clock = 6;     // CLK, clock
int maxInUse = 2;  //Numero Matrices
MaxMatrix m(data, load, clock, maxInUse); //Definicion pines Matriz LED
LedControl lc1 = LedControl (data, clock, load, maxInUse); //Definicion pines Matriz LED
char frase[] = " Robot de ALBERTO   ";  //Texto a mostrar en matrices LEDs en scrolling
byte buffer[10];

//BT
char rxChar;    // Variable para recibir datos del puerto serie

//Cancion Cucaracha
int timeUpDown[] = {3822, 3606, 3404, 3214, 3032, 2862,
2702, 2550, 2406, 2272, 2144, 2024,
1911, 1803, 1702, 1607, 1516, 1431,
1351, 1275, 1203, 1136, 1072, 1012};
byte song[] = {7,7,7,12,12,12,16,16,7,7,7,12,12,12,16,16,16,16,16,16,16,12,12,11,11,9,9,7,7,7,7,7};
byte beat = 0;
int MAXCOUNT = 32;
float TEMPO_SECONDS = 0.2;
byte statePin = LOW;
byte period = 0;
int i, timeUp;                
unsigned long delayTime=400; 

void setup(){
  m.init(); // Inicializacion modulo MAX7219
  m.setIntensity(10); // Intensidad LED's 0-15
  pinMode(ledPinR, OUTPUT); //Definicion pines salida
  pinMode(ledPinB, OUTPUT);
  pinMode(speakerOut, OUTPUT);
  Serial.begin(9600);
  lc1.shutdown(0,false);   //Iniciamos la matriz led #1
  lc1.shutdown(1,false);   //Iniciamos la matriz led #2
  lc1.setIntensity(0,10);  //Intensidad de los led en la matriz #1
  lc1.setIntensity(1,10);  //Intensidad de los led en la matriz #2
  lc1.clearDisplay(0);     //Apagamos todos los led de la matriz #1
  lc1.clearDisplay(1);     //Apagamos todos los led de la matriz #2
}//FIN SETUP

 
void loop(){
  int cont=0;   //Variable para bucle Modo Policia
  
  Ojos2();     //El Robot comienza abriendo los ojos
  delay(500);
  Ojos1();     //Y cerrandolos
  delay(500);
  
  Serial.println("Presione L --> Letras en scrolling");  //Envia por BT los posibles modos
  Serial.println("Presione P --> Modo Policia");
  Serial.println("Presione B --> Hi");
  Serial.println("Presione C --> Cancion");
  Serial.println("--------------------------------------"); //Separacion
  
 if( Serial.available() ){      // Si hay datos disponibles en el buffer
      rxChar = Serial.read();   // Leer un byte y colocarlo en variable
    
    if( rxChar == 'L'){         //Modo texto en scrolling
        m.shiftLeft(false, true);
        printStringWithShift(frase, 100);}
        
    else if( rxChar == 'P'){   //Modo Policia                                              
        while(cont<20){
             digitalWrite(ledPinR,HIGH);
             tone(speakerOut, 10, 5000);
             delay(200);
             digitalWrite(ledPinR,LOW);
             digitalWrite(ledPinB,HIGH);
             tone(speakerOut, 1000, 5000);
             delay(200);
             digitalWrite(ledPinB,LOW);
             cont++;}
        noTone(speakerOut);}
    
    else if ( rxChar == 'C'){    //Modo Cancion                                                    
        digitalWrite(speakerOut, LOW);
            for (beat = 0; beat < MAXCOUNT; beat++) { //Comienza a reproducir la cancion
              statePin = !statePin;
              timeUp = timeUpDown[song[beat]];
              period = ((1000000 / timeUp) / 2) * TEMPO_SECONDS;
                           for (i = 0; i < period; i++) {
                                 digitalWrite(speakerOut, HIGH);
                                 delayMicroseconds(timeUp);
                                 digitalWrite(speakerOut, LOW);
                                 delayMicroseconds(timeUp);}
                           }
      digitalWrite(speakerOut, LOW);}
         
      else if( rxChar == 'B'){  //Representa 'hi' en la matriz LED                                      
        Representar(HI,3000);}                
       
    }
 delay(2000);
} //FIN LOOP


// Representar caracter en la matriz
void printCharWithShift(char c, int shift_speed){
  if (c < 32) return;
  c -= 32;
  memcpy_P(buffer, CH + 7*c, 7);
  m.writeSprite(maxInUse*8, 0, buffer);
  m.setColumn(maxInUse*8 + buffer[0], 0);
  
        for (int i=0; i<buffer[0]+1; i++) 
            {
              delay(shift_speed);
            m.shiftLeft(false, false);
             }
}

// Extraer caracter del texto en movimiento
void printStringWithShift(char* s, int shift_speed){
  while (*s != 0){
    printCharWithShift(*s, shift_speed);
    s++;
  }
}

// Funcion para representar figuras en matriz led 8x8
void Representar(byte *Datos,int retardo) 
{
  for (int i = 0; i < 8; i++)  
  {
    lc1.setColumn(0,i,Datos[7-i]);
  }
  delay(retardo);
}

//Funcion creada Ojos abiertos en matriz LED
void Ojos1(){
  for (int i = 0; i < 8; i++){
    lc1.setColumn(0,i,OjosON[i]);
    lc1.setColumn(1,i,OjosON[i]);}}
    
//Funcion creada Ojos cerrados en matriz LED
void Ojos2(){
  for (int i = 0; i < 8; i++){
    lc1.setColumn(0,i,OjosOFF[i]);
    lc1.setColumn(1,i,OjosOFF[i]);}}
    
