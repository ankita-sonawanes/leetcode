#include <iostream>
#include <climits>  // Include for INT_MIN
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    
    int maxsum = INT_MIN;  // Initialize to the smallest possible integer

    for (int st = 0; st < n; st++) {
        int currsum = 0;
        for (int end = st; end < n; end++) {  // Fix the condition (end < n)
            currsum += arr[end];  
            maxsum = max(currsum, maxsum);  
        }
    }
    
    cout << "Maximum sum of subarray: " << maxsum;
    return 0;
}
