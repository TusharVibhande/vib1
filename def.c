#include<stdio.h>
#include<conio.h>

int sum(int a, int b);

int  main(){
    int c;
   c = sum(2,5);
   printf("the value of c is %d\n",c);
    return 0;
}

int sum(int a, int b){

    int c;
    c=a+b;
    return c;
}