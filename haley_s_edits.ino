String message = "HELLO";

int numchar = message.length();

int SPEED_CONTROL = 0; //create speed control variable
int POT = A0; //create speed sensor input
int BLINK_ADJ = 0; //controls blink between LEDs, 1/5 SPEED_CONTROL
int EDGE_DELAY = 0; //controls delay for end of motion

//int letter[26][5] =
//
//                {{1, 6, 26, 6, 1},   //A
//
//                {31, 21, 21, 10, 0}, //B
//
//                {14, 17, 17, 10, 0}, //C
//
//                {31, 17, 17, 14, 0}, //D
//
//                {31, 21, 21, 17, 0}, //E
//
//                {31, 20, 20, 16, 0}, //F
//
//                {14, 17, 19, 10, 0}, //G
//
//                {31, 4, 4, 4, 31},   //H
//
//                {0, 17, 31, 17, 0},  //I
//
//                {0, 17, 30, 16, 0},  //J
//
//                {31, 4, 10, 17, 0},  //K
//
//                {31, 1, 1, 1, 0},    //L
//
//                {31, 12, 3, 12, 31}, //M
//
//                {31, 12, 3, 31, 0},  //N
//
//                {14, 17, 17, 14, 0}, //O
//
//                {31, 20, 20, 8, 0},  //P
//
//                {14, 17, 19, 14, 2}, //Q
//
//                {31, 20, 22, 9, 0},  //R
//
//                {8, 21, 21, 2, 0},   //S
//
//                {16, 16, 31, 16, 16},//T
//
//                {30, 1, 1, 30, 0},   //U
//
//                {24, 6, 1, 6, 24},   //V
//
//                {28, 3, 12, 3, 28},  //W
//
//                {17, 10, 4, 10, 17}, //X
//
//                {17, 10, 4, 8, 16},  //Y
//
//                {19, 21, 21, 25, 0}  //Z
//
//        };

/*Define each letter as an array of ints*/
int A[5] = {1, 6, 26, 6, 1};
int B[5] = {31, 21, 21, 10, 0};
int C[5] = {14, 17, 17, 10, 0};
int D[5] = {31, 17, 17, 14, 0};
int E[5] = {31, 21, 21, 17, 0};
int F[5] = {31, 20, 20, 16, 0};
int G[5] = {14, 17, 19, 10, 0};
int H[5] = {31, 4, 4, 4, 31};
int I[5] = {0, 17, 31, 17, 0};
int J[5] = {0, 17, 30, 16, 0};
int K[5] = {31, 4, 10, 17, 0};
int L[5] = {31, 1, 1, 1, 0};
int M[5] = {31, 12, 3, 12, 31};
int N[5] = {31, 12, 3, 31, 0};
int O[5] = {14, 17, 17, 14, 0};
int P[5] = {31, 20, 20, 8, 0};
int Q[5] = {14, 17, 19, 14, 2};
int R[5] = {31, 20, 22, 9, 0};
int S[5] = {8, 21, 21, 2, 0};
int T[5] = {16, 16, 31, 16, 16};
int U[5] = {30, 1, 1, 30, 0};
int V[5] = {24, 6, 1, 6, 24};
int W[5] = {28, 3, 12, 3, 28};
int X[5] = {17, 10, 4, 10, 17};
int Y[5] = {17, 10, 4, 8, 16};
int Z[5] = {19, 21, 21, 25, 0};

void sendChar(int *character){
  int i;
    for (i = 0; i < 5; i++){
    PORTB = character[i]; //Take in the array of ints from the loop and send that to PORTB
    delay(BLINK_ADJ); //delay the blinking based on the potentiometer 
  }
  PORTB = 0x0; //turn off all LEDs
  delay(SPEED_CONTROL);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT); //set A0 to input (not really necessary as it is default) 
}

