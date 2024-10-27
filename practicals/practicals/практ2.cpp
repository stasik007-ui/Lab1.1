// завдання 1
#include <iostream>

int main()
{
	int A;
	int B;
	if (A > 0, B > 0) {
		int mult = A * B;
		std::cout << mult << std::endl;
	}
	else if (A < 0, B < 0) {
		int sum = A + B;
		std::cout << sum << std::endl;
	}
	return 0;
}
// завдання 3
int main()
{
	setlocale(LC_ALL, "uk_UA");
	int A;
	int B ;
	if (A != B, A > B) {
		std::cout << "Максимальне значеня: " << A << std::endl;
	}
	else if (A != B, A < B) {
		std::cout << "Максимальне значення: " << B << std::endl;
	}
	else if (A == B) {
		std::cout << "Обидва числа є максимальними значеннями" << std::endl;
	}
}

	
	