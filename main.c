#include <stdio.h>
#include <string.h>
int main(void) {
 char pwd[11];
 char e_pwd[11];
 int i = 0;
 int check;
 int stack;
 while(1){
 printf("Enter New-Password (Max 10) : ");
 gets(pwd);
 while(pwd[i] != '\0'){
 i++;
 }
 if(i > 10){
 printf("Enter Password Again (Max 10)\n");
 i = 0;
 continue;
 }
 while(1){
 printf("Enter Your Password : ");
 gets(e_pwd);
 if(strcmp(pwd,e_pwd) == 0){
 check = 1 ;
 printf("Your Password is Corrent !!\n"); 
 break;
 }
 else{
 printf("Your Password is Not Corrent !!\n");
 stack += 1;
 if(stack == 3){
 check = 0;
 break;
 }
 }
 }
 if(check == 1){
 continue;
 }
 else{
 printf("Close Programs \n");
 break;
 }
 }
 return 0;
}