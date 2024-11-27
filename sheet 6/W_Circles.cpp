#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    double midX1 = (x1+x2)/2;
    double midY1 = (y1+y2)/2;
    double midX2 = (x3+x4)/2;
    double midY2 = (y3+y4)/2;
    //A(x1,y1) and B(x2,y2) hole circle duitir mid distance = root^vuj doyer biyog foler borgo + coti doyer biyog foler borgo.
    double redius1 = sqrt(pow(x1-x2,2) + pow(y1-y2,2))/2;
    double redius2 = sqrt(pow(x3-x4,2) + pow(y3-y4,2))/2;
    double SOR = redius1+redius2;//sum of redius
    double line = sqrt(pow(midX1-midX2,2) + pow(midY1-midY2,2));

    if(line>SOR)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}