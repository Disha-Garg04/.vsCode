#include <iostream>
#include<math.h>
using namespace std;

bool checkPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void printPrime(int n) {
    for (int i = 2; i <= n; i++)
    {
        bool check = checkPrime(i);
        if(check){
            cout << i << " ";
        }
    }
}

int main()
{
    int n, count;
    // cout << "Enter a no: ";
    // cin >> n;
    cout<<"Enter a no upto which u want to print prime no.s: ";
    cin >> count;
    printPrime(count);
    // bool ans = checkPrime(n);
    // if (ans)
    // {
    //     cout << n << " is prime" << endl;
    // }
    // else
    // {
    //     cout << n << " is not prime" << endl;
    // }
    return 0;
}