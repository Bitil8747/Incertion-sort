#include <iostream>
#include <vector>

void incertionSort(std::vector<int>& unsortedArray, int n) {
    for (int j = 1; j < n; j++) {
        int key = unsortedArray[j];
        int i = j - 1;
        while (i >= 0 && unsortedArray[i] > key) {
            unsortedArray[i+1] = unsortedArray[i];
            i -= 1;
        }
        unsortedArray[i+1] = key;
    }
}

int main ()
{
    int n;
    std::cin >> n;
    std::vector<int> unsortedArray(n);
    for (int i = 0; i < n; i++) {
        std::cin >> unsortedArray[i];
    }

    incertionSort(unsortedArray, n);

    for (int i = 0; i < n; i++) {
        std::cout << unsortedArray[i] << " ";
    }
}
