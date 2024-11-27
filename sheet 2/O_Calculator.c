#include<stdio.h>
int main()
{
    int a,b;
    char s;
    scanf("%d%c%d",&a,&s,&b);

    int result;
    if(s=='+')
        {
            result=a+b;
        }
    else if(s=='-')
        {
            result=a-b;
        }
    else if(s=='*')
        {
            result=a*b;
        }
    else if(s=='/')
        {
            if(b != 0)
            {
                result=a/b;
            }
        }

    printf("%d",result);
    return 0;
}