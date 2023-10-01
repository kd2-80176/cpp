/*Q2. A shop sells book or tapes. The Book class holds id, title, author, and price;
whereas Tape class holds id, title, artist, and price. There is 5% discount on tapes,
while 10% discount on books.Assuming that each user purchase 3 products (either book or tape),
calculate final bill. The program
should be menu driven and should not cause memory leakage.*/
#include <iostream>
using namespace std;
class product
{
private:
    int id;
    string title;
    int price;

public:
    string type;

public:
    product()
    {
        this->id = 0;
        this->title = "";
        this->price = 0;
    }
    int get_price()
    {
        return this->price;
    }
    void set_type(string type)
    {
        this->type = type;
    }
    string get_type(string type)
    {
        return this->type;
    }
    product(int id, string title, int price, char type)
    {
        this->id = id;
        this->title = title;
        this->price = price;
        this->type = type;
    }
    virtual void accept()
    {
        cout << "enter the id=";
        cin >> id;
        cout << "enter the title=";
        cin >> title;
        cout << "enter the price=";
        cin >> price;
    }
    virtual void display()
    {
        cout << "id =" << id << endl;
        cout << "title=" << title << endl;
        cout << "price=" << price << endl;
    }
    // virtual void accept()=0;
    // virtual void display()=0;
    friend int calculate_bill();
};
class book : public product
{
private:
    string author;

public:
    book()
    {
        this->author = "";
        set_type("book");
    }
    book(string author)
    {
        this->author = author;
    }
    void accept()
    {
        product::accept();
        cout << "enter the author of book=";
        cin >> author;
    }
    void display()
    {
        product::display();
        cout << "author of book=" << author << endl;
        cout << "type of product=" << type << endl;
    }
};
class tape : public product
{
private:
    string artist;

public:
    tape()
    {
        this->artist = "";
        set_type("tape");
    }
    tape(string artist)
    {
        this->artist = artist;
    }
    void accept()
    {
        product::accept();
        cout << "enter the artist=";
        cin >> artist;
    }
    void display()
    {
        product::display();
        cout << "artist=" << artist << endl;
        cout << "type of product=" << type << endl;
    }
};

void calculate_bill(int size, product *product[])
{
    int index = size;
    int total;

    for (int i = 0; i < index; i++)
    {
        if (product[i]->type == "book")
        {
            total += product[i]->get_price() * .90;
        }
        else
            total += product[i]->get_price() * .95;
    }
    cout << "total bill  =" << total<<endl;
}
void bill_book(int size, product *product[])
{
    int index = size;
    int total;

    for (int i = 0; i < index; i++)
    {
        if (product[i]->type == "book")
        {
            total += product[i]->get_price() * .90;
        }
        
    }
    cout << "total bill of book  =" << total<<endl;
}
void bill_tape(int size, product *product[])
{
    int index = size;
    int total;

    for (int i = 0; i < index; i++)
    {
        if (product[i]->type == "tape")
        {
            total += product[i]->get_price() * .90;
        }
    }
    cout << "total bill of tape =" << total<<endl;
}
int menu()
{
    int choice;
    cout << "-------------choose the choice---------------" << endl;
    cout << "0.exit" << endl;
    cout << "1.for purchase book" << endl;
    cout << "2.for purchase tape" << endl;
    cout << "3.for display all purchase" << endl;
    cout << "4.for total billing" << endl;
    cout << "5.for total billing of book" << endl;
    cout << "6.for total billing of tap" << endl;
    cout << "enter the choice=";
    cin >> choice;
    cout << "--------------------------------------------" << endl;
    return choice;
}
int main()
{
    product *product[3];
    int choice;
    int index = 0;
    int total = 0;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (index < 3)
            {
                product[index] = new book();
                product[index]->accept();
                index++;
            }
            else
                cout << "----:-(SORRY!!!!!!!! LIMIT OF PURCHASING IS OVER--------- " << endl;
            break;
        case 2:
            if (index < 3)
            {
                product[index] = new tape();
                product[index]->accept();
                index++;
            }
            else
                 cout << "---:-(SORRY!!!!!!!! LIMIT OF PURCHASING IS OVER--------- " << endl;
            break;
        case 3:
            for (int i = 0; i < index; i++)
            {
                cout << "purchase item no=" << i + 1 << endl;
                cout<<"************************************************"<<endl;
                product[i]->display();
            }
            break;
        case 4:
            calculate_bill(index, product);

            break;
        case 5:
            bill_book(index, product);

            break;
        case 6:
            bill_tape(index, product);

            break;

        default:
            cout << "invalid choice";
            break;
        }
    }

    cout << "-----:-) THANK YOU FOR SHOPPING VISIT AGAIN :-)--------";
    for(int i=0;i<3;i++)
    {
        delete product[i];
    }

    return 0;
}