/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float i, j;

    printf("x\t");
    for (i = 0.1; i <= 1.0; i += 0.1)
    {
        printf("%.1f\t", i);
    }
    printf("\n");

    for (i = 0; i <= 9; i++)
    {
        printf("%.1f\t", i);
        for (j = 0.1; j <= 1.0; j += 0.1)
        {
            printf("%.4f\t", exp(-i - j));
        }
        printf("\n");
    }

    return 0;
}
