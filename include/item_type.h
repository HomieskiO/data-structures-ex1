//
// Created by Omer Chomsky on 23/04/2025.
//

#pragma once

// void recursiveLoop(int A[], int n, int x, int y = 0) {
//     if (n == 1) {
//         if (y != 0 && A[0] + y == x) {
//             std::cout << y << " " << A[0] << std::endl;
//         }
//         return;
//     }
//
//     if (y != 0) {
//         if (A[n - 1] + y == x) {
//             std::cout << y << " " << A[n - 1] << std::endl;
//         }
//         recursiveLoop(A, n - 1, x, y);
//     } else {
//         recursiveLoop(A, n - 1, x, A[n - 1]);
//         recursiveLoop(A, n - 1, x, 0);
//     }
// }

constexpr int START = 1;
constexpr int AFTER_FIRST = 2;
constexpr int AFTER_SECOND = 3;
constexpr int AFTER_THIRD = 4;

class ItemType {
public:
    int n, y, line;
    ItemType(int n, int y, int line);
};
