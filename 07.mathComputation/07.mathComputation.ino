/*
  Author:Cameron Ly

  Learning Intention:
  The students will learn basic math and arithmetic operations in C++

  Success Criteria:
    1.  I know the arithmetic operation symbols %, *, +, -, / & =
    2.  I can perform arithmetic calculations
    3.  I know how to access more information in the documentation about math and arithmetic
    4.  I can access the order of operations documentation and use parenthesis to control
        the order of operations
    5.  I understand short-hand incrementation and decrementation
    6.  I can seed and generate a random number
    7.  I can map an analogue value on a range of 0-1023 to a PWM value on a range of 0-255

  Student Notes:
  All data types must be the same, just convert to float, string, long, int.
    % (remainder)
    * (multiplication)
    + (addition)
    - (subtraction)
    / (division)
    = (assignment operator)

  Documentation:
    https://www.arduino.cc/reference/en/#structure
    https://en.cppreference.com/w/cpp/language/operator_precedence
    https://www.arduino.cc/reference/en/language/functions/random-numbers/random/
    https://www.arduino.cc/reference/en/language/functions/math/map/
  Schematic:
      https://www.tinkercad.com/things/ihcHlUXS9Y7?sharecode=bOdn0Sm9OuCJ6qI9GAwdyLsZDEUcecsmUharAUXXRIQ
      https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/08.mathComputation/Bootcamp-MAP-PotLED.png
*/
static unsigned myNumber1 = 3;
static unsigned myNumber2 = 5;
float myResult = 0;


void setup() {
Serial.begin(9600);
Serial.println("Serial monitor is configured to 9600");
Serial.println("--------------");
randomSeed (analogRead(0));
myResult = random(0,100);
Serial.println(myResult);




}

void loop() {


}