#include <iostream>
// завдання 2
int main()
{
	setlocale(LC_ALL, "uk_UA");
	std::cout << "Завдання 2" << std::endl;
	int A, B;
	std::cout << "Введiть значення А: ";
	std::cin >> A;
	std::cout << "Введiть значення B: ";
	std::cin >> B;
	if (A * B < 0)
	{
		int C = (A * B) * 2;
		std::cout << "Результат: " << C;
	}
	else if (A * B > 0)
	{
		int C = (A * B) * 1.5;
		std ::cout << "Результат: " << C << std::endl;
	}
	// завдання 3
	std::cout << "Завдання 3" << std::endl;
	int a, b, c;
	std::cout << "Введiть значення a: ";
	std::cin >> a;
	std::cout << "Введiть значення b: ";
	std::cin >> b;
	std::cout << "Введiть значення c: ";
	std::cin >> c;
	if (a < b + c && b < a + c && c < a + b) {
		std::cout << "Можуть ";
	}
	else
		std::cout << "Не можуть ";
	return 0;

}
