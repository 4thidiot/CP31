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
	    
	    int count1=0, count0=0, size_new=0;
	    for(int i=0; i<s.size(); i++)
	    {
	        if(s[i]=='1')
	            count1++;
	        else
	            count0++;
	    }
	    
	    for(int i=0; i<s.size(); i++)
	    {
	        if(s[i]=='1' && count0>0)
	        {
	            count0--;
	            size_new++;
	        }     
	        else if(s[i]=='0' && count1>0)
	        {
	            count1--;
	            size_new++;
	        }
	        else
	            break;
	    }
	    cout<<s.size() - size_new<<endl;      
	}
    return 0;
}
