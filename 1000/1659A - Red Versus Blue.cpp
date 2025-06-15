#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, r, b;
	    cin>>n>>r>>b;
	    
	    int length_of_red = r/(b+1);
	    int extra_red = r%(b+1);
	    
	    for(int i=0; i<b+1; i++)
	    {
	        for(int j=0; j<length_of_red; j++)
	            cout<<'R';
	        if(extra_red>0)
	        {
	            cout<<'R';
	            extra_red--;
	        }
	        
	        if( i!= ((b+1)-1) )
	            cout<<'B';
	    }
	    cout<<endl;
	}
    return 0;
}
