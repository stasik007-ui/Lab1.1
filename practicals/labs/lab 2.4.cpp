#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

double calculate_y(double x) {
    if (x > 3) {
        double sum = 0.0;
        for (int i = 3; i <= 7; ++i) {
            sum += (2.0 * i) / (x + i);
        }
        return x * x * sum;
    }
    else {
        return (5 + x) / (x + 8);
    }
}

// Голо
int main() {
    double x_start = 0.0;
    double x_end = 7.0;
    double h = 0.2;

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "x\t\ty" << std::endl;

    for (double x = x_start; x <= x_end; x += h) {
        double y = calculate_y(x);
        std::cout << x << "\t\t" << y << std::endl;
    }

    return 0;
}

#include <iostream>
#include <vector>

int main() {
    std::vector<int> fibonacci(10); 

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i < 10; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    std::cout << "Перші 10 чисел Фібоначчі: ";
    for (int i = 0; i < 10; i++) {
        std::cout << fibonacci[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
