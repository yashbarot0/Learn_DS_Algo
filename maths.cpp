#include <bits/stdc++.h>
using namespace std;
//Problem Statement: Given an integer N, return the number of digits in N.

// Algorithm
// Step 1: Initialise a variable to store the count of digits of the number.
// Step 2: The count of digits can be calculated using log10 N + 1.

int main(){
    int n = 12345;
    int count = 0;
    count = int(log10(n))+1;
    cout << count << endl;
    return 0;
}