#include <iostream>

double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}
void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}
double mean_arr(int arr[], const int length) {
	double sum = 0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}
	 double avg = sum / 5;
	 return avg;
}
void powers(int num1, int num2) {
		int result = 1;
	for (int i = 0; i <= num2; i++) {
		std::cout << result << ' ';
		result *= num1;
	}
	std::cout << std::endl;
}
void positive_arr(int arr[], int length){
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0)
			arr[i] *= -1;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}


int main() {
	setlocale(LC_ALL, "ru");

	
	std::cout << "\tЗадача 1.\n Среднее арифметическое.\n";
	double num1, num2;
	std::cout << "Введите два числа -> ";
	std::cin >> num1 >> num2;
	std::cout << mean(num1, num2) << "\n\n";
	

	std::cout << "\tЗадача 2.\nСреднее врифметическое элементов массива.\n\n";
	const int size = 5;
	int arr[size]{};
	std::cout << "Введите 5 элементов массива -> ";
	for (int i = 0; i < size; i++) {
		int x;
		std::cin >> x;
		arr[i] = x; 
	}
	std::cout << "\nМассив: ";
	print_arr(arr, size);
	std::cout << std::endl;
	std::cout << "Среднее арифметическое массива: ";
	std::cout << mean_arr(arr, size) << std::endl;
	
	std::cout << "\tЗадача 3.\nСтепени числа.\n\n";
	int x, y;
	std::cout << "Введите число и степень -> ";
	std::cin >> x >> y;
	powers(x, y);
	
	std::cout << "\n\tЗадача 4.\nМассив только с положительными значениями.\n";
	const int size2 = 5;
	int arr2[size2]{};
	std::cout << "Введите 5 элементов массива -> ";
	for (int i = 0; i < size2; i++) {
		int x;
		std::cin >> x;
		arr2[i] = x;
	}
	std::cout << "\nМассив: ";
	print_arr(arr2, size2);
	std::cout << "Исправленный массив: ";
	positive_arr(arr2, size2);
	

	return 0;
}
