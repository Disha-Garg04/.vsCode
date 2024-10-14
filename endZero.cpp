#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,0,2,4,0};
    int brr[5];
    int count = 0;
    int n = 5;
    int i = 0;
    while(i<n){

        if(arr[i]!=0){
            brr[i] = arr[i];
        }
        else{
            count++;
        }
    }
       

    return 0;
}