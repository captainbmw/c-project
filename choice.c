#include <stdio.h>
int main(){
	int i, choice, repeat;
	do {
		printf("Choice from 1 to 5:");
		scanf("%d", &choice);

		if (choice < 1 || choice >5){
			printf("invalid choice.\n");}
		else {
			printf("Counting from 1 to your number:\n");
			for (i = 1; i <= choice; i++){
				printf("%d",i);
			}
			printf("\n");
		}

		printf("Do you want to try again? (1=yes, 0=No):");
		scanf("%d", &repeat);
	}while(repeat == 1);



	return 0;
}
