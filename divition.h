
#include<iostream>
using namespace std;

double div(int c,int f)
{

    if(f==0)
        return 0;

    double d=c/f;

    return d;

}
int main()
{
    int a,b;
    cin>>a>>b;
    double divison= div(a,b);
    cout<<divison<<endl;


}


