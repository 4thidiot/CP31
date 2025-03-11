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
	    vector <long long> a(n);
	    for(int i=0; i<n; i++)
	        cin>>a[i];
	    
	    bool allsame=true;
	    for(int i=1; i<n; i++)
	    {
	        if(a[i]!=a[i-1])
	        {
	            allsame=false;
	            break;
	        }
	    }
	    
	    if(allsame)
	        cout<<-1<<endl;
	    else
        {
           long long mx = *max_element(a.begin(), a.end());
           vector <long long> b, c;
           for(int i=0; i<n; i++)
           {
               if(a[i]!=mx)
                    b.push_back(a[i]);
               else
                    c.push_back(a[i]);
           }
           
           cout<<b.size()<<" "<<c.size()<<endl;
           for(auto it : b)
                cout<<it<<" ";
           cout<<endl;
           for(auto it : c)
                cout<<it<<" ";
           cout<<endl;        
        }
	}
    return 0;
}

