#include<iostream>

using namespace std;
int main()
{
	int a,b;
	char oper;
	cout<<"Enter the first operand:";
	cin>>a;
	cout<<"Enter the secound operand:";
	cin>>b;
	cout<<"Enter the operator:";
	cin>>oper;
	switch(oper)
	{
	case '+':cout<<"Addition of two operands is"<<a+b<<endl;
	break;
	case '-':cout<<"substraction of two operands is"<<a-b<<endl;
	break;
	case '*':cout<<"Multiplication of two operands is"<<a*b<<endl;
	break;
	case  '/':cout<<"Division of two operands is"<<a/b<<endl;
	break;
	case '%':cout<<"Modulus division of two operands is"<<a%b<<endl;
	break;
}
}

