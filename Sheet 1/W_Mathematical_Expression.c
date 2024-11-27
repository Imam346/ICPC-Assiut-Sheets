#include<stdio.h>
int main()
{
    char s,e;
    int a,b,c;
    scanf("%d %c %d %c %d",&a,&s,&b,&e,&c);
    
    if(s=='+')
    {
        if(a+b==c) printf("Yes\n");
        else printf("%d\n",a+b);
    }
    else if(s=='-')
    {
        if(a-b==c) printf("Yes\n");
        else printf("%d\n",a-b);
    }
    else
    {
        if(a*b==c) printf("Yes\n");
        else printf("%d\n",a*b);
    }
    return 0;
}