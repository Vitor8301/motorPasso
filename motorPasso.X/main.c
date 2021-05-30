/*
 * File:   main.c
 * Author: 20185151
 *
 * Created on 21 de Maio de 2021, 16:03
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "motordePassoKLV.h"

void main(void) 
{
    motordePasso_klv_init ( 8 );
    delay(3000);
    
    while( 1 )
    {
        motordePassoKLV( MP, H, 90, 1000 );
        delay(3000);
        motordePassoKLV( MP, H, 90, 1000 );
        delay(3000);
        motordePassoKLV( P, H, 90, 1000 );
        delay(3000);
        motordePassoKLV( P, H, 90, 1000 );
        delay(3000);
    }
}
