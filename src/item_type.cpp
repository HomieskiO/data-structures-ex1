//
// Created by Omer Chomsky on 23/04/2025.
//

#include "item_type.h"

ItemType::ItemType() {
    value = 0;
}

ItemType::ItemType(int value) {
    this->value = value;
}

void ItemType::SetValue(int value) {
    this->value = value;
}

int ItemType::GetValue() const {
    return value;
}

bool ItemType::operator==(const ItemType& other) const {
    return this->value == other.value;
}
bool ItemType::operator!=(const ItemType& other) const {
    return !(*this == other);
}
bool ItemType::operator<(const ItemType& other) const {
    return this->value < other.value;
}
bool ItemType::operator>(const ItemType& other) const {
    return this->value > other.value;
}