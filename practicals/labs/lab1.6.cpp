
#include <iostream>
int main() {
	const char CONST1 = '<'; 
	char Var1 = '7'; 
	char Var2; 
	Var2 = 'R'; 

	const char CONST2 = 0x1a; 
	char Var3 = 0x32;
	char Var4 = 0x63;

	int A;
	float B;
	unsigned short C;

	A = 682;
	B = -8.4e2;
	C = 25921;

	double dblA;
	int nB;
	char chC;
	
	dblA = A;
	nB = B;
	chC = C;

	dblA = double(A);
	nB = (int)B;
	chC = char(C);

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
