#define WAIT_TIME        (10) // [ms]
int g_count;

void setup() {
  Serial.begin(115200);
  g_count=1;
}

void loop() {
      while(g_count<101)
      {
        Serial.print(g_count);
        if(g_count%15 == 0) {
             Serial.print(" : FizzBuzz"); // output :FizzBuzz
          }
        else if(g_count%5 == 0) {
             Serial.print(" : Fizz"); // output :Fizz
          }
        else if(g_count%3 == 0){
            Serial.print(" : Buzz"); // output :Buzz
          }
        Serial.print("\n");
          g_count++;
        delay(WAIT_TIME);
   }
}
