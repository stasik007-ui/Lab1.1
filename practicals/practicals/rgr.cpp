#include <iostream>
#include <cctype> 

using namespace std;

bool isValidString(const string& str) {
    int len = str.length();

    if (len < 5 || str[0] != '*' || str[len - 1] != '*') {
        return false;
    }

    size_t dotPos = str.find('.');
    if (dotPos == string::npos || dotPos < 2 || dotPos > len - 3) {
        return false;
    }

    for (size_t i = 1; i < dotPos - 1; ++i) {
        if (str[i] < 'A' || str[i] > 'Z') {
            return false;
        }
    }

    if (str[dotPos - 1] != '*') {
        return false;
    }

    for (size_t i = dotPos + 1; i < len - 1; ++i) {
        if (str[i] < 'A' || str[i] > 'Z') {
            return false;
        }
    }

    if (str[len - 2] != '*') {
        return false;
    }

    return true;
}

int main() {
    setlocale(LC_ALL, "uk_UA");
    string input;

    cout << "Введiть рядок для перевiрки: ";
    cin >> input;

    if (isValidString(input)) {
        cout << "Рядок належить мовi L(V)." << endl;
    }
    else {
        cout << "Рядок НЕ належить мовi L(V)." << endl;
    }

    return 0;
}
