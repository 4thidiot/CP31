#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, x;
	    cin>>n>>x;
	    vector <int> v(n+1);
	    v[0]=0;
	    for(int i=1; i<n+1; i++)
	        cin>>v[i];
	   
	    int tank=INT_MIN;
	    
	    for(int i=0; i<n; i++)
	        tank = max(tank, v[i+1]-v[i]);
	   
	    tank = max(tank, (x-v[n])*2);
	    
	    cout<<tank<<endl;
	}
    return 0;
}
