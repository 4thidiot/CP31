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
	    vector <char> v(n);
	    
	    int infinity=0;
	    int count=0;
	    
	    for(int i=0; i<n; i++)
	    cin>>v[i];
	    for(int i=0; i<n-2; i++)
	    {
	        if(v[i]=='.' && v[i+1]=='.' && v[i+2]=='.')
	        {
	            infinity=1;
	            break;
	        }
	        else if (v[i]=='.')
	            count++;
	    }
	    
	    if(v[n-2]=='.')
	        count++;
	    if(v[n-1]=='.')
	        count++;       
	    
	    if(infinity==1)
	        cout<<2<<endl;
	    else
	        cout<<count<<endl;
	}
 
}
