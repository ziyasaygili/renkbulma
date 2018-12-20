int data;  
void setup() {  
    Serial.begin(9600);  
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);  
}  
void loop() {  
    if (Serial.available()) {  
        data = Serial.read();  
        if (data == 'A') {  
            digitalWrite(2, HIGH);  
        } else {  
            digitalWrite(2, LOW);  
        }

       // delay(20);

        if (data == 'C') {  
            digitalWrite(3, HIGH);  
        } else {  
            digitalWrite(3, LOW);  
        }

       // delay(20);

        if (data == 'E') {  
            digitalWrite(4, HIGH);  
        } else {  
            digitalWrite(4, LOW);  
        }
        //delay (50);

        if (data == 'G') {  
            digitalWrite(5, HIGH);  
        } else {  
            digitalWrite(5, LOW);  
        }


        if (data == 'I') {  
            digitalWrite(6, HIGH);  
        } else {  
            digitalWrite(6, LOW);  
        }


        if (data == 'K') {  
            digitalWrite(7, HIGH);  
        } else {  
            digitalWrite(7, LOW);  
        }


        if (data == 'M') {  
            digitalWrite(8, HIGH);  
        } else {  
            digitalWrite(8, LOW);  
        }

        if (data == 'O') {  
            digitalWrite(9, HIGH);  
        } else {  
            digitalWrite(9, LOW);  
        }

        if (data == 'R') {  
            digitalWrite(10, HIGH);  
        } else {  
            digitalWrite(10, LOW);  
        }
              
    } 
    //delay(150);
    //return; 
} 
