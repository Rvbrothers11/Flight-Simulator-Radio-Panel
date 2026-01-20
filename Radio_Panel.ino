// -------- Segment pins A-G + DP --------
const byte segmentPins[8] = {2,3,4,5,6,7,8,9};

// -------- Digit pins DIG1–DIG4 --------
const byte digitPins[4] = {10,11,12,13};

// -------- Display COM lines --------
const byte COM1 = A4;
const byte COM2 = A5;

// -------- Rotary Encoder --------
const byte ENC_DT  = A6;
const byte ENC_CLK = A7;
const byte ENC_SW  = 11;

// -------- Arcade Button --------
const byte ARCADE_BTN = 12;

// -------- Variables --------
int frequency = 118000;   // Example COM frequency
int lastCLK;

// 7-segment font (common cathode)
const byte digitFont[10][8] = {
 {1,1,1,1,1,1,0,0}, //0
 {0,1,1,0,0,0,0,0}, //1
 {1,1,0,1,1,0,1,0}, //2
 {1,1,1,1,0,0,1,0}, //3
 {0,1,1,0,0,1,1,0}, //4
 {1,0,1,1,0,1,1,0}, //5
 {1,0,1,1,1,1,1,0}, //6
 {1,1,1,0,0,0,0,0}, //7
 {1,1,1,1,1,1,1,0}, //8
 {1,1,1,1,0,1,1,0}  //9
};

void setup() {
  for(byte i=0;i<8;i++) pinMode(segmentPins[i], OUTPUT);
  for(byte i=0;i<4;i++) pinMode(digitPins[i], OUTPUT);

  pinMode(COM1, OUTPUT);
  pinMode(COM2, OUTPUT);

  pinMode(ENC_DT, INPUT);
  pinMode(ENC_CLK, INPUT);
  pinMode(ENC_SW, INPUT_PULLUP);
  pinMode(ARCADE_BTN, INPUT_PULLUP);

  lastCLK = analogRead(ENC_CLK);
}

// -------- Display a number --------
void displayNumber(int num, byte comPin) {
  digitalWrite(COM1, LOW);
  digitalWrite(COM2, LOW);
  digitalWrite(comPin, HIGH);

  for(int d=0; d<4; d++) {
    int digit = (num / pow(10,3-d)) % 10;

    for(byte s=0; s<8; s++)
      digitalWrite(segmentPins[s], digitFont[digit][s]);

    digitalWrite(digitPins[d], LOW);
    delay(3);
    digitalWrite(digitPins[d], HIGH);
  }
}

// -------- Rotary Encoder --------
void readEncoder() {
  int clk = analogRead(ENC_CLK);
  if(clk != lastCLK) {
    if(analogRead(ENC_DT) != clk)
      frequency += 25;
    else
      frequency -= 25;
  }
  lastCLK = clk;
}

void loop() {
  readEncoder();

  if(frequency < 118000) frequency = 118000;
  if(frequency > 136975) frequency = 136975;

  displayNumber(frequency / 10, COM1); // COM1
  displayNumber(frequency / 10, COM2); // COM2
}
