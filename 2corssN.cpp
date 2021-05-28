#include <iostream>
using namespace std;
int numberOfWay2CrossN(int n)
{
    if(n == 1)
        return 1;

    if(n == 2)
        return 2;
    int first = 0;
    int second = 1;
    int res;
    for(int i = 2;i <= n;i++)
    {
        res = first + second;
        first = second;
        second = res;
    }
    return res;
}
int main() {
    int n;
    cin>>n;
    cout<<numberOfWay2CrossN(n)<<"\n";
    return 0;
}
