#include<iostream>

using namespace std;
int main()
{
	int n, a=5, d=2;
	cin>>n;
	int an=0, sn=0;
	for(int i=1; i<=n; i++)
	{
		an = a + ((i-1) *d);
		cout<<"term"<<i<<" = "<<an<<endl;

		sn = sn + an;

	}
	cout<<"sum ="<<sn<<endl;

	return 0;
}