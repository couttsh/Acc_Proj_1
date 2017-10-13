int LED = 7; //set LED pin
int SPEED_CONTROL = 0; //create speed control variable
int POT = A0; //create speed sensor input
int BLINK_ADJ = 0; //controls blink between LEDs, 1/5 SPEED_CONTROL
int EDGE_DELAY = 0; //controls delay for end of motion

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
  pinMode(A0, INPUT); //set A0 to input (not really necessary as it is default) 
  pinMode(LED, OUTPUT); //set LED to be an output
}

void loop() {
  
  SPEED_CONTROL = analogRead(POT); //get input from sensor (max default is 1023 ~= 1s delay or 1Hz, min is 0)
  BLINK_ADJ = (SPEED_CONTROL / 5); //set the blink adjust between "pixels" or LEDs to be 1/5 that of SPEED_CONTROL (max is .2s delay or 5Hz)
  //test output with direct delay of SPEED_CONTROL
  EDGE_DELAY = (SPEED_CONTROL * 10); //creates a delay 10 times that of the input
  
  
  int i;
  DDRB = 0xFF;
  // put your main code here, to run repeatedly:
  for (i = 0; i < 5; i++){
    PORTB = letter[7][i];
    delay(BLINK_ADJ);
  }
  PORTB = 0x0;
  delay(SPEED_CONTROL);
    for (i = 0; i < 5; i++){
    PORTB = letter[4][i];
    delay(BLINK_ADJ);
  }
  PORTB = 0x0;
  delay(SPEED_CONTROL);
    for (i = 0; i < 5; i++){
    PORTB = letter[7][i];
    delay(BLINK_ADJ);
  }
  PORTB = 0x0;
  delay(SPEED_CONTROL);
    for (i = 0; i < 5; i++){
    PORTB = letter[11][i];
    delay(BLINK_ADJ);
  }
  PORTB = 0x0;
  delay(SPEED_CONTROL);
    for (i = 0; i < 5; i++){
    PORTB = letter[11][i];
    delay(BLINK_ADJ);
  }
  PORTB = 0x0;
  delay(SPEED_CONTROL);
    for (i = 0; i < 5; i++){
    PORTB = letter[14][i];
    delay(BLINK_ADJ);
  }
  PORTB = 0x0;
  delay(EDGE_DELAY);
}
