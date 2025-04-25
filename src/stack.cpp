//
// Created by Omer Chomsky on 23/04/2025.
//

#include "stack.h"
#include <iostream>

Stack::Stack() : top(nullptr) {
}

void Stack::makeEmpty() {
	Node* temp;
	while (top != nullptr) {
		temp = top;
		top = top->next;
		delete temp;
	}
}

bool Stack::isEmpty() const {
    return top == nullptr;
}

void Stack::push(ItemType item) {
    top = new Node(item, top);
}

ItemType Stack::pop() {
    if (this->isEmpty()) {
        std::cerr << "Stack underflow!" << std::endl;
        throw std::runtime_error("Stack underflow");
    }

    Node* temp = top;
    ItemType popped = temp->data;
    top = top->next;
    delete temp;
    return popped;
}
