#include <stdio.h>

int main(){
  int age;
  printf("enter your age:");
  scanf("%d",&age);
  if (age>=18){
  printf("you're an adult.\n");}
  else {printf("you're a child");}

  return 0;
}
