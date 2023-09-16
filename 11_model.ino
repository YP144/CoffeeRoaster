void bacaSensorSuhuET(){
    // basic readout test, just print the current temp
    digitalWrite(HSPI_CS1,LOW);
    CET = thermocoupleET.readCelsius();
    digitalWrite(HSPI_CS1,HIGH);
}
void bacaSensorSuhuBT(){
    // basic readout test, just print the current temp
    digitalWrite(HSPI_CS2,LOW);
    CBT = thermocoupleBT.readCelsius();
    digitalWrite(HSPI_CS2,HIGH);
}
void bacaSensorSuhuHeater(){
    // basic readout test, just print the current temp
    digitalWrite(HSPI_CS1,LOW);
    suhuHeater = thermocoupleHeater.readCelsius();
    digitalWrite(HSPI_CS1,HIGH);
}
void bacaSensorArus(){
  IrmsHeater = ((emonHeater.calcIrms(1480))*(2.2349))-0.9552;
  IrmsFan = emonFan.calcIrms(1480);
}
