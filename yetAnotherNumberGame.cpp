#include <iostream>
using namespace std;

void whoWins(int n)
{
    if(n&1)
        cout<<"BOB"<<"\n";
    else
        cout<<"ALICE"<<"\n";
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    whoWins(n);
	}
	return 0;
}
