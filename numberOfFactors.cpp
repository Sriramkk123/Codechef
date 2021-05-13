#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int ntc;
    cin>>ntc;
    while(ntc--)
    {
        long long n;
        cin>>n;

        unordered_map<long long,long long> primeFactor;

        while(n--)
        {
            long long num;
            cin>>num;

            for(int i = 2;i*i <= num;i++)
            {
                while(num%i == 0)
                {
                    primeFactor[i]++;
                    num/=i;
                }
            }
            if(num > 1)
            {
                primeFactor[num]++;
                num = 1;
            }
        }
        long long ans = 1;

        for(auto ele : primeFactor)
            ans *= (ele.second + 1);
        cout<<ans<<"\n";
    }
    return 0;
}