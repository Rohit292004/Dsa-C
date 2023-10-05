#include<iostream>
using namespace std;
int main(){
	
	
											/*1*/
	
//	int i=1, n;
//	cout<<"Enter the number :";
//	cin>>n;
//	while(i<=n)
//	{
//		if(i%2==0)
//		cout<<i<<endl;
//		
//		
//		i++;
//	}


//			int i=2, n;
//	cout<<"Enter the number :";
//	cin>>n;
//	
//	
//	do    {
//		if(i%2==0)
//		cout<<i<<endl;
//		i++;
//		
//	}while(i<=n);



									/*2Factorial*/

//int n;
//long long f=1;
//cout<<"Enter no for factorial :";
//cin>>n;
//
//while(n>1)
//{
//	f*=n;
//	n--;
//}
//
//cout<<"Fact="<<f;




//int n,i=1;
//long long f=1;
//cout<<"Enter no for factorial :";
//cin>>n;
//
//do
//{
//	f*=i;
//	i++;
//}while(i<=n);
//
//cout<<"Fact="<<f;


									/*3*/

//int n;
// cout<<"Enter no   :";
//cin>>n;
//int i=1;
//while(i<=n)
//{
//	if(i%3!=0 && i%5!=0)
//	cout<<i<<endl;
//	i++;
//}

								/*4*/
//int n;
//long long f=1;
//cout<<"Enter no   :";
//cin>>n;
//
//switch(n)
//{
//	    case 1: 
//			cout<<"jan";
//			break;
//			
//		case 2: 
//			cout<<"feb";
//			break;		
//		case 3: 
//			cout<<"march";
//			break;
//		case 4: 
//			cout<<"april";
//			break;
//		case 5: 
//			cout<<"may";
//			break;
//		case 6: 
//			cout<<"june";
//			break;
//		case 7: 
//			cout<<"july";
//			break;
//		case 8: 
//			cout<<"aug";
//			break;
//		case 9: 
//			cout<<"sept";
//			break;	
//		case 10: 
//			cout<<"oct";
//			break;
//		case 11: 
//			cout<<"nov";
//			break;
//		case 12: 
//			cout<<"dec";
//			break;				
//			
//			
//}
 


											/*5*/
 
// char var, VAR;
//    cout << "Enter a lowercase character: ";
//    cin >> var;
//    cout << "Enter an uppercase character: ";
//    cin >> VAR;
//
//while(var<='z'  )
//{
//	if(var>='a')
//   cout<<var<<endl;
//   var++;	
//}		
//
//while(VAR<='Z')
//{
//	if(var>='A')
//   cout<<VAR<<endl;
// VAR++;	
//}										


int n ,i=2;

bool isPrime =true;

cout<<"Enter the no :";
cin>>n;


if(n<=1)
{
	cout<<"Not Prime";
}
while(i<=n/2)
{
	if(n%i==0)
	{
		 isPrime=false;
	break;

	}
	
		i++;
}
	
	if (isPrime)
	{
		cout<<"Prime";
	}
	else
	cout<<"Not Prime";
	
 
	

 





	
}
