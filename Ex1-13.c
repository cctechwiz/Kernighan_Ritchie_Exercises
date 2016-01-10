#include <stdio.h>

/* print a histogram of word lengths */

#define IN 1
#define OUT 0

int main(){
	int c, i, j, state, len;
	int lengths[15];

	len = 1;
	state = OUT;

	for(i = 0; i < 15; i++)
		lengths[i] = 0;

	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			state = OUT;
		} else {
			state = IN;
		}

		if(state == IN){
			c = getchar();
			while(c != ' ' && c != '\n' && c != '\t'){
				len++;
				c = getchar();
			}
			lengths[len]++;
			len = 1;
			state = OUT;
		}

		printf("length\tfrequency\n");
		for(i = 0; i < 15; i++){
			printf("%d\t", i);
			for(j = 1; j <= lengths[i]; j++){
				printf("-");
			}
			printf("\n");
		}
	}
}
