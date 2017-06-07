#include<stdio.h>

int main()

{

    char c,n;

    printf("enter the character");

    scanf("%c",&c);

    if(c>='A' &&c<='Z' || c>='a'&&c<='z')

    printf("the entered character is alphabet");

    else

    printf("the entered character is not alphabet");

    return 0;

}