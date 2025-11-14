#include<iostream>
int tong(int a, int b) {
	return a + b;
}
int tru(int a, int b) {
	return a - b;
}
int nhan(int a, int b) {
	return a * b;
}
int chia(int a, int b) {
	return a / b;
}
int main() {
	int a, b;
	std::cout << "Nhap a: ";
	std::cin >> a;
	std::cout << "Nhap b: ";
	std::cin >> b;
	std::cout << "Nhap c: ";
	std::cin >> c;
	std::cout << "Tong: " << tong(a, b) << std::endl;
	std::cout << "Hieu: " << tru(a, b) << std::endl;
	std::cout << "Tich: " << nhan(a, b) << std::endl;
	std::cout << "Thuong: " << chia(a, b) << std::endl;

	std::cout << "Tong: " << tong(a, c) << std::endl;
	std::cout << "Hieu: " << tru(a, c) << std::endl;
	std::cout << "Tich: " << nhan(c, b) << std::endl;
	std::cout << "Thuong: " << chia(c, b) << std::endl;
	return 0;
}