void setup() {
    randomSeed(analogRead(A0));
}

void loop() {
     int freq = random(31, 16001);
     int count = random(10, 2001);
     tone(D3, freq, count);
     delay(count);
}