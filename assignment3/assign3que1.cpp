/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.*/

#include<iostream>
using namespace std;
class Volume
{

public:
 double length;
 double width;
 double height;

void accept_parameter()
{
  cout<<"ENTER LENGTH"<<endl;
  cin>>this->length;
  cout<<"ENTER WIDTH"<<endl;
  cin>>this->width;
  cout<<"ENTER HEIGHT"<<endl;
  cin>>this->height;
}
double cal_volume()
{
  double volume=length*width*height;
  return volume;
}
float display_volume()
{
  double v=cal_volume();
  cout<<"VOLUME="<<v<<endl;
}
Volume()
{
    this->length=10;
    this->width=10;
    this->height=10;
}
Volume(float length,float width,float height)
{
    this->length=length;
    this->width=width;
    this->height=height;
}


};
int main()
{

    Volume v1;
     int choice;
    char ch;
    do{
   
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    cout<<"1.ACCEPT PARAMETER 2.DISPLAY VOLUME"<<endl;
    cout<<"ENTER CHOICE=";
    cin>>choice;
    switch(choice)
    {
        
        case 1:
            v1.accept_parameter();
            
        break;
        case 2:
            v1.display_volume();
        break;
        default:
        cout<<"INVALID CHOICE"<<endl;

    }
    cout<<"DO YOU WANT TO continue? THEN PRESS 'y'=";
    cin>>ch;

    } while(ch =='y');
  return 0;
}
