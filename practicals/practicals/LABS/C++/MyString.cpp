#include "MyString.h"
#include <iostream>

MyString::MyString(std::string value) : value(value) {}

int MyString::getLength() {
    return value.length();
}

std::string MyString::sortDescending() {
    std::string sorted = value;
    std::sort(sorted.rbegin(), sorted.rend());
    return sorted;
}

std::ostream& operator<<(std::ostream& os, const MyString& myString) {
    os << myString.value;
    return os;
}

