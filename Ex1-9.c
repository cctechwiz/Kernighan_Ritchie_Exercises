#include <stdio.h>

/* Replace multiple blanks with
 * a single blank space.
 */

int main(){
	int c;
	while((c = getchar()) != EOF){
		if(c == ' '){
			while((c = getchar()) == ' ')
				;
			putchar(' ');
			if(c == EOF) 
				break;
		}
		putchar(c);
	}
}
