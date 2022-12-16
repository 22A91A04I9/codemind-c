#include<stdio.h>
int main()
{
    char alp;
    scanf("%c",&alp);
    if(alp=='A' || alp=='E' || alp=='I' || alp=='O' || alp=='U' || alp=='a' || alp=='i' || alp=='e' || alp=='o' || alp=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}