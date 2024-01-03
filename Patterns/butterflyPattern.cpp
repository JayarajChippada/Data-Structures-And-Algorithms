#include <iostream>
using namespace std;

int main() {
    int rows, colms, n;
    cout << "Enter value of N:  ";
    cin >> n;
    rows = 2*n;
    colms = 2*n;
    for (int i=1; i<=n; i++) {
        for(int j=1; j<=colms; j++) {
            if(j<=i || j>colms-i) {
                cout << " * ";
            }
            else {
                cout << "   ";
            }    
        }
        cout << endl;
    }
    for (int i=1; i<=n; i++) {
        for(int j=1; j<=colms; j++) {
            if(j<=((n)-i)+1 || j>=(n)+i) {
                cout << " * ";
            }
            else {
                cout << "   ";
            }    
        }
        cout << endl;
    }
    return 0;
}