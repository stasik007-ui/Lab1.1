#include <iostream>
#include <bitset>

int main() {
    int A;
    std::cout << "Введіть ціле число A: ";
    std::cin >> A;

    std::bitset<32> binary(A); 
    int count_1 = binary.count(); 
    int count_0 = 32 - count_1; 

    if (count_1 > count_0) {
        std::cout << "Бітів 1 більше" << std::endl;
    }
    else if (count_0 > count_1) {
        std::cout << "Бітів 0 більше" << std::endl;
    }
    else {
        std::cout << "Кількість 0 і 1 однакова" << std::endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <stdexcept>

std::vector<int> xor_sequences(const std::vector<int>& A, const std::vector<int>& B) {
    if (A.size() != B.size()) {
        throw std::invalid_argument("Довжини послідовностей A та B повинні бути однаковими.");
    }

    std::vector<int> result(A.size());

    for (size_t i = 0; i < A.size(); ++i) {
        result[i] = A[i] ^ B[i];
    }

    return result; 
}

int main() {
    std::vector<int> A = { 0, 1, 1, 0 };
    std::vector<int> B = { 1, 0, 1, 1 }; 

    try {
        std::vector<int> result = xor_sequences(A, B);

        std::cout << "Результат XOR: ";
        for (int bit : result) {
            std::cout << bit << " ";
        }
        std::cout << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Помилка: " << e.what() << std::endl;
    }

    return 0;
}