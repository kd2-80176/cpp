/*Q1. Implement following classes. Test all functionalities in main().Insted of char[] use string
datatype*/
#include<iostream>
using namespace std;
class date
{
 private:
 int day;
 int month;
 int year;
 public:
 date()
 {
     this->day=0;
     this->month=0;
     this->year=0;
 }
 date(int day,int month,int year)
 {
     this->day=day;
     this->month=month;
     this->year=year;
 }
 int get_day()
 {
 cout<<this->day;
 }
 int get_moth()
 {
 cout<<this->month;
 }
 int get_year()
 {
 cout<<this->year;
 }
 void set_day(int day)
 {
  this->day=day;
 }
 void set_month(int month)
 {
  this->month=month;
 }
 void set_year(int year)
 {
  this->year=year;
 }
 void accept_date()
 {
   cout<<"enter the day=";
   cin>>day;
   cout<<"enter month=";
   cin>>month;
   cout<<"enter year=";
   cin>>year;
 }
 void display_date()
 {
   cout<<day<<"/"<<month<<"/"<<year<<endl;
 }
 bool is_leap()
 {
  //get_year();
     if(year%4==0 && year%100!=0 || year%400==0)
     return true;
     else 
     return false;
 }
};
class person
{
  private:
  string name;
  string addr;
  date birth_date;
  public:
  person()
  {
     this->name="";
     this->addr="";
  }
  person(string name,string addr,int day,int month,int year):birth_date(day,month,year)
  {
     this->name=name;
     this->addr=addr;
  }
 string get_name()
 {
  cout<<this->name;
 }
 string get_addr()
 {
  cout<<this->addr;
 }
 void set_name(string name)
 {
    this->name=name;
 }
 void set_addr(string addr)
 {
   this->addr=addr;
 }
 void accept_person()
 {
    cout<<"*********************************************"<<endl;
    cout<<"enter the person name=";
    cin>>name;
    cout<<"enter the address=";
    cin>>addr;
    cout<<"enter the date of birth"<<endl;
    birth_date.accept_date();
    cout<<"*********************************************"<<endl;
 }    
void display_person()
{
  cout<<"*********************************************"<<endl;
 cout<<"name of person="<<name<<endl;
 cout<<"address of person="<<addr<<endl;
 cout<<"birth date is =";
 birth_date.display_date();
 cout<<"date of birth"<<endl;
 if(birth_date.is_leap())
  cout<<"year is leap"<<endl;
else
  cout<<"year is not leap"<<endl;
  cout<<"*********************************************"<<endl;
}
};

class employee
{
  private:
  int emp_id;
  float sal;
  string dept;
  date doj;
  public:
  employee()
  {
      this->emp_id=0;
      this->sal=0;
      this->dept="";
      date doj;
  }
  employee(int emp_id,float sal,string dept,int day,int month,int year): doj(day,month,year)
  {
      this->emp_id=emp_id;
      this->sal=sal;
      this->dept=dept;
  }
  int get_emp_id()
  {
    cout<<emp_id;
  }
  int get_sal()
  {
     cout<<sal;
  }
  int get_dept()
  {
    cout<<dept;
  }
  void set_emp_id(int emp_id) 
  {
    this->emp_id=emp_id;
  }
  void set_sal(int sal) 
  {
    this->sal=sal;
  }
  void set_dept(int dept) 
  {
    this->dept=dept;
  }
  void accept_employee()
  {
    cout<<"**********************************"<<endl;
    cout<<"enter the emp id=";
    cin>>emp_id;
    cout<<"enter emp salary=";
    cin>>sal;
    cout<<"enter dep name=";
    cin>>dept;
    cout<<"enter date of joining"<<endl;
    doj.accept_date();
    cout<<"**********************************"<<endl;

  }
  void display_employee()
  {
    cout<<"**********************************"<<endl;
     cout<<"emp id="<<emp_id<<endl;
     cout<<"emp salary="<<sal<<endl;
     cout<<"emp dept="<<dept<<endl;
     cout<<"date of joining="<<endl;
     doj.display_date();
     if(doj.is_leap())
     cout<<"year is laep"<<endl;
     else
     cout<<"year is not leap"<<endl;
     cout<<"**********************************"<<endl;
  }

};





int main()
{
  person p1;
  employee e1;
  e1.accept_employee();
  e1.display_employee();
  p1.accept_person();
  p1.display_person();
 
 return 0;
}