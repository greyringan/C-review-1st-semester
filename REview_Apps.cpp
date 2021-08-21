#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//menu 1
void typeTable(){
	printf("Type\t\t\tSize\t\tRange Value\n");
	printf("Integer\t\t\t4 byte\t\t-2,147,483,648 to 2,147,483,647\n");
	printf("Float\t\t\t4 byte\t\t1.2E-38 to 3.4E+38\n");
	printf("Unsigned Integer\t4 byte\t\t0 to 4,294,967,295\n");
	printf("Character\t\t1 byte\t\t-128 to 127\n");
	printf("Double\t\t\t8 byte\t\t2.3E-308 to 1.7E+308\n");
	printf("Unsigned Short\t\t2 byte\t\t0 to 65,535\n");
	printf("Short\t\t\t2 byte\t\t-32,768 to 32,767\n");
	printf("Unsigned Long\t\t8 byte\t\t0 to 18446744073709551615\n");
	printf("Long\t\t\t8 byte\t\t-9223372036854775808 to 9223372036854775807\n");
}


void Calculator(int num1, int num2, char opr){
	printf("Enter first number >> ");
	scanf("%d", &num1);fflush(stdin);
	printf("Enter second number >> ");
	scanf("%d", &num2);fflush(stdin);
	printf("Enter operator >> ");
	scanf("%c", &opr);
	switch(opr){
	case '+':{
			printf("%d %c %d equals to %d\n", num1, opr, num2, num1+num2);
			break;
//			break;
		}
			
		case '-':
			printf("%d %c %d equals to %d\n", num1, opr, num2, num1-num2);
			break;
		case '*':
			printf("%d %c %d equals to %d\n", num1, opr, num2, num1*num2);
			break;
		case '/':
			printf("%d %c %d equals to %d\n", num1, opr, num2, num1/num2);
			break;
		case '%':
			printf("%d %c %d equals to %d\n", num1, opr, num2, num1%num2);
			break;
	}
}


void bitwiseCalculator(int num1, int num2, char opr){
	printf("Enter first number >> ");
	scanf("%d", &num1);fflush(stdin);
	printf("Enter second number >> ");
	scanf("%d", &num2);fflush(stdin);
	printf("Enter operator >> ");
	scanf("%c", &opr);
	switch(opr){
		case '&':
			printf("%d %c %d equals to %d\n", num1, opr, num2, num1&num2);
			break;
		case '|':
			printf("%d %c %d equals to %d\n", num1, opr, num2, num1|num2);
			break;
		case '^':
			printf("%d %c %d equals to %d\n", num1, opr, num2, num1^num2);
			break;
		case '~':
			printf("%c%d and %c%d equals to %d and %d\n", num1, opr, num2, num1= ~num1, num2= ~num2);
			break;
		default:
			puts("Wrong operator for this calculator!");
			break;
	}
}

void operatorMenu(){
	int choiceOpr = -1;
	do{
		printf("1. Calculator\n");
		printf("2. Bitwise Calculator\n");
		printf(">> ");
		scanf("%d", &choiceOpr);
		getchar();
		int num1, num2;
		char opr;
		switch(choiceOpr){
		case 1:
			Calculator(num1, num2, opr);
			break;
		case 2:
			bitwiseCalculator(num1, num2, opr);
			break;
	}
	}while(choiceOpr != 1 && choiceOpr != 2);
	
	
}

void relationMenu(int num1, int num2, char opr[]){
	printf("Enter first number >> ");
	scanf("%d", &num1);fflush(stdin);
	printf("Enter second number >> ");
	scanf("%d", &num2);fflush(stdin);
	printf("Enter operator >> ");
	scanf("%s", &opr);
	if(strcmp(opr, "==") == 0){
		printf("%d %c %d equals to %d\n", num1, opr, num2, (num1 == num2)? "TRUE" : "FALSE");
	}
	else if(strcmp(opr, "!=") == 0){
		printf("%d %s %d equals to %s\n", num1, opr, num2, (num1 != num2)? "TRUE" : "FALSE");
	}
	else if(strcmp(opr, "<=") == 0){
		printf("%d %s %d equals to %s\n", num1, opr, num2, (num1 <= num2)? "TRUE" : "FALSE");
	}
	else if(strcmp(opr, ">=") == 0){
		printf("%d %s %d equals to %s\n", num1, opr, num2, (num1 >= num2)? "TRUE" : "FALSE");
	}
	else if(strcmp(opr, "<") == 0){
		printf("%d %s %d equals to %s\n", num1, opr, num2, (num1 < num2)? "TRUE" : "FALSE");
	}
	else if(strcmp(opr, ">") == 0){
		printf("%d %s %d equals to %s\n", num1, opr, num2, (num1 > num2)? "TRUE" : "FALSE");
	}
	else{
		puts("Wrong operator for this calculator!");
	}
}

