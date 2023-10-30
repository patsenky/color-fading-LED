//www.elegoo.com
//2016.12.8

// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, LOW);
}

// define variables
int redValue;
int greenValue;
int blueValue;

// main loop
void loop()
{
  // Define a delay time
  #define delayTime 30

  // Initialize color values
  int redValue = 255;
  int greenValue = 40;
  int blueValue = 0;

  // Increase green color to make orangeish yellow
  for(int i = 0; i < 40; i += 1) 
  {
    greenValue += 1;
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }

  // Reset color values
  redValue = 255;
  greenValue = 80;
  blueValue = 0;

  // Decrease green color, back to red
  for(int i = 0; i < 40; i += 1)
  {
    greenValue -= 1;
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }
}
