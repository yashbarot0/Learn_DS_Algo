// Reverse Digits of A Number
// Note:-  If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 1040045;

    int rev = 0;

    while(n){
        // Extract the last digit of
		// 'n' and store it in 'ld'.
		int ld = n % 10;
		// Multiply the current reverse number
		// by 10 and add the last digit.
		rev = (rev * 10) + ld;
		// Remove the last digit from 'n'.
		n = n / 10;
    }

    cout << rev << endl;
    return 0;
}