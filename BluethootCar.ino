
const int solMotorIleri = 8;
const int solMotorGeri = 9;
const int sagMotorIleri = 10;
const int sagMotorGeri = 11;

char veri; 

void setup() {

  pinMode(solMotorIleri, OUTPUT);
  pinMode(solMotorGeri, OUTPUT);
  pinMode(sagMotorIleri, OUTPUT);
  pinMode(sagMotorGeri, OUTPUT);


  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    veri = Serial.read(); 
    
    if (veri == 'F') { 
      ileriGit();
    } else if (veri == 'B') {
      geriGit();
    } else if (veri == 'L') { 
      solaDon();
    } else if (veri == 'R') { 
      sagaDon();
    } else if (veri == 'S') { 
      dur();
    }
  }
}


void ileriGit() {
  digitalWrite(solMotorIleri, HIGH);
  digitalWrite(solMotorGeri, LOW);
  digitalWrite(sagMotorIleri, HIGH);
  digitalWrite(sagMotorGeri, LOW);
}

void geriGit() {
  digitalWrite(solMotorIleri, LOW);
  digitalWrite(solMotorGeri, HIGH);
  digitalWrite(sagMotorIleri, LOW);
  digitalWrite(sagMotorGeri, HIGH);
}

void solaDon() {
  digitalWrite(solMotorIleri, LOW);
  digitalWrite(solMotorGeri, HIGH);
  digitalWrite(sagMotorIleri, HIGH);
  digitalWrite(sagMotorGeri, LOW);
}

void sagaDon() {
  digitalWrite(solMotorIleri, HIGH);
  digitalWrite(solMotorGeri, LOW);
  digitalWrite(sagMotorIleri, LOW);
  digitalWrite(sagMotorGeri, HIGH);
}

void dur() {
  digitalWrite(solMotorIleri, LOW);
  digitalWrite(solMotorGeri, LOW);
  digitalWrite(sagMotorIleri, LOW);
  digitalWrite(sagMotorGeri, LOW);
}
