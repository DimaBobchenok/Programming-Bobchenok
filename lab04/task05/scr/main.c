#define X 8 // значение х

int main()
{
	  int y = 0;
	  if (X < -1) {
		         y = -1 / x;
	  }
	  else if (X > -1 && X <= 0) {
		         y = X + 1;
	  }
	  else if (X > 0 && X <= 1) {
		         y = -1 * X + 1;
  	}
	  else if (X > 1) {
		         y = X - 1;
	  }
    return 0;
}
