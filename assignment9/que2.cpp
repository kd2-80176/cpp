/*Q2. Write a class to store Account information of Bank customer by using following class diagram.
Use enum to store information of account type. Create an array of 5 Accounts in main() and accept
their details from user. Write Menu driven program to deposit/withdraw amount from the account.
After each transaction display updated account balance. Provide appropriate getters/setters with
necessary validations. Throw exceptions for invalid values. Also implement an exception class
InsufficientFunds. In withdraw() member function, if sufficient balance is not available
in account, throw this exception.*/
#include <iostream>
using namespace std;
enum account_type
{
    SAVING = 1,
    CURRENT,
    DMAT
};

class Insufficient_funds
{
private:
    int accid;
    double cur_balance;
    double withdrawn_amount;

public:
    Insufficient_funds(int accid, double cur_balance, double withdrawn_amount)
    {

        this->accid = accid;
        this->cur_balance = cur_balance;
        this->withdrawn_amount = withdrawn_amount;
    }
    void display()
    {
       cout<<"************ERROR***********ERROR***********ERROR************ERROR**************"<<endl; 
       cout<<"ACCOUNT ID="<<this->accid<<endl;
       cout<<"CURRENT BALANCE="<<this->cur_balance<<endl;
       cout<<"WITHDRAWN AMOUNT ="<<this->withdrawn_amount<<endl;
       cout<<"ERROR::"<<endl;
       cout<<"INSUFFICIENT BALANCE ="<<this->cur_balance<<endl<<endl;
    }
};

class Account
{
private:
    int id;
    account_type type;
    double balance;
   

public:

    Account()
    {
        this->id = 0;
        this->balance = 0;
    }
  
    void accept()
    {
        cout << "1.saving type" << endl;
        cout << "2.current account" << endl;
        cout << "3.DMAT account" << endl;
        cout << "enter type of account" << endl;
        int choice;
        cin >> choice;
        cout << "enter the id =" << endl;
        cin >> id;
        this->type = account_type(choice);
    }
    void display()
    {
        cout << "type of account_id =" << id << endl;
        cout << "balance in account=" << balance << endl;
    }

    void Set_id(int id)
    {
        this->id = id;
    }
    void Set_type(account_type type)
    {
        this->type = type;
    }
    int Get_id()
    {
        return this->id;
    }
    account_type Get_type()
    {
        return this->type = type;
    }
    double Get_balance()
    {
        return this->balance;
    }
    void deposite(double amount)
    {
        this->balance = this->balance + amount;
    }
    void withdrawn(double amount) 
    {
        
        if(this->balance<amount)
        throw  new Insufficient_funds(this->id, this->balance,amount);
        else
        this->balance = this->balance - amount;
    }
};

enum Amenu
{
    EXIT,
    DEPOSITE,
    WITHDRAW,
    DISPLAY_BALANCE
};
Amenu menu()
{
    int choice;
    cout << "************************************************" << endl;
    cout << "ENTER THE CHOICE=" << endl;
    cout << "0.EXIT" << endl;
    cout << "1.DEPOSITE MONEY" << endl;
    cout << "2.WITHDRAW MONEY" << endl;
    cout << "3.DISPLAY ACCOUNT_BALANCE" << endl;
    cin >> choice;
    cout << "************************************************" << endl;
    return Amenu(choice);
}
int main()
{
    Account *account[5];
    double amount;
    int aid;
    int index=0;
    Amenu choice;
    while ((choice = menu()) != EXIT)
    {
        switch (choice)
        {
        
        case DEPOSITE:
            account[index]=new Account;
             account[index]->accept();
             
            cout<<"enter the amount you want to deposite= ";
            cin>>amount;
           account[index]->deposite(amount);
           index++;
           
            break;
        case WITHDRAW:
        try{ 
        cout<<"enter the amount you want to withdraw= ";
            cin>>amount;
          cout<<"for withdraw enter the account id =";
            cin>>aid;
            for(int i=0;i<index;i++){
            if(account[i]->Get_id()==aid)
            account[i]->withdrawn(amount);
            }
          cout << "------amount widrawn RS:"<<amount<< "--succefully--------" << endl;
        }
        catch(Insufficient_funds * iftr)
        { 
              iftr->display();
              
        }

            break;
        case DISPLAY_BALANCE:
            for(int i=0;i<index;i++)
            account[i]->display();
            break;

        default:
            break;
        }
    }

    return 0;
}