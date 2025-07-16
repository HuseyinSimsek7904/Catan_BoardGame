#include "node.h"

Node::Node() {
    owner = -1;
    town = 0;
    city = 0;
}

int Node::getOwner() {
    return owner;
}

int Node::getTown() {
    return town;
}

int Node::getCity() {
    return city;
}

void Node::setTown(int b) {
    town = 1;
    owner = b;
}

void Node::setCity() {
    town = 0;
    city = 1;
}
