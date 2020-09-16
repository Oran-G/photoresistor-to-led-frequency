int led_pin = 9;
int button = 10;
int led_delay;
int lower = 550;
int higher = 900;
void setup() {
  pinMode(button, INPUT);
  pinMode(led_pin, OUTPUT);

}

void loop() {
  //read the Photoresistor and adjust to turn into a delay
  led_delay = analogRead(A0);
  if (led_delay < lower)
  {
    led_delay = lower;
  }
  if (led_delay > higher) 
  {
    led_delay = higher;
  }
  led_delay = map(led_delay, lower, higher, 50, 700);
  //for loop so I can read the button, and also adjust the delay, every millisecond
  //turn the led off for the delay time  
  for(int i = 0; i < led_delay; i++)
  {
    //read the Photoresistor and adjust to turn into a delay
    led_delay = analogRead(A0);
    if (led_delay < lower)
      {
        led_delay = lower;
      }
      if (led_delay > higher) 
      {
        led_delay = higher;
      }
      led_delay = map(led_delay, lower, higher, 50, 700);
    if (digitalRead(button) == LOW)
    {
      
      digitalWrite(led_pin, HIGH);
      delay(1);
    }    
    else
    {
      //led is high, because button is on
      digitalWrite(led_pin, HIGH);
      delay(1);
    }
  } 
  //read the Photoresistor and adjust to turn into a delay
  led_delay = analogRead(A0);
  if (led_delay < lower)
  {
    led_delay = lower;
  }
  if (led_delay > higher) 
  {
    led_delay = higher;
  }
  led_delay = map(led_delay, lower, higher, 50, 700);
  //for loop so I can read the button, and also adjust the delay, every millisecond
  //turn the led off for the delay time
  for(int i = 0; i < led_delay; i++)
  {
    
    //read the Photoresistor and adjust to turn into a delay

    led_delay = analogRead(A0);
    if (led_delay < lower)
    {
      led_delay = lower;
    }
    if (led_delay > higher) 
    {
      led_delay = higher;
    }
    led_delay = map(led_delay, lower, higher, 50, 700);
    if (digitalRead(button) == LOW)
    {
      
      digitalWrite(led_pin, LOW);
      delay(1);
    }    
    else
    {
      //led is high, because button is on
      digitalWrite(led_pin, HIGH);
      delay(1);
    }
  } 
     
}
