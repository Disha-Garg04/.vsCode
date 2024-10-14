#include <iostream>
using namespace std;

void countSetBits1(int n)
{
    int count = 0;
    int bit = 1;
    while (n > 0)
    {
        bit = n % 2;
        if (bit == 1)
        {
            count++;
        }
        n /= 2;
    }
    cout<<count;
}

void countSetBits2(int n){
    int count = 0;
    while(n) {
        if(n & 1){
            count ++;
        }
        n >>= 1;
    }
    cout<<count;
}

int main()
{
    int n;
    cout << "Enter a no: ";
    cin >> n;
    // countSetBits1(n);
    countSetBits2(n);
    return 0;
}