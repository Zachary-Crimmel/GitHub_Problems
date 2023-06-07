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

void tailRecursiveHelper(int n, int prev, int prev2){
    if(n > 0){
        n--;
        int temp = prev + prev2;
        prev = prev2;
        prev2 = temp;
        cout << prev2 << " ";
        tailRecursiveHelper(n, prev, prev2);
    }else{
        return;
    }
}

void tailRecursiveFibonacci(int n){
    if(n <= 0){
        cout << "Please enter a number greater than 0";
    }else if(n == 1){
        cout << 0;
    }else if(n == 2){
        cout << "0 1";
    }else{
        cout << "The fibonacci sequence up to " << n << " is: ";
        cout << "0 1 ";
        tailRecursiveHelper(n - 2, 0, 1);
    }
}

int main(){
    int n = -1;
    while(n < 0){
        cout << "Please enter n to compute fibonacci up to: ";
        cin >> n;
    }
    cout << "The fibonacci sequence up to " << n << " is: ";
    fibonacciIterative(n);
    cout << endl;
    tailRecursiveFibonacci(n);
    return 0;
}