#include<stdio.h>
#include<stdlib.h>

main(){

    float r,pi,A,P;
    scanf("%f",&r);
    pi=3,14;
    A=pi*r*r;
    printf("AREA=  %f /n",A);
    P=2*pi*r;
    printf("Perimetro = %f", P);
    system("pause");
}