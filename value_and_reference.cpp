//C++
#include <iostream>

using namespace std;

int x = 1;
int y = 2;

int
adder (int a, int b)
{
  return a + b;
}

int
adderWithMods (int a, int b)
{
  a = a + 1;
  b = b + 2;
  return a + b;
}

int adderUsingPointersWithMod(int* a, int *b)
{
  *a = *a + 1;
  *b = *b + 2;
  return *a + *b;
}


int adderUsingReferenceWithMod(int& a, int& b) //reference aka alias
{
  a = a + 1;
  b = b + 2;
  return a + b;
}

int
main ()
{
    cout << adderWithMods (x, y) << endl;
    cout << x << "," << y << endl;
    cout << "--------------" << endl;
    cout << adderUsingPointersWithMod(&x,&y) << endl;
    cout << x << "," << y << endl;
    cout << "--------------" << endl;
    cout << adderUsingReferenceWithMod(x,y) << endl;
    cout << x << "," << y << endl;
  return 0;
}