#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, k, x;
	    cin>>n>>k>>x;
	    
	    ll min_sum = k*(k+1)/2;
	    ll max_sum = n*(n+1)/2 - (n-k)*(n-k+1)/2;
	    
	    if (x>=min_sum && x<=max_sum)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	
	}
    return 0;
}
