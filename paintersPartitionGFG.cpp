#include <bits/stdc++.h>
using namespace std;

//1st method
int summ(int arr[],int n){
        int total = 0;
        for(int i = 0;i < n;i++)
            total = (total + arr[i])%1000000007;
        return total;
}
bool isPossible(int arr[], int mid,int n,int k){
    long long x = 1;
    long long y = 0;
    int i = 0;
    while(i < n){
        if(y + arr[i] <= mid){
            y = (y + arr[i])%1000000007;
        }else if(arr[i] > mid){
            x = (k + 1)%1000000007;
            break;
        }else{
            x = (x + 1)%1000000007;
            y = arr[i]%1000000007;
        }
        i++;
    }
    return x%1000000007 <= k%1000000007;
}
long long minTime1(int arr[], int n, int k)
{
    // code here
    // return minimum time
    long long sum = summ(arr,n);
    long long high = sum;
    long long low = (sum/k)%1000000007;
    long long ans = high%1000000007;
    
    while(low <= high){
        long long mid = low + (high - low)/2;
        if(isPossible(arr,mid,n,k)){
            ans = mid%1000000007;
            high = (mid - 1)%1000000007;
        }else{
            low = (mid + 1)%1000000006;
        }
    }
    return ans;
}


//2nd method
int getMax(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

// return the sum of the elements in the array
long long getSum(int arr[], int n)
{
    long long total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    return total;
}

int numberOfPainters(int arr[], int n, long long maxLen)
{
    long long total = 0, numPainters = 1;

    for (int i = 0; i < n; i++) {
        total += arr[i];

        if (total > maxLen) {
            total = arr[i];
            numPainters++;
        }
    }

    return numPainters;
}

long long minTime(int arr[], int n, int k)
{
    long long lo = getMax(arr, n);
    long long hi = getSum(arr, n);

    while (lo < hi) {
        long long mid = lo + (hi - lo) / 2;
        long long requiredPainters = numberOfPainters(arr, n, mid);

        // find better optimum in lower half
        // here mid is included because we
        // may not get anything better
        if (requiredPainters <= k)
            hi = mid;

        // find better optimum in upper half
        // here mid is excluded because it gives
        // required Painters > k, which is invalid
        else
            lo = mid + 1;
}
	return lo;
}
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0;i < n;i++)
        cin>>arr[i];
    cout<<minTime1(arr,n,k);
}
