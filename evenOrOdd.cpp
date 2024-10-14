#include <iostream>
using namespace std;

bool evenOrOdd(int n)
{
    if (n & 1)
        return false;
    else
    {
        return true;
    }
}

int main()
{
    int n;
    cout << "Enter no.: ";
    cin >> n;
    bool check = evenOrOdd(n);
    if (check)
    {
        cout << n << " is even" << endl;
    }
    else
    {
        cout << n << " is odd" << endl;
    }
    return 0;
}