#define N 245 
int main () {
	int n1 = N/100;
	int n2 = N%100/10;
	int n3 = N%100%10;
	
	if (n1 == n2  || n1 == n3 || n3 == n2) {
		
			return 0;
			
		}
		
	return 1;
}
	
