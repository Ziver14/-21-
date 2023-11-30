#include<iostream>

int main() {
	setlocale(LC_ALL, "ru");
	int x, y;

	//Создаем указатели на переменные
	std::cout << "Введите значения для переменной X->";
	std::cin >> x;
	std::cout << "Введите значения для переменной Y->";
	std::cin >> y;

	int* px = &x;
	int* py = &y;
	//Замена местами
	std::cout << "X = " << *px << std::endl;
	std::cout << "Y = " << *py << std::endl;
	std::cout << "\n\n";

	int tmp = *px;
	*px = *py;
	*py = tmp;


	std::cout << "X = " << *px << std::endl;
	std::cout << "Y = " << *py << std::endl;

	return 0;
}