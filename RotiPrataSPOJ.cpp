#include <bits/stdc++.h>
using namespace std;
bool isPossible(long long mid,vector<int> ranks,long long p)
{
    long long count = 0;
    for(auto rank : ranks)
    {
        long time = 0;
        int j = 1;
        while(true)
        {
            time += j*rank;
            j++;
            if(time > mid)
                break;
            count++;
        }
    }
    return count >= p;
}
int pratas(long long p,vector<int> ranks,int max)
{
    int ans = 0;
    long long left = 0;
    long long right = 0;

    long time = 0;

    int count = 0;
    int i = 1;
    while(count < p)
    {
        time += i*max;
        i++;
        count++;
    }
    right = time;
    while(left <= right)
    {
        long mid = (left + right)/2;

        if(isPossible(mid,ranks,p))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    int maxx = INT_MIN;
    while(t--)
    {
        long long n;
        cin>>n;
        int cooks;
        cin>>cooks;
        vector<int> ranks(cooks);
        for(int i = 0;i < cooks;i++)
        {
            cin>>ranks[i];
            if(ranks[i] > maxx)
                maxx = ranks[i];
        }
        cout<<pratas(n,ranks,maxx)<<"\n";        
    }
}
