#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    char operation;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"Enter the operation: ";
    cin>>operation;
    switch(operation){
        case '+':
        cout<<num1<<"+"<<num2<<" = "<<num1+num2;
        break;
        case '-':
        cout<<num1<<"-"<<num2<<" = "<<num1-num2;
        break;
        case '*':
        cout<<num1<<"*"<<num2<<" = "<<num1*num2;
        break;
        case '/':
        cout<<num1<<"/"<<num2<<" = "<<num1/num2;
        break;
        default:
        cout<<"Invalid operator!!";
        break;

    }

}
