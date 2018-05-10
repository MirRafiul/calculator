#include<iostream>
#include "div.h"
#include "mul.h"
#include "mod.h"

using namespace std;

int main()
{
      int a, b;
      a = -20;
      b = 10;
      cout << a << " / " << b << " = " << div(a,b) << endl;
      cout << a << " * " << b << " = " <<mul_function(a,b) << endl;
      cout << "|" <<a << "| = " << mod1(a) << ", " << "|" <<a << "| = " << mod1(b) << endl;
      return 0;
}
