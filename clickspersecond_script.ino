// made by hicapabex - (unfinished script 2023-01-23)

const int pinLed = 2;
const int pinButton = 3;
bool togglepress = false;
int buttonState;
int clicks;
int delayms;
int timesincepress = 1;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinButton, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  clicks = 0;
  delayms = 0;
  while(delayms < 1000){
    buttonState = digitalRead(pinButton);
    if(buttonState == HIGH){
      if(timesincepress == 1){ // holding button
        timesincepress == 1;
      }
      else if(timesincepress > 1){ // not holding button
        timesincepress++;
        clicks++;
      }
    }

    if 
    delayms++;
    delay(1);
  }
  Serial.print("clicks per second");
  Serial.println(clicks);
}
