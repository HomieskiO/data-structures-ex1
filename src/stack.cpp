//
// Created by Omer Chomsky on 23/04/2025.
//

#include "stack.h"

Stack::Stack() = default;

void Stack::push(ItemType item) {
    this->vector.push_back(item);
}

bool Stack::isEmpty() const {
    return this->vector.empty();
}

ItemType Stack::pop() {
    if (!this->isEmpty()) {
        ItemType last_item = this->vector.back();
        this->vector.pop_back();
        return last_item;
    }
    throw std::out_of_range("Stack is empty");
}
