#define YEAR 2010 // заданый год
	
int main () 
{
	int cen = 0;
	if (YEAR % 100 == 0) {
		cen = YEAR / 100;
	}
	else {
		cen = (YEAR / 100) + 1;
	}
	return 0;
}

	
