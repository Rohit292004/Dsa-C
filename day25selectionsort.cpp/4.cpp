#include <iostream>
using namespace std;
int main()
{
	int n;

	cout<<"Enter size :\n";
	cin>>n;
	char arr[n];
	cout<<"Enter the elements  :";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nElements are:";
	
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	
	cout<<"\nSorted form =>";
	
	for(int i=0;i<n-1;i++)
	{
		int index=i;
		
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[index])
			index=j;
		}
		
		swap(arr[index],arr[i]);
	}
	
		for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}

	return 0;
}
