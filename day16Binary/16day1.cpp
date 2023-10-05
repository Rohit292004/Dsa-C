#include <iostream>
using namespace std;
int main(){
	
	
	
	//Dry run to convert decimal into binary
//	num=13
//	
//while(num>0)
//{
//	rem =num%2
//	num = num/2
//	ans = rem*mul +ans
//	mul = mul*10
//	
//	
//		num=13 , mul =1 ans= 0 
//	rem= 1
//	num= 6
//	ans= 1*1 + 0=1
//	mul =1*10 =10
//	
//	num(6)>0
//	rem =0
//	num = 3
//	ans =0*10 + 1 =1
//	mul = 10 *10= 100
//	
//	num(3)>0
//	rem=1
//	num =1
//	ans= 1*100 +1 =101
//	mul= 100*10 = 1000
//	
//	num(1)>0
//	rem=1
//	num= 0
//	ans = 1*1000 +101 =1101
//	mul=1000*10 =10000	
//}


//int num;
//cout<<"Enter the number :";
//cin>>num;
//
//int rem, ans=0, mul= 1;
//
//while(num>0)
//{
//	rem= num%2;
//	
//	num/=2;
//	
//	ans+= rem*mul;
//	
//	mul*=10;
//}
//
//cout<<ans<<endl;

	
								/*binary to decimal/	
	
int num;
cout<<"Enter the number :";
cin>>num;	

int mul=1 , ans=0, rem;

while(num>0)
{
	rem= num%10;   
	num/=10;
	
	ans= mul*rem+ans;
	
	mul*=2;
	
}

cout<<ans;


//dry run

//rem =num(1101) %10 =1
//
//num(1101)/=10 => 110
//
//ans = 1*1 +0 =>1
//
//mul =2*1 =2
//
////2nd
//
//rem= num(110) %10 =0
//num(110)/=10  => 11
//
//ans = 2*0 +1 =>2

  
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
