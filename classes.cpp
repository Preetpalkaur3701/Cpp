#include<iostream>
using namespace std ;
class first
{
private:
    int a[5];
    int b[5];
    int c[5];
public:
    void input();
    void sum();
};
   void first :: input()
  {
      int i;
      for (i = 0; i<5 ; i++)
      {
          cout<<"Enter element";
          cin>>a[i];
      }

      for (i = 0;i<5; i++)
      {
          cout<<"Enter element";
          cin>> b[i];
      }
  }
       void first:: sum()
       {
           int j;
           for (j = 0;j<5;j++)
          {
               c[j]= a[j]+b[j];
               cout<< c[j]<<" ";
          }


           }

  int main()
  {


  first f1;
  f1.input();
  f1.sum();

  }


