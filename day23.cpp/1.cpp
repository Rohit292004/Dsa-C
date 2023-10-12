#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	
	int ans;
	
	for(int i=0;i<10;i++ )
	{
		cin>>arr[i];	
	}
	
	int sno;
	cout<<"Enter searching value :";
	
	cin>>sno;
	
		for(int i=0;i<10;i++ )
	{
		if(sno==arr[i])
	{
			cout<<"found at index"<<i;
		break;
		}	
	}
	
}
	
	
