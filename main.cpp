/*
       Braccio Robotico Arduino
       Controllato da Smartphone e app creata con "App Inventor"
       by Maurizio Miscio
*/

#include <SoftwareSerial.h>
#include <Servo.h>

Servo servo01;
Servo servo02;
Servo servo03;
Servo servo04;
Servo servo05;
Servo servo06;

SoftwareSerial Bluetooth(3, 4);  // Pin ai queli è collegato il modulo bluetooth (3,4)


int servo1Pos, servo2Pos, servo3Pos, servo4Pos, servo5Pos, servo6Pos;                          // Posizione Attuale
int servo1PPos, servo2PPos, servo3PPos, servo4PPos, servo5PPos, servo6PPos;                    // Posizione Precedente (PP)
int servo01SP[50], servo02SP[50], servo03SP[50], servo04SP[50], servo05SP[50], servo06SP[50];  // per conservare le posizioni
int velocita = 20;
int IndiceArray = 0;
int DatiInEntrata;
int m = 0;

void setup() {
  servo01.attach(5);
  servo02.attach(6);
  servo03.attach(7);
  servo04.attach(8);
  servo05.attach(9);
  servo06.attach(10);
  Bluetooth.begin(9600);  //Baud rate per modulo bluetooth
  Bluetooth.setTimeout(5);
  delay(20);
  Serial.begin(9600);

  // Muovi tutti i servo a metà corsa
  servo1PPos = 90;
  servo01.write(servo1PPos);
  servo2PPos = 90;
  servo02.write(servo2PPos);
  servo3PPos = 90;
  servo03.write(servo3PPos);
  servo4PPos = 90;
  servo04.write(servo4PPos);
  servo5PPos = 90;
  servo05.write(servo5PPos);
  servo6PPos = 90;
  servo06.write(servo6PPos);
}

void loop() {
  // Controlla i dati in entrata
  if (Bluetooth.available() > 0) {
    DatiInEntrata = Bluetooth.read();  // Leggi i dati in entrata

    if (DatiInEntrata == 0) {
      m = 0;
    }
    if (DatiInEntrata == 1) {
      m = 1;
    }
    if (DatiInEntrata == 2) {
      m = 2;
    }
    if (DatiInEntrata == 3) {
      m = 3;
    }
    if (DatiInEntrata == 4) {
      m = 4;
    }
    if (DatiInEntrata == 5) {
      m = 5;
    }
    if (DatiInEntrata == 6) {
      m = 6;
    }
    if (DatiInEntrata == 7) {
      m = 7;
    }
    if (DatiInEntrata == 8) {
      m = 8;
    }
    if (DatiInEntrata == 9) {
      m = 9;
    }
    if (DatiInEntrata == 10) {
      m = 10;
    }
    if (DatiInEntrata == 11) {
      m = 11;
    }
    if (DatiInEntrata == 12) {
      m = 12;
    }
    if (DatiInEntrata == 14) {
      m = 14;
    }
    if (DatiInEntrata == 16) {
      m = 16;
    }
    if (DatiInEntrata == 17) {
      m = 17;
    }
    if (DatiInEntrata == 18) {
      m = 18;
    }
    if (DatiInEntrata == 19) {
      m = 19;
    }
    if (DatiInEntrata == 20) {
      m = 20;
    }
    if (DatiInEntrata == 21) {
      m = 21;
    }
    if (DatiInEntrata == 22) {
      m = 22;
    }
    if (DatiInEntrata == 23) {
      m = 23;
    }
    if (DatiInEntrata == 24) {
      m = 24;
    }
    if (DatiInEntrata == 25) {
      m = 25;
    }
    if (DatiInEntrata == 26) {
      m = 26;
    }
    if (DatiInEntrata == 27) {
      m = 27;
    }

    // Movimentazione Braccio Robotico in diretta:

    // Muovi il Servo 1 in senso orario
    while (m == 16) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo01.write(servo1PPos);
      servo1PPos++;
      delay(velocita);
    }
    // Muovi il Servo 2 in senso antiorario
    while (m == 17) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo01.write(servo1PPos);
      servo1PPos--;
      delay(velocita);
    }

    // Movimentazione Servo2
    while (m == 19) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo02.write(servo2PPos);
      servo2PPos++;
      delay(velocita);
    }
    while (m == 18) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo02.write(servo2PPos);
      servo2PPos--;
      delay(velocita);
    }

    // Movimentazione Servo3
    while (m == 20) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo03.write(servo3PPos);
      servo3PPos++;
      delay(velocita);
    }
    while (m == 21) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo03.write(servo3PPos);
      servo3PPos--;
      delay(velocita);
    }

    //  Movimentazione Servo4
    while (m == 23) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo04.write(servo4PPos);
      servo4PPos++;
      delay(velocita);
    }
    while (m == 22) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo04.write(servo4PPos);
      servo4PPos--;
      delay(velocita);
    }

    // Movimentazione Servo5
    while (m == 25) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo05.write(servo5PPos);
      servo5PPos++;
      delay(velocita);
    }
    while (m == 24) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo05.write(servo5PPos);
      servo5PPos--;
      delay(velocita);
    }

    // Movimentazione Servo6
    while (m == 26) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo06.write(servo6PPos);
      servo6PPos++;
      delay(velocita);
    }
    while (m == 27) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo06.write(servo6PPos);
      servo6PPos--;
      delay(velocita);
    }

    // Se il cursore della velocità è combiato...
    if (DatiInEntrata > 101 & DatiInEntrata < 250) {
      velocita = DatiInEntrata / 10;  // Cambia la velocità del servo (ritardo tra gli step)
    }

    // Se è premuto il tasto SALVA dall'APP...
    if (m == 12) {
      servo01SP[IndiceArray] = servo1PPos;  // Salva la posizione dei servo negli Array
      servo02SP[IndiceArray] = servo2PPos;
      servo03SP[IndiceArray] = servo3PPos;
      servo04SP[IndiceArray] = servo4PPos;
      servo05SP[IndiceArray] = servo5PPos;
      servo06SP[IndiceArray] = servo6PPos;
      IndiceArray++;  // Aumenta l'indice dell' Array
      m = 0;
    }

    // Se è premuto il pulsante AVVIA
    if (m == 14) {
      runSteps(); //Fai partire il void "runSteps" che fa i passaggi in sequenza

      // Se il pulsante "RESET" è stato premuto...
      if (DatiInEntrata != 14) {
        memset(servo01SP, 0, sizeof(servo01SP));  // Svuota i dati dell'Array
        memset(servo02SP, 0, sizeof(servo02SP));
        memset(servo03SP, 0, sizeof(servo03SP));
        memset(servo04SP, 0, sizeof(servo04SP));
        memset(servo05SP, 0, sizeof(servo05SP));
        memset(servo06SP, 0, sizeof(servo06SP));
        IndiceArray = 0;  // Indice a 0
      }
    }
  }
}

