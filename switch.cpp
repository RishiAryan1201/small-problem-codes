#include <iostream>

using namespace std;
int main()
{
	int gpa;
	cout<<"your gpa = "<<endl;
	cin>>gpa;
	switch(gpa)
	{
		case 0 :cout<<"terrible";
		break;
		case 1 :cout<<"satisfactory";
		break;
		case 3: cout<<"good";
		break;
		case 4: cout<<"brilliant";
		break;
		default :cout<<"average";
	}

	return 0;
}