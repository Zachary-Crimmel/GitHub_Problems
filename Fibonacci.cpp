#include <iostream>

using namespace std;

void fibonacciIterative(int n){
    int n1 = 0;
    int n2 = 1;
    int sum = 0;

    cout << n1 << " "<< n2 << " ";

    for(int i = 0; i < n - 2; i++){
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        cout << sum << " ";
    }
    return;
}

int main(){
    int n = -1;
    while(n < 0){
        cout << "Please enter n to compute fibonacci up to: ";
        cin >> n;
    }
    cout << "The fibonacci sequence up to " << n << " is: ";
    fibonacciIterative(n);
    return 0;
}