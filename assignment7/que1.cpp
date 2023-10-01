#include <iostream>
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
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int get_day()
    {
        return day;
    }
    int get_month()
    {
        return this->month;
    }
    int get_year()
    {
        return this->year;
    }
    void set_day(int day)
    {
        this->day = day;
    }
    void set_month(int month)
    {
        this->month = month;
    }
    void set_year(int year)
    {
        this->year = year;
    }
    void accept()
    {
        cout << "enter the day=";
        cin >> day;
        cout << "enter  the month=";
        cin >> month;
        cout << "enter the year=";
        cin >> year;
    }
    void display()
    {
        cout << day <<"/"<< month <<"/"<< year << endl;
        if(is_leap(year)==true)
        cout<<"year is leap"<<endl;
        else
        cout<<"year is not leap"<<endl;
    }
    bool is_leap(int year)
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
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
        this->name = "";
        this->addr = "";
    }
    person(string name, string addr,int day,int month,int year):birth_date(day,month,year)
    {
        this->name = name;
        this->addr = addr;
    }
    string get_name()
    {
        return this->name;
    }
    string get_addr()
    {
        return this->addr;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    void set_aaddr(string addr)
    {
        this->addr = addr;
    }
    
    date get_birth_date()
    {
        return birth_date;
    }
    void set_bith_date(date birth_date)
    {
       this->birth_date=birth_date;
    }
   virtual void accept()
    {

        cout << "enter the name of person=";
        cin >> name;
        cout << "enter the address of person=";
        cin >> addr;
        cout<<"enter birth date of person="<<endl;
        birth_date.accept();
    }
   virtual void display()
    {
        cout<<"-------------------------------------"<<endl;
        cout << "name of person=" << name<<endl;
        cout << "address of person=" << addr<<endl;
        cout<<"date of birth="<<endl;
        birth_date.display();
        cout<<"--------------------------------------"<<endl;
        
    }
};
class employee: public person
{
private:
    int id;
    float sal;
    string dept;
    date doj;

public:
    employee()
    {
        this->id = 0;
        this->sal = 0;
        this->dept = "";
    }
    employee(int id, float sal, string dept,int day,int month,int year):doj(day,month,year)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }
    int get_id()
    {
        return this->id;
    }
    float get_sal()
    {
        return this->sal;
    }
    string get_dept()
    {
        return this->dept;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    void set_sal(float sal)
    {
        this->sal = sal;
    }
    void set_id(string dept)
    {
        this->dept = dept;
    }
    date get_joinning_date()
    { 
        return doj;
    }
    void set_joinning_date()
    {
        this->doj=doj;
    }
    void accept()
    {
        cout << "enter the employee id= ";
        cin >> id;
        cout << "enter the employee salary=";
        cin >> sal;
        cout << "enter the employee department=";
        cin >> dept;
        cout<<"enter date of joinning"<<endl;
        doj.accept();
    }
    void display()
    {
        cout<<"---------------------------"<<endl;
        cout << "employee id=" << id << endl;
        cout << "employee salary=" << sal << endl;
        cout << "employee department=" << dept << endl;
        cout<<"date of joinning=";
        doj.display();
        cout<<"---------------------------"<<endl;
    }
};
int main()
{
   // date d1;
   // d1.accept();
   // d1.display();
    employee e1;
    e1.accept();
    e1.display();

    //person *person= new employee;  //upcasting

    //person->accept();
    //person->display();

    //person p1;
    //p1.accept();
    //p1.display();

    
    return 0;
}