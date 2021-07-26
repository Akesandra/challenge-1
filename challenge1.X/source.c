/*
 * File:   source.c
 * Author: SHUMBUSHO Simon & Sandrine CYIMANA
 *
 * Created on July 26, 2021, 11:57 PM
 */


#include <xc.h>
#define _XTAL_FREQ 60000000
void main(void) {
    char showno[10]={0X3F, //Hex value to display the number 0
                    0X06, //Hex value to display the number 1
                    0X5B, //Hex value to display the number 2
                    0X4F, //Hex value to display the number 3
                    0X66, //Hex value to display the number 4
                    0X6D, //Hex value to display the number 5
                    0X7C, //Hex value to display the number 6
                    0X07, //Hex value to display the number 7
                    0X7F, //Hex value to display the number 8
                    0X6F  //Hex value to display the number 9
                   };
    TRISD=0x00;
    while (1) {
        for (int i = 0; i < 10; i++) {
            PORTD=showno[i];
            __delay_ms(500);
        }

    }

    return;
}
