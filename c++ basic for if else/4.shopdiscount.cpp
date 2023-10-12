// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.
#include<iostream>
using namespace std;
int main(){
    int quantity, price;
    cout<<"user enter quantity";
    cin>>quantity;
    price = quantity * 100;
    if(quantity>1000){
        cout<<"price is " <<price-(price*.1);
    }
    else{
        cout<<"price is" <<price;
    }
    return 0;
}