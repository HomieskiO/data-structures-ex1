//
// Created by Omer Chomsky on 23/04/2025.
//

#include <iostream>
#include "loops.h"
#include <sstream>
#include <string>

int main() {
    int n, x;
    std::string line;
    bool validInput = true;

    std::getline(std::cin, line);
    std::istringstream inputStringStream(line);

    if (inputStringStream >> n && n > 0) {
        char extra;
        if (inputStringStream >> extra) {
            validInput = false;
        }
    } else {
        validInput = false;
    }


    int arr[n];

    for (int i=0; i<n; i++){
        std::cin >> arr[i];
        if (arr[i] < 0) {
            validInput = false;
        }
    }

    std::cin >> x;

    if (!validInput) {
        std::cerr << "wrong input" << std::endl;
        return 1;
    }

    std::cout << "Iterative algorithm:" << std::endl;
    nestedLoop(arr, n, x);
    std::cout << "Recursive algorithm (recursive version):" << std::endl;
    recursiveLoop(arr, n, x);
    std::cout << "Recursive algorithm (iterative version):" << std::endl;
    iterativeLoop(arr, n, x);

    return 0;
}