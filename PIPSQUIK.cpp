#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
        int n,h,y1,y2,l;
        cin>>n>>h>>y1>>y2>>l;
        vector<pair<int,int>> vp;
        for(int i = 0;i < n;i++)
        {
            int type,height;
            cin>>type>>height;
            vp.push_back({type,height}); 
        }
        // for(auto ele : vp)
        //     cout<<ele.first<<" "<<ele.second<<"\n";
        int res = 0;
        for(int i = 0;i < n;i++)
        {
            pair<int,int> current = vp[i];
            int type = current.first;
            int heightOfBarrier = current.second;
            if(type == 1)
            {
                if((h-y1) <= heightOfBarrier)
                {
                    //cout<<"Can duck"<<(h-y1)<<"\n";
                    res++;
                }
                else
                {
                    //cout<<"Cannot duck"<<(h-y1)<<"\n"; 
                    res++;
                    l--;
                }
                if(l == 0)
                {
                    res--;
                    break;
                }
            } 
            else if(type == 2)
            {
                if((heightOfBarrier - y2) <= 0)
                {
                   // cout<<"Can jump"<<(heightOfBarrier - y2)<<"\n";
                    res++;
                }
                else
                {
                    //cout<<"Cannot jump"<<(heightOfBarrier - y2)<<"\n";
                    res++;
                    l--;
                    if(l == 0)
                    {
                        res--;
                        break;
                    }
                }
            }
            if(l == 0)
            {
                break;
            }
        }
        cout<<(res)<<"\n";
    }
	return 0;
}