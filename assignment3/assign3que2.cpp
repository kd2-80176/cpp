/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.
( write a menu driven code for it)*/
#include<iostream>
using namespace std;
class TollBooth
{
public:
unsigned int cars;
unsigned int no_cars;
double money;

TollBooth()
{
    this->cars=0;
    this->money=0;
    this->no_cars=0;
}
void paying_cars()
{
   this->cars++;
   this->money=this->money+0.5;
}
void nonpay_car()
{
  this->no_cars++;
  
}
void display_total()
{
   cout<<"TOTAL CARS GOING ="<<this->cars+this->no_cars<<endl;
   cout<<"TOTAL AMOUNT COLLECTED="<<this->money<<endl;
}
void car_total_without_pay()
{ 
    int total;
  total=no_cars;
  cout<<"TOTAL CARS GO WITHOUT PAY="<<total<<endl;    
}

};
enum Tmenu{EXIT,car_pass,car_pass_without_pay,cars_total_withoutpay,total};

Tmenu menu()
{
    int choice;
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
    cout<<"0.EXIT"<<endl;
    cout<<"1.WHEN CAR BY PASS BY PAYING TOLL"<<endl;
    cout<<"2.CAR PASS WITHOUT PAYING TOLL "<<endl;
    cout<<"3.TOTAL CAR GOING WITHOUT PAY"<<endl;
    cout<<"4.TOTAL COLLECTION"<<endl;
     cout<<"ENTER A CHOICE ="<<endl;
    cin>>choice;
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*--*-*"<<endl;
    return Tmenu(choice);
}


int main()
{   
    TollBooth t1;
    Tmenu choice;
    while((choice=menu())!= EXIT)
    {
    switch (choice)
    {
    case car_pass:
           t1.paying_cars();
          break;
    case car_pass_without_pay:
          t1.nonpay_car();
          break;   
    case total:
         t1.display_total();   
    case cars_total_withoutpay:
    t1.car_total_without_pay();
    break;      
    
    default:
           cout<<"INVALID CHOICE";
    break;
    }
      
    }
   return 0;
}