void loop() {
  
  int SPEED_CONTROL = (analogRead(POT) / 4); //get input from sensor (max default is 250 ~= .25s delay, min is 0)
  int BLINK_ADJ = (SPEED_CONTROL / 5); //set the blink adjust between "pixels" or LEDs to be 1/5 that of SPEED_CONTROL (max is .2s delay or 5Hz)
  //test output with direct delay of SPEED_CONTROL
  EDGE_DELAY = (SPEED_CONTROL * 10); //creates a delay 10 times that of the input
  
  
  int i;
  int j;
  DDRB = 0xFF;
  // loop through the length of the string and send each character to the board
    for (i = 0; i < numchar; i++){
       if (message.charAt(i) == 'A'){
        sendChar(A);
       }
       else if (message.charAt(i) == 'B'){
        sendChar(B);
       }
       else if (message.charAt(i) == 'C'){
        sendChar(C);
       }
       else if (message.charAt(i) == 'D'){
        sendChar(D);
       }
       else if (message.charAt(i) == 'E'){
        sendChar(E);
       }
       else if (message.charAt(i) == 'F'){
        sendChar(F);
       }
       else if (message.charAt(i) == 'G'){
        sendChar(G);
       }
       else if (message.charAt(i) == 'H'){
        sendChar(H);
       }
       else if (message.charAt(i) == 'I'){
        sendChar(I);
       }
       else if (message.charAt(i) == 'J'){
        sendChar(J);
       }
       else if (message.charAt(i) == 'K'){
        sendChar(K);
       }
       else if (message.charAt(i) == 'L'){
        sendChar(L);
       }
       else if (message.charAt(i) == 'M'){
        sendChar(M);
       }
       else if (message.charAt(i) == 'N'){
        sendChar(N);
       }
       else if (message.charAt(i) == 'O'){
        sendChar(O);
       }
       else if (message.charAt(i) == 'P'){
        sendChar(P);
       }
       else if (message.charAt(i) == 'Q'){
        sendChar(Q);
       }
       else if (message.charAt(i) == 'R'){
        sendChar(R);
       }
       else if (message.charAt(i) == 'S'){
        sendChar(S);
       }
       else if (message.charAt(i) == 'T'){
        sendChar(T);
       }
       else if (message.charAt(i) == 'U'){
        sendChar(U);
       }
       else if (message.charAt(i) == 'V'){
        sendChar(V);
       }
       else if (message.charAt(i) == 'W'){
        sendChar(W);
       }
       else if (message.charAt(i) == 'X'){
        sendChar(X);
       }
       else if (message.charAt(i) == 'Y'){
        sendChar(Y);
       }
       else if (message.charAt(i) == 'Z'){
        sendChar(Z);
       }
    }

  
//  for (i = 0; i < 5; i++){
//    PORTB = letter[7][i];
//    delay(BLINK_ADJ);
//  }
//  PORTB = 0x0;
//  delay(SPEED_CONTROL);
//    for (i = 0; i < 5; i++){
//    PORTB = letter[4][i];
//    delay(BLINK_ADJ);
//  }
//  PORTB = 0x0;
//  delay(SPEED_CONTROL);
//    for (i = 0; i < 5; i++){
//    PORTB = letter[7][i];
//    delay(BLINK_ADJ);
//  }
//  PORTB = 0x0;
//  delay(SPEED_CONTROL);
//    for (i = 0; i < 5; i++){
//    PORTB = letter[11][i];
//    delay(BLINK_ADJ);
//  }
//  PORTB = 0x0;
//  delay(SPEED_CONTROL);
//    for (i = 0; i < 5; i++){
//    PORTB = letter[11][i];
//    delay(BLINK_ADJ);
//  }
//  PORTB = 0x0;
//  delay(SPEED_CONTROL);
//    for (i = 0; i < 5; i++){
//    PORTB = letter[14][i];
//    delay(BLINK_ADJ);
//  }
//  PORTB = 0x0;
  delay(EDGE_DELAY);
}
