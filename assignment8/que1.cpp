/*Q1. Write a class Distance to hold feet and inches. Overload operator + as member function and ==
operator as friend function. Also, overload ++ operator (to increment inches) as member function
and -- operator as friend function. Overload << and >> operators to accept and display distance.*/
#include<iostream>
using namespace std;
class Distance
{
private:
float feet;
float inch;
public:
Distance()
{
  float foot=0;
  float inch=0;
}
Distance(float feet,float inch)
{
  this->feet=feet;
  this->inch=inch;
}
void accept()
{
  cout<<"enter the value of foot=";
  cin>>feet;
  cout<<"enter the value of inch=";
  cin>>inch;  
}
void display()
{
   cout<<"feet ="<<feet<<endl;
   cout<<"inch="<<inch<<endl;
}
Distance operator+(Distance d2)
{
    Distance d3;
    d3.feet=this->feet+d2.feet;
    d3.inch=this->inch+d2.inch;
    return d3;
}
friend bool operator==(Distance d1, Distance d2);
};
bool operator==(Distance d1, Distance d2)
{
    if(
    d1.feet==d2.feet,
    d1.inch==d2.inch
   )
     return true;
    else
    return false;

}

int main()
{
    //add oprator overload as member fuction
    Distance d1(10,20);
    Distance d2(10,20);
    Distance d3= d1+d2;
    cout<<"add operator overloade"<<endl;
    d3.display();
    
    //== operator overloaded
   cout<<"== operator ovrloaded"<<endl;
    if((d1==d2)==true)
    cout<<"both object have same value";
    else
    cout<<"both object have different values";

  return 0;
}