#include<stdio.h>
int main()
{
    int a,b,i,r,s=0;
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        s=s*10+r;
    }
    printf("%d",s);
}