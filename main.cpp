#include "iostream"
#include "string"
#include "math.h"

bool CheckIfNumber(std::string input) { // Проверка возможности перевода строки в число
	float temp;
	try{
		temp = stof(input);
	}
	catch (...){
		std::cout << "ERROR: You've inputed a string;" << std::endl; // Вывод ошибки
		return false;
	}
	return true;
}

float TakeInput(std::string name) { // Прием значения(и его дальнейший возврат)
	std::string input;
	do{
		std::cout << "Input the " << name << ": ";
		std::cin >> input;
	} while (!CheckIfNumber(input)); // Условие
	return stof(input);
}

int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "somfishe" << std::endl << std::endl;
	// Переменные
	float a,b,c,d;
	//

	// Ввод переменных
	b = TakeInput("b");
	c = TakeInput("c");
	while (b - c < 0){ // Условие
		std::cout << "ERROR: the difference between b and c is less than 0;" << std::endl; // Вывод ошибки
		b = TakeInput("b");
		c = TakeInput("c");
	} 
	//

	// Ввод переменной
	d = TakeInput("d");
	while (d == 0) { // Условие
		std::cout << "ERROR: d equals to 0;" << std::endl; //Вывод ошибки
		d = TakeInput("d");
	}
	//

	//
	a = sqrt(b - c) / d;
	std::cout << "The a equals to " << a << std::endl;
	//
}