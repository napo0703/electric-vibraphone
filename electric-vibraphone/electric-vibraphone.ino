void setup(){
  Keyboard.begin();
}

void loop(){
  if(analogRead(A0) > 15){
    Keyboard.print("s");
    Serial.println(analogRead(A0));
  }
  else if(analogRead(A1) > 30){
    Keyboard.print("d");
    Serial.println(analogRead(A1));
  }
  else if(analogRead(A2) > 50){
    Keyboard.print("f");
    Serial.println(analogRead(A2));
  }
  else if(analogRead(A3) > 50){
    Keyboard.print("g");
    Serial.println(analogRead(A3));
  }
  else if(analogRead(A4) > 30){
    Keyboard.print("h");
    Serial.println(analogRead(A4));
  }
  else if(analogRead(A5) > 30){
    Keyboard.print("j");
    Serial.println(analogRead(A5));
  }
  else if(analogRead(8) > 30){
    Keyboard.print("k");
    Serial.println(analogRead(8));
  }
  else if(analogRead(9) > 30){
    Keyboard.print("l");
    Serial.println(analogRead(9));
  }
}

