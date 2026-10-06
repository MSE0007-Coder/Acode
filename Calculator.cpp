





#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  char op;
  double num1;
  double num2;

  cin>>op;

  switch(op) 
  {
    case '+':
      cout<<(num1+num2)<<endl;
    case '-':
      cout<<(num1-num2)<<endl;
    case '*':
      cout<<(num1*num2)<<endl;
    case '/':
      cout<<(num1/num2)<<endl;
  
  }


  return 0;
}