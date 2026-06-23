#include <iostream>
using namespace std;

int main() {
    unsigned long long N;
    cin >> N;

    if (N == 0) {
        cout << 1 << '\n';
        return 0;
    }

    int count = 0;
    while (N > 0) {
        if (N % 10 == 0)
            count++;
        N /= 10;
    }

    cout << count << '\n';
    return 0;
}
