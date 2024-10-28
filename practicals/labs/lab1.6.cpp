// Священко Станіслав Володимирович 123 група лабораторна 1.6
#include <iostream>
int main() {
	const char CONST1 = '<'; // Оголошення константи та її опис
	char Var1 = '7'; // змінної та її опис
	char Var2; // Оголошення змінної
	Var2 = 'R'; // ЇЇ опис

	const char CONST2 = 0x1a; // Оголошення константи 
	char Var3 = 0x32;
	char Var4 = 0x63;

	// Опис змінних типу int, float, unsigned short
	int A;
	float B;
	unsigned short C;

	// Ініціювання змінних, що описані в
	A = 682;
	B = -8.4e2;
	C = 25921;

	// Опис змінних типів double, int, char
	double dblA;
	int nB;
	char chC;

    // Ініціювання змінних
	// неявне приведення типів
	dblA = A;
	nB = B;
	chC = C;

	// явне
	dblA = double(A);
	nB = (int)B;
	chC = char(C);

	// з обходом суворої типізації
	double* pdblA;
	void* pVoi;
	pVoi = &A;
	pdblA = (double*)pVoi;
	dblA = *pdblA;

	int* pnB;
	pVoi = &C;
	pnB = (int*)pVoi;
	nB = *pnB;

	char* pchC;
	pVoi = &C;
	pchC = (char*)pVoi;



}