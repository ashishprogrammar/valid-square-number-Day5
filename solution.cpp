#include <iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 1) return false;

        long long start = 1, end = num;

        while (start <= end) {
            long long mid = start + (end - start) / 2;

            if (mid == num / mid && mid * mid == num) {
                return true;
            } else if (mid < num / mid) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return false;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Solution sol;
    bool result = sol.isPerfectSquare(num);

    cout << (result ? "Perfect square" : "Not a perfect square") << endl;
    return 0;
}

/*
Sample Input/Output:
Input: 16
Output: Perfect square

Input: 14
Output: Not a perfect square

Time Complexity: O(log n)
Space Complexity: O(1)
*/
