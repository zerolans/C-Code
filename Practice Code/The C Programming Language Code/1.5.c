#include <stdio.h>

void main(){
    printf("  华氏度\t摄氏度\n");
    for(float fahr = 300.0; fahr >= 0; fahr = fahr - 20){
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }
}