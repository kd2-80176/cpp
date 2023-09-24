#include"./menu.h"
#include<iostream>
using namespace std; 

Vmenu menu()
{
    
     int choice;
     cout<<"------------------------------------------------"<<endl;
     cout<<"**********ENTER CHOICE**************"<<endl;
     cout<<"0.EXIT"<<endl;
     cout<<"1.FOR SET RADIUS AND HEIGHT"<<endl;
     cout<<"2.FOR GET VOLUME"<<endl;
     cin>>choice;
     cout<<"------------------------------------------------"<<endl;
     return Vmenu(choice);
}