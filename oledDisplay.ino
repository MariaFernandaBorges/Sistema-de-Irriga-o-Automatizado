/***************************************************
 * Start OLED
 **************************************************/
void oledStart(void)
{
  Wire.begin();  
  oled.init();                      // Initialze SSD1306 OLED display
  clearOledDisplay();
  //oled.setFont(font5x7);            // Set font type (default 8x8)
  oled.clearDisplay();              // Clear screen
  
  oled.setTextXY(0,0); oled.putString("Jardim Automatico ");
  oled.setTextXY(1,0); oled.putString(String(SW_VERSION));  
  
  oled.setTextXY(2,0); oled.putString("AUTO_CTRL_TM");
  oled.setTextXY(2,13); oled.putString(String(AUTO_CTRL_TM));
  oled.setTextXY(3,0); oled.putString("SOLO_SECO");
  oled.setTextXY(3,13); oled.putString(String(DRY_SOIL));
  oled.setTextXY(4,0); oled.putString("TEMP_FRIA");
  oled.setTextXY(4,13); oled.putString(String(COLD_TEMP));
  oled.setTextXY(5,0); oled.putString("TEMP_BOMBA_ON");
  oled.setTextXY(5,13); oled.putString(String(TIME_PUMP_ON));
  oled.setTextXY(6,0); oled.putString("TEMP_LAMP_ON");
  oled.setTextXY(6,13); oled.putString(String(TIME_LAMP_ON));
}

/***************************************************
 * Display data at Serial Monitora & OLED Display
 **************************************************/
void displayData(void)
{ 
  String pumpStatusStr;
  String lampStatusStr;
  if (pumpStatus == 1) pumpStatusStr = "on ";
  if (pumpStatus == 0) pumpStatusStr = "off";
  if (lampStatus == 1) lampStatusStr = "on ";
  if (lampStatus == 0) lampStatusStr = "off";
  
  oled.setTextXY(2,0); oled.putString("                ");
  
  oled.setTextXY(3,0); oled.putString("SoloTmp [C] ");
  oled.setTextXY(3,11); oled.putString("     ");
  oled.setTextXY(3,11); oled.putString(String(soilTemp));

  oled.setTextXY(4,0); oled.putString("SoloUm [%] ");
  oled.setTextXY(4,11); oled.putString("     ");
  oled.setTextXY(4,11); oled.putString(String(soilMoister));

  oled.setTextXY(5,0); oled.putString("BOMB ");
  oled.setTextXY(5,4); oled.putString(pumpStatusStr);

  oled.setTextXY(6,7); oled.putString("  LMP ");
  oled.setTextXY(6,13); oled.putString(lampStatusStr);
}

/***************************************************
 * Clear OLED Display
 **************************************************/
void clearOledDisplay()
{
  oled.setFont(font8x8);
  oled.setTextXY(0,0); oled.putString("                ");
  oled.setTextXY(1,0); oled.putString("                ");
  oled.setTextXY(2,0); oled.putString("                ");
  oled.setTextXY(3,0); oled.putString("                ");
  oled.setTextXY(4,0); oled.putString("                ");
  oled.setTextXY(5,0); oled.putString("                ");
  oled.setTextXY(6,0); oled.putString("                ");
  oled.setTextXY(7,0); oled.putString("                ");
  oled.setTextXY(0,0); oled.putString("                ");              
}
