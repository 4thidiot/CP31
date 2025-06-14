#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a,b;
	    cin>>a>>b;
	    
	    ll ra=a;
	    ll rb=b;
	    
	    while(ra%2==0)
	        ra/=2;
	    while(rb%2==0)
	        rb/=2;
	        
	    if(ra!=rb)
	    {
	        cout<<-1<<endl;
	        continue;
	    }
	    a /= ra;
	    b /= rb;
	    a = log2(a);
	    b=log2(b);
	    
	    cout<<ceil(abs(a-b)/3.0)<<endl;
	}
    return 0;
}

    //No - a%b!=0,2,4,8 && b/a!=0,2,4,8 also when b=1 && a%0,4,2,8!=0
    // 
