//first solve function then convert recursion
#include<bits/stdc++.h>
using namespace std;

void print_star(int star)
{
    if (star == 0) return;
    cout << "*";
    print_star(star - 1);
}

void print_space(int space)
{
    if (space == 0) return;
    cout << " ";
    print_space(space - 1);
}

void Inverted_Pyramid(int n, int space, int star)
{
    if (n == 0) return;
    print_space(space);
    print_star(star);
    cout << endl;
    Inverted_Pyramid(n - 1, space + 1, star - 2);
}

int main() {
    int n;
    cin >> n;
    int k = 2 * n - 1;
    Inverted_Pyramid(n, 0, k);
    return 0;
}
