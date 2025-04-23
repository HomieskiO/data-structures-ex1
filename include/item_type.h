//
// Created by Omer Chomsky on 23/04/2025.
//

#pragma once


class ItemType {
private:
    int value;
public:
    ItemType();
    ItemType(int value);
    void SetValue(int value);
    int GetValue() const;
    bool operator==(const ItemType& other) const;
    bool operator!=(const ItemType& other) const;
    bool operator<(const ItemType& other) const;
    bool operator>(const ItemType& other) const;
};
