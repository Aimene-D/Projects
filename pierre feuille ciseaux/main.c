
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int game(char ME, char computer)
{

	if (ME == computer)
		return -1;



	if (ME == 'p' && computer == 'f')
		return 0;


			else if (ME == 'f' && computer == 'p')
                return 1;

	if (ME == 'p' && computer == 'c')
		return 1;


	else if (ME == 'c' && computer == 'p')
		return 0;

	if (ME == 'f' && computer == 'c')
		return 0;


	else if (ME == 'c' && computer == 'f')
		return 1;
}


int main()
{
	int n;
	char ME, computer, resultat;
	srand(time(NULL));
	n = rand() % 100;

    if (n < 33)

    computer = 'p';

	else if (n > 33 && n < 66)


		computer = 'f';

	else
		computer = 'c';

	printf("\n\n\n\n\t\t\t\tEnter p pour PIERRE, f pour FEUILLE et c pour CISEAUX\n\t\t\t\t\t\t\t");


	scanf("%c", &ME);


	resultat = game(ME, computer);

	if (resultat == -1) {
		printf("\n\n\t\t\t\tEquality!\n");
	}
	else if (resultat == 1) {
		printf("\n\n\t\t\t\tWow! Vous avez gagné la partie!\n");
	}
	else {
		printf("\n\n\t\t\t\tOh! Vous avez perdue  la partie!\n");
	}
		printf("\t\t\t\tTu as choisi : %c et Computer as choisi : %c\n",ME, computer);
	return 0;
}
