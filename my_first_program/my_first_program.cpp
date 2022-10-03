#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Объявить переменные
	int a, b, c;
	// ввести a и b
	printf("Ввести a:\n");
	scanf_s("%d", &a);
	printf("Ввести b:\n");
	scanf_s("%d", &b);
	// напечатать c
	c = a + b;
	printf("Результат: %d", c);
	_getch();
}
