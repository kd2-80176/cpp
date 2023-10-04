/*Q1. Write a user defined function factorial() that calculates factorial of given number and it throws
exception if number entered by user is negative.
*/
#include<iostream>
using namespace std;
class Factorial
{
    private:
    int num1;
    

    public:
    Factorial()
    {
        this->num1=0;
      
    }
    Factorial(int num1)
    {
       this->num1=num1;
    }
    
   void accept_num()
    {
     cout<<"enter num to calculate factorial=";
     cin>>num1;
     if(num1<=0)
     throw 1;

    }
    void calculate_factorial()
    {
        int fact=1;
       for(int i=1;i<=this->num1;i++)
       {
          fact=fact*i;
       }
     cout<<"factrorial of no "<<num1<<"="<<fact<<endl;
    }
};

int main()
{
    Factorial f1;
    try
    {
        f1.accept_num();
    f1.calculate_factorial();
    }
    catch(int a)
    {
        cout<<"please enter the non-zeo and postive value"<<endl;
    }
    
    
   
    return 0;
}
