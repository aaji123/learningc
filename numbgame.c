#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int target, guess, guesses = 0;

	srand(time(NULL));
	target = rand() % 100 + 1;
	
	printf("I'm thinking of a number between 1 and 100!\n");
	
	while (1) {
		printf("Your guess: ");
		scanf("%d", &guess);
		guesses++;

		if (guess == target) {
			printf("Correct! You got it in %d guesses!\n", guesses);
			break;
		} else if (guess < target) {
			printf("Too low! Try again.\n");
		} else {
			printf("Too high! Try again.\n");
		}
	}
	return 0;
}
