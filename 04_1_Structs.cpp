#include<iostream>
using namespace std;

struct Student{
    char name1[2];
    char name2[2];
    int regNo;
};

struct Employee{
    short int regNo; // 2 Bytes
    char* name; // 4 Bytes for 32 bit Compiler
};

int main()
{
    Student std1;
    Employee std2;
    cout<<endl<<"Size of std1 :"<<sizeof(std1);
    cout<<endl<<"Size of std2 :"<<sizeof(std2); // Here padding is done
}  
