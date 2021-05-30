#ifndef MOTORDEPASSOKLV_H
#define MOTORDEPASSOKLV_H

#define H      1
#define AH     -1
#define MP        1
#define P        0

void motordePasso_klv_init (int PulsosPorRevolucao );
void motordePassoKLV (char passo, char sentido, long graus, int t );

#endif

