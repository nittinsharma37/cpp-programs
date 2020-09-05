//program by Nittin sharma
//github: https://github.com/nittinsharma37
//instagram : @nittineditz

#include<iostream>
using namespace std;

int x = 20;  // Global x

int main()
{
  int x = 10; // Local x
  cout << "Value of global x is " << ::x;
  cout << "\nValue of local x is " << x;
  return 0;
}