void logicRelationMenu(int num1, int num2, int num3, char log[]){
	do{
		printf("Enter first number(0/1) >> ");
	scanf("%d", &num1);
	}while(num1 != 0 && num1 != 1);
	do{
		printf("Enter second number(0/1) >> ");
		scanf("%d", &num2);fflush(stdin);
	}while(num2 != 0 && num2 != 1);
	do{
		printf("Enter third number(0/1) >> ");
		scanf("%d", &num3);fflush(stdin);
	}while(num3 != 0 && num3 != 1);
	
	printf("Enter logic operator(dan/atau) >> ");
	scanf("%s", log);getchar();
	
	if(strcmp(log, "dan") == 0){
		printf("%d && %d == %d equals to %s\n", num1, num2, num3, (num1 && num2 == num3)? "TRUE" : "FALSE");
	}
	else if(strcmp(log, "atau") == 0){
		printf("%d || %d == %d equals to \n", num1, num2, num3, (num1 || num2 == num3)? "TRUE" : "FALSE");
	}
	else{
		puts("Wrong operator for this calculator!");
	}
}

void selectionMenu(){
	int choiceOpr = -1;
	do{
		printf("1. Relational condition\n");
		printf("2. Logical Condition\n");
		printf(">> ");
		scanf("%d", &choiceOpr);
		getchar();
		int num1, num2, num3;
		char condOpr[2];
		char logOpr[5];
		switch(choiceOpr){
		case 1:
			relationMenu(num1, num2, condOpr);
			break;
		case 2:
			logicRelationMenu(num1, num2, num3, logOpr);
			break;
	}
	}while(choiceOpr != 1 && choiceOpr != 2);
}

void repetitionMenu(){
	int choiceOpr = -1;
	do{
		printf("1. One Loop\n");
		printf("2. Nested Loop\n");
		printf(">> ");
		scanf("%d", &choiceOpr);
		getchar();
		int num1, num2;
		char opr;
		switch(choiceOpr){
		case 1:
			puts("The sum of i = 0 and j = 1 for 8 times");
			for (int i=0, j=1; i<8; i++, j++)
     			printf("%d  +  %d  =  %d\n", i, j, i+j);
			break;
		case 2:
			for (int i=1; i<=3; i++) {   /* outer loop */

        		printf("The start of iteration %d of the outer loop.\n", i);
       			for (int j=1; j<=4; j++)  /* inner loop */
          			printf("    Iteration %d of the inner loop.\n", j);
      		 printf("The end of iteration %d of the outer loop.\n", i);
    		}
			break;
	}
	}while(choiceOpr != 1 && choiceOpr != 2);
}


void arr_ptrMenu(){
	char namelist[5][10] = {"Seto", "Javier", "Syarif", "Pradipta", "Imam"};
	int ptrChoice = -1;
	do{
		printf("Input number from 1 - 5 to see name list (input zero to exit): ");
		scanf("%d", &ptrChoice);
		getchar();
		if(ptrChoice == 0) continue;
		printf("%s\n", *(namelist+ptrChoice-1));
	}while(ptrChoice != 0);
}


void ptrMenu(){
	int a = 9;
	int *ptr = &a;
	printf("value of a = %d\n", a);
	printf("address of a = %d\n", &a);
	printf("value of ptr = %d\n", ptr);
	printf("address of ptr = %d\n", &ptr);
	printf("dereference of ptr = %d\n", *ptr);
}

void swap(char *a, char *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}

void permuteNum(char *nums, int left, int right){
	if(left == right){
		for(int i=0; i<=right; i++){
		printf("%c", *(nums+i));
	}
	printf("\n");
}
	for(int i=left; i<=right; i++){
		swap((nums+i), (nums+left));
		permuteNum(nums, left+1, right);
		swap((nums+left), (nums+i));
	}
	
}

void recurMenu(){
	int num, i = 0;
	printf("Input number to see all this number's permutation : ");
	scanf("%d", &num);
	getchar();
	char numArr[num];
	for(;i<num;i++){
		numArr[i] = i+49;
	}
	int len = sizeof(numArr)/sizeof(numArr[0]);
	permuteNum(numArr, 0, len-1);
}



int main(){
	int choice = -1;
	do{
//		system("cls");
		printf("Review Materials\n");
		printf("1. Data Type\n");
		printf("2. Operator\n");
		printf("3. Selection\n");
		printf("4. Repetition\n");
		printf("5. Array & Pointer\n");
		printf("6. Pointer\n");
		printf("7. Recursion\n");
		printf("8. Exit\n");
		printf(">> ");
		scanf("%d", &choice);
		getchar();
		switch(choice){
			case 1:
//				printf("1. Data Type\n");
				typeTable();
				break;
			case 2:
//				printf("2. Operator\n");
				operatorMenu();
				break;
			case 3:
//				printf("3. Selection\n");
				selectionMenu();
				break;
			case 4:
//				printf("4. Repetition\n");
				repetitionMenu();
				break;
			case 5:
//				printf("5. Array & Pointer\n");
				arr_ptrMenu();
				break;
			case 6:
//				printf("6. Pointer\n");
				ptrMenu();
				break;
			case 7:
//				printf("7. Recursion\n");
				recurMenu();
				break;
			case 8:
				puts("Thank you for using this app");
				break;
		}
	}
	while(choice != 8);
	return 0;
}
