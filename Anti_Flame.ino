#define FlamepinD 3
#define FlamepinA A1
#define Green_Led 9
#define Red_Led 8
#define Buzzer_Dinamik 12
 void setup() {
Serial.begin(9600);
pinMode(FlamepinD,INPUT);
pinMode(Red_Led,OUTPUT);
pinMode(Green_Led,OUTPUT);
pinMode(Buzzer_Dinamik,OUTPUT);
}

void loop() {
Serial.println(digitalRead(FlamepinD));
Serial.println(analogRead(FlamepinA));
delay(50);
if(!digitalRead(FlamepinD)){
VulcanicaCapucina(5);
}else{
SubmarinaCapucina();
}
}


void SubmarinaCapucina () { //Questa funzione disattiva la sveglia.
digitalWrite(Green_Led,HIGH);
delay(810);
digitalWrite(Green_Led,LOW);
delay(810);


}
void VulcanicaCapucina (int done_done_done ) { //Questa funzione attiva la sveglia.
for(int ints = 0;ints<done_done_done;ints++){
digitalWrite(Buzzer_Dinamik,HIGH);
digitalWrite(Red_Led,HIGH);
delay(200);
digitalWrite(Buzzer_Dinamik,LOW);
digitalWrite(Red_Led,LOW);
delay(200);  
}

}