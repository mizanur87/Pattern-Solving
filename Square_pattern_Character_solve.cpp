#include <bits/stdc++.h>

using namespace std;

int main() {

    int n ;

    cout << "Input:";
    cin >> n;



    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            char ch = 'A' + i - 1;
            cout << ch << ' ';
        }
        cout <<endl;
    }

    return 0;
}
