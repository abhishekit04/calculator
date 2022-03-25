#include<stdio.h>

int main () {
	printf("\t\t::: THE NUMBER GAME :::\t\t \n\n\n\n");
	int num=50,guess;
	printf("guess the number\n\n");
	while(1) {
		scanf("%d",&guess);
	
		if(guess < num) {
			printf("wrong! guess a larger number\n\n");
		}
		
		else if (guess > num) {
			printf("wrong! guess a  smaller number\n\n");
		}
		
		else {
			printf("congratulations! your guess is right\n\n");
			printf("You did it");
			return ;
		}	
	}

	
	return 0;

}
