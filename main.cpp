#include "iostream"
#include "string"
#include "math.h"

bool CheckIfNumber(std::string input) { // �������� ����������� �������� ������ � �����
	float temp;
	try{
		temp = stof(input);
	}
	catch (...){
		std::cout << "ERROR: You've inputed a string;" << std::endl; // ����� ������
		return false;
	}
	return true;
}

float TakeInput(std::string name) { // ����� ��������(� ��� ���������� �������)
	std::string input;
	do{
		std::cout << "Input the " << name << ": ";
		std::cin >> input;
	} while (!CheckIfNumber(input)); // �������
	return stof(input);
}

int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "somfishe" << std::endl << std::endl;
	// ����������
	float a,b,c,d;
	//

	// ���� ����������
	b = TakeInput("b");
	c = TakeInput("c");
	while (b - c < 0){ // �������
		std::cout << "ERROR: the difference between b and c is less than 0;" << std::endl; // ����� ������
		b = TakeInput("b");
		c = TakeInput("c");
	} 
	//

	// ���� ����������
	d = TakeInput("d");
	while (d == 0) { // �������
		std::cout << "ERROR: d equals to 0;" << std::endl; //����� ������
		d = TakeInput("d");
	}
	//

	//
	a = sqrt(b - c) / d;
	std::cout << "The a equals to " << a << std::endl;
	//
}