#include <Ultrasonic.h>

//установить пины дадчика (trig echo)
Ultrasonic ultrasonic(12, 13);


  // put your setup code here, to run once:
  // В начале назначаем переменные описывающие подключение оборудования
  
//Электромоторы  
int frontdrive=
//int backdrive=

//Реостат для двигателя, который регулирует скорость вращения
int dracc=

//Светодиоды фар, и задних фонарей
int frontlight=
int rearlight=

//Кнопка включения
int powerbutton=


//переменные сосояния
int drvforward=0;
int drvback=0;
int 

void setup() {
  pinMode(frontdrive, OUTPUT);
//  pinMode(backdrive, OUTPUT);
  pinMode(frontlight, OUTPUT);
  pinMode(rearlight, OUTPUT);
  pinMode(powerbutton, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void chkbutton () {
  if (digitalRead(powerbutton==HIGH)
    {
      digitalWrite(powerbutton,!digi
    }
}
}
