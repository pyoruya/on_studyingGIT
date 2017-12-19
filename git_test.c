#include "stdio.h"
#include "math.h"

double compensation_temperature(uint32_t ad, int temp, uint8_t code);

int main(){
	printf("Hello World");
	return 1;
}

double compensation_temperature(uint32_t ad, int temp, uint8_t code)
{
	double glc;
	glc = ad * (1+(23-temp)*1.8/100);
	glc -= intercept[code];
	glc /= slope[code];
	
	return glc;
}
/* Add blabla~!!!! */


// what changes~~???
