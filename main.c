#include <stdio.h>
#include <conio.h>

void main(){
//	variable declaration
	int input,i;
//	read data from user
    printf("enter any number:");
    scanf("%d",&input);
//    logic
    for(i=1;i<=10;i++)
      printf("\n%dx%d=%d",input,i,input*i);
	
	getch();
}








