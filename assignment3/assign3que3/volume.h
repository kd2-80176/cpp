#ifndef VOLUME_H
#define VOLUME_H
#include <iostream>
using namespace std;
class Volume
{
  private:
  double radius;
  double height;
  double volume;
  public:
  Volume();
  void getRadius();
  Volume(double radius,double height);
  void setRadius();
  void getHeight();
  void setHeight();
  double getVolume();
  void printVolume();

};
#endif;
