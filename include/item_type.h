//
// Created by Omer Chomsky on 23/04/2025.
//

#pragma once

constexpr int START = 1;
constexpr int AFTER_FIRST = 2;
constexpr int AFTER_SECOND = 3;
constexpr int AFTER_THIRD = 4;

class ItemType {
public:
    int n, y, line;
    ItemType(int n, int y, int line);
};

class Node {
public:
    ItemType data;
    Node* next;

    Node(const ItemType& item, Node* ptr = nullptr) : data(item), next(ptr) {}
};
