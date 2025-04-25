/*===================================================================================
|                                      ARDUINO                                       |
=====================================================================================*/
/*-----------------------------------------------------------------------------------|
| DESCRIPTION: Simon Game                                                            |
| AUTHOR: Ayush Kumar Verma                                                          |
| COMMENTS:                                                                          |
| HISTORY: Version v1.0                                                              |
|------------------------------------------------------------------------------------|
|                                                                                    |
|------------------------------------------------------------------------------------|
| INCLUDES                                                                           |
|------------------------------------------------------------------------------------|
*/

/*
|------------------------------------------------------------------------------------|
| DEFINES, MACROS & CONSTANTS                                                                  |
|------------------------------------------------------------------------------------|
*/
// push button input pins
const uint8_t BLUE_BTN_PIN   = 7;
const uint8_t GREEN_BTN_PIN  = 6;
const uint8_t RED_BTN_PIN    = 5;
const uint8_t YELLOW_BTN_PIN = 4;

// LED pins
const uint8_t BLUE_LED_PIN   = 13; 
const uint8_t GREEN_LED_PIN  = 12; 
const uint8_t RED_LED_PIN    = 11; 
const uint8_t YELLOW_LED_PIN = 10;

// Buzzer pin
const uint8_t BUZZER_PIN = 3;

// Tones for colors
const uint16_t BLUE_TONE   = 209;
const uint16_t GREEN_TONE  = 415;
const uint16_t RED_TONE    = 310;
const uint16_t YELLOW_TONE = 252;

/*
|------------------------------------------------------------------------------------|
| GLOBALS                                                                            |
|------------------------------------------------------------------------------------|
*/

/*
|------------------------------------------------------------------------------------|
| FUNCTIONS                                                                          |
|------------------------------------------------------------------------------------|
*/

void setup() {
  // Initialize OUTPUT Pins
  pinMode(BLUE_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);

  // Initialize INPUT Pins 
  pinMode(BLUE_BTN_PIN, INPUT);
  pinMode(GREEN_BTN_PIN, INPUT);
  pinMode(RED_BTN_PIN, INPUT);
  pinMode(YELLOW_BTN_PIN, INPUT);

  // Initialize Buzzer Pin
  pinMode(BUZZER_PIN, OUTPUT);

  // Initialize Serial Port
  Serial.begin(115200);
}

/*
|------------------------------------------------------------------------------------|
*/
void loop() {
  if (!digitalRead(BLUE_BTN_PIN))
  {
    digitalWrite(BLUE_LED_PIN, HIGH);
    // play tone, use frequecy from classic simon 
    tone(BUZZER_PIN, BLUE_TONE, 500);
    Serial.write("\n\r BLUE BUTTON Pressed");
  }
  else
  {
    digitalWrite(BLUE_LED_PIN, LOW);
  } /* digitalRead(BLUE_BTN_PIN) */

  if (!digitalRead(GREEN_BTN_PIN))
  {
    digitalWrite(GREEN_LED_PIN, HIGH);
    // play tone, use frequecy from classic simon 
    tone(BUZZER_PIN, GREEN_TONE, 500);
    Serial.write("\n\r GREEN BUTTON Pressed");
  }
  else
  {
    digitalWrite(GREEN_LED_PIN, LOW);
  } /* digitalRead(GREEN_BTN_PIN) */

  if (!digitalRead(RED_BTN_PIN))
  {
    digitalWrite(RED_LED_PIN, HIGH);
    // play tone, use frequecy from classic simon 
    tone(BUZZER_PIN, RED_TONE, 500);
    Serial.write("\n\r RED BUTTON Pressed");
  }
  else
  {
    digitalWrite(RED_LED_PIN, LOW);
  } /* digitalRead(RED_BTN_PIN) */

  if (!digitalRead(YELLOW_BTN_PIN))
  {
    digitalWrite(YELLOW_LED_PIN, HIGH);
    // play tone, use frequecy from classic simon 
    tone(BUZZER_PIN, YELLOW_TONE, 500);
    Serial.write("\n\r YELLOW BUTTON Pressed");
  }
  else
  {
    digitalWrite(YELLOW_LED_PIN, LOW);
  } /* digitalRead(YELLOW_BTN_PIN) */

}

/*
|------------------------------------------------------------------------------------|
*/

/*===================================================================================
|                                         END                                        |
=====================================================================================*/