#include <bits/stdc++.h>
using namespace std;
bool isGood(int mid,int n,int x,int y)
{
    return ((mid/x) + (mid/y) >= n-1);
}
int solve(int n,int x,int y)
{
    if(n == 1)
        return min(x,y);

    int ans = 0;
    int left = 0;
    int right = max(x,y)*n;

    while(left <= right)
    {
        int mid = (left + right)/2;

        if(isGood(mid,n,x,y))
        {
            ans = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return ans + min(x,y);
}
int main() {
    int n,x,y;
    cin>>n>>x>>y;
    cout<<solve(n,x,y)<<"\n";
    return 0;
}
