#include <bits/stdc++.h>
using namespace std;
vector<int> kRotate(vector<int> A, int k)
{
    int n = A.size();
    vector<int> res(A.size());
    k = k%n;
    if(k < 0)
        k += n;
    for(int i = 0;i < A.size();i++)
    {
        if(i < k)
        {
            res[i] = A[i + n - k];
        }
        else
            res[i] = A[i - k];
    }
    return res;
}
int main() {
    int sizeA,k;
    cin>>sizeA>>k;
    vector<int> arrA;
    for(int i = 0;i < sizeA;i++)
    {
        int ele;
        cin>>ele;
        arrA.push_back(ele);
    }
    vector<int> res = kRotate(arrA,k);
    for(auto ele : res)
        cout<<ele<<" ";
    cout<<"\n";
}
