#include <iostream>



int main() {

	int result1 = 0;
	int a1 = 0;
	int a2 = 0;
	int result2 = 0;
	int b1 = 0;
	int b2 = 0;
	int result3 = 0;
	int c1 = 0;
	int c2 = 0;
	int result4 = 0;
	int d1 = 0;
	int d2 = 0;
	int result5 = 0;
	int e1 = 0;
	int e2 = 0;

	std::cout << "Somme des boites de 6 par 5 dans un container de 25 par 18 :\n";
	//division par coté x et coté y
	a1 = 25 / 6;
	a2 = 18 / 5;
	result1 = a1 * a2;

	std::cout << result1 << "\n";

	std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";

	std::cout << "Somme des boites de 1 par 1 dans un container de 10 par 10 :\n";
	//division par coté x et coté y
	b1 = 10 / 1;
	b2 = 10 / 1;
	result2 = b1 * b2;

	std::cout << result2 << "\n";

	std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";

	std::cout << "Somme des boites de 5 par 6 dans un container de 12 par 34 :\n";
	//division par coté x et coté y
	c1 = 12 / 5;
	c2 = 34 / 6;
	result3 = c1 * c2;

	std::cout << result3 << "\n";

	std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";

	std::cout << "Somme des boites de 1112 par 1314 dans un container de 12345 par 678910 :\n";
	//division par coté x et coté y
	d1 = 12345 / 1112;
	d2 = 678910 / 1314;
	result4 = d1 * d2;

	std::cout << result4 << "\n";

	std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";

	std::cout << "Somme des boites de 6 par 1 dans un container de 5 par 100 :\n";
	//division par coté x et coté y
	e1 = 5 / 6;
	e2 = 100 / 1;
	result5 = e1 * e2;

	std::cout << result5 << "\n";

	system("pause");
	return 0;

}