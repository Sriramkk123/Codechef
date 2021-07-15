#include <iostream>
using namespace std;
void findSumOfProperDivisors(int n)
{
    int ans = 1;
    for(int i = 2;i*i <= n;i++)
    {
        if(n%i == 0)
        {
            if(n/i != i)
                ans += (i + n/i);
            else
                ans += i;
        }
    }
    cout<<ans<<"\n";
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
        findSumOfProperDivisors(n);
	}
	return 0;
}
