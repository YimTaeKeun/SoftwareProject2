#define PIN_LED 7
int count = 1;
int toggle = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }

}

void loop() {
  //0: 켜짐
  digitalWrite(PIN_LED, 0);
  delay(1000);
  while(1){
    if(count <= 5){
      digitalWrite(PIN_LED, 1);
      delay(100);
      digitalWrite(PIN_LED, 0);
      delay(100);
      count++;
    }
    else{
      digitalWrite(PIN_LED, 1);
    }
  }

}
