#include <bits/stdc++.h>
using namespace std;

void frequencyCount(vector<int> &arr, int N, int P)
{
    // do modify in the given array
    int hash[N + 1] = {0};
    for (int i = 0; i < N; i++)
    {
        if (arr[i] <= N)
        {
            hash[arr[i]] += 1;
        }
    }
    for (int i = 0; i < N; i++)
    {
        arr[i] = hash[i + 1];
    }
}
int main()
{
    vector<int> arr = {2,4,5,5,2};
    int N = 5, P = 5;
     frequencyCount(arr, N, P);
     for(int i=0; i< N; i++){
        cout<<i+1<<" -> " <<arr[i]<<endl; 
     }
    return 0;
}