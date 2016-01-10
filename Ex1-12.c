#include <stdio.h>

int main(){
	int c;

	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t'){
			c = getchar();
			while(c == ' ' || c == '\t')
				c = getchar();
			putchar('\n');
			if(c == EOF)
				break;
		}
		putchar(c);
	}
}
