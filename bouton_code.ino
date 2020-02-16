byte button[] = {2, 3, 4, 5};
//une nouvelle version

void setup() {
  Serial.begin(9600);
  for (int i = 0; i <= 1; i++) {
    pinMode (button[i], OUTPUT);
    pinMode(button[i], LOW);
  }
  for (int i = 2; i <= 3; i++) {
    pinMode(button[i], INPUT);
  }
}

void loop() {
  for (int i = 0; i <= 1; i++) {
    for (int j = 2; j <= 3; j++) {
      digitalWrite(button[i], HIGH);
      if (digitalRead(button[j]) == HIGH) {
        if (i == 0) {
          switch (j) {
            case (2):
              Serial.println("B");
              break;
            case (3):
              Serial.println("A");
              break;
          }
        }
        if (i == 1) {
          switch (j) {
            case 2:
              Serial.println("C");
              break;
            case 3:
              Serial.println("D");
              break;
          }
        }
        else {
          Serial.println("N");
        }
        

      }
      delay(20);
        digitalWrite(button[i], LOW);
    }
  }
}
