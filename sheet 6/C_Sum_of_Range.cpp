#include <iostream>

using namespace std;

// Function to calculate the sum of range, sum of even numbers, and sum of odd numbers
void sum_of_range(int A, int B) {
    // Calculate the count of numbers between A and B
    int count = B - A + 1;
    
    // Sum of all numbers between A and B
    long long total_sum = static_cast<long long>(count) * (A + B) / 2;

    // Ensure A is even
    if (A % 2 != 0)
        A++;

    // Sum of even numbers between A and B
    long long even_sum = static_cast<long long>(count / 2) * (A + B);

    // Ensure A is odd
    if (A % 2 == 0)
        A++;

    // Sum of odd numbers between A and B
    long long odd_sum = static_cast<long long>(count - count / 2) * (A + B);

    // Output
    cout << total_sum << endl;
    cout << even_sum << endl;
    cout << odd_sum << endl;
}

int main() {
    // Input
    int A, B;
    cin >> A >> B;

    // Calculate and print sums
    sum_of_range(A, B);

    return 0;
}
