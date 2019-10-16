#include<iostream>
using namespace std;
int fact(int n)
{
	if (n==1)
	return 1;
	
	else
	 return n*fact(n-1);
}
int main()
{
int x;
cout<<"enter a positive number"<<endl;
cin>>x;
cout<<"factorial is"<<fact(x) ;
return 0;
}
