//
// Created by Omer Chomsky on 23/04/2025.
//

#include "loops.h"
#include <iostream>
#include <stack>
#include "item_type.h"

void nestedLoop(int arr[], int n, int x) {
    for (int i=n-1; i > 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr[i] + arr[j] == x) {
                std::cout << arr[i] << " " << arr[j] << std::endl;
            }
        }
    }
}


void recursiveLoop(int A[], int n, int x, int y) {
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

void iterativeLoop(int arr[], int n, int x, int y) {
    std::stack<ItemType> s;
    ItemType current = {n, y, START};
    ItemType next = {n, y, START};

    s.push(current);
    while(!s.empty()){
        current = s.top();
        s.pop();
        if (current.line == START) {
            if (current.n == 1) {
                if (current.y != 0 && arr[0] + current.y == x) {
                    std::cout << current.y << " " << arr[0] << std::endl;
                }
                continue;
            }
            if (current.y != 0) {
                if (arr[current.n - 1] + current.y == x) {
                    std::cout << current.y << " " << arr[current.n - 1] << std::endl;
                }
                current.line = AFTER_FIRST;
                s.push(current);

                next = {current.n - 1, current.y, START};
                s.push(next);
            } else {
                current.line = AFTER_SECOND;
                s.push(current);
                next = {current.n - 1, arr[current.n - 1], START};
                s.push(next);
            }
        } else if (current.line == AFTER_SECOND) {
            current.line = AFTER_THIRD;
            s.push(current);
            next = {current.n - 1, 0, START};
            s.push(next);
        }
    }
}
