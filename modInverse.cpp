
#include <iostream>
using namespace std;
long long power(int a,int b,int m)
{
	if(b == 0)
		return 0;

	long long result = 1;
	while(b > 0)
	{
		if(b&1)
		{
			result = (result*a)%m;
		}
		a = (a*a)%m;
		b = b >> 1;
	}
	return result;	
}
int main() {
	// your code goes here
	int a,m;
	cin>>a>>m;
	cout<<power(a,m-2,m)<<"\n";
	return 0;
}
