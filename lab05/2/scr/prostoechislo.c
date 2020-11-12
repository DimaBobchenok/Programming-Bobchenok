#define NUM 71 //  число


int main () 
{
	int tempFor  = 0;
	int resultFor = 0;
	for (int i = 2; i < NUM; i++) {
		tempFor = NUM % i;
		if (tempFor == 0) {
			resultFor = 0; // сложное число
		} else { 
			resultFor = 1; // простое число
		}
	}
	int i = 2;
	int resultWhile = 0;
	int tempWhile = 0;
	while (i < NUM) {
		tempWhile = NUM % i;
		if (tempWhile == 0) {
			resultWhile = 0; // сложное число
		} else { 
			resultWhile = 1;// простое число
		}
		i++;
	}
	int j = 2;
	int resultDo = 0;
	int tempDo = 0;
	do  {
		tempDo = NUM % j;
		if (tempDo == 0) {
			resultDo = 0; // сложное число
		} else {
			resultDo = 1; // простое число
		}
		j++;
	} while (j < NUM);
	return 0;
}
