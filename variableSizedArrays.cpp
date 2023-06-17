#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,q,s;
    cin >> n >> q;
    int *arr[n];
    while (n--){
        int k;
        cin >> k;
        arr[s] = new int[k];
        for (int j=0; j<k; j++){
            cin >> arr[s][j];
        }
        s++;
    }
    while (q--){
        int a, b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }
    return 0;
}
