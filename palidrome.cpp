#include<iostream>
using namespace std;
int main()
{
    int x,rem,reverse = 0,num;
    cout<<"Enter number";
    cin >> x;
    num = x;

    while (x!=0)
{
    rem=x%10;
    reverse=reverse*10+rem;
    x/=10;
}

    cout<< "Reversed number is\n" << reverse;

    if (reverse =num)
{
        cout<< "Number is palindrome";


}
    else{
    cout<< "Number is not palindrome";
}
return 0;
}
