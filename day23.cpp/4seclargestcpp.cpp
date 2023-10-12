#include<iostream>
using namespace std;
int main()
{
	int arr[6]={1,2,3,4,5,6};
            
            
	int ans=INT_MIN;
	for(int i=0;i<6;i++)
	{
		if(arr[i]>ans)
		ans=arr[i];
	}
	
	cout<<"First Largest "<<ans;
	
	int sec= INT_MIN;
	for(int i=0;i<6;i++)
	{
		if(ans!=arr[i])
		{
			sec= max(sec,arr[i]);
			
		}
	
	}
	
		
	cout<<"\nsecond Largest "<<sec;
}
