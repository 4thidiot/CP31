#include <bits/stdc++.h>
using namespace std;

bool check(int x)
{
    int count_of_digits=0;
    int count_of_zeroes=0;
    while(x)
    {
        if(x%10==0)
            count_of_zeroes++;
        count_of_digits++;
        x/=10;
    }
    return count_of_zeroes == (count_of_digits-1); //return true if condition is true otherwise returns false
}



int main() 
{
	vector <int> round_numbers;      //precomputing all the round numbers
	for(int i=0; i<999999; i++)         
	{
	    if(check(i)==true)
	        round_numbers.push_back(i);
	}
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int answer=0;
        for(int i=0; i<round_numbers.size(); i++)
        {
            if(round_numbers[i]<=n)
                answer++;
            else
                break;
        }
        
        cout<<answer<<endl;
    }
    return 0;
}
