#include<bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // Calculate the distance using integer arithmetic
    long long dx = x1 - x2;
    long long dy = y1 - y2;
    double ans = sqrt(dx * dx + dy * dy); // Euclidean distance formula

    cout << fixed << setprecision(9) << ans << endl;

    return 0;
}
