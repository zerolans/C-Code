#include <stdio.h>

void main(){
	float fahr, celsius;
	float upper, lower, step;

	lower = 0.0;
	upper = 100.0;
	step = 10;

	celsius = lower;
	printf("%s\t%s\n", "ÉãÊÏ¶È", "»ªÊÏ¶È");
	while(celsius <= upper){
		fahr = (celsius * 9/5) + 32;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}