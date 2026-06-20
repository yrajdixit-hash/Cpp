#include <iostream>
using namespace std;

int main() {
    long long A, B, C;
    cin >> A >> B >> C;

    long long mn, mx;


    if (A <= B && A <= C)
        mn = A;
    else if (B <= A && B <= C)
        mn = B;
    else
        mn = C;

    if (A >= B && A >= C)
        mx = A;
    else if (B >= A && B >= C)
        mx = B;
    else
        mx = C;

    cout << "Min = " << mn << endl;
    cout << "Max = " << mx << endl;

    return 0;
}