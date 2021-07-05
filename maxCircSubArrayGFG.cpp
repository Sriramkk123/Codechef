#include <bits/stdc++.h>
using namespace std;

using namespace std;
 
// Standard Kadane's algorithm to
// find maximum subarray sum
int kadane(int a[], int n);
 
// The function returns maximum
// circular contiguous sum in a[]
int maxCircularSum(int a[], int n)
{
    // Case 1: get the maximum sum using standard kadane'
    // s algorithm
    int max_kadane = kadane(a, n);
     // if maximum sum using standard kadane' is less than 0
    if(max_kadane < 0)
      return max_kadane;
 
    // Case 2: Now find the maximum sum that includes
    // corner elements.
    int max_wrap = 0, i;
    for (i = 0; i < n; i++) {
        max_wrap += a[i]; // Calculate array-sum
        a[i] = -a[i]; // invert the array (change sign)
    }
 
    // max sum with corner elements will be:
    // array-sum - (-max subarray sum of inverted array)
    max_wrap = max_wrap + kadane(a, n);
 
    // The maximum circular sum will be maximum of two sums
    return (max_wrap > max_kadane) ? max_wrap : max_kadane;
}
 
// Standard Kadane's algorithm to find maximum subarray sum
// See https:// www.geeksforgeeks.org/archives/576 for details
int kadane(int a[], int n)
{
    int max_so_far = 0, max_ending_here = 0;
    int i;
    for (i = 0; i < n; i++) {
        max_ending_here = max_ending_here + a[i];
         
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
          if (max_ending_here < 0)
              max_ending_here = 0;
    }
    return max_so_far;
}

//2nd Method
// The function returns maximum
// circular contiguous sum in a[]
int maxCircularSum(int a[], int n)
{
	// Corner Case
	if (n == 1)
		return a[0];

	// Initialize sum variable which store total sum of the array.
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	// Initialize every variable with first value of array.
	int curr_max = a[0], max_so_far = a[0], curr_min = a[0], min_so_far = a[0];

	// Concept of Kadane's Algorithm
	for (int i = 1; i < n; i++) {
		// Kadane's Algorithm to find Maximum subarray sum.
		curr_max = max(curr_max + a[i], a[i]);
		max_so_far = max(max_so_far, curr_max);

		// Kadane's Algorithm to find Minimum subarray sum.
		curr_min = min(curr_min + a[i], a[i]);
		min_so_far = min(min_so_far, curr_min);
	}

	if (min_so_far == sum)
		return max_so_far;

	// returning the maximum value
	return max(max_so_far, sum - min_so_far);
}

/* Driver program to test maxCircularSum() */
int main()
{
	int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++)
        cin>>arr[i];
	cout <<maxCircularSum(arr, n) << endl;
	return 0;
}
