#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b;
    int cont = 0;
    cin >> n;
    int arreglo[n];
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];
    }
    cin >> b;
    for (int i = 0; i < n; i++) {
        if(arreglo[i] == b) cont++;
    }
    cout << cont << endl;
    return 0;
}
