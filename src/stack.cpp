//
// Created by Omer Chomsky on 23/04/2025.
//

#include "stack.h"

Stack::Stack() : top(nullptr) {
}

void Stack::MakeEmpty() {
	ItemType::Node* temp;
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
    top = new ItemType::Node(item, top);
}

ItemType Stack::pop() {
    if (IsEmpty()) {
        std::cerr << "Stack underflow!" << std::endl;
        return ItemType();
    }

    ItemType::Node* temp = top;
    ItemType popped = temp->data;
    top = top->next;
    delete temp;
    return popped;
}
