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
	    int a=1, b=n-1;
	    for(int i=2; i*i<=n; i++)
	    {
	        if(n%i==0)
	        {
	            a=n/i; //largest factor 
	            b=n-a; //its counterpart from the back
	            break;
	        }
	    } 
	    cout<<a<<" "<<b<<endl;
	}
    return 0;
}
