#include<iostream>
using namespace std;
int main(){
float a,b;
char op;
cout<<"Enter first Number:";
cin>>a;
cout<<"Enter Second Number:";
cin>>b;
cout<<"Enter Operator(+,-,*,/):";
cin>>op;

switch(op){
    case '+':
        cout<<"addition is :"<<a+b;
        break;
    case '-':
        cout<<"subtraction is :"<<a-b;
        break;
    case '*':
        cout<<"Multiplication is :"<<a*b;
        break;
    case '/':
        cout<<"Division is :"<<(a/b);
        break;
    default:
        cout << "Error! Wrong Operator";

}


}