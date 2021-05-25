#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   vector<int> res;
   for(int i = 0;i < n;i++)
   {
       int ele;
       cin>>ele;
       res.insert(res.begin(),ele);
   }
   for(auto ele : res)
        cout<<ele<<" ";
   cout<<"\n";
}
