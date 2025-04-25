//
// Created by Omer Chomsky on 23/04/2025.
//

#include <iostream>
#include "loops.h"


int main() {
    int n, x;

    std::cin >> n;

    int arr[n];

    for (int i=0; i<n; i++){
        std::cin >> arr[i];
    }

    std::cin >> x;

    nestedLoop(arr, n, x);
    recursiveLoop(arr, n, x);
    iterativeLoop(arr, n, x);

    return 0;
}