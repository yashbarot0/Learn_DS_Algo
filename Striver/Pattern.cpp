#include <bits/stdc++.h>
using namespace std;


void one(int n){ 
// *****
// *****
// *****
// *****
// *****
for(int i=0; i<n;i++){
        for (int j=0; j<n; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

void two(int n){
// *****
// ****
// ***
// **
// *
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
             cout << "* ";
        }
        cout << "\n";
    }
}

void three(int n){

// * 
// * * 
// * * * 
// * * * * 
// * * * * *
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void four(int n){
// 1
// 12
// 123
// 1234
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
}

void five(int n){
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1
    for(int i=1; i<n; i++){
         for (int j =n; j>i; j--)
        {
            cout <<n-j+1<<" ";
        }
         cout << endl;
    }
}


int main(){
    int n = 5;
    //one(n);
    //two(n);
    //three(n);
    //four(n);
    five(n);
}




