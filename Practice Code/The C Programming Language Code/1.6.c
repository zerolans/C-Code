#include <stdio.h>

void main(){
    int c;

    printf("%d\n", EOF);  //输出为 -1

    //
    while(c = getchar() != EOF){
        putchar(c);
    }
}

//输出结果
/*
-1
3
4
8
-1
1
0
*/
//可以看出根本不会将 c 打印出来，也就是说 getchar() != EOF 这个语句为 0 ，因此没有执行 putchar(c); 语句。