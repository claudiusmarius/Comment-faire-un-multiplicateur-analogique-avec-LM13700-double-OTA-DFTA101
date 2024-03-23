  //RampeSeeeduino00
  //https://youtu.be/GksWC8m5Iwo
  //https://www.youtube.com/c/ClaudeDufourmont
  //Signal TRIANGLE simple sur sortie DAC pour modulation en amplitude signal 20KHz
  //========================================================================================================
  //                                            CLAUDE DUFOURMONT                                         //
  //========================================================================================================
  void setup() 
  {
  pinMode(A0, OUTPUT);
  analogWriteResolution(12);
  }

  void loop() 
  {
  genererTriangle();
  }

  void genererTriangle() 
  {
  for (int i = 0; i < 180; i++)
  {
  analogWrite(A0, i);
  //delay(1);
  }

  for (int i = 180; i > 0; i--)
  {
  analogWrite(A0, i);
  //delay(1);
  }
  }
