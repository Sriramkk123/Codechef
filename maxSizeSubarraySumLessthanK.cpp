#include <bits/stdc++.h>
using namespace std;

// Function to find number
// of subarrays having sum
// less than k.
int maxSizeSubarray(int arr[],int n, int k)
{
	int start = 0;
    int end = 0;
	int	count = 0;
    int sum = arr[0];
    int maxx = INT_MIN;
	while (start < n && end < n) {

		// If sum is less than k,
		// move end by one position.
		// Update count and sum
		// accordingly.
		if (sum < k) {
			end++;

            if (end < n)
				sum += arr[end];

            if(sum < k){
                maxx = max(maxx,end - start + 1);
            }
		}

		// If sum is greater than or
		// equal to k, subtract
		// arr[start] from sum and
		// decrease sliding window by
		// moving start by one position
		else {
			sum -= arr[start];
			start++;
		}
	}

	return maxx;
}

// Driver Code
int main()
{
	int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
	cout << maxSizeSubarray(arr, n, k)<<"\n";
}

