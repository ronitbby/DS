#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the operator +,-,/,*";
    cin>>ch;

    int num1;
    cout<<"Enter the number1";
    cin>>num1;

    int num2;
    cout<<"Enter number 2";
    cin>>num2;
    switch( ch){
        case '+':
        cout<<"The addidtion of number is "<<num1+num2<<endl;
        break;
        case '-':
        cout<<"The subtraction of two nums is "<<num1-num2<<endl;
        break;
        case '/':
        cout<<"The division of two numbers is "<<num1/num2<<endl;
        break;
        case '*':
        cout<<"The multiplication of two numbers is "<<num1*num2<<endl;
        break;
    }


    return 0;
}