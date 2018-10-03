#include <iostream>
using namespace std;

class area
{

public:
  area(float l,float w)
  {
    length=l;width=w;
  }
  float area_rectangle()
  {return length*width;}
private:
 float length,width;

};

int main()
{
  area area_calculator(20,20);
  cout<<"Area of Ractangle = "<<area_calculator.area_rectangle()<<'\n';
  return 0;
}
