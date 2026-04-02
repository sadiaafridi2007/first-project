#include <iostream>
#include<cmath>
using namespace std;
int main() {
char op;
double num1, num2;
// Prompt user to enter operator and numbers
cout<<"Enter operator: +, -, *, / ,^: ";
cin>>op;
cout<<"Enter two operands:";
cin>>num1>>num2;
// Perform calculation based on the operator
switch(op) {
case '+':
cout<<num1<<" + "<< num2<<" = "<< num1 + num2;
break;
case '-':
cout<<num1<<" - "<<num2<<" = "<< num1 - num2;
break;
case '*':
cout<< num1<<" * "<<num2<<" = "<<num1 * num2;
break;
case '/':
// Handle division by zero
if (num2 == 0) {
cout<<"Error! Division by zero is not allowed";
} else {
cout<<num1<<" / "<< num2<<" = "<<num1 / num2;
}
break;
  case'^':
  cout<<num1<<" ^ "<<num2<<" = "<<pow(num1,num2);
default:
// Error message for invalid operator
cout<<"Error! operator is not correct";
break;

}
cout<<endl; // Add a newline at the end
return 0;
}
