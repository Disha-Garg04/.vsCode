#include <iostream>
#include <assert.h>
using namespace std;

void numericHollowHalfPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row || row == n - 1)
            {
                cout << col + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void numericHollowInvertedHalfPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = row + 1; col <= n; col++)
        {
            if (col == row + 1 || col == n || row == 0)
            {
                cout << col << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void numericPalindromeEquilateralPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row; col++)
        {
            cout << col + 1 << " ";
        }
        for (int col = row + 1; col > 0; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

void solidHalfDiamond(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < n - 1; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void butterflyPattern(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < row; col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row; col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void fancyPattern1(int n)
{
    assert(n <= 9);
    for (int row = 0; row < n; row++)
    {
        int start_index = 8 - row;
        int print_num = row + 1;
        int count = print_num;
        for (int col = 0; col < 17; col++)
        {
            if (col == start_index && count > 0)
            {
                cout << print_num << " ";
                start_index += 2;
                count--;
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void fancyPattern2(int n)
{
    int count = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << ++count << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    int start = count - n;
    for (int row = 0; row < n; row++)
    {
        int temp = start;
        for (int col = 0; col < (2 * n) - (2 * row + 1); col++)
        {
            if (col % 2 == 0)
            {
                cout << ++temp << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        start = start - (n - row - 1);
        cout << endl;
    }
}

void fancyPattern3(int n)
{
    cout << "* ";
    cout << endl;
    for (int row = 0; row < n; row++)
    {
        int cond = row <= n / 2 ? 2 * row : 2 * (n - row - 1);
        cout << "* ";
        for (int col = 0; col <= cond / 2; col++)
        {
            if (col <= cond / 2)
            {
                cout << col + 1 << " ";
            }
            else
            {
                cout << cond - col + 1;
            }
        }
        cout << "* ";
        cout << endl;
    }
    cout << "* " << endl;
}

void floydsTrianglePattern(int n)
{
    int count = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << ++count << " ";
        }
        cout << endl;
    }
}

void pascalTriangle(int n)
{
    for (int row = 1; row <= n; row++)
    {
        int c = 1;
        // for (int col = 0; col < n - row; col++)
        // {
        //     cout << "  ";
        // }
        for (int col = 1; col <= row; col++)
        {
            cout << c << "  ";
            c = c * (row - col) / (col);
        }
        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Enter no. of rows: ";
    cin >> n;

    //numericHollowHalfPyramid(n);
    //numericHollowInvertedHalfPyramid(n);
    //numericPalindromeEquilateralPyramid(n);
    // solidHalfDiamond(n);
    // butterflyPattern(n);
     //fancyPattern1(n);
    //fancyPattern2(n);
     fancyPattern3(n);
    // floydsTrianglePattern(n);
    // pascalTriangle(n);

    return 0;
}