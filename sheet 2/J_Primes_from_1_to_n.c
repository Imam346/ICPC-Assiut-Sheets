#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int count=0;
        for(int j=2;j<i;j++)
        {
          if(i%j==0)
          {
            count++;
          }
        }
        if(count==0 && i != 1)
          {
            //space control
            if(i != n)
            {
              printf(" %d",i);
            }
            else
            {
              printf("%d",i);
            }

          }
    }
    return 0;
}