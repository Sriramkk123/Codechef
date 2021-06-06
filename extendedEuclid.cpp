
#include <iostream>
using namespace std;
struct extEcu{
	int x;
	int y;
};
struct extEcu extendedEuclid(int a,int b)
{
	if(b == 0)
	{
		extEcu ex;
		ex.x = 1;
		ex.y = 0;
		return ex;
	}
	extEcu res = extendedEuclid(b,a%b);
	extEcu e;
	e.x = res.y;
	e.y = (res.x - (a/b)*res.y);
	return e;
}
int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	extEcu res = extendedEuclid(a,b);
	cout<<res.x<<" "<<res.y<<"\n";
	return 0;
}