// Funsione apposita (e separata) per far andare i passi in automatico
void runSteps() {
  while (DatiInEntrata != 13) {                    // Esegui i passaggi uno dopo l'altro finchè non si preme il tasto "RESET"
    for (int i = 0; i <= IndiceArray - 2; i++) {  // Ciclo for per far ripetere tante volte quante sono le posizioni salvate
      if (Bluetooth.available() > 0) {      // Controlla i dati in entrata
        DatiInEntrata = Bluetooth.read();
        if (DatiInEntrata == 15) {       // Se il pulsante "PAUSA" è premuto...
          while (DatiInEntrata != 14) {  // Aspetta finche il pulsante "AVVIA" non è premuto di nuovo
            if (Bluetooth.available() > 0) {
              DatiInEntrata = Bluetooth.read();
              if (DatiInEntrata == 13) {
                break;
              }
            }
          }
        }
        // Se la posizione del cursore "velocità" è cambiata...
        if (DatiInEntrata > 100 & DatiInEntrata < 150) {
          velocita = DatiInEntrata / 10;  // Canbia la velocità dei Servo (ritardo tra uno step e l'altro)
        }
      }

      // Movimentazione Servo 1
      if (servo01SP[i] == servo01SP[i + 1]) {
      }
      if (servo01SP[i] > servo01SP[i + 1]) {
        for (int j = servo01SP[i]; j >= servo01SP[i + 1]; j--) {
          servo01.write(j);
          delay(velocita);
        }
      }
      if (servo01SP[i] < servo01SP[i + 1]) {
        for (int j = servo01SP[i]; j <= servo01SP[i + 1]; j++) {
          servo01.write(j);
          delay(velocita);
        }
      }

      // Movimentazione Servo2
      if (servo02SP[i] == servo02SP[i + 1]) {
      }
      if (servo02SP[i] > servo02SP[i + 1]) {
        for (int j = servo02SP[i]; j >= servo02SP[i + 1]; j--) {
          servo02.write(j);
          delay(velocita);
        }
      }
      if (servo02SP[i] < servo02SP[i + 1]) {
        for (int j = servo02SP[i]; j <= servo02SP[i + 1]; j++) {
          servo02.write(j);
          delay(velocita);
        }
      }

      // Movimentazione Servo3
      if (servo03SP[i] == servo03SP[i + 1]) {
      }
      if (servo03SP[i] > servo03SP[i + 1]) {
        for (int j = servo03SP[i]; j >= servo03SP[i + 1]; j--) {
          servo03.write(j);
          delay(velocita);
        }
      }
      if (servo03SP[i] < servo03SP[i + 1]) {
        for (int j = servo03SP[i]; j <= servo03SP[i + 1]; j++) {
          servo03.write(j);
          delay(velocita);
        }
      }

      // Movimentazione Servo4
      if (servo04SP[i] == servo04SP[i + 1]) {
      }
      if (servo04SP[i] > servo04SP[i + 1]) {
        for (int j = servo04SP[i]; j >= servo04SP[i + 1]; j--) {
          servo04.write(j);
          delay(velocita);
        }
      }
      if (servo04SP[i] < servo04SP[i + 1]) {
        for (int j = servo04SP[i]; j <= servo04SP[i + 1]; j++) {
          servo04.write(j);
          delay(velocita);
        }
      }

      // Movimentazione Servo5
      if (servo05SP[i] == servo05SP[i + 1]) {
      }
      if (servo05SP[i] > servo05SP[i + 1]) {
        for (int j = servo05SP[i]; j >= servo05SP[i + 1]; j--) {
          servo05.write(j);
          delay(velocita);
        }
      }
      if (servo05SP[i] < servo05SP[i + 1]) {
        for (int j = servo05SP[i]; j <= servo05SP[i + 1]; j++) {
          servo05.write(j);
          delay(velocita);
        }
      }

      // Movimentazione Servo6
      if (servo06SP[i] == servo06SP[i + 1]) {
      }
      if (servo06SP[i] > servo06SP[i + 1]) {
        for (int j = servo06SP[i]; j >= servo06SP[i + 1]; j--) {
          servo06.write(j);
          delay(velocita);
        }
      }
      if (servo06SP[i] < servo06SP[i + 1]) {
        for (int j = servo06SP[i]; j <= servo06SP[i + 1]; j++) {
          servo06.write(j);
          delay(velocita);
        }
      }
    }
  }
}