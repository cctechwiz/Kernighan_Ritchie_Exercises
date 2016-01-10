#include <stdio.h>

/* Count blank, tabs, and new lines
 */

int main(){
	int c, b, t, nl;

	b = 0;
	t = 0;
	nl = 0;

	while((c = getchar()) != EOF){
		if(c == ' ')
			++b;
		else if(c == '\t')
			++t;
		else if(c == '\n')
			++nl;
	}

	printf("blanks: %d\ntabs: %d\nnewlines: %d\n", b, t, nl);
}
