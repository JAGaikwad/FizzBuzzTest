#define MODE_FIZZBUZZ    (1)
#define MODE_FIZZ        (2)
#define MODE_BUZZ        (3)
#define MODE_OTHER       (4)

#define WAIT_TIME        (10) // [ms]
int g_count = 0;
int g_display_mode;

void setup() {
  Serial.begin(115200);
}

void loop() {
  if(Serial.available() > 0) {
    for(g_count=1;g_count>101;g_count++) {
      if(g_count%15 == 0) {
            g_display_mode = MODE_FIZZBUZZ;
        }
      else if(g_count%5 == 0) {
            g_display_mode = MODE_FIZZ;
        }
      else if(g_count%3 == 0){
            g_display_mode = MODE_BUZZ;
        }
      else {
            g_display_mode = MODE_OTHER;
        }
      }  
    }

      if(g_display_mode == MODE_FIZZBUZZ) {
          Serial.print(g_count); // output number         
          Serial.print(" : FizzBuzz\n"); // output :FizzBuzz
        }
        else if(g_display_mode == MODE_FIZZ) {
          Serial.print(g_count); // output number  
          Serial.print(" : Fizz\n"); // output :Fizz
        }
        else if(g_display_mode == MODE_BUZZ){
          Serial.print(g_count); // output number  
          Serial.print(" : Buzz\n"); // output :Buzz
        }
        else if(g_display_mode == MODE_OTHER){
          Serial.print(g_count); // output number
          Serial.print("\n");
        }

    delay(WAIT_TIME);
}
