#include "../../picuno/picuno.h"

void setup(){
lcd_init_i2c(0x27,16,2);    //lcd_init_i2c(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows);
lcd_setCursor(0,0);
lcd_print("Hello World");
}
void loop(){
    
}
