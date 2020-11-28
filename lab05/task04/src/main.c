#define NUM 28 // заданое число
int main () {
	int sum = 0;
	int temp_for = 0;
	int result_for = 0;
	for (int i = 1; i < NUM; i++) { // делитель на цело с остатком 0
		temp_for = NUM % i;
		if (temp_for == 0) { // сумируем если остаток 0
		sum += i;
		} 
	}
	if (sum == NUM) {
		result_for = 1; // число совершенное
	}
	else {
		result_for = 0; //число не совершенное
	}
	int sum_while = 0;
	int temp_while = 0;
	int result_while = 0;
	int step_while = 1; // деление числа
	while (step_while < NUM) {
		temp_while = NUM % step_while;
		if (temp_while == 0) { // сумируем если остаток 0
		}
	step_while++;
	}
	if (sum == NUM) {
		result_while = 1; // число совершенное 
	}
	else {
		result_while = 0;  // число не совершенное
	}
	
	int sum_do = 0;
	int temp_do = 0;
	int result_do = 0;
	int step_do = 1;
	do {
		temp_do = NUM % step_do;
		if (temp_do == 0) {
			sum_do += step_do;
		}
	step_do++;
	} while (step_do < NUM);
	if (sum == NUM) {
		result_do = 1; //число совершенное
	}
	else {
		result_do = 0;  //число не совершенное 
	}

return 0;
}
