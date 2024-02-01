#include <iostream>
#include <string.h>

using namespace std;

int Mystrcmp(const char* str_1, const char* str_2)
{
	int size_1 = strlen(str_1);
	int size_2 = strlen(str_2);

	int counter_1 = 0;

	if (size_1 > size_2)
	{
		return 1;
	}
	else if (size_1 < size_2)
	{
		return -1;
	}
	else
	{
		for (int i = 0; i < size_1 && str_1[i] == str_2[i]; i++)
		{
			counter_1++;
		}
		return counter_1 == size_1 ? 0 : 1;
	}
}

int main()
{
	// Завдання 1

	char str_1[] = "Helloo";
	char str_2[] = "Hello";

	int result = Mystrcmp(str_1, str_2);

	cout << "Result = " << result << endl;

	return 0;
}