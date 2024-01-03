#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of N:  ";
    cin >> n;
    for(int i = n; i>=1; i--) {
        int x =0;
        for(int j=i; j>=1; j--) {
            cout << " " << ++x << " ";
        }
        cout << endl;
    }
    return 0;
}