#include <iostream>
using namespace std;

int missingNumber(int nums[], int size) {
    int expected_sum = size * (size + 1) / 2;
    int actual_sum = 0;

    for (int i = 0; i < size; ++i) {
        actual_sum += nums[i];
    }

    return expected_sum - actual_sum;
}

int main() {
    int nums1[] = {3, 0, 1};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    cout << "Missing number: " << missingNumber(nums1, size1) << endl;  // Output: 2

    int nums2[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    cout << "Missing number: " << missingNumber(nums2, size2) << endl;  // Output: 8

    return 0;
}
