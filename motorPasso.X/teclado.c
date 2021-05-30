/*
 * File:   teclado.c
 * Author: 20185151
 *
 * Created on 7 de Maio de 2021, 14:40
 */


#include <xc.h>
#include "config.h"

void teclado_init ( void )
{
    ANSELH  = 0;
    TRISB = 0xF0;
    PORTB = 0;
}

char tabTeclado [4][4] = 
    {   {'1','2','3','A'},
        {'4','5','6','B'},
        {'7','8','9','C'},
        {'*','0','#','D'} };

#define MASK  0X10

char teclado ( void )
{
    char tecla = 0;
    char c, l;
    
    for (l=0; l<4; l++)
    {
        PORTB = 0x01<<l;
        for( c=0; c<4; c++ )
        {
            if ( PORTB & MASK<<c )
                tecla = tabTeclado [l][c];
        }
    } 
    return( tecla );   
}


