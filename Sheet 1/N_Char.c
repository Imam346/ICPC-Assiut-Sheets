#include<stdio.h>
int main()
{
    char c; scanf("%c",&c);
    if(c>='A' && c<='Z')
        printf("%c",(char)(c+32));
    else printf("%c",(char)(c-32));
    return 0;
}