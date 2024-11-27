#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row1,col1;
    cin>>row1>>col1;
    int mat1[row1][col1];
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin>>mat1[i][j];
        }
    }
    int row2,col2;
    cin>>row2>>col2;
    int mat2[row2][col2];
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cin>>mat2[i][j];
        }
    }
    //multiplying matrix
    int res[row1][col2];
    int sum =0;
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            for(int k=0;k<col1;k++)
            {
                sum += mat1[i][k]*mat2[k][j];
            }
            res[i][j] = sum;
            sum = 0;//reset sum
        }
    }
    //print
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}