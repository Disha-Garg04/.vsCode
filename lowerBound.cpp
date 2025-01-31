#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findFloor(vector<int>  arr, int k)
{

    int end = arr.size() - 1;
    int start = 0;
    int ans = -1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
         cout << "start: " << start << ", end: " << end << ", mid: " << mid << ", arr[mid]: " << arr[mid] << endl;
        if (k == arr[mid])
        {
            return mid;
        }
        else if (k < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    vector<int>arr;
    int n;
    cin >> n;
    int k;
    cin >> k;
    for(int i = 0 ; i < n; i++){
        int el;
        cin >> el;
        arr.push_back(el);
    }
    cout << findFloor(arr, k);
    return 0;
}