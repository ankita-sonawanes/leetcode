#include<iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long rev = 0; // Use long to check for overflow

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            rev = rev * 10 + digit;

            // Check if reversed number exceeds 32-bit range
            if (rev > INT32_MAX || rev < INT32_MIN) {
                return 0;
            }
        }

        return static_cast<int>(rev);
    }
};

int main() {
    Solution solution;
    int num;

    cout << "Enter any number: ";
    cin >> num;

    cout << "Reversed number: " << solution.reverse(num) << endl;

    return 0;
}


// class Solution {
// public:
//     int reverse(int x) {
//         long rev = 0;

//         while (x != 0) {
//             int rem = x % 10;
//             x /= 10;

//             // Check overflow **before** updating rev
//             if (rev > (INT_MAX / 10) || (rev == INT_MAX / 10 && rem > 7)) return 0;
//             if (rev < (INT_MIN / 10) || (rev == INT_MIN / 10 && rem < -8)) return 0;

//             rev = rev * 10 + rem;
//         }

//         return static_cast<int>(rev);
//     }
// };