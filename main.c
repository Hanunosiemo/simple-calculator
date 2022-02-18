/*
  SIMPLE CALCULATOR
  BY  OSIEMO HANUN
  C89 COMPILER
  MIT LICENSE
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{


    // variables declaration
    char name [100];
    int n1,n2,sum,product,diff;
    float quot;
    printf("simple calculator\n");

    //imput
    printf("enter your name:");
    gets(name);
    printf("enter two integers:");
    scanf("%d%d,&n1,&n2");

    //computataion
    sum = n1 + n2;
    diff = n1 - n2;
    product = n1 * n2;
    quot=(float) n1/n2;

    //output
    printf("Hey %s,here are the result:\n",name);
    printf("%d+%d=%d,1n,2n,sum");
    printf("%d-%d=%d,n1,n2,diff");
    printf("%d*%d=%d,n1,n2,product");
    printf("%d/%d=%d,n1,n2,quot");
    return 0;
}
