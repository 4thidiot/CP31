#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int c,d;
	    cin>>c>>d;
	    
	    if(b>d)
	        cout<<-1<<endl;
	    else
	    {
	        if( ((d-b)+a)-c < 0 )
	            cout<<-1<<endl;
	        else
	            cout<<((d-b)+a)-c + (d-b)<<endl;
	    }
	}

}
