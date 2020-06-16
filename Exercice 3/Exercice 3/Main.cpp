#include <iostream>



int main() {

	unsigned int result = 0;
	unsigned int notResult = 0;

	std::cout << "Le plus grand nombre premier de 600 851 475 143 est :\n";
	//Test des nombres jusqu'à 600’851’475’143 => mauvaise procédure ?
	for (unsigned int i = 1; i < 600851475/* ...143/1000*/; i++)
	{	//Test des nombres divisible par 2, 3, 5 ou par 7
		if (i % 3 == 0 || i % 5 == 0 || i % 2 == 0 || i % 7 == 0)
		{
			notResult = i;
		}
		else result = i;
	}
	// dans le calcule il manque les 3 derniers chiffres du nombre : ...143, ce qui je pense fausse tous.
	std::cout << result * 1000<< "\n";

	system("pause");
	return 0;

}