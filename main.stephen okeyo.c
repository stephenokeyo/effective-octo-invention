/*
  PROJECT:  Simple calculator
  AUTHOR:   Stephen Okeyo
  DATE:     OCT,2021
  COMPILER: GCC
  LANGUAGE: C99
  LICENSE:  MIT

*/

#include <stdio.h>
#include <stdio.h>


int main()
{
    //variable declaration
    int num1,num2,sum,product,diff,mod;
    float quot;

    //assignment operator
    num1 =200;
    num2 =30;

    //Computations
    sum= num1 + num2;
    product = num1 * num2;
    diff =num1 - num2;
    mod = num1 % num2;
    quot = num1 / num2;

    //output
    printf("\tsimple Calculator\n");
    printf("%d + %d = %d\n",num1,num2,sum);
    printf("%d - %d = %d\n",num1,num2,diff);
    printf("%d * %d = %d\n",num1,num2,product);
    printf("%d / %d = %f\n",num1,num2,quot);
    printf("%d mod %d = %d\n",num1,num2,mod);
    return 0;
}
