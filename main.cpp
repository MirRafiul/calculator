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
      cout << div(a,b) << endl;
      cout << mul_function(a,b) << endl;
      cout << mod1(a) << " " << mod1(b) << endl;
      return 0;
}
