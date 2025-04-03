#include <bits/stdc++.h>
using namespace std;
# define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    ll size = n*k;
	    vector <ll> v(size, 0);
	    for(int i=0; i<size; i++)
	        cin>>v[i];
	        
	   
	    int count = k;
	    ll sum=0;
	    
	    for(int i=size-1-n+ceil(1.0*n/2); i>=0; i-=n-ceil(1.0*n/2)+1)
	    {
	        if(count!=0)
	        {
	            sum+=v[i];
	            count--;
	        }
	    }
	    cout<<sum<<endl;
	        
	}

}
