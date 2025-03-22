#include <bits/stdc++.h>
using namespace std;
#define ll long long //No ";" required at the end!

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector <ll> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	    
	    for(int i=0; i<n; i++)  //Since 1 divides everything
	    {
	        if(v[i]==1)
	            v[i]++;
	    }
	    
	    for(int i=1; i<n; i++)
	    {
	        if(v[i]%v[i-1]==0)
	            v[i]++;
	    }
	    
	    for(auto it : v)
	        cout<<it<<" ";
	    
        cout<<endl;     
	}
    return 0;
}
