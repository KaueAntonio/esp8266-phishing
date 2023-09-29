const int ledPin =  2;

unsigned long previousMillis = 0;

void ledmsgvoid(){

  unsigned long currentMillis = millis();

  if (str(ssid) == str(ssidAttack)){

    if (currentMillis - previousMillis >= 400) {

      previousMillis = currentMillis;
      
      if (ledState == 1) {
        digitalWrite(ledPin, 0);
        ledState = 0;
      } else {
        digitalWrite(ledPin, 1);
        ledState = 1;
      }

    }
  }else{
    if (stationConnected){
      digitalWrite(ledPin, 0);
    }else{
      digitalWrite(ledPin, 1);
    }
  }

}
