/*Q1. Write a menu driven program for Student management.
In main(), create Array of Objects and provide facility for accept, print, search and sort.
For student accept name, gender, rollNumber and marks of three subjects from user and print name,
rollNumber, gender and percentage.
Provide global functions void sortRecords(Studuent[] arr) and int searchRecords(Student[] arr) for
sorting and searching array.
Search function returns index of found Student, otherwise returns -1.*/
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    string gender;
    int rollno;
    int *marks ;
    int sum;
    double percent;
    

public:
    Student()
    {
        this->name = "shekhar";
        this->gender = "male";
        this->rollno = 80176;
        this->marks= new int[3];
    }
    void accept_detail()
    {
        cout << "------------ENTER STUDENT DATAILS------------" << endl;
        cout << "ENTER NAME=";
        cin >> name;
        cout << "ENTER GENDER=";
        cin >> gender;
        cout << "ENTER ROLL NO=";
        cin >> rollno;
        for (int i = 0; i < 3; i++)
        {
            cout << "ENTER MARKS FOR SUBJECT"<< " " << i + 1 << "=";
            cin >> marks[i];
        }
         for (int i = 0; i < 3; i++)
        {
            sum=sum+marks[i];

        
        }
        percent=sum/3;
   
    }
    void print_details()
    {
        cout << "-------DETAILS OF STUDENT--------------" << endl;
        cout << "NAME=" << name << endl;
        cout << "GENDER=" << gender << endl;
        cout << "ROLL NO=" << rollno << endl;
        cout<<"PERCENTAGE="<<percent<<"%"<<endl;
    }
    int get_rollno()
    {
      cout<<this->rollno;
    }
     
};


void sortRecords(Student arr[])
{
    int temp;
    bool flag;
    for (int i = 0; i < 3 - 1; i++)
    {
        flag = false;
        for (int j = 0; j < 3 - 1 - i; j++)
        {
            if (arr[j].get_rollno() > arr[j + 1].get_rollno())
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
}


int searchRecords(Student arr[])
{
    int key;
    cout << "Enter the roll no" << endl;
    cin >> key;
    for (int i= 0; i < 3; i++)
    {
        if (arr[i].get_rollno() == key)
        {
            cout << "index = " << i << endl;
            return 1;
        }
    
    }
    return -1;
   
}


int main()
{
    
    Student arr[3];
    int result;
    sortRecords(arr);
    for (int i = 0; i < 3; i++)
    {
        arr[i].print_details();
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].accept_detail();
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].print_details();
    }
    result=searchRecords(arr);
    if(result=1){
        cout<<"key element is found"<<endl;
    }
    else{
        cout<<"element is not found";
    }

    

    return 0;
}