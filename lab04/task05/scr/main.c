#define X 8 // значение х

int main() {
	int y = 0;
	if (X <= -1) {
		y = -1 / X; // функция х <= -1
	}
	else if (X > -1 && X <= 1) {
		y = X * X; // функция  х > -1 до x <= 1
	}
	else if (X > 1) {
		y = 1; // функция х > 1
	}
	return 0;
}
