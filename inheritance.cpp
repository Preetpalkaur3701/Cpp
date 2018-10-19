#include<iostream>
using namespace std;
class base
{
private:
    int a;
    int b;

public:
    void add(int x, int y)
    {
        int sum;
        a = x;
        b = y;
        sum = a+b;
        cout<<"Sum = "<<sum;
    }
};
class derive:public base
    {
    private:
        int a;
        int b;

    public:
        void subtract (int x, int y)
        {
            int sub;
            a = x;
            b = y;
            sub = a-b;
            cout<<"Subtract = "<<sub;

        }
    };
int main()
{
    derive d1;
    d1. add(10,20);
    d1.subtract(80,60);
}
