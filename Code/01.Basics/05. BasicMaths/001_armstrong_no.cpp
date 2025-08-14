#include<bits/stdc++.h>
using namespace std ; 



bool isArmstrong(int n) {
        int x = n;
        bool yes = true;
        bool no = false;
        int ams_no = 0;
        while (x > 0) {
            int last_digit = x % 10;
            int last_digit_power = last_digit * last_digit * last_digit;
            ams_no += last_digit_power;
            x = x / 10;
        }

        if (n == ams_no) {
            return yes;
        }

        else {
            return no;
        }
    }

    
int main ()
{
    int n ; 
    cin >> n ; 
    cout<<isArmstrong(n); 
}