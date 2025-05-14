#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll a, b;
	    cin>>a>>b;
	    
	    ll ans = INT_MAX;
	    for(int addition=0; addition<=31; addition++) //O(log2(10^9)) = 31
	    {
	        ll operations = addition;
	        ll new_b = b + addition;
	        
	        if(new_b == 1)  //corner case
	            continue;
	            
	        ll copy_a = a;
	        
	        while(copy_a>0)
	        {
	            copy_a /= new_b;
	            operations++;
	        }
	        ans = min(ans, operations);
	    }
	    cout<<ans<<endl;
	}
    return 0;
}
