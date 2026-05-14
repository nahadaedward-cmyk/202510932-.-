#include <iostream>
#include <vector>
using namespace std;

int main() {
    int nums[] = {109, 99, 23, 45, 23, 2, 5, 1};
    int n = sizeof(nums)/sizeof(nums[0]);

    // Bubble Sort logic
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
            }
        }
    }

    cout << "Sorted Numbers: ";
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}