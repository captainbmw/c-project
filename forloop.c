#include <stdio.h>
int main(){
	int count, i, number;
	printf("How many do you want to enter?");
	scanf("%d",&count);

	for (i=1; i<=count; i++){
		printf("Enter number: %d",i);
		scanf("%d",&number);
		printf("you entered number: %d\n",                       number);
	}
       return 0;
}
