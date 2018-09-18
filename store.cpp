#include<iostream>
using namespace std;
class store
{
    private:
        string item1;
        string item2;
        int item1_price;
        int item2_price;

    public:
        void get_list();
        void get_cost();
        void display();
};
void store :: get_list()
{
    cout<<"\n Enter the item: ";
    cin>> item1;

    cout<<"\n Enter the second item: ";
    cin>> item2;

    cout<<"\n Enter the price of item1: ";
    cin>> item1_price;

    cout<<"\n Enter the price of item2: ";
    cin >> item2_price;
}

void store :: display()
    {
        cout<<"\n Item Name : "<<item1;
        cout<<"\n Item Name : "<<item2;
        cout<<"\n Item Price : "<<item1_price;
        cout<<"\n Item Price : "<<item2_price;
        cout<<"\n ----------------------\n";
    }
void store :: get_cost()
    {
         int Total_price = item1_price + item2_price;
        cout<<"Total Amount is: "<<Total_price;

    }


int main()
{
    store s1;
    s1.get_list();
    s1.display();
    s1.get_cost();
}
