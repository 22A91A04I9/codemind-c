#include<stdio.h>
int main()
{ 
    float a,b,c,pf,gross; 
    scanf("%f%f%f",&a,&b,&c);
    pf=(12*a)/100;
    gross=pf+a+b+c; 
    printf("%.2f
",pf); 
    printf("%.2f",gross);
    
}