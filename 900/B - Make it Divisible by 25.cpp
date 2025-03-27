#include <bits/stdc++.h>
using namespace std;

int min_operations(string n, string possible_value)
{
    int operations = 0;
    int checker_index = possible_value.size()-1; //like 25 mein 5 ko point karega pehle
    for(int i = n.size()-1; i>=0; i--) //n.size()-1 string ke last char ko point karega
    {
        if(n[i] == possible_value[checker_index])
        {
            checker_index--;
            if(checker_index<0)
                break;
        }
        else
            operations++;
    }
    if(checker_index >= 0)
        operations = INT_MAX; //matlab 00 ya jo bhi nhi mila to b=when function used then min hi hoga to hack
    return operations;    
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string n;
	    cin>>n;
	    vector <string> possible_values = {"00", "25", "50", "75"};
	    int ans = INT_MAX;
        for (auto possible_value : possible_values)	
            ans = min(ans, min_operations(n, possible_value));
        cout<<ans<<endl;    
	}
    return 0;
}
