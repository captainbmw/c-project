#include <stdio.h>
#include <string.h>
struct bank_details {
     char accName[50];
     int accNo;
     int balance;
     float OpeningDate;
} Bank1;
int main(){
fptr= fopen("C:/data/data/com.termux/files/home/storage/downloads/Bank.txt","w");
// assign value to name of Bank1
 struct bank_details Bank1;
  strcpy(Bank1.accName, " Cooperative Bank");
// assign value to  other Bank1 variables
 Bank1.accNo= 12345678;
 Bank1.balance = 25000;
 Bank1.OpeningDate= 31.102025;
//Display details
printf(" Name: %s ", Bank1.accName);
printf(" AccountNo: %d ", Bank1.accNo);
printf(" Balance: %d ", Bank1.balance);
printf(" Opeing Date: %f ", Bank1.OpeningDate);
//write in the file
fprintf(fptr, "Name: %s ", Bank1.accName);
fprintf(fptr, " AccountNo: %d ", Bank1.accNo);
fprintf(fptr," Balance: %d ", Bank1.balance);
fprintf(fptr, " Opeing Date: %f ", Bank1.OpeningDate);
fclose(fptr);
 return 0;
}
