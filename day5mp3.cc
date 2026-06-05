//Electricity Bill Management
#include<iostream>
using namespace std;
class
{
    public:
    string name;
    float units,amount,bill;
    void getdata()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter units: ";
        cin>>units;
        display(name,units);
    }
    float calamt(float units)
    {
        this->units=units;
        if(units<=100)
        {
            bill=units*1.5;
        }
        else if(units<=200)
        {
            bill=100*1.5+(units-100)*2.5;
        }
        else
        {
            bill=100*1.5+100*2.5+(units-200)*4.0;
        }
        return bill;
    }
    void display(string name,float units)
    {
        this->name=name;
        this->units=units;
        amount=calamt(units);
        cout<<"The person "<<name<<" used "<<units<<" and has to pay Rs. "<<amount<<"/-"<<endl;
    }
}Elec;
int main()
{
    Elec.getdata();
    return 0;
}