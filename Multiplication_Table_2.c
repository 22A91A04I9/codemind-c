#include<stdio.h>
int main()
{
    int a,n,i,s;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        s=a*i;
    printf("%d x %d = %d
",a,i,s);
    }
}