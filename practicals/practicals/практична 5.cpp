#include <iostream>
using namespace std;
#include <limits> 
int main()
{
    setlocale(LC_ALL, "uk_UA");
    using namespace std;
        int n;

        cout << "Введiть кiлькiсть елементiв (n): ";
        cin >> n;

        double* A = new double[n];

        cout << "Введiть елементи масиву: ";
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        double minPositive = numeric_limits<double>::max(); 
        bool found = false; 

       
        for (int i = 0; i < n; ++i) {
            if (A[i] > 0 && A[i] < minPositive) {
                minPositive = A[i];
                found = true;
            }
        }

        if (found) {
            cout << "Найменше додатне значення: " << minPositive << endl;
        }
        else {
            cout << "Додатнiх елементів у масивi немає." << endl;
        }
        delete[] A;

        return 0;
}
// task 2
int main() {
    setlocale(LC_ALL, "uk_UA");
    int n;

    cout << "Введiть кiлькiсть елементiв (n): ";
    cin >> n;

    double* A = new double[n];

    cout << "Введiть елементи масиву: ";
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int minIndex = 0, maxIndex = 0;
    double minValue = A[0], maxValue = A[0];

    for (int i = 1; i < n; ++i) {
        if (A[i] < minValue) {
            minValue = A[i];
            minIndex = i;
        }
        if (A[i] > maxValue) {
            maxValue = A[i];
            maxIndex = i;
        }
    }

    double temp = A[minIndex];
    A[minIndex] = A[maxIndex];
    A[maxIndex] = temp;

    cout << "Змiнений масив: ";
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    delete[] A;

    return 0;
}
