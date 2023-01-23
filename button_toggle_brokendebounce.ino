// this is copied from my other account "eggbegg"
// by hicapabex (2023-01-23)

const int pinLed = 2;
const int pinButton = 3;
bool toggle = false;
int buttonRead;
int debounce;

void setup(){
  pinMode(pinLed, OUTPUT);
  pinMode(pinButton, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if(toggle == false){
    digitalWrite(pinLed, HIGH);
  }
  else{
    digitalWrite(pinLed, LOW);
  }

  buttonRead = digitalRead(pinButton);
  if(buttonRead == HIGH){
    if(debounce > 20050){
      toggle = !toggle;
    }
  }
  
  debounce++;
  if(debounce > 20051){
    debounce = 0;
  }
}
