#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    float sal;

public:
    employee()
    {
        this->id = 0;
        this->sal = 0;
    }
    employee(int id, float sal)
    {

        this->id = sal;
        this->sal = sal;
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
    void accept_employee()
    {
        cout << "enter employee id=";
        cin >> id;
        cout << "enter employee salary=";
        cin >> sal;
    }
    void display_employee()
    {
        cout << "enter employee id=" << id << endl;
        cout << "enter employee salary=" << sal << endl;
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
        employee::accept_employee();
        cout << "enter the bonus";
        cin >> bonus;
    }
    void display()
    {
        employee::display_employee();
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
        employee::accept_employee();
        cout << "enter the commission=";
        cin >> comm;
    }
    void display()
    {
        employee::display_employee();
        cout << "comission is" << comm << "%" << endl;
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
    }
    sale_manager(int id, float sal, float bouns, float comm)
    {
    }

    void accept_sales_manager()
    {

        employee::accept_employee();
        manager::accept_manager();
        salesman::accept_salesman();
    }
    void display_sales_manager()
    {
        employee::display_employee();
        manager::display_manager();
        salesman::display_salesman();
    }
};

int main()
{
    // employee e1;
    // e1.accept_employee();
    // e1.display_employee();
    // manager m1;
    // m1.accept();
    // m1.display();
    // salesman s1;
    // s1.accept();
    // s1.display();
    sale_manager s1;
    s1.accept_sales_manager();
    cout<<"-------------------DATA OF SALESMANAGER----------------------------"<<endl;
    s1.display_sales_manager();
    cout<<"------------------------------------------------------------------";
    return 0;
}