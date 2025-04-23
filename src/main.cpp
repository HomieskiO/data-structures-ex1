//
// Created by Omer Chomsky on 23/04/2025.
//

#include <iostream>
#include "loops.h"


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

    std::cout << "Nested loop:" << std::endl;
    nestedLoop(arr, n, x);

    std::cout << "Recursive loop:" << std::endl;
    recursiveLoop(arr, n, x);

    std::cout << "Iterative loop:" << std::endl;
    iterativeLoop(arr, n, x);

    return 0;
}