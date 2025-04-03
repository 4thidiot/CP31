#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    long long x;
	    cin>>n>>x;
	    vector <long long> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	        
	    long long maximum=0, minimum=0;
	    for(int i=0; i<n; i++)
	        maximum += ceil(v[i]*1.0/x);
	    
	    long long sum=0;
	    for(int i=0; i<n; i++)
	        sum+=v[i];
	    
	    minimum = ceil((sum*1.0)/x);     
	    
	    cout<<minimum<<" "<<maximum<<endl;
	}

}
