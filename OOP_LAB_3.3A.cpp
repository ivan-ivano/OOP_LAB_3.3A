//main.cpp
#include "FuzzyNumberO.h"
#include "FuzzyNumberC.h"


int main()
{
	FuzzyNumberO A, B, C, D;

	std::cout << "Enter A: ";
	std::cin >> A;
	std::cout << "A: " << A;

	std::cout << "Enter B: ";
	std::cin >> B;
	std::cout << "B: " << B;

	std::cout << "A + B = " << A + B;
	std::cout << "A * B = " << A * B;

	FuzzyNumberC G, H, J, K;

	std::cout << "Enter G: ";
	std::cin >> G;
	std::cout << "G: " << G;

	std::cout << "Enter H: ";
	std::cin >> H;
	std::cout << "H: " << H;

	std::cout << "G + H = " << G + H;
	std::cout << "G * H = " << G * H;

	return 0;
}