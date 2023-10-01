/*Q3. Using the Q1 from assignment 6. Create an array of 10 employees. Provide menu driven code
for the functionalities: Insted of char[] use string datatype
1. Accept Employee
2. Display the count of all employees with respect to
designation
3. Display respective designation employees*/
#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    float sal;


public:
string desig;
    employee()
    {
        this->id = 0;
        this->sal = 0;
    }
    employee(int id, float sal,string desig)
    {

        this->id = sal;
        this->sal = sal;
        this->desig=desig;

    }
    int get_id()
    {
        return id;
    }
    int get_sal()
    {
        return sal;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    void set_sal(int sal)
    {
        this->sal = sal;
    }
    string get_desig()
    {
      return this->desig;
    }
    void set_desig(string desig)
    {
      this->desig=desig;
    }
   virtual void accept()
    {
        cout << "enter employee id=";
        cin >> id;
        cout << "enter employee salary=";
        cin >> sal;
    }
   virtual void display()
    {
        cout << "enter employee id=" << id << endl;
        cout << "enter employee salary=" << sal << endl;
        cout<<"enter the designation="<< desig << endl;
    }
     virtual ~employee(){

    }
};

class manager : virtual public employee
{
private:
    float bonus;

public:
    manager()
    {

        this->bonus = 0;
        set_desig("manager");
    }
    manager(float bonus)
    {

        this->bonus = bonus;
    }
    int get_bouns()
    {
        return bonus;
    }
    void set_bouns()
    {
        this->bonus = bonus;
    }
    void accept()
    {
        employee::accept();
        cout << "enter the bonus=";
        cin >> bonus;
    }
    void display()
    {
        employee::display();
        cout << "bounus =" <<bonus;
    }
    protected:
    void accept_manager()
    {
        cout << "enter the bonus=";
        cin >> bonus;
    }
    void display_manager()
    {
        cout << "bounus for manager=" << bonus<<endl;
    }
};
class salesman : virtual public employee
{
private:
    float comm;

public:
    salesman()
    {
        this->comm = 0;
        set_desig("salesman");
    }
    salesman(float comm)
    {
        this->comm = comm;
    }
    int get_comm()
    {
        return comm;
    }
    void set_comm()
    {
        this->comm = comm;
    }
    void accept()
    {
        employee::accept();
        cout << "enter the commission=";
        cin >> comm;
    }
    void display()
    {
        employee::display();
        cout << "comission is=" << comm << "%" << endl;
    }
    protected:
    void accept_salesman()
    {
        cout << "enter the commision=";
        cin >> comm;
    }
    void display_salesman()
    {
        cout << "commision is=" << comm << endl;
    }
};
class sale_manager : public manager, public salesman
{
 public:
    sale_manager()
    {
        set_desig("salesmanager");
    }
    sale_manager(int id, float sal, float bouns, float comm)
    {
    }

    void accept()
    {

        employee::accept();
        manager::accept_manager();
        salesman::accept_salesman();
    }
    void display()
    {
        employee::display();
        manager::display_manager();
        salesman::display_salesman();
    }
};

int menu()
{
   int choice;
   cout<<"-----------------CHOICE------------"<<endl;
   cout<<"0.exit"<<endl;
   cout<<"1.accept employees"<<endl;
   cout<<"2. count of all employees with respect to designnation"<<endl;
   cout<<"3.dispay respective designation employees"<<endl;
   cout<<"4.display all employees"<<endl;
   cout<<"enter your choice"<<endl;
   cin>>choice;
   cout<<"-------------------------------------"<<endl;
   return choice;


}
int main()
{
   int choice;
   int ecount=0;
   int scount=0;
   int smcount=0;
   employee *emparr[10];
   int index=0;
   while((choice=menu())!=0)
   {
      switch (choice)
      {
      case 1:
           int choose;
           cout<<"------CHOICE---------"<<endl;
           cout<<"enter the choice"<<endl;
           cout<<"1.accept the manager"<<endl;
           cout<<"2.accept salesman"<<endl;
           cout<<"3.accept salesmanager"<<endl;
           cout<<"enter the choice=";
           cin>>choose;
           cout<<"----------------------"<<endl;
           switch (choose)
           {
           case 1:
           if(index<10){
             emparr[index]=new manager;
             emparr[index]->accept();
             ecount++;
             index++;
             }
             else
             cout<<"-----------entry is full---------";
            break;
             case 2:
             if(index<10){
             emparr[index]=new salesman;
             emparr[index]->accept();
             scount++;
             index++;
             }
             else
             cout<<"-----------entry is full---------";

            break;
             case 3:
              if(index<10){
             emparr[index]=new sale_manager;
             emparr[index]->accept();
             smcount++;
             index++;
             }
             else
             cout<<"-----------entry is full---------";
            break;
           
           default:
           cout<<"invalid choice"<<endl;
            break;
           }
        break;
        case 2:
             cout<<"total no of manager="<<ecount<<endl;
             cout<<"total no of salesmane="<<scount<<endl;
             cout<<"total no of salesmanger="<<smcount<<endl;
        break;
      case 3:
            for(int i=0;i<index;i++)
            {
               if(emparr[i]->desig=="manager")
               {
                cout<<"employee information who are manager-------------------------"<<endl;
                emparr[i]->display();
               }
            }
            
            for(int i=0;i<index;i++)
            {
               if(emparr[i]->desig=="salesman")
               {
                cout<<"employee information who are salesman--------------------------"<<endl;
                emparr[i]->display();
               }
            }
            for(int i=0;i<index;i++)
            {
               if(emparr[i]->desig=="salesmanager")
               {
                cout<<"employee information who are salesmanager---------------------------"<<endl;
                emparr[i]->display();
               }
            }
      break;
      case 4:
      for(int i=0;i<index;i++)
            {
                cout<<"all employee information"<<endl;
                emparr[i]->display();
             }
      break;
      default:
      cout<<"invalid choice";
        break;
      }




   }
   for(int i=0;i<index;i++)
   {
    delete emparr[index];
   }

    
    return 0;
}