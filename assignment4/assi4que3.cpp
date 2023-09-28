/*Q3. Write a Matrix class. Allocate memory dynamically in parameterized constructor. Also write
parameter-less constructor. Write accept() and print() functions.
Also provide add(), subtract(), multiply() and transpose() function.*/

#include <iostream>
using namespace std;
class Matrix
{
private:
  int r;
  int c;

  // int **arr1;
  // int **res;

public:
  int **arr;
  Matrix()
  {
    
    this->r = 3;
    this->c = 3;
  }
  void create_Matrix()
  {
    set_size();
    arr = new int *[c];
    for (int i = 0; i < c; i++)
    {
      arr[i] = new int[r];
    }
  
    this->r = r;
    this->c = c;
    arr = new int *[c];
    for (int i = 0; i < c; i++)
    {
      arr[i] = new int[r];
    }
  }

  void accept_matrix()
  {

    for (int i = 0; i < this->r; i++)
    {
      for (int j = 0; j < this->c; j++)
      {
        
        cout << "enter the element at["<<i<<"]["<<j<<"]=";
        cin >> arr[i][j];
      }
    }
    cout << "matrix created" << endl;
  }
  void display_element()
  {
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        // cout<<"matrix is";J
        cout << arr[i][j];
      }
      cout << endl;
    }
  }
  void set_size()
  {
    cout<<"--------------------------------------------------"<<endl;
    cout << "enter the no of rows=";
    cin >> r;
    cout << "enter the no of column=";
    cin >> c;
    cout<<"--------------------------------------------------"<<endl;
  }
  int getrows()
  {
    return this->r;
  }

  int getcolumns()
  {
    return this->c;
  }
 
};
void add_matrix(Matrix m1, Matrix m2)
{
  
  int r, c;
  r = m1.getrows();
  c = m1.getcolumns();

  int **arr = new int *[r];

  for (int i = 0; i < c; i++)
  {
    arr[i] = new int[r];
  }

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
    }
  }
  cout<<"addition of two matrix="<<endl;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
void sub_matrix(Matrix m1, Matrix m2)
{
  
  int r, c;
  r = m1.getrows();
  c = m1.getcolumns();

  int **arr = new int *[r];

  for (int i = 0; i < c; i++)
  {
    arr[i] = new int[r];
  }

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      arr[i][j] = m1.arr[i][j]-m2.arr[i][j];
    }
  }
  cout<<"substraction of two matrix="<<endl;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
void mul_matrix(Matrix m1, Matrix m2)
{
  
  int r, c;
  r = m1.getrows();
  c = m1.getcolumns();

  int **arr = new int *[r];

  for (int i = 0; i < c; i++)
  {
    arr[i] = new int[r];
  }

  for (int i = 0; i <r; i++)
        {
            for (int j = 0; j <c; j++)
            {
                arr[i][j] = 0;

                for (int k = 0; k < c; k++)
                    arr[i][j] += m1.arr[i][k] * m2.arr[k][j];
            }
  cout<<"multiplication of two matrix="<<endl;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
}
void tranc_matrix(Matrix m1, Matrix m2)
{
  
  int r, c;
  r = m1.getrows();
  c = m1.getcolumns();

  int **arr = new int *[r];

  for (int i = 0; i < c; i++)
  {
    arr[i] = new int[r];
  }

  for (int i = 0; i <r; i++)
   for (int j = 0; j<c; j++)
            arr[i][j] = m1.arr[j][i];
            
                
  cout<<"transpose of two matrix="<<endl;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}



int main()
{
  Matrix m1;
  Matrix m2;
  cout << "_______ENTER ROW AND COLUMN FOR MATRIX 1_______" << endl;
  m1.create_Matrix();
  cout << "_______ENTER ROW AND COLUMN FOR MATRIX 2_______" << endl;
  m2.create_Matrix();
  cout << "enter element for 1ndt matraix" << endl;
  m1.accept_matrix();
  cout << "enter element for 2st matraix" << endl;
  m2.accept_matrix();
  
  add_matrix(m1, m2);
sub_matrix(m1,m2);
mul_matrix(m1,m2);
 tranc_matrix(m1,  m2);

  return 0;
}