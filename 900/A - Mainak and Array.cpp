#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector <long long> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	    
	    long long ans=0;
	    for(int i=0; i<n-1; i++)
	        ans=max(v[i]-v[i+1], ans);
	    for(int i=1; i<n; i++)
	        ans=max(v[i]-v[0], ans);     
	    for(int i=0; i<n-1; i++)
	        ans=max(v[n-1]-v[i], ans);     
	         
	    cout<<ans<<endl;
	}
    return 0;
}
