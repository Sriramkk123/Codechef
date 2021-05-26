#include <bits/stdc++.h>
using namespace std;
vector<int> findSum(vector<int> A, vector<int> B)
{
    vector<int> res;
    int i = A.size() - 1;
    int j = B.size() - 1;
    int carry = 0;
    while(i >= 0 || j >= 0)
    {
        int sum = carry;

        if(i >= 0)
            sum += A[i];

        if(j >= 0)
            sum += B[j];

        int rem = sum%10;
        carry = sum/10;

        res.insert(res.begin(),rem);
        i--;
        j--;
    }
    if(carry != 0)
        res.insert(res.begin(),carry);
    return res;
}
int main() {
    int sizeA,sizeB;
    cin>>sizeA>>sizeB;
    vector<int> arrA,arrB;
    for(int i = 0;i < sizeA;i++)
    {
        int ele;
        cin>>ele;
        arrA.push_back(ele);
    }
    for(int i = 0;i < sizeB;i++)
    {
        int ele;
        cin>>ele;
        arrB.push_back(ele);
    }
    vector<int> res = findSum(arrA,arrB);
    for(auto ele : res)
        cout<<ele<<" ";
    cout<<"\n";
}
