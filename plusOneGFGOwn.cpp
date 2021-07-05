#include <bits/stdc++.h>
using namespace std;
 vector<int> incrementOwn(vector<int> arr ,int N) {
        // code here
        int carry = 0;
        for(int i = N - 1;i >= 0;i--){
            if(i == N - 1 && arr[i] == 9){
                carry = 1;
                arr[i] = 0;
            }else if(carry){
                arr[i] += carry;
                if(arr[i] == 10){
                    arr[i] = 0;
                    carry = 1;
                }else{
                    carry = 0;
                }
            }else{
                if(i == N - 1)
                    arr[i] += 1;
                    break;
            }
        }
        if(carry){
            arr.insert(arr.begin(),1);
        }
        return arr;
}
vector<int> increment(vector<int> arr ,int N) {
  
        // Add 1 to last digit and find carry 
        arr[N-1] += 1; 
        int carry = arr[N-1]/10; 
        arr[N-1] %= 10; 
      
        // Traverse from second last digit 
        for (int i=N-2; i>=0; i--) 
        { 
            if (carry == 1) 
            { 
               arr[i] += 1; 
               carry = arr[i]/10; 
               arr[i] %= 10; 
            } 
        } 
      
        // If carry is 1, we need to add 
        // a 1 at the beginning of vector 
        if (carry == 1) 
            arr.insert(arr.begin(), 1); 
        
        return arr;
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++)
        cin>>arr[i];
    vector<int> res = increment(arr,n);
    for(auto ele : res)
        cout<<ele<<" ";
    cout<<"\n";
}
