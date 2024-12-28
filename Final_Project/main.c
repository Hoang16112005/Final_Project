#include <stdio.h>
#include <stdlib.h>
#include "function.h"
#include "datatype.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	int choiceAdmin;
	
	printf("*****Bank Management System*****\n");
	printf("        Choose your role      \n");
	printf("      ====================    \n");
	printf("      [1] Admin               \n");
	printf("      [2] User               \n");
	printf("      [0] Exit               \n");
	printf("      ====================    \n");
	
	while (1){
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1: {
				printf("*****Bank Management System*****\n");
				printf("     [1].REGISTER [2].LOGIN	    \n");
				printf("  ===========================   \n");
				while(1){
					printf("Login or Register: ");
					scanf("%d", &choiceAdmin);
					
					switch (choiceAdmin){
						case 1: {
							struct registerAccount acc[100];
							int n = readAccount(acc);
							addAccount();
							if (addAccount());
							return;
							break;
						}
					}
				}
				
				break;
			}
		}
		
	}
	return 0;
}
