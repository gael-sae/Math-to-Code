#include <iostream>
#include <vector>




int main() {

	unsigned int n1 = 1;
	unsigned int n2 = 1;
	unsigned int n3 = 1;
	unsigned int total = 0;

	//test des nombres jusqu'à 4M
	for (int i = 1; i < 4000000; i++)
	{
		n3 = n1 + n2;
		//test si le nombre est divisible par 2 et donc si il est pair
		if ((n3 % 2) == 0)
		{
			total += n3;
		}

		n1 = n2;
		n2 = n3;
	}

	std::cout << "Le total de la somme des pairs est " << total << ".\n";

	system("pause");
	return 0;
}