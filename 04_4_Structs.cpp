#include<iostream>
using namespace std;

struct student{
    int regNo;
    string name;
};

int main()
{
    student stds[3];
    for(int i=0; i<3; i++)
    {
        cout<<"\nEnter Value for Registration: ";
        cin>>stds[i].regNo;
        cout<<"Enter Value for Name: ";
        cin>>stds[i].name;
    }

    cout<<"\nRecords: \n";    
    for(int i=0; i<3; i++)
    {
        cout<<"Reg No: "<< stds[i].regNo<<", ";
        cout<<"Name: "<<stds[i].name<<endl;
    }
}  
