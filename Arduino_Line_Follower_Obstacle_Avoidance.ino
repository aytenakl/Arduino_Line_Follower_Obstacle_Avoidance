#define ENA 3
#define ENB 5

#define IN1 9
#define IN2 8
#define IN3 7
#define IN4 6

#define SENSOR_LEFT 2
#define SENSOR_RIGHT 10

#define TRIG 13
#define ECHO 12


void setup() {

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(SENSOR_LEFT, INPUT);
  pinMode(SENSOR_RIGHT, INPUT);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}


void forward() {

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 150);
  analogWrite(ENB, 150);
}


void backward() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  analogWrite(ENA, 150);
  analogWrite(ENB, 150);
}


void stopCar() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}


long getDistance() {

  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG, LOW);

  long duration = pulseIn(ECHO, HIGH);

  long distance = duration * 0.034 / 2;

  return distance;
}


void loop() {

  int leftSensor = digitalRead(SENSOR_LEFT);
  int rightSensor = digitalRead(SENSOR_RIGHT);

  long distance = getDistance();


  // لو فيه جسم قريب يرجع للخلف
  if(distance < 20) {

    backward();
    delay(500);

  }

  // لو شاف اللون الأسود يمشي
  else if(leftSensor == LOW || rightSensor == LOW) {

    forward();

  }

  // لو شاف الأبيض يقف
  else {

    stopCar();

  }

}