#include<iostream>
using namespace std;
class student
{
    private:
        char name;
        int roll_number;
        int Mark1;
        int Mark2;
        int Mark3;
        int Mark4;
        int Mark5;
        int Average;
    public:
        void get_details();
        void get_marks();
        void get_result();

};
void student :: get_details()
{
    cout<<"Enter the name of the student";
    cin>> name;

    cout<<"Enter the roll number";
    cin>>roll_number;


}
void student :: get_marks()
{
    cout<<"Marks in English out of 100: ";
    cin>> Mark1;

    cout<<"Marks in Maths out of 100: ";
    cin>> Mark2;

    cout<<"Marks in Physics out of 100: ";
    cin>> Mark3;

    cout<<"Marks in Chemistry out of 100: ";
    cin>> Mark4;

    cout<<"Marks in Computer out of 100: ";
    cin>> Mark5;
}
void student :: get_result()
    {

    int Average = Mark1 + Mark2 + Mark3 + Mark4 + Mark5 / 5 ;
    cout<<"Average of marks is: " <<Average;

    }
int main()
{
    student s1;
    s1.get_details();
    s1.get_marks();
    s1.get_result();
}

