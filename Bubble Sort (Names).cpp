#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Zuck", "Shayd", "Emely", "Amjed", "Esther", "Manar", "Anne"};
    int n = sizeof(names)/sizeof(names[0]);

    // Bubble Sort logic
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(names[j] > names[j+1]) {
                swap(names[j], names[j+1]);
            }
        }
    }

    cout << "Sorted Names: ";
    for(int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    return 0;
}