/*
  Author: 
   Learning Intention: The students understand binary logic and apply it to a range of control structures.
    1. I understand Binary Logic is asking questions that only have a true and false outcome
    2. I can apply different comparison operators to get a desired outcome in a basic if else control structure 
    3. I understand 'if', 'if else', and 'if else if else'
    4. I understand the differenvce between a 'nested if', and using boolean operators
    5. I can read a simple logic flowchart
    6. I know how to find teh documentation for advanced control structures like 'for', 'do while', 'while', and 'switch case'

  Student Notes: 
  Comparison Operators
    - != (not equal to)
    - < (less than)
    - <= (less than or equal to)
    - == (equal to)
    - > (greater than)
    - >= (greater than or equal to)

    Boolean Operators
    - ! (logical not)
    - && (logical and)
    - || (logical or)


  Documentation: 
    https://www.arduino.cc/reference/en/#structure
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/08.binaryLogic/Readme.md
    
  Schematic: 
    
*/
unsigned int myLED = 13;

void setup() {
Serial.print(9600);
Serial.println ("Serial monitor is configured to 9600");
Serial.println("-------------------");
pinMode (myLED,OUTPUT);

}

void loop() {
int x = 0;
    while (x < 200) {
        // do statement(s) something repetitive 200 times
        x = x + 1;
    }
}
