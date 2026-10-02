// LINE FOLLOWING + OBSTACLE AVOIDANCE (fixed)
// Line sensors: A3 = Left, A2 = Middle, A1 = Right  (Black = 0, White = 1)
// Obstacle sensor: pin 3 (HIGH = obstacle)

#define ledPin 13
#define obsSensor 3

// LEFT MOTOR
#define Lp 7
#define Ln 4
#define El 5

// RIGHT MOTOR
#define Rp 8
#define Rn 12
#define Er 6

// LINE SENSORS
#define Rs A1
#define Ms A2
#define Ls A3

// Tunable timings (ms)
#define T_STOP     200
#define T_REVERSE  400
#define T_TURN     550
#define T_SIDE     800   // forward move beside the obstacle
#define T_PAST     900   // forward move past the obstacle
#define T_TIMEOUT  4000  // line search timeout

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  pinMode(obsSensor, INPUT);

  pinMode(Lp, OUTPUT);
  pinMode(Ln, OUTPUT);
  pinMode(El, OUTPUT);
  pinMode(Rp, OUTPUT);
  pinMode(Rn, OUTPUT);
  pinMode(Er, OUTPUT);

  digitalWrite(El, HIGH);
  digitalWrite(Er, HIGH);

  pinMode(Ls, INPUT);
  pinMode(Ms, INPUT);
  pinMode(Rs, INPUT);


  MotorControl(0, 0);

}

void loop() {
  
  if (digitalRead(obsSensor) == HIGH)
  {
    Serial.println("OBSTACLE DETECTED!");
    AvoidObstacle();
    return;
  }

bool l = digitalRead(Ls);
bool m = digitalRead(Ms);
bool r = digitalRead(Rs);

        // l means white detected , !l means black line detected. same goes for m and r
        // our sensor will give a high reading if the sensor sees white

    if (!l && !m && !r) { MotorControl(1, 1); Serial.println("Forward");} // so if all of the sensors see black, it will continue to go forward
else if (l && !m && !r) { MotorControl(1, 0); Serial.println("Right");}   // if only the left sensor sees white(high reading), it will go towards the right
else if (l && m && !r)  { MotorControl(1, 2); Serial.println("Right Sharp");}
else if (!l && !m && r) { MotorControl(0, 1); Serial.println("Left");}    // if only the right sensor sees white(high), it will go towards the left
else if (!l && m && r)  { MotorControl(2, 1); Serial.println("Left Sharp");}
else if (l && !m && r)  { MotorControl(1 ,1); Serial.println("Center");}  // if only the middle sensor sees the black line its at the exact center.
else                    { MotorControl(0, 0); Serial.println("LINE LOST");}
}

bool searchLine(unsigned long timeoutMs)
{
  unsigned long start = millis();
  while (digitalRead(Ms) == HIGH)                 // while middle sensor does not see line (HIGH means line not found (white))
  {                                               // we need middle sensor to be low  
    if (millis() - start > timeoutMs) return false;
  }
  return true;
}

void AvoidObstacle(){

  digitalWrite(ledPin, HIGH);

  // 1. STOP 
  /*extra code i added*/ Serial.println("ROBOT STOPPED");
  MotorControl(0, 0);
  delay(T_STOP);

  // 2. REVERSE
  Serial.println("Reversing");
  MotorControl(2, 2);
  delay(T_REVERSE);
  MotorControl(0, 0);
  delay(150);

  // 3. turn right (spin)
  Serial.println("Turning Right");
  MotorControl(1, 2);
  delay(T_TURN);
  MotorControl(0, 0);
  delay(150);

  // 4. forward beside obstacle
  Serial.println("Moving sideways");
  MotorControl(1, 1);
  delay(T_SIDE);
  MotorControl(0, 0);
  delay(150);

  // 5. Turn left (parallel to the line)
  Serial.println("Turning Left");
  MotorControl(2, 1);
  delay(T_TURN);
  MotorControl(0, 0);
  delay(150);

  // 6. Forward past obstacle
  Serial.println("Passing Obstacle");
  MotorControl(1, 1);
  delay(T_PAST);
  MotorControl(0, 0);
  delay(150);

  // 7. Turn left again (towards the line)
  Serial.println("Turning to line");
  MotorControl(2, 1);
  delay(T_TURN);
  MotorControl(0, 0);
  delay(150);

  // 8. Drive until middle sensor hits line
  Serial.println("Searching for line");
  MotorControl(1, 1);
  bool found = searchLine(T_TIMEOUT);
  MotorControl(0, 0);
  delay(100);

  if (found){
    
    // 9. Turn right to face the original direction, then resume
    Serial.println("Aligning to the line");
    MotorControl(1, 2);
    delay(T_TURN);
    MotorControl(0, 0);
    delay(100);
    Serial.println("Line following resumed");
  }
  else{
    Serial.println("Line not found");
  }

  digitalWrite(ledPin, LOW);
}

// 0 = STOP,   1 = FORWARD,    2 = REVERSE
void MotorControl (int driveL, int driveR){

  switch (driveL){
    case 0: digitalWrite(Ln, LOW); digitalWrite(Lp, LOW); break;
    case 1: digitalWrite(Ln, HIGH); digitalWrite(Lp, LOW); break;
    case 2: digitalWrite(Ln, LOW); digitalWrite(Lp, HIGH); break;
  }

  switch (driveR){
    case 0: digitalWrite(Rn, LOW); digitalWrite(Rp, LOW); break;
    case 1: digitalWrite(Rn, HIGH); digitalWrite(Rp, LOW); break;
    case 2: digitalWrite(Rn, LOW); digitalWrite(Rp, HIGH); break;
  }
}

