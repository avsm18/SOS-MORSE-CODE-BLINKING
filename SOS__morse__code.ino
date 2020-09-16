// sos morse code blinking 
void setup() {
  
pinMode(8 , OUTPUT);

}

void loop() {

// so we have to produce three flashes followed by three long flashes . Now a flash means LED on for some time and then off for some time.This change between "ON" and "OFF" states is what is called as a flash so we want three such small flashes meaning flash duration should be small and then three such long flashes
flash(500); flash(500); flash(500); 
delay(700);
flash(1000); flash(1000) ; flash(1000);
flash(500); flash(500); flash(500); 
delay(1000);













 
}
void flash(int duration) {

// so this is flash() function 
digitalWrite(8 ,HIGH);
delay(duration); // decide the time you want 
digitalWrite(8 , LOW);
delay(duration);










  
}
