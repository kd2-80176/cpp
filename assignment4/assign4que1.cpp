/*Q1. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create array of objects of Time.
Allocate the memory for the array and the object dynamically.*/
#include <iostream>
using namespace std;
class Time
{
private:
    int hr;
    int min;
    int sec;

public:
    Time()
    {
    }
    Time(int hr, int min, int sec)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }
    int getHour()
    {
        return this->hr;
    }
    int getMinute()
    {
        return this->min;
    }
    int getSeconds()
    {
        return this->sec;
    }
    void setHour(int hr)
    {
        this->hr = hr;
    }
    void setMinute(int min)
    {
        this->min = min;
    }
    void setSeconds(int sec)
    {
        this->sec = sec;
    }
    void printTime()
    {
        cout << "TIME=" << hr << ":" << min << ":" << sec << endl;
    }
    void accept_time()
    {
        cout << "ENTER TIME" << endl;
        cout << "ENTER HOURS:";
        cin >> hr;
        cout << "ENTER MINUTE:";
        cin >> min;
        cout << "ENTER SECOND:";
        cin >> sec;
    }
};
int main()
{

    Time **arr = new Time *[3]; // dynamic array of object

    arr[0] = new Time(); // dynamically creating object
    arr[1] = new Time();
    arr[2] = new Time();

    cout<<"ENTER VALLUE FOR INDEX 0="<<endl;
    arr[0]->accept_time();
    cout<<"---------------------------------"<<endl;
    cout<<"ENTER VALLUE FOR INDEX 1="<<endl;
    arr[1]->accept_time();
    cout<<"---------------------------------"<<endl;
    cout<<"ENTER VALLUE FOR INDEX 2="<<endl;
    arr[2]->accept_time();
     
     cout<<"-----------------------------------------------"<<endl;
    arr[0]->printTime();
    arr[1]->printTime();
    arr[2]->printTime();
    cout<<"-------------------------------------------------"<<endl;
     
     delete arr[0];
     delete arr[1];
     delete arr[2];
     delete[] arr;
    arr=NULL;
      

    
    

    return 0;
}