#include<iostream>
using namespace std;


namespace Nstudent
{


class student
{
   public:
   int RN;
   string name;
   double marks;

void initStudent()
{
  RN=1;
  name="shekhar";
  marks=50;
}
void acceptStudent()
{
 cout<<"enter the student roll no,name,marks"<<endl;
 cin>>RN>>name>>marks;
}
void printtStudent()
{
   cout<<"ROLL NO="<<RN<<" STUDENT_NAME="<<name<<" MARKS="<<marks<<endl;
}

};


}
 //by using namespace Nstudent we acces the data from namespace
using namespace Nstudent; 
  int main()
 {
    student s1;
    int choice;
    char ch ='y';
    do{
      cout<<"ENTER YOUR CHOICE \n 1.DEFAULT VALUE \n 2.FOR ENTERING STUDENT DETAILS"<<endl;
      cin>>choice;  
      switch (choice)
      {
      case 1:
          s1.initStudent();
          s1.printtStudent();
          break;
      case 2:   
         s1.acceptStudent();
         s1.printtStudent();

      default:
      cout<<"INVALID CHOICE IS GIVEN";
         break;
      }
        
    cout<<"enter y for continue=";
    cin>>ch;
    }while(ch =='y');
    
    return 0;
 }