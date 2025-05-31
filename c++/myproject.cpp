#include<iostream>
using namespace std;
int main(){
char oper;
float num1,num2,num3;

cout  <<"enter symbol : ";
cin >> oper;
cout  <<"enter number:";
cin >> num1 >> num2 >> num3;

switch (oper)
{
case '+':
cout<< num1 <<"+"<<num2<<"+"<<num3<<" = "<<num1+num2+num3;
    break;
case '-':
cout<< num1<<"-"<<num2<<"-"<<num3<<"="<<num1-num2-num3;
 break;
 
case '*' :
 cout << num1 << " * " << num2 << '*' << num3<< " = " << num1 * num2 * num3;
 break;

default:
cout<<"not this oper and num";
    break;
}
return 0;

}
