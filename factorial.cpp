#include <iostream>
using namespace std;
int main()
{
	int n, ans=1;
	cout<<"enter number to find factorial :";
	cin>>n;

	for(int i=1; i<=n; i++)
	{
		ans *=i;
	}
	cout<<n<<"! = "<<ans;
	return 0;
}