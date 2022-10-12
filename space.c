#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num=0;
	
	while (num < 10 ) {
		printf("%*s%d%*s",num,"",num,3,"\n");
		    num++;
	}
	
	return 0;
}

