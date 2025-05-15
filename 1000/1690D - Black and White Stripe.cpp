#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    vector <int> prefix(n+1, 0);  //creating the prefix array in the next 2 lines
	    for(int i=0; i<n; i++) 
	        prefix[i+1] = prefix[i] + (s[i]=='W'); //return 1 if true else 0
	        
	    int min_cells = INT_MAX;
	    for(int i=0; i <= n-k; i++)
	    {
	        int diff = prefix[i+k] - prefix[i];
	        min_cells = min(min_cells, diff);
	    }
	    cout<<min_cells<<endl;
	}
    return 0;
}
