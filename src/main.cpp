//
// Created by Omer Chomsky on 23/04/2025.
//

#include <iostream>
#include "stack.h"
#include "item_type.h"


void nestedLoop(int arr[], int n, int x) {
    for (int i=n-1; i > 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr[i] + arr[j] == x) {
                std::cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << std::endl;
                return;
            }
        }
    }
}


void recursiveLoop(int A[], int n, int x, int y = 0) {
    if (n == 1) {
        if (y != 0 && A[0] + y == x) {
            std::cout << y << " " << A[0] << std::endl;
        }
        return;
    }

    if (y != 0) {
        if (A[n - 1] + y == x) {
            std::cout << y << " " << A[n - 1] << std::endl;
        }
        recursiveLoop(A, n - 1, x, y);
    } else {
        recursiveLoop(A, n - 1, x, A[n - 1]);
        recursiveLoop(A, n - 1, x, 0);
    }
}

void iterativeLoop() {
    // TODO
}


int main() {
    int n, x;

    std::cout << "Enter the size of the array" << std::endl;
    std::cin >> n;

    int arr[n];

    for (int i=0; i<n; i++){
        std::cin >> arr[i];
    }

    std::cout << "Enter the size of required sum" << std::endl;
    std::cin >> x;

    // nestedLoop(arr, n, x);
    recursiveLoop(arr, n, x);
    return 0;
}