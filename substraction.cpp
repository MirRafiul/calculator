#include<iostream>
using namespace std;

int sub(int i, int j)
{
    return i-j;
}

double sub(int i, int j)
{
    return i-j;
}

int main()
{
    int a,b;
    double c,d;
    cout << "if the substraction value is integer, press 1 otherwise 2" << endl;
    cin >> i;
    cout << "Enter the value is: " << endl;
    if(i==1)
    {
        cin >> a >> b;
        
        cout << substraction(a,b) << endl;
    }
    else
    {
    cin >> c >> d;
    cout << substraction(c,d);
    }
    
    return 0;
     
}
