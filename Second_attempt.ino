int letter[26][5] =

                {{1, 6, 26, 6, 1},   //A

                {31, 21, 21, 10, 0}, //B

                {14, 17, 17, 10, 0}, //C

                {31, 17, 17, 14, 0}, //D

                {31, 21, 21, 17, 0}, //E

                {31, 20, 20, 16, 0}, //F

                {14, 17, 19, 10, 0}, //G

                {31, 4, 4, 4, 31},   //H

                {0, 17, 31, 17, 0},  //I

                {0, 17, 30, 16, 0},  //J

                {31, 4, 10, 17, 0},  //K

                {31, 1, 1, 1, 0},    //L

                {31, 12, 3, 12, 31}, //M

                {31, 12, 3, 31, 0},  //N

                {14, 17, 17, 14, 0}, //O

                {31, 20, 20, 8, 0},  //P

                {14, 17, 19, 14, 2}, //Q

                {31, 20, 22, 9, 0},  //R

                {8, 21, 21, 2, 0},   //S

                {16, 16, 31, 16, 16},//T

                {30, 1, 1, 30, 0},   //U

                {24, 6, 1, 6, 24},   //V

                {28, 3, 12, 3, 28},  //W

                {17, 10, 4, 10, 17}, //X

                {17, 10, 4, 8, 16},  //Y

                {19, 21, 21, 25, 0}  //Z

        };

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  int i;
  DDRB = 0xFF;
  // put your main code here, to run repeatedly:
  for (i = 0; i < 5; i++){
    PORTB = letter[7][i];
    delay(20);
  }
  PORTB = 0x0;
  delay(100);
    for (i = 0; i < 5; i++){
    PORTB = letter[4][i];
    delay(20);
  }
  PORTB = 0x0;
  delay(100);
    for (i = 0; i < 5; i++){
    PORTB = letter[7][i];
    delay(20);
  }
  PORTB = 0x0;
  delay(100);
    for (i = 0; i < 5; i++){
    PORTB = letter[11][i];
    delay(20);
  }
  PORTB = 0x0;
  delay(100);
    for (i = 0; i < 5; i++){
    PORTB = letter[11][i];
    delay(20);
  }
  PORTB = 0x0;
  delay(100);
    for (i = 0; i < 5; i++){
    PORTB = letter[14][i];
    delay(20);
  }
  PORTB = 0x0;
  delay(1000);
}
