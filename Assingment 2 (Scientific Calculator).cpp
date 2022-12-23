#include<iostream>
#include<cmath>
using namespace std;
int sum(int x, int y)
{
	return x+y;
}
int subt(int x, int y)
{
	return x-y;
}
int mult(int x, int y)
{
	return x*y;
}
float qout(float x, float y)
{
	return x/y;
}
int remndr(int x, int y)
{
	return x%y;
}
int main()
{
	float x,y,add,sub,mul,quo,rmndr;
	cout<<"Enter Your First no. : "<<endl;
	cin>>x;
	cout<<"Enter Your Second no. : "<<endl;
	cin>>y;
	cout<<"The addition of Your Numbers are: "<<endl;
	add=sum(x,y);
	cout<<add<<endl;
	cout<<"The subtraction of Your Numbers are: "<<endl;
	sub=subt(x,y);
	cout<<sub<<endl;
	cout<<"The multiplication of Your Numbers are: "<<endl;
	mul=mult(x,y);
	cout<<mul<<endl;
	cout<<"The Quotiont of Your Numbers are: "<<endl;
	quo=qout(x,y);
	cout<<quo<<endl;
	cout<<"The Remainder of Your Numbers are: "<<endl;
	rmndr=remndr(x,y);
	cout<<rmndr<<endl;
	cout<<"The Square-Root of Your Numbers are: "<<endl;
	cout<<"Of 1st no. : "<<sqrt(x)<<endl;
	cout<<"Of 2nd no. : "<<sqrt(y)<<endl;
	cout<<"The Logarithm of Your Numbers are: "<<endl;
	cout<<"Of 1st no. : "<<log(x)<<endl;
	cout<<"Of 2nd no. : "<<log(y)<<endl;
}

