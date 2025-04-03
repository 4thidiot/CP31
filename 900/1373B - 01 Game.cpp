#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int count0=0, count1=0;
	    for(int i=0; i<s.size(); i++)
	    {
	        if(s[i]=='0')
	            count0++;
	        else 
	            count1++;
	    }
	    int pairs = min(count0, count1);
	    
	    if(pairs%2==0)
	        cout<<"NET"<<endl;
	    else
	        cout<<"DA"<<endl;
	}
    return 0;
}
