#include<stdio.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        s=n*i;
        printf("%d x %d = %d
",n,i,s);
    }
}