#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void read(vector<vector<int>>& data) {

	ifstream file("data.txt");
	
	if (!file.is_open()) {
		system("cls");
		cout << "Ошибка: Файл не найден" << endl;
		exit(1);
	}

	int count = 0;	//Число чисел в файле
	int temp = 0;	//Временная переменная
	
	while (!file.eof()) {
		file >> temp;
		count++;
	}	//Считаем кол-во чисел в матрице

	file.seekg(0, ios::beg);
	file.clear();

	int count_space = 0;	//Количество пробелов
	char symbol;
	
	while (!file.eof()) 
	{

		file.get(symbol);	//Считывание символа с начала
		if (symbol == ' ')count_space++;
		if (symbol == '\n')break;	//Если перенос строки - выходим из цикла

	}	// Этим циклом мы посчитали только кол-во пробелов

	file.seekg(0, ios::beg);
	file.clear();

	int rows = count / (count_space + 1);	//Строки
	int cols = count_space + 1;	//Столбцы

	vector<int> tempVec;
	int number = 0;	//Число, считанное из файла

	cout << rows << "  rows\n";
	cout << cols << "  cols\n";

	if (rows != cols)
	{
		system("cls");
		cout << rows << "  rows\n";
		cout << cols << "  cols\n";
		cout << "Проверьте корректность введенной матрицы\n";
		exit(2);
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			file >> number;
			tempVec.push_back(number);
		}
		data.push_back(tempVec);
		tempVec.clear();
	}

}
