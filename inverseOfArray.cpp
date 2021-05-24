#include <bits/stdc++.h>
using namespace std;
void inverse(int *arr,int n)
{
    int newarr[n];
    for(int i = 0;i < n;i++)
    {
        newarr[arr[i]] = i;
    }
    for(int i = 0;i < n;i++)
        cout<<newarr[i]<<" ";
    
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = {3,4,1,2,0};
	int n = sizeof(arr) / sizeof(arr[0]);
	inverse(arr,n);
	//printArray(arr, n);

	return 0;
}

