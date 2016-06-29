int ir[4] = {9,10,11,12};
void setup()
{
  for(int i = 0; i<4; i++)
  {
    pinMode(ir[i], INPUT);
  }
  Serial.begin(9600);
}


void loop()
{
  
  for(int j = 0; j<4; j++)
  {
    Serial.print(digitalRead(ir[j]));
    Serial.print(" ");
  }
  Serial.println(" ");
  delay(300);
}
