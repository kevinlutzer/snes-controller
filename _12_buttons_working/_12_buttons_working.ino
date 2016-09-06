//Version 3 July , 2015
//by Evan Nordquist
//Changes yyxabyrrrrrrrrin Version 3: risingEdge updated to fallingEdge  (it now registers pressing the button rather than releasing the button)
//Version 2 May 2, 2014
//by Evan N.
//Modified from a 2_button file written Nov 2,2014 by Julia C. and Evan N. 
//Using a Teensy++2.0  microcontroller to make a plug-and-play arcade controller.
//Hint: don't use pin 6 during this project. 


#include <Bounce.h>

const int buttonPinUP = 0;
Bounce pushbuttonUP = Bounce(buttonPinUP, 75);  // 75 ms debounce

const int buttonPinDOWN = 1;
Bounce pushbuttonDOWN = Bounce(buttonPinDOWN, 75);  // 75 ms debounce

const int buttonPinLEFT = 2;
Bounce pushbuttonLEFT = Bounce(buttonPinLEFT, 75);  // 75 ms debounce

const int buttonPinRIGHT = 3;
Bounce pushbuttonRIGHT = Bounce(buttonPinRIGHT, 75);  // 75 ms debounce

const int buttonPinY = 4;
Bounce pushbuttonY = Bounce(buttonPinY, 75);  // 75 ms debounce

const int buttonPinB = 5;
Bounce pushbuttonB = Bounce(buttonPinB, 75);  // 75 ms debounce

const int buttonPinX = 7;
Bounce pushbuttonX = Bounce(buttonPinX, 75);  // 75 ms debounce

const int buttonPinA = 8;
Bounce pushbuttonA = Bounce(buttonPinA, 75);  // 75 ms debouncee

const int buttonPinSTART = 9;
Bounce pushbuttonSTART = Bounce(buttonPinSTART, 75);  // 75 ms debounce

const int buttonPinSELECT = 10;
Bounce pushbuttonSELECT = Bounce(buttonPinSELECT, 75);  // 75 ms debounce

const int buttonPinL = 11;
Bounce pushbuttonL = Bounce(buttonPinL, 75);  // 75 ms debounce

const int buttonPinR = 12;
Bounce pushbuttonR = Bounce(buttonPinR, 75);  // 75 ms debounce

void setup() {
  pinMode(buttonPinUP, INPUT_PULLUP);
  pinMode(buttonPinDOWN, INPUT_PULLUP);
  pinMode(buttonPinLEFT, INPUT_PULLUP);
  pinMode(buttonPinRIGHT, INPUT_PULLUP);
  pinMode(buttonPinY, INPUT_PULLUP);
  pinMode(buttonPinB, INPUT_PULLUP);
  pinMode(buttonPinX, INPUT_PULLUP);
  pinMode(buttonPinA, INPUT_PULLUP);
  pinMode(buttonPinSTART, INPUT_PULLUP);
  pinMode(buttonPinSELECT, INPUT_PULLUP);
  pinMode(buttonPinL, INPUT_PULLUP);
  pinMode(buttonPinR, INPUT_PULLUP);
}

void loop() {
  if (pushbuttonUP.update()) // if the input has changed
  { 
    if (pushbuttonUP.fallingEdge()) // button was pressed (as opposed to released)
    {
      Keyboard.set_key1(KEY_UP);
      Keyboard.send_now();
      
      // release all the keys at the same instant
      Keyboard.set_key1(0);
      Keyboard.send_now();
    }
  } 
  
  
  
  if (pushbuttonDOWN.update()) // if the input has changed
  { 
    if (pushbuttonDOWN.fallingEdge()) // button was pressed
    {
      Keyboard.set_key1(KEY_DOWN);
      Keyboard.send_now();
      
      // release all the keys at the same instant
      Keyboard.set_key1(0);
      Keyboard.send_now();
    }
  }

  if (pushbuttonLEFT.update()) // if the input has changed
  { 
    if (pushbuttonLEFT.fallingEdge()) // button was pressed (as opposed to released)
    {
      Keyboard.set_key1(KEY_LEFT);
      Keyboard.send_now();
      
      // release all the keys at the same instant
      Keyboard.set_key1(0);
      Keyboard.send_now();
    }
  } 

  if (pushbuttonRIGHT.update()) // if the input has changed
  { 
    if (pushbuttonRIGHT.fallingEdge()) // button was pressed (as opposed to released)
    {
      Keyboard.set_key1(KEY_RIGHT);
      Keyboard.send_now();
      
      // release all the keys at the same instant
      Keyboard.set_key1(0);
      Keyboard.send_now();
    }
  }   
  
  
  
  if (pushbuttonY.update()) // if the input has changed
  { 
    if (pushbuttonY.fallingEdge()) // button was pressed
    {
      Keyboard.set_key1(KEY_Y);
      Keyboard.send_now();
      
      // release all the keys at the same instant
      Keyboard.set_key1(0);
      Keyboard.send_now();
    }
  }
  
  if (pushbuttonB.update()) // if the input has changed
  { 
    if (pushbuttonB.fallingEdge()) // button was pressed
    {
      Keyboard.set_key1(KEY_B);
      Keyboard.send_now();
      
      // release all the keys at the same instant
      Keyboard.set_key1(0);
      Keyboard.send_now();
    }
  }  
  
  if (pushbuttonX.update()) // if the input has changed
  { 
    if (pushbuttonX.fallingEdge()) // button was pressed
    {
      Keyboard.set_key1(KEY_X);
      Keyboard.send_now();
      
      // release all the keys at the same instant
      Keyboard.set_key1(0);
      Keyboard.send_now();
    }
  }  
  if (pushbuttonA.update()) // if the input has changed
  { 
    if (pushbuttonA.fallingEdge()) // button was pressed
    {
      Keyboard.set_key1(KEY_A);
      Keyboard.send_now();
      
      // release all the keys at the same instant
      Keyboard.set_key1(0);
      Keyboard.send_now();
    }
  }  
    
  if (pushbuttonSTART.update()) // if the input has changed
  { 
    if (pushbuttonSTART.fallingEdge()) // button was pressed
    {
      Keyboard.set_key1(KEY_ENTER);
      Keyboard.send_now();
      
      // release all the keys at the same instant
      Keyboard.set_key1(0);
      Keyboard.send_now();
    }
  }  
  
  if (pushbuttonSELECT.update()) // if the input has changed
  { 
    if (pushbuttonSELECT.fallingEdge()) // button was pressed
    {
      Keyboard.set_key1(KEY_SPACE);
      Keyboard.send_now();
      
      // release all the keys at the same instant
      Keyboard.set_key1(0);
      Keyboard.send_now();
    }
  }  
  
  if (pushbuttonL.update()) // if the input has changed
  { 
    if (pushbuttonL.fallingEdge()) // button was pressed
    {
      Keyboard.set_key1(KEY_L);
      Keyboard.send_now();
      
      // release all the keys at the same instant
      Keyboard.set_key1(0);
      Keyboard.send_now();
    }
  }  
  
  if (pushbuttonR.update()) // if the input has changed
  { 
    if (pushbuttonR.fallingEdge()) // button was pressed
    {
      Keyboard.set_key1(KEY_R);
      Keyboard.send_now();
      
      // release all the keys at the same instant
      Keyboard.set_key1(0);
      Keyboard.send_now();
    }
  }  
  

  
}
