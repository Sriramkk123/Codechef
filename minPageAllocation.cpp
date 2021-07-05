#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> arr,int m,int curr_min){
    int n = arr.size();
    int studentsRequired = 1;
    int curr_sum = 0;
 
    // iterate over all books
    for (int i = 0; i < n; i++){
        // check if current number of pages are greater
        // than curr_min that means we will get the result
        // after mid no. of pages
        if (arr[i] > curr_min)
            return false;
 
        // count how many students are required
        // to distribute curr_min pages
        if (curr_sum + arr[i] > curr_min){
            // increment student count
            studentsRequired++;
 
            // update curr_sum
            curr_sum = arr[i];
 
            // if students required becomes greater
            // than given no. of students,return false
            if (studentsRequired > m)
                return false;
        }
 
        // else update curr_sum
        else
            curr_sum += arr[i];
    }
    return true;
}
int findPages(vector<int> arr,int m){
    long long sum = 0;
    for(auto ele : arr){
        sum += ele;
    }

    int left = 0;
    int right = sum;
    int res = -1;

    while(left <= right){
        int mid = (left + right)/2;
        if(isPossible(arr,m,mid)){
            res = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }

    return res;
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++)
        cin>>arr[i];
    int m;
    cin>>m;
    cout<<findPages(arr,m)<<"\n";
    return 0;
}
