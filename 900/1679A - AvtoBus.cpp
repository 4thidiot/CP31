#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long a=n;
	    
	    if(n%2==1 || n==2)
	        cout<<-1<<endl;
	    else if(n==4 || n==6)
	        cout<<1<<" "<<1<<endl;
	    else if(n==8 || n==10)
	        cout<<2<<" "<<2<<endl;
	    else if(n%12==0)
	    {
	        cout<<n/6<<" "; //for minimum
	        cout<<a/4<<endl; //for maximum
	    }
	    else if((n-2)%12==0)
	        cout<<2+((n-8)/6)<<" "<<1+((a-6)/4)<<endl;
	    else if((n-4)%12==0)
	        cout<<1+((n-4)/6)<<" "<<a/4<<endl;
	    else if((n-6)%12==0)
	        cout<<n/6<<" "<<1+((a-6)/4)<<endl;
	    else if((n-8)%12==0)
	        cout<<2+((n-8)/6)<<" "<<2+((a-12)/4)<<endl;
	}
}


//better faster approach

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<4 || n%2==1)
            cout<<-1<<'\n';
        else
        {
            ll min_buses = ceil(n*1.0 / 6); //*1.0 makes it float warna n/6 to floor down hi hojaayega then ceil kya hi karega uska
            ll max_buses = n/4;
            cout<<min_buses<<" "<<max_buses<<'\n';
        }
    }
    return 0;
}
