//
// Created by Omer Chomsky on 23/04/2025.
//
#include <iostream>
#include "stack.h"
#include "item_type.h"

int main() {
    Stack stack;
    stack.push(ItemType(1));
    stack.push(ItemType(2));
    stack.push(ItemType(3));

    while (!stack.isEmpty()) {
        ItemType item = stack.pop();
        std::cout << item.GetValue() << " ";
    }

    return 0;
}