#include<iostream>
using namespace std;

// Using Class like C structure
class Rectangle
{
    public:
        int length; 
        int width;
};


int main(){
    Rectangle rec1;
    cout<<"\nValue Before: ";    
    cout<<"\nLength = "<<rec1.length; // Garbage Value
    cout<<"\nWidth = "<<rec1.width; 

    rec1.length = 10;
    rec1.width = 5;    
    cout<<"\nValue After: ";
    cout<<"\nLength = "<<rec1.length; 
    cout<<"\nWidth = "<<rec1.width; 
}