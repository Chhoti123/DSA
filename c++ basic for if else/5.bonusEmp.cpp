// A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
// Ask user for their salary and year of service and print the net bonus amount.
#include<iostream>
using namespace std;
int main(){
    int salary, yearofservice;
    cout<<"Enter salary : ";
    cin>>salary;
    cout<<"Enter year of service : ";
    cin>>yearofservice;
    if(yearofservice>5){
        cout<<"net bonus amount is : "<< salary+(salary + 0.05);
    }
    else{
        cout<<"Not eligible for bonus";
    }
    return 0;
}