#include <stdio.h>

void main(){
	int c, linec, spacec, tabc;

	linec = 0;
    spacec = 0;
    tabc = 0;

	while ((c = getchar()) != EOF){
        if (c == '\n'){
            ++linec;
        } else if (c == ' '){
            ++spacec;
        } else if(c == '\t'){
            ++tabc;
        }
    }
		
	printf("空格数为：%d，换行数为：%d，tab 数为：%d\n", spacec, linec, tabc);
}