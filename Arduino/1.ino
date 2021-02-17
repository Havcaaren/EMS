const int TI = 300, TAA = 3*TI;


void setup(){
  pinMode(13, OUTPUT);
}

void dot(int n) {
  for (int i = 0; i< n; i++) {
    blik(TI);
  }
  delay(TI);
}

void dash(int n) {
  for (int i = 0; i< n; i++) {
    blik(TAA);
  }
  delay(TI);
}

void blik(int tmp) {
  digitalWrite(13,HIGH);
  delay(tmp);
  digitalWrite(13,LOW);
  delay(TI);
}

void loop() {
  //M
  dash(2); 
  //A
  dot(1);
  dash(1);
  //T
  dash(1);
  //J
  dot(1);
  dash(3);
  delay(2*TI);
  //D
  dash(1);
  dot(2);
  //I
  dot(2);
  //N
  dash(1);
  dot(1);
  //I
  dot(2);
  //S
  dot(3);
  delay(6*TI);
}
