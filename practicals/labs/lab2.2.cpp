#include <iostream>
int main()
{
	setlocale(LC_ALL, "uk_UA");
	enum Names { Stas, Dima, Misha, Natalya, Kira, Ira, Taras };
	struct Student
	{
		Names name;
		int birthdate;
		int birthmonth;
	};
	Student myStudents[7];
	myStudents[0] = { Stas, 03, 02 };
	myStudents[1] = { Dima, 20, 10 };
	myStudents[2] = { Misha, 13, 12 };
	myStudents[3] = { Natalya, 01, 11 };
	myStudents[4] = { Kira, 07, 02 };
	myStudents[5] = { Ira, 15, 03 };
	myStudents[6] = { Taras, 10, 05 };

	int count = 0;
	for (int i = 0; i < 7; i++) {
		if (myStudents[i].birthmonth == 03, 04, 05)
		{
			count++;
		}
	}
	float percent = (float)count * 100 / 7;

	enum Names1 {Polina, Dan, Maria, Kate, Nadya, Maxim, Tolik};
	struct Student1
	{
		Names1 name;
		int yearofstudy;
		bool stipend;
	};
	Student1 myStudent1[7];
	myStudent1[0] = { Polina, 2, true };
	myStudent1[1] = { Dan, 1, false };
	myStudent1[2] = { Maria, 3, false };
	myStudent1[3] = { Kate, 5, true };
	myStudent1[4] = { Nadya, 3, true };
	myStudent1[5] = { Maxim, 3, false };
	myStudent1[6] = { Tolik, 4, true };

	int count1 = 0;
	for (int j = 0; j < 7; j++) {
		if (myStudent1[j].yearofstudy == 3 && myStudent1[j].stipend == true)
		{
			count1++;
		}
	}
	float percent1 = (float)count1 * 100 / 7;
	return 0;
}


	