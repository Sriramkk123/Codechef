#include <bits/stdc++.h>
using namespace std;
int minStepsInInfiniteGrid(vector<int> A, vector<int> B)
{
    int prev_x = A[0];
    int prev_y = B[0];
    int ans = 0;
    for(int i = 1;i < A.size();i++)
    {
        int curr_x = A[i];
        int curr_y = B[i];
        int diff_x = abs(curr_x - prev_x);
        int diff_y = abs(curr_y - prev_y);
        ans += max(diff_x,diff_y);
        prev_x = curr_x;
        prev_y = curr_y;
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> arrA;
    vector<int> arrB;
    for(int i = 0;i < n;i++)
    {
        int ele;
        cin>>ele;
        arrA.push_back(ele);
    }
    for(int i = 0;i < n;i++)
    {
        int ele;
        cin>>ele;
        arrB.push_back(ele);
    }
    cout<<minStepsInInfiniteGrid(arrA,arrB)<<"\n";
}
