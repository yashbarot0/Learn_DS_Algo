//Check if a number is Palindrome or Not
// A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 132321;
    int m = n;
    int rev = 0;

    while(n){
        int ld = n%10;
        rev = (rev*10) + ld;
        n=n/10;
    }

    if(m==rev){
        cout << "pelindrome" << endl;
    }
    else cout<< "Not pelindrome" << endl; 
    return 0;
}