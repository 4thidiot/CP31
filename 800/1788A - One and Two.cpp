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
	        
	    int twos=count(v.begin(), v.end(), 2);
	    int count2=0;
	    int ans=0;
        if(twos%2==1)
            cout<<-1<<endl;
        else
        {
           for(int i=0; i<n; i++)
           {
               if(v[i]==2)
                    count2++;
               ans++;         
               if(count2==twos/2)  
                    break;
                      
           }
           cout<<ans<<endl;
        }

	}
    return 0;
}
