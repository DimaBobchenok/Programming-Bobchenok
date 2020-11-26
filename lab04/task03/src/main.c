  
int main() {

	int k = 2;
	int m = 1;
	int n = 3; 

	int temp; 

	if (k > n) { // изменение m и k
		temp = k;
		k = n;
		n = temp;
	}
	if (k > m) { // изминение n и k
		temp = k;
		k = m;
		m = temp;
	}
	if (m > n) { // изминение n и m
		temp = m;
		m = n;
		n = temp;
	}
	
	return 0;
}
