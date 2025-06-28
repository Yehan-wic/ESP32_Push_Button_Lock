int relay = 13;
int sw = 12;
int lock_st = 0;
int sw_st_prev = 0;

void setup() {
  pinMode(relay, OUTPUT);
  pinMode(sw, INPUT_PULLUP);
}

void loop() {
  int sw_st = digitalRead(sw);
  if((sw_st == HIGH) && (sw_st != sw_st_prev))
  {
    lock_st = ~lock_st;

  }
  digitalWrite(relay, lock_st);
  sw_st_prev = sw_st;

}
