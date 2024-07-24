#include <Servo.h> 

// Crea objetos Servo para cada servomotor
Servo servo1; 
Servo servo2;
Servo servo3;
Servo servo4;

// Asigna los pines de Arduino a los servos
int pinServo1 = 9;
int pinServo2 = 10;
int pinServo3 = 11;
int pinServo4 = 12;

void setup() {
  servo1.attach(pinServo1);
  servo2.attach(pinServo2);
  servo3.attach(pinServo3);
  servo4.attach(pinServo4);
}

void loop() {
  // Movimiento de saludo (ajusta los ángulos según tu brazo robótico)
  servo1.write(90);  // Ajusta el ángulo del servo 1
  servo2.write(45);  // Ajusta el ángulo del servo 2
  servo3.write(135); // Ajusta el ángulo del servo 3
  servo4.write(90);  // Ajusta el ángulo del servo 4
  delay(2000);     // Mantén la posición durante 2 segundos

  // Regresa a la posición inicial
  servo1.write(0);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  delay(2000);
}
