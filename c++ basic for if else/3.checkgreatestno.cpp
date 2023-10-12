// Take two int values from user and print greatest among them.
#include<iostream>
using namespace std;
int main(){
int firstno, secondno;
  cout<<"Enter first no.";
  cin>>firstno;
  cout<<"Enter second no.";
  cin>>secondno;
  if(firstno>secondno){
    cout<<"Greatest no. is " <<firstno;
  }
  else if(secondno>firstno){
    cout<<"Greatest no. is " <<secondno;
  }
  else{
    cout<<"both are equal number";
  }
  return 0;
}