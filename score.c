#include<stdio.h>

int main(){
  int score;
  printf("Enter your score:");
 scanf("%d",&score);
  if (score>=80){
       printf("Grade A");
} else if (score>=70){
    printf("Grade B");
} else if (score>=50){
    printf("Grade C");
} else {printf("Failed!");}


return 0;
}

