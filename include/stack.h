//
// Created by Omer Chomsky on 23/04/2025.
//

#pragma once
#include "item_type.h"


class Stack {
private:
    Node* top;
public:
    Stack();
    bool isEmpty() const;
    void makeEmpty();
    void push(ItemType item);
    ItemType pop();
};
