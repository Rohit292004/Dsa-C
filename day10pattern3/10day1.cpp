#include <iostream>
using namespace std;
int main(){

															//    *
															//   **
															//  ***
															// ****
															//*****


//	int n ,r,c;
//	cout<<"Enter n";
//	cin>>n;
//	
//	for(int r=1;r<=n;r++)
//	{
//		for(int s=(n-1);s>=r;s--)
//		{
//			cout<<" ";
//		}
//		for(int c=1;c<=r;c++)
//		{
//			cout<<"*";
//		}
//		
//		cout<<endl;
//	}

												/*OR*/
//	int n ,r,c;
//	cout<<"Enter n : ";
//	cin>>n;
//	
//	for(int r=1;r<=n;r++)
//	{
//		for(int c=1;c<=(5-r);c++)
//		{
//			cout<<" ";
//		}
//		for(int c=1;c<=r;c++)
//		{
//			cout<<"*";
//		}
//		
//		cout<<endl;
//	}				


															/**/		

															//    1
															//   22
															//  333
															// 4444
															//55555
//	int n;
//	cout<<"Enter n : ";
//	cin>>n;
//	
//	for(int r=1;r<=n;r++)
//	{
//	
//	    for(int c=1;c<=n-r;c++)
//	    {
//	        cout<<" ";	
//		}
//	    
//		for(int c=1;c<=r;c++)
//		{
//			cout<<r;
//		}
//		
//		cout<<endl;
//	}					

																/**/
												//    1
												//   12
												//  123
									            // 1234
                                                //12345																
//	int n;
//	cout<<"Enter n :";
//	cin>>n;
//		
//    for(int r=1;r<=n;r++)
//    {
//       for(int c=1;c<=n-r;c++)
//	   {
//	       cout<<" ";	  	
//       }  	
//       
//       for(int c=1;c<=r;c++)
//       {
//       	cout<<c;
//	   }
//	   
//	   cout<<endl;
//    }																
													
													/**/
//  												    A
//  												   AB
//  												  ABC
// 													 ABCD
//													ABCDE		
		
//	int n;
//	cout<<"Enter n :";
//	cin>>n;
//		
//    for(int r=1;r<=n;r++)
//    {
//       for(int c=1;c<=n-r;c++)
//	   {
//	       cout<<" ";	  	
//       }  	
//       
//       for(int c=1;c<=r;c++)
//       {
//       	char name='A'+(c-1);
//       	cout<<name;
//	   }
//	   
//	   cout<<endl;
//    }						

												/*OR*/
												
 																				
//	int n;
//	cout<<"Enter n :";
//	cin>>n;
//		
//    for(int r=1;r<=n;r++)
//    {
//       for(int c=1;c<=n-r;c++)
//	   {
//	       cout<<" ";	  	
//       }  	
//       
//       for(char name='A';name<='A'+r-1;name++)
//       {
//     
//       	cout<<name;
//	   }
//	   
//	   cout<<endl;
//    }			


														/*H.W*/														
						
//
//      1
//     21
//    321
//   4321
//  54321


//int n;
//cout<<"Enter n ";
//cin>>n;
//for(int r=1;r<=n;r++)
//{
//    for(int c=1;c<=n-r;c++)
//	{
//        cout<<" ";		  	
//	}	
//	
//	for(int c=r;c>=1;c--)
//	{
//		cout<<c;
//	}
//	
//	cout<<endl;
//}							



												/*H.W*/
												
												
    *
   ***
  *****
 *******
*********

	int n;
	cout<<"Enter n" ;
	cin>>n;											
	
	
	for(int r=1;r<=n;r++)
	{
	   for(int c=n;c>r;c--)
	   {
	   	cout<<" ";
	   }
	   
	   for(int c=1;c<=(r*2)-1;c+=1)
	   {
	   	cout<<"*";
	   }
	   
	   for(int c=n;c>r;c--)
	   {
	   	cout<<" ";
	   }
	   
	   cout<<endl;
	}											

			
																
																
																
																
																
																
																
																
																
																
																
																
																
																
																
																
																
																
																														


}
