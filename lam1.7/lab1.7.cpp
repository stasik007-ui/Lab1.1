// �������� ��������� 123 ����� ����������� ������ 1.7
#include <iostream>
// �������� 1
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

	// �������� 2
	static int s; // ��������� ������� �������� �����
	static int x = 7; // ��������� ������� ������������� �������� �����

	{
		int s = 30;
		{
			int w; // �� �������� �����
			static int p =  28; // �������� �������� ������� ������������� �����

			// ����� p �� ���� ���� ������ �����
			int s = p - x;
		}
		s += 5; // ��������� ��������� �������� ����� �� 5
	}
	for (int i = 0; i < 7; i++) 
	{
		static int g = 0;
		g++;
	} // ��������� ����� � ��������� ����� �������� ���� g ���������� �� 1
	// �������� 3
	float flA = 15; // ��������� ������� ���'�� � �����, flA ������� �� ������������� ��������� 20
	int nB = 4;
	for (int i = 0; i < 5; i++)
	{
		static int nT = 0;
		nT++;
		int nH = 0;
		nH++;
		nB++;
	}

		


}
