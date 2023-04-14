#include <iostream>
using namespace std;
int main()
{
	int n, i=2;
	cout<<"number : ";
	cin>>n;
	while(i<n){
		if((n%i)==0){
			cout<<"not prime"<<endl;
			break;
		}
		i++;
	}
	if(i==n)
	{
		cout<<"prime number"<<endl;
	}
	return 0;
}