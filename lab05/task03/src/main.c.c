#define NUM 102300
int main () {
	int result_for = 0;
	int num102_for = 0;
	int num300_for = 0;
	int result_while = 0;
	int num102_while = 0;
	int num300_while = 0;
	int result_do = 0;
	int num123_do = 0;
	int num456_do = 0;
	int half  =  NUM % 1000;
		for (int i = 1000; (NUM / i) > 0; i *= 10) { // определение первых 3 цыфр щасливого билета
 		num123_for += NUM / i  % 10;
	}
		for (int j = 1; (half / j) > 0; j *= 10) { // определение последних  3 цыфр щасливого билета

 		num456_for += half / j % 10;
	}
	if (num123_for == num456_for) { // сравнение
 		result_for = 1; // щасливый билет
	} else {
		result_for = -1;// не щасливый билет
	}

	int temp1_while = 1000; 
		while ((NUM / temp1_while) > 0) {
		num123_while += NUM / temp1_while  % 10;
		temp1_while *= 10;
	}
	int temp2_while = 1; 
		while ((half / temp2_while)  > 0) {
		num456_while += half / temp2_while % 10;
		temp2_while *= 10;
	}
	if (num123_while == num456_while) { // сравнение
		result_while = 1; // щасливый билет
	} else {
		result_while = -1;// не щасливого билет
	}


	int temp1_do = 1000; 
		num123_do += NUM / temp1_do  % 10;
		temp1_do *= 10;
	} while ((NUM / temp1_do) > 0);
	int temp2_do = 1; 
		do {
		num456_do += half / temp2_do % 10;
		temp2_do *= 10;
	} while ((half / temp2_do)  > 0);
		if (num123_do == num456_do) { // сравнеине 2 последних чисел
		result_do = 1; // щасливый билет
	} else {
		result_do = -1;// не щасливый билет
	}
return 0;
}
