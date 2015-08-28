


int sensorpin=A0;   //setting the sensor pin
int outputpin=3;   //setting the output pin
int water;  //the variable to control
int loudness; 

void setup(){
  Serial.begin(9600);         //must begin to use serial monitor
  pinMode(sensorpin,INPUT);    //setting sensor pin to be input
  pinMode(outputpin,OUTPUT);   //setting output pin to be output
}

void loop(){
  water=analogRead(sensorpin);  //read the value from sensor pin
  Serial.println(water);  //show the value receive in serial monitor
  
  loudness=((1023-water)/1023)*255;    //the range of sensor value is from 0-1023
                                       //the range of Arduino output pin is from 0-255
                                       //by this formula, more water >> buzzer louder
  
  digitalWrite(outputpin,loudness);
}




