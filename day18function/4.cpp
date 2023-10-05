#include<iostream>
using namespace std;


/*Pass by value (int n)*/


/*Pass by reference (int &n)*/




//void Incr(int &n)
//{
//	n++;
//}

Swap(int &m , int &n)
{
	int r=m;
	m=n;
	n=r;
}


Swap(float &m , float &n)
{
	float s=m;
	m=n;
	n=s;
}

 

int main()
{
	int a,b;
  cout<<"Enter the number :";
  cin>>a>>b;
  Swap(a,b);
  cout<<a<<b;
  cout<<endl;
  
 float  c,d;
    cout<<"Enter the float number :";

  cin>>c>>d;
  Swap(c,d);
  cout<<c<<endl<<d;
  

}

