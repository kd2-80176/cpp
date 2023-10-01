#include<iostream>
using namespace std;
class Address
{
   public:
   string building;
   string street;
   string city;
   int pin; 
   
   
   void accept()
   {
     cout<<"ENTER ADDRESS ";
     cout<<"ENTER BUILDING=";
     cin>>building;
     getline(cin,building);
     getchar();
     cout<<"ENTER STREET=";
     cin>>street;
     getline(cin,street);
     getchar();
     cout<<"ENTER CITY=";
     cin>>city;
     getline(cin,city);
     getchar();
     cout<<"ENTER PIN=";
     cin>>pin;
   }
   void display()
   {
     cout<<"ADDRESS ="<<building<<","<<street<<","<<city<<","<<pin;
   }
   Address()
   {
    
   }
   Address(string building,string street,string city,int pin)
   {
     this->building="sunbeam";
     this->street="shaniwar peth";
     this->city="karad";
     this->pin=416415;
    }
    string get_building()
    {
      return this->building;
    }
    string get_street()
    {
      return this->street;
    }
    string get_city()
    {
      return this->city;
    }
    int get_pin()
    {
      return this->pin;
    }
    void set_building(string building)
    {
       this->building=building;
    }
    void set_street(string street)
    {
       this->street=street;
    }
    void set_city(string city)
    {
       this->city=city;
    }
    void set_pin(int pin)
    {
       this->pin=pin;
    }
};

int main()
{ 
Address a1; 
char ch;
int choice;
do{

cout<<"1.FOR BUILDING NAME 2.STREET NAME 3.CITY NAME 4.PIN OF CITY"<<endl;
cout<<"ENTER THE CHOICE="; 
cin>>choice;
switch(choice)
{

case 1:
a1.set_building("bolhegaon phata");

cout<<"BULLDING="<<a1.get_building()<<endl;
break;
case 2:
a1.set_street("nagar-manmad road");
cout<<"STREET="<<a1.get_street()<<endl;
break;
case 3:
a1.set_city("ahmednagar");
cout<<"city="<<a1.get_city()<<endl;
break;
case 4: 
a1.set_pin(414003);
cout<<"pin="<<a1.get_pin()<<endl;
break;
default:
cout<<"INVALID CHOICE"<<endl;
}
cout<<"enter y for continue=";

cin>>ch;

} while(ch !='y');


  return 0;
}