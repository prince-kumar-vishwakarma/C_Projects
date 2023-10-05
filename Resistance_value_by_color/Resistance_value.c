#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int res, realRes;
int color12(char *color12);

int main()
{
    // system("cls");
    int n, ret, mul, tol;
    printf("Enter No. of colour in Resistance : ");
    scanf("%d", &n);
    char clr1[10], clr2[10], clr3[10], clr4[10], clr5[10];

    printf("Enter 1st Colour : ");
    scanf("%s", clr1);
    ret = color12(clr1);
    realRes = ret * 10;
    fflush(stdin);

    printf("Enter 2nd Colour : ");
    scanf("%s", clr2);
    ret = color12(clr2);
    realRes = (ret + realRes);
    fflush(stdin);

    printf("Enter 3rd Colour : ");
    scanf("%s", clr3);
    mul = color12(clr3);
    fflush(stdin);
    if (n == 5)
    {
        ret = color12(clr3);
        realRes = (10 * realRes) + ret;
    }

    printf("Enter 4th Colour : ");
    scanf("%s", clr4);
    tol = color12(clr4);
    fflush(stdin);

    if (n == 4)
    {
        printf("\n\t%d x 10^%d ohm \n\tTolerance = +/-%d\n", realRes, mul, tol);
    }

    if (n == 5)
    {
        mul = color12(clr4);
        printf("Enter 5th Colour : ");
        scanf("%s", clr5);
        tol = color12(clr5);
        printf("\n\t%d x 10^%d ohm \n\tTolerance = +/-%d\n\n", realRes, mul, tol);
    }
}

int color12(char *color12)
{

    strlwr(color12);

    if (strcmp(color12, "black") == 0)
    {
        res = 0;
    }
    if (strcmp(color12, "brown") == 0)
    {
        res = 1;
    }
    if (strcmp(color12, "red") == 0)
    {
        res = 2;
    }
    if (strcmp(color12, "orange") == 0)
    {
        res = 3;
    }
    if (strcmp(color12, "yellow") == 0)
    {
        res = 4;
    }
    if (strcmp(color12, "green") == 0)
    {
        res = 5;
    }
    if (strcmp(color12, "blue") == 0)
    {
        res = 6;
    }
    if (strcmp(color12, "violet") == 0)
    {
        res = 7;
    }
    if (strcmp(color12, "grey") == 0)
    {
        res = 8;
    }
    if (strcmp(color12, "white") == 0)
    {
        res = 9;
    }
    if (strcmp(color12, "gold") == 0)
    {
        res = 5;
    }
    if (strcmp(color12, "silver") == 0)
    {
        res = 10;
    }
    if (strcmp(color12, "none") == 0)
    {
        res = 20;
    }
    return res;
}
