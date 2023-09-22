#include <iostream>
using namespace std;

struct Date
{
  int day;
  int month;
  int year;

  void initDate()
  {
    day = 1;
    month = 1;
    year = 2000;
  }
  void acceptDate()
  {
    cout << "enter the date in day,month,year=";
    cin >> day >> month >> year;
  }
  void printDate()
  {
    cout << "DATE IS DAY=" << day << "MONTH =" << month << "YEAR=" << year << "\n";
  }
  bool isleap(int year)
  {
    if(year%4==0 and year%100!=0 or year%400==0){
      return true;
    }
    else
    { 
      return false;
    }
  }
};
int main()
{

  struct Date d1;
  int choice;
  char ch;
  do
  {
    cout << "1.DEFAULT DATE \n 2.TO ENTER DATE \n 3.TO FIND THE YEAR IS LEAP OR NOT \n " << endl;
    cout << "ENTER YOUR CHOICE=" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
      d1.initDate();
      d1.printDate();
      break;
    case 2:
      d1.acceptDate();
      d1.printDate();
      break;
    case 3:
         int year;
         cout<<"ENTER YEAR TO CHECK LEAP OR NOT =";
         cin>>year;
         if(d1.isleap(year))
         {
          cout<<"YEAR IS LEAP"<<endl;
         }
         else
         {
          cout<<"YEAR IS NOT YEAR"<<endl;
         }

         break;
    default:
      printf("INVALID CHOICE");
    }
    cout << "Do you want to continue? enter 'y' for continue=";
    cin >> ch;
  } while(ch == 'y');

  return 0;
}