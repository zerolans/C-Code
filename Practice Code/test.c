#include <stdio.h>
#define dprint(expr) printf(#expr" = %d\n", expr)

void main(){
	int x = 4;
    int y = 2;

    dprint(x/y);
}