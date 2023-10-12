// Take values of length and breadth of a rectangle from user and check if it is square or not.

#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"Enter length : ";
    cin>>length;
    cout<<"Enter breadth : ";
    cin>>breadth;
    if(length == breadth)
{
    cout<<"This is Square";
}
else{
    cout<<"This is Rectangle";
}
}