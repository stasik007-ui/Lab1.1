#include <iostream>
#include "MyString.h"

int main() {
    std::string input;

    std::cout << "Enter line: ";
    std::getline(std::cin, input);

    MyString myString(input);

    std::cout << "\nLine:\n";
    std::cout << myString << std::endl;

    std::cout << "\nLength: " << myString.getLength() << std::endl;

    std::cout << "\nSorted by decreasing: " << myString.sortDescending() << std::endl;

    return 0;
}