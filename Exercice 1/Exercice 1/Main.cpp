#include <iostream>



int main() {

	int total = 0;

	std::cout << "Somme des multiples de 3 ou 5 inférieur à 1000 :\n";
	//Test des nombres jusqu'à 1000
	for (int i = 1; i < 1000; i++)
	{	//Test des nombres divisible par 3 ou par 5
		if (i % 3 == 0 || i % 5 == 0)
		{
			total = total + i;
		}
	}

	std::cout << total << "\n";

	system("pause");
	return 0;

}