#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int sum = 0;

        // Ensure X is less than Y before iterating
        if (X < Y) {
            // Iterate through the range (X+1 to Y-1) and sum up the odd numbers
            for (int i = X + 1; i < Y; i++) {
                if (i % 2 != 0) {
                    sum += i;
                }
            }
        }

        // Print the sum
        cout << sum << endl;
    }

    return 0;
}
