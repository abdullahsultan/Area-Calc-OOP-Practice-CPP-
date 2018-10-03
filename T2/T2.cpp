#include <iostream>
using namespace std;

class addition
{

public:
  addition(int x,int y)
  {a=x;b=y;}
  int adder()
  {return a+b;}

private:
  int a,b;
};
int main() {
  addition adding(50,50);
  cout<<"Sum of Numbers = "<<adding.adder()<<'\n';
  return 0;
}
