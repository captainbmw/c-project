#include <stdio.h>
//function to check even or odd no.
void CheckEvenOdd(int num) {
	if (num % 2 ==0) {
		printf("%d is Even.\n",num);
	} else {
		printf("%d is odd.\n", num);
	}
}
//function to display multiplication table
void displayTable(int num){
	printf("Multiplication for %d:\n", num);
	for (int i=1; i<=5; i++){
		printf("%d x %d = %d\n", num,i, num*i); }

}
int main(){
	int number, repeat;
	do {
		printf("Enter number:");
		scanf("%d",&number);


		CheckEvenOdd(number);
		displayTable(number);


		printf("Try again? (1 =yes, 0=no):");
		scanf("%d",&repeat);
	}
	while( repeat ==1);

	return 0;
}

