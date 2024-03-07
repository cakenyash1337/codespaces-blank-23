#include <iostream>
#include <cmath>

void sumComplex(double c1, double d1, double c2, double d2, double& realPart, double& imaginaryPart, double& phase) {
realPart = c1 + c2;
imaginaryPart = d1 + d2;
phase = atan2(imaginaryPart, realPart);
}

int main() {
double c1, d1, c2, d2;
std::cout << "Введіть дійсну та уявну частини першого комплексного числа (c1 d1): ";
std::cin >> c1 >> d1;
std::cout << "Введіть дійсну та уявну частини другого комплексного числа: (c2 d2): ";
std::cin >> c2 >> d2;

double realPart, imaginaryPart, phase;
sumComplex(c1, d1, c2, d2, realPart, imaginaryPart, phase);

double modulus = sqrt(realPart * realPart + imaginaryPart * imaginaryPart);

std::cout << "Модуль суми: " << modulus << std::endl;
std::cout << "Уявна частина суми: " << imaginaryPart << std::endl;
std::cout << "Реальна частина суми: " << realPart << std::endl;
std::cout << "Фаза суми: " << phase << std::endl;

return 0;
}