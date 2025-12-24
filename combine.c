#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//structure to hold student data
struct Student{
	char name[50];
	int age;
	float score;
};

void checkGrade(float score){
	if (score >=90)
		printf("Grade: A\n");
	else if (score >=70)
		printf("Grade: B\n");
	else if (score >=60)
		printf("Grade: c\n");
	else 
		printf("Grade: D\n");
}

int main(){
	int n,i;
	struct Student*student;
	File *fptr;


	printf("Enter number of students:");

	students= (struct Student *)malloc(n*sizesof(struct Student));
	fptr=fopen("student.txt","w");
	if(fptr==NULL){
		printf("File could not be opened.\n");
		return 1;

	}


	for( i=0; i<n; i++){
		printf("\nstudent %d\n",n+i);
		printf("Enter name:");
		scanf("%[^\n]",&students[i],name);
		printf("Enter age:");
		scanf("%d",&students[i],age);
		printf("Enter score:");
		scanf("%f",&students[i],score);
		fprint(fptr,"Name:%s,Age:%d,Score:%.2f\n",students[i].name,students[i].age,students[i].score);
	}
	fclose(fptr);


	i=0;
	
	do {
		printf("\n%s's Details:\n",students[i].name);
		printf("Age: %d\n",students[i].name);
		
		printf("Score: %.2f\n",students[i].score);
		checkGrade(students[i].score);
		i++;
	}while (i<n);


	free(student);

	return 0;

}

