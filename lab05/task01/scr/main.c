#define X 6 //  число
#define Y 10 //  число


int main () { 
int num1;
	int num2;
	int nod_for = 0;
	int nod_while = 0;
	int nod_do = 0;
	
	for (num1 = X, num2 = Y; num1 > 0 && num2 > 0;) {
		(num1 > num2) ? (num1 %= num2) : (num2 %= num1);
		nod_for = num1 + num2;
	}
	num1 = X;
	num2 = Y;
	
	while (num1 > 0 && num2 > 0) {  
		if (num1 > num2) {	
			num1 %= num2;
		} else if (num1 < num2) {
			num2 %= num1;
		nod_while = num1 + num2;
		}
	}
	num1 = X;
	num2 = Y;
	
	do { 

		if (num1 > num2) {      
			num1 %= num2;
		} else if (num1 < num2) {
			num2 %= num1;
		}      
		nod_do = num1 + num2;
	} while (num1 > 0 && num2 > 0);
return 0;
}	
