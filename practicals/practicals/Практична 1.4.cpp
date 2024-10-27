#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA");
    cout << "Завдання 2" << endl;
    int N;
    cout << "Введiть N: ";
    cin >> N;

    int sum = 0, count = 0; 

    for (int i = 0; i <= N; i++) {
        if (i % 2 != 0) {  
            sum += i;    
            count++;    
        }
    }

    if (count > 0) {
        double average = sum / count;
        cout << "Середнє арифметичне непарних чисел: " << average << endl;
    }
    else {
        cout << "Немає непарних чисел на цьому промiжку." << endl;
    }
    cout << "Завдання 3" << endl;
        double b1, q;
        int n;
        cout << "Введiть перший член прогресiї (b1): ";
        cin >> b1;
        cout << "Введiть знаменник прогресiї (q): ";
        cin >> q;
        cout << "Введiть кiлькiсть елементiв (n): ";
        cin >> n;

        double sum1 = 0;

        for (int i = 0; i < n; ++i) {
            sum1 += b1 * pow(q, i);
        }

        double average = sum1 / n;

        cout << "Середнє арифметичне перших " << n << " елементiв: " << average << endl;

        return 0;
    }