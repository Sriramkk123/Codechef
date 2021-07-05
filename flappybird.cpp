#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n,h;
	cin >> n >> h;
    vector<pair<int,int>> obst(n);
    for(int i = 0;i < n;i++){
        cin>>obst[i].first;
    }
    for(int i = 0;i < n;i++){
        cin>>obst[i].second;
        obst[i].second -= h;
    }
    int moves = 0;
    bool possible = true;
    for(auto ele  : obst){
        int x = ele.first;
        int h = ele.second;
        if(x <= h){
            possible = false;
            break;
        }
        moves = max(moves,(x+h+2)/2);
    }
    if(possible)
        cout<<moves<<"\n";
    else
        cout<<"-1"<<"\n";
}

int main() {
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}