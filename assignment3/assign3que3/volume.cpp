#include"./volume.h"
Volume::Volume()
{
}
Volume::Volume(double radius,double height):radius(10),height(10)
{ 
}
void Volume::getRadius()
{
 cout<<this->radius<<endl;
}
void Volume:: setRadius()
{
  cout<<"ENTER RADIUS=";
  cin>>this->radius;
}
void Volume::getHeight()
{
  cout<<this->height;
}
void Volume:: setHeight()
{
  double height;
  cout<<"ENTER HEIGHT=";
    cin>>this->height;
}
double Volume:: getVolume()
{
 volume=3.14*radius*radius*height;
 return volume;
}
void Volume:: printVolume()
{
  cout<<"volume="<<getVolume()<<endl;
}