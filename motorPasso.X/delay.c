/*
 * File:   delay.c
 * Author: sn1011701
 *
 * Created on 17 de Fevereiro de 2021, 15:39
 */


#include <xc.h>
#include "delay.h"

void delay( unsigned int t )
{
    while( t )
    {
        __delay_ms(1);
        --t;
    }
}
