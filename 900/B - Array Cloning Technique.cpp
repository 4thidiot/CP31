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
	    vector <int> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	        
	    sort(v.begin(), v.end());
	    
	    map <int, int> m;
	    for(auto it: v)
	        m[it]++;
	    
	    int number=0;
	    int max_freq=0;
	    for(auto it: m)
	    {
	        max_freq = max(max_freq, it.second);
	        if (max_freq==it.second)
	            number=it.first;
	    }
	    
	    int operations=0;
	    while(max_freq<n)
	    {
	        operations++;
	        if(max_freq*2<=n)
	        {
	            operations+=max_freq; //swaps
	            max_freq*=2;
	        }
	        else
	        {
	            operations+=(n-max_freq); //swaps till needed
	            max_freq=n;
	        }
	    }
	    cout<<operations<<endl;
	}
    return 0;
}
