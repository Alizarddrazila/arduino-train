#include <Ultrasonic.h>

//установить пины дадчика (trig echo)
Ultrasonic ultrasonic(12, 13);


  // put your setup code here, to run once:
  // В начале назначаем переменные описывающие подключение оборудования
  
//Электромоторы  
int frontdrive=6;
//int backdrive=

//Реостат для двигателя, который регулирует скорость вращения
int dracc=A0;

//Светодиоды фар, и задних фонарей
//int frontlight=
//int rearlight=

//Кнопка включения
int powerbutton=2;


//переменные сосояния
bool drvforward=false;
//int drvback=0;
//bool drvon=true;
bool obstacle=false;
bool buttonpush=false;
uint32_t ms_button = 0;
uint32_t ms = 0;


void setup() {
  pinMode(frontdrive, OUTPUT);
//  pinMode(backdrive, OUTPUT);
//  pinMode(frontlight, OUTPUT);
//  pinMode(rearlight, OUTPUT);
  pinMode(powerbutton, INPUT);
//  digitalWrite(frontlight, HIGH);
//  digitalWrite(rearlight, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  onoff;



  // Узнаем все ли готово для движения и едем
  if (drvforward && !obstacle)
  {
    analogWrite(frontdrive, map(analogRead(dracc),0,1023,0,255));
  }
  else
  {
    digitalWrite(frontdrive, LOW);
  }
  
  
}

// Включение движения
void onoff () {
     ms = millis();
  if (digitalRead(powerbutton)==HIGH && !buttonpush && ( ms - ms_button ) > 50 )
    {
      drvforward=!drvforward;
      ms_button    = ms;
    }
  if (digitalRead(powerbutton==LOW)&& buttonpush && ( ms - ms_button ) > 50)
    {
      buttonpush=false;
      ms_button    = ms;
    }
}

// Проверка препятствия

void needstop () {
  if (ultrasonic.read()<=3)
    {
      obstacle=1;
    }
  else 
    {
      obstacle=0;  
    }
  
}
