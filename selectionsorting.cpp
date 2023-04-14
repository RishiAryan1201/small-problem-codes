#include <iostream>

using namespace std;

void selectionsort(int arr[],int size)
{
	int minindex;
	int temp;
	for(int i=0; i<size-1; i++)
	{
		minindex = i;
		for(int j = i+1; j<size; j++)
		{
			if(arr[minindex]>arr[j])
				minindex = j;
		}
		temp = arr[minindex];
		arr[minindex] = arr[i];
		arr[i] = temp; 
		
	}
}

int main()
{
	int arr[] = {5,4,1,3,2};
	int size = sizeof(arr)/sizeof(int);
	

	cout<<"unsorted array is :"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	selectionsort(arr , size);

	cout<<"sorted array is :"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}