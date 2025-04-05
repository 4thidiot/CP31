#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector <ll> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	    
	    ll count=0;
	    
	    for(int i=n-2; i>=0; i--)
	    {
	       // if(v[n-1]==1)
	       // {
	       //     count = -1;
	       //     break;	            
	       // }
	        if(n==1)
	        {
	            count = 0;
	            break;	            
	        }
	        while(v[i]>=v[i+1])
	        {
	            v[i]/=2;
	            count++;
	            if(v[i]==v[i+1] && v[i]==0)
	            {
	                count=-1;
	                break;
	            }
	        }
	    }
	    
	    cout<<count<<endl;
	}
    return 0;
}   
