int potentiometer = A0; //From the main potentiometer
int PWM = 3;          


void setup() {
  pinMode(potentiometer, INPUT);
  pinMode(PWM, OUTPUT);  
  TCCR2B = TCCR2B & B11111000 | B00000001;    // pin 3 and 11 PWM frequency of 31372.55 Hz
}

void loop() {    
  float voltage = analogRead(potentiometer);
  int VALUE = map(voltage,0,1024,0,254);
  analogWrite(PWM,VALUE);  
}
