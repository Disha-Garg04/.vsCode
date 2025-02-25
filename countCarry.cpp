#include <iostream>
using namespace std;
// 678 589
int main() {
    // Write C++ code here
    int n1, n2;
    cin >> n1 >> n2;
    int carry = 0;
    int flag = 0;
    if(n1 < n2){
        cout<<"Not Possible";
    }
    else{
        while(n2>0){
            if(n1 % 10 < n2 % 10){
                cout << n1 << " " << n2 << endl;
                cout << n1 % 10 << " " << n2 % 10 << endl;
                carry++;
                flag = 1;
            }
            else if(n1 % 10 == n2 % 10){
                if(flag == 1){
                    carry++;
                }
                flag = 0;
            }
            else{
                flag = 0;
            }
            n1 = n1/10;
            n2 = n2 / 10;
        }
        cout<<carry<<endl;
    }

    return 0;
}