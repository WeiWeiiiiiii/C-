#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int grade;
	
	scanf("%d",&grade);
	switch(grade / 10)
{	
	case 10:
	case 9:
		printf("A");
		break;
		
	case 8:
		printf("B");
		break;
	
	case 7:
		printf("C");
		break;
		
	case 6:
		printf("D");
		break;
		
	default:
		printf("­«·s¿é¤J");
		break;
		
		
	}
	return 0;
}
