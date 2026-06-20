#include <iostream>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    long long mn, mx;

    if (A < B) {
        mn = A;
        mx = B;
    } else {
        mn = B;
        mx = A;
    }

    cout << "Min = " << mn << endl;
    cout << "Max = " << mx << endl;

    return 0;
}