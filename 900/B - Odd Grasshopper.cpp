#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll x, n;
	    cin>>x>>n;
	    
	    ll add=0;
	    
	   if (n%4 == 0)
	       add = 0;
	   else if (n%4 == 1)      
	       add = -1*n;
	   else if (n%4 == 2)          
	       add = 1;
	   else
	       add = n+1;
	       
	   if (abs(x)%2 == 1)    //Why it wont work without the abs for negative numbers? 
		  			 /* Haan samajh gaya
						Actually -3%2 1 thoda hoga -1 hoga
					I didnt realise that initially */
	        add *= -1;
	   
	   cout<<x+add<<endl;     
	}
}
