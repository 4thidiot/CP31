#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	   ll a, b;
	   cin>>a>>b;
	   if(b>a)
	        swap(a,b);
	        
	   if(a==b)
	        cout<<"0 0"<<endl;
	   else
	   {
	       ll gcd = a-b;
	       ll answer = min(b%gcd, gcd - b%gcd);
	       cout<<gcd<<" "<<answer<<endl;
	   }
	}
    return 0;
}
