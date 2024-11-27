#include<bits/stdc++.h>
using namespace std;

void printSpaces(int n) {
    if (n == 0) return;
    cout << " ";
    printSpaces(n - 1);
}

void printStars(int n) {
    if (n == 0) return;
    cout << "*";
    printStars(n - 1);
}

void printPyramid(int n, int spaces, int stars) {
    if (n == 0) return;
    printSpaces(spaces);
    printStars(stars);
    cout << endl;
    printPyramid(n - 1, spaces - 1, stars + 2);
}

int main() {
    int n;
    cin >> n;
    printPyramid(n, n - 1, 1);
    return 0;
}
