#include "./volume.h"
#include "./menu.h"
int main()
{
  Volume v1;
  Vmenu choice;
  

  while((choice=menu())!=EXIT){
  switch (choice)
  {
     case SET:
      
      v1.setRadius();
      v1.setHeight();
      break;
  case GET:
     
      v1.printVolume();
    break;
 
  default:
  cout<<"INVALID CHOICE";
    break;
  }
  }
  return 0;
}