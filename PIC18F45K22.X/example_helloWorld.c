/* Do This First 
 * 1) Download Library picuno.c & picuno.h from https://github.com/kingdiaw/picuno.git
 * 2) Save both picuno.c & picuno.h in Folder PIC18F45K22.X
 * 3) Add picuno.h under Header Files
 * 4) Add picuno.c under Source Files
 * 5) Change to #include "picuno.h"
*/
#include "../../picuno/picuno.h" //<-- Modify Here

void setup(){
lcd_init_i2c(0x27,16,2);    //lcd_init_i2c(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows);
lcd_setCursor(0,0);
lcd_print("Hello World");
}
void loop(){
    
}
