#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int num, fact=1;//fact = factorial

 cout << "Enter a Number : ";
 cin >> num;

  for (int i = 1; i <= num ; i++)
  {
    fact = fact * i;
  }

 cout << "Factorial of " << num <<" is " <<fact <<endl;
   return 0;

}
