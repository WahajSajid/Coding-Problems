#include<iostream>
using namespace std;

int Sum(int num1,int num2){
    return num1+num2;
}

int main(){
    int num1,num2;
    cout<<"Enter 1st number: ";
    cin>>num1;
    cout<<"Enter 2nd number ";
    cin>>num2;

cout<<Sum(num1,num2);

    return 0;
}