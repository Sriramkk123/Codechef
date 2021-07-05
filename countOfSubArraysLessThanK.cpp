#include <bits/stdc++.h>
using namespace std;

// Function to find number
// of subarrays having sum
// less than k.
int countSubarrays(int arr[],int n, int k)
{
	int start = 0;
    int end = 0;
	int	count = 0;
    int sum = arr[0];

	while (start < n && end < n) {

		// If sum is less than k,
		// move end by one position.
		// Update count and sum
		// accordingly.
		if (sum < k) {
			end++;

			if (end >= start)
				count += end - start;

			// For last element,
			// end may become n
			if (end < n)
				sum += arr[end];
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

	return count;
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
	cout << countSubarrays(arr, n, k)<<"\n";
}

