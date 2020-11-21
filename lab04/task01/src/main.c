#define N 653
int main () 
{
	int n1 = N/100; // Сотни
	int n2 = N%100/10; // Десятки
	int n3 = N%100%10; // Еденици
	int result = 0;
	if  (n1 == n2  || n1 == n3 || n3 == n2) { // Сравенине 
	    result = 1; // Есть ли одинаковые числа
	}
	return 0;

	
}
	
	
