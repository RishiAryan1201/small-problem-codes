#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
	cout<<" a ="<<a<<endl<<"b ="<<b<<endl;
}


int main()
{
	int x=10, y=7;

	swap(x,y);
	cout<<" x ="<<x<<endl<<"y ="<<y<<endl;
	return 0;
}