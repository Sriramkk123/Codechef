#include<bits/stdc++.h>
using namespace std;
void printSpiral(vector<vector<int>> arr)
{
    int startRow = 0;
    int startCol = 0;
    int endRow = arr.size() - 1;
    int endCol = arr[0].size() - 1;
    int numberOfElements = ((endRow+1)*(endCol+1));
    int count = 0;
    while(count < numberOfElements)
    {
        for(int col = startCol;count < numberOfElements && col <= endCol;col++)
        {
            cout<<arr[startRow][col]<<" ";
            count++;
        }
        startRow++;

        for(int row = startRow;count < numberOfElements && row <= endRow;row++)
        {
            cout<<arr[row][endCol]<<" ";
            count++;
        }
        endCol--;


        for(int col = endCol;count < numberOfElements &&  col >= startCol;col--)
        {
            cout<<arr[endRow][col]<<" ";
            count++;
        }
        endRow--;

        for(int row = endRow;count < numberOfElements &&  row >= startRow;row--)
        {
            cout<<arr[row][startCol]<<" ";
            count++;
        }
        startCol++;
    }
}
int main() {
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i = 0;i < n;i++)
        for(int j = 0;j < n;j++)
            cin>>arr[i][j];
    printSpiral(arr);
    return 0;
}