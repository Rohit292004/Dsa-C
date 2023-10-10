#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	
	int ans;
	
	for(int i=0;i<5;i++ )
	{
		cin>>arr[i];	
	}
	
	cout<<"Min Value in the array :";
	
	int min=INT_MAX;
	for(int i=0;i<5;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	
	cout<<min;
	
	
	cout<<"Max Value in the array :";

	int max=INT_MIN;
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	
	cout<<max;
	
	

}
