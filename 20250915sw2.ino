#define PIN_LED 7
unsigned count,toggle;

void setup() {
  pinMode(PIN_LED,OUTPUT);
   count = toggle = 0;
   digitalWrite(PIN_LED,toggle); // 처음 LED ON
   delay(1000);
   toggle = 1;
   digitalWrite(PIN_LED,toggle); //1초뒤 LED OFF
}

void loop() {
  for (count;count <= 10;count++){
    delay(100);
    digitalWrite(PIN_LED,toggle);
      
    if (toggle == 0){
      toggle =1;
      }
    else {
      toggle = 0;
      }       
    }
    toggle ==1;
   while (true){
    ;
   }

  
}

