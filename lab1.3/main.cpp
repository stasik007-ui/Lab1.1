//�������� ��������� �������������, ����� N 123, ����������� ������ 1.3
#include <iostream>
#include <locale>

int main() {
	int a1 = 18;// ���� ������
	int inverta1 = ~18; // ��������� ������������ �����������
	std::cout << inverta1 << std::endl;// ��������� ����������

	int a2 = 89, b2 = 122; // ���� ������
	int a2andb2 = a2 & b2; // ��������� ������������ "�"
	std::cout << a2andb2 << std::endl;// ��������� ����������

	int a3 = 134, b3 = 65;// ���� ������
	int a3orb3 = a3 | b3; // ��������� ������������ "���"
	std::cout << a3orb3 << std::endl;// ��������� ����������

	int a4 = 34, b4 = 78;// ���� ������
	int a4xorb4 = a4 | b4; // ��������� ������������ "���", �� �������
	std::cout << a4xorb4 << std::endl;// ��������� ����������

	int a5 = 907, b5 = 1;// ���� ������
	int LeftShift = a5 << b5; // ��������� ������������ ����� ������
	std::cout << LeftShift << std::endl;// ��������� ����������

	int a6 = -95, b6 = 1;// ���� ������
	int RightShift = a6 >> b6; // ��������� ������������ ����� ��������
	std::cout << RightShift << std::endl;// ��������� ����������
	return 0;
}