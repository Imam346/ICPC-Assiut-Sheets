#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int ar[3]={a,b,c};
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(ar[i]>ar[j])
            {
                int tmp = ar[i];
                ar[i] = ar[j];
                ar[j]=tmp;
            }
        }
    }
    printf("%d\n%d\n%d\n\n",ar[0],ar[1],ar[2]);
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}