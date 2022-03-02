/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, temp, rem, res = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        res = res * 10 + rem;
        temp /= 10;
    }

    printf("Reversed num : %d", res);

    return 0;
}
