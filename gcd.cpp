#include<iostream>
using namespace std;
int gcd(int n1, int n2){


if (n2 != 0)
       return gcd(n2, n1%n2);
    else 
       return n1;

}

int main()
{
   int a,b;
   cout<<"enter 2 positive integers"<<endl;
   cin>>a>>b;
   cout<<"gcd of the numbers is "<<gcd(a,b);

   return 0;
}

