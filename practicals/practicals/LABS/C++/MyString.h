#pragma once
#ifndef MYSTRING_H
#define MYSTRING_H

#include <string>
#include <algorithm>

class MyString {
public:
    std::string value;

    MyString(std::string value);

    int getLength();
    std::string sortDescending();

    friend std::ostream& operator<<(std::ostream& os, const MyString& myString);
};

#endif

