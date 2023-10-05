#include<iostream>
using namespace std;


//A prime
//A fact
//B prime
// B fact
//B-A prime
//B-A fact
 
bool Prime(int n)
{
	if (n<2)
	return 0;
	
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	
	
	return 1;
}

int Fact(int n)
{
	int f=1;
	
	 
	for(int i=1; i<=n;i++)
	{
		f*=i;
	}
 return f;
	
}

 


int main()
{
	int a ,b;
	cout<<"Enter two number :";
	cin>>a>>b;
	
	cout<<Prime(a);
	cout<<endl;
	
	cout<<Fact(a);
	cout<<endl;
	
	cout<<Fact(b);
	cout<<endl;
	
	cout<<Prime(b);
	cout<<endl;
	
	cout<<Fact(a-b);
	cout<<endl;
	
	cout<<Fact(b-a);
	cout<<endl;
	
	cout<<Prime(a-b);
	cout<<endl;
	 
	 
	 	
	cout<<Prime(b-a);
	cout<<endl;
}
