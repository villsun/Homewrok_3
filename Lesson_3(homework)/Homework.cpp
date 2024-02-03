#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int My_Strcmp(const char* str_1, const char* str_2)
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

int String_to_Number(char* str)
{
	int number = 0;
	int size = strlen(str);
	for (int i = 0; i < size; i++)
	{
		number = number * 10 + (str[i] - '0');
	}
	return number;
}

char* Create_Array_Char(int size)
{
	char* p_char = new char[size];
	return p_char;
}

void Delete_Array_Char(char* p)
{
	delete[] p;
}

void Reverse(char*& p_char, int size)
{
	int counter = 1;
	for (int i = 0; i < size / 2; i++)
	{
		swap(p_char[i], p_char[size - counter]);
		counter++;
	}
}

char* Number_to_String(int number)
{
	int temp = number;
	int counter = 0;
	for (int i = temp; i != 0; i /= 10)
	{
		counter++;
	}

	char* p_char = Create_Array_Char(counter);

	for (int i = 0; i < counter; i++, temp /= 10)
	{
		p_char[i] = temp % 10 + '0';
	}

	p_char[counter] = '\0';

	Reverse(p_char, counter);

	return p_char;
}

char* Uppercase(char* str_arr)
{
	int size = strlen(str_arr);

	char* p_char = Create_Array_Char(size);

	for (int i = 0; i < size; i++)
	{
		if (str_arr[i] >= 'a' && str_arr[i] <= 'z')
		{
			p_char[i] = str_arr[i] - ' ';
		}
		else 
		{
			p_char[i] = str_arr[i];
		}
	}

	p_char[size] = '\0';

	return p_char;
}

int main()
{
	// Завдання 1

	/*char str_1[] = "Hello";
	char str_2[] = "Hello";

	int result = Mystrcmp(str_1, str_2);

	cout << "Result = " << result << endl;*/

	// Завдання 2

	/*char str[] = "123";
	int result = String_to_Number(str);

	cout << "Result = " << result << endl;*/

	// Завдання 3

	/*char* p_char = Number_to_String(123345);

	cout << "Result = " << p_char << endl;*/

	// Завдання 4
	

	char str[] = "Hello World!";
	char* p_char = Uppercase(str);

	cout << p_char;

	

	return 0;
}