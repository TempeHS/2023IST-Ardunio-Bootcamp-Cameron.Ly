void printToOLED (float theTemp, float thePressure) {
u8g2.clearBuffer();                   // clear the internal memory
u8g2.setFont(u8g2_font_ncenB08_tr);   // choose a suitable font
u8g2.setCursor (0,10);   // set cursor to first 
u8g2.print("Hello World");
u8g2.setCursor(0,20);
u8g2.print(theTemp);
u8g2.print("c");

  u8g2.sendBuffer();                    // transfer internal memory to the display
}

float myTemp() {
return bmp280.getTemperature();
}

float myPressure() {
return bmp280.getPressure();
}