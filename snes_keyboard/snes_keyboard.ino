

#define KEYREPEAT 100  // milliseconds
#define KEYDELAY 200 // delay from first to second character

byte buttons[] = {  
                    0, // up 
                    3, // right
                    1, // down
                    2, // left
                    10, // select
                    9, // start
                    5, // b
                    8, // a
                    4, // y
                    7, // x
                    11, // lb
                    12 // rb 
                 }; 
unsigned keys[] = {KEY_UP, KEY_RIGHT, KEY_DOWN, KEY_LEFT, KEY_SPACE, KEY_ENTER, KEY_B, KEY_A, KEY_Y, KEY_X, KEY_L, KEY_R};
bool keysPressed = false; 
bool keysReleased = false;
  
#define NUMBUTTONS sizeof(buttons)

// function defs
void myset_key1( uint8_t c ); 
void myset_key2( uint8_t c );
void myset_key3( uint8_t c );
void myset_key4( uint8_t c );
void myset_key5( uint8_t c );
void myset_key6( uint8_t c );

typedef void KeyFunction_t(uint8_t c);

KeyFunction_t* buttonActive[NUMBUTTONS];
KeyFunction_t* keyList[] = {myset_key6, myset_key5, myset_key4, myset_key3, myset_key2, myset_key1};
int            keySlot = sizeof(keyList) / sizeof(KeyFunction_t*);

void setup()
{
 
  for (byte i=0; i< NUMBUTTONS; i++) {
    pinMode(buttons[i], INPUT_PULLUP);
  }

}


void loop()
{
  keysPressed = false; 
  keysReleased = false;
  for (byte i = 0; i < NUMBUTTONS; i++) {
    
    // are any of them pressed?
    if (! digitalRead(buttons[i])) 
    {                              //this button is pressed
      keysPressed = true;
      if (!buttonActive[i])        //was it pressed before?
        activateButton(i);            //no - activate the keypress
    }
    else
    {                              //this button is not pressed
      if (buttonActive[i]) {        //was it pressed before?
        releaseButton(i);            //yes - release the keypress
        keysReleased = true;
      }
    }
    
    if (keysPressed || keysReleased)
    Keyboard.send_now();            //update all the keypresses
  }
}

void activateButton(byte index)
{
  if (keySlot)      //any key slots left?
  {
    keySlot--;                                //Push the keySlot stack
    buttonActive[index] = keyList[keySlot];   //Associate the keySlot function pointer with the button
    (*keyList[keySlot])(keys[index]);         //Call the key slot function to set the key value 
  }
}

void releaseButton(byte index)
{
  keyList[keySlot] = buttonActive[index];    //retrieve the keySlot function pointer
  buttonActive[index] = 0;                   //mark the button as no longer pressed
  (*keyList[keySlot])(0);                    //release the key slot
  keySlot++;                                 //pop the keySlot stack
}

void myset_key1(uint8_t c)
{
  Keyboard.set_key1(c);
}

void myset_key2(uint8_t c)
{
  Keyboard.set_key2(c);
}

void myset_key3(uint8_t c)
{
  Keyboard.set_key3(c);
}

void myset_key4(uint8_t c)
{
  Keyboard.set_key4(c);
}

void myset_key5(uint8_t c)
{
  Keyboard.set_key5(c);
}

void myset_key6(uint8_t c)
{
  Keyboard.set_key6(c);
}

