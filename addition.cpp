
#include<iostream>
using namespace std;

int addition(int i, int j)
{
    return i+j;
}

double addition(double i, double j)
{
    return i+j;
}

int main()
{
    int a,b,i;
    double c,d;
    cout << "if the addition value is integer, press 1 then otherwise press button" << endl;
    cin >> i;
    cout << "Enter the value is: " << endl;
    if(i==1)
    {
        cin >> a >> b;

        cout << addition(a,b) << endl;
    }
    else
    {
    cin >> c >> d;
    cout << addition(c,d);
    }

    return 0;

}
