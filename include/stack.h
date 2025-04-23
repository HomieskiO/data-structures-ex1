//
// Created by Omer Chomsky on 23/04/2025.
//

#pragma once
#include <vector>
#include "item_type.h"


class Stack {
private:
    std::vector<ItemType> vector;
public:
    Stack();
    bool isEmpty() const;
    void makeEmpty();
    void push(ItemType item);
    ItemType pop();
};
