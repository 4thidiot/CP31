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
        
        int n = s.length();
        int ab=0, ba=0, a=0, b=0;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='a' && s[i+1]=='b')
                ab++;
            else if(s[i]=='b' && s[i+1]=='a')    
                ba++;
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='a')
                a++;
            else
                b++;
        }
        
        if(ab == ba)
            cout<<s<<endl;
        else
        {
            if(ab>ba || ba>ab)
            {
                if(ab-ba==1)
                {
                    for(int i=0; i<n-1; i++)
                        cout<<s[i];
                    cout<<'a'<<endl;    
                }
                else if(ba-ab==1)
                {
                    for(int i=0; i<n-1; i++)
                        cout<<s[i];
                    cout<<'b'<<endl;    
                }
            }
        }
    }
    return 0;
}
