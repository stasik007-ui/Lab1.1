// Священко Станіслав 123 група Лабораторна робота 1.7
#include <iostream>
// завдання 1
int main() {
	{
		int a = 10;
	}
	{
		int b = 1;
		int c = 5;
	}
	{
		int d = 3;
	}

	// завдання 2
	static int s; / глобальна описана статична змінна
	static int x = 7; // глобальна описана ініціалізована статична змінна

	{
		int s = 30;
		{
			int w; 
			static int p =  28; 
			int x = 3;
			int s = p - x;// якщо треба звернутися до глобального х, то пишемо int s = p - ::x;
		}
		s += 5; 
	}
	for (int i = 0; i < 7; i++) 
	{
		static int g = 0;
		g++;
	} 
	// завдання 3
	float flA = 15; 
	int nB = 4;
	for (int i = 0; i < 5; i++)
	{
		static int nT = 0;
		nT++;
		int nH = 0;
		nH++;
		nB++;
	}

	char cA = '!';
	{
		char cA = '?';
		int nK = 10;
		{
			char cA = '#';
			int nK =3;
			int nQ = 6;
		}
		nK = nK + 5;
		nK--;
	}
	for (int i = 0; i < 5; i = i + 1)
	{
		static int iA = 0;
		int iB = 0;
		iA = iA + 1;
		iB = iB + 1;
	}

	int* pI; //описуємо вказівну типізовану змінну
	pI = new int;//захоплюємо пам'ять в купі
	*pI = 20;//заносимо в купу значення змінної

	int* pO;
	pO = new int;
	*pO = 3;
	pO = pI;
	delete pO;/звільняємо па'ять



}
