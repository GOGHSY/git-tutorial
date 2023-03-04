#include <stdio.h>
#include <conio.h>

void main(){
//	variable declaration
	float input,i;
//	read data from user
    printf("enter any number:");
    scanf("%f",&input);
//    logic
    for(i=1;i<=10;i++)
      printf("\n%dx%d=%d",input,i,input*i);
	
	getch();
}








