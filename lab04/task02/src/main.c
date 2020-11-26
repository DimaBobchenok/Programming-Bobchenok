#define X 123.656 // Заданное число

int main() {
	int whole = N; // получили 123
	float y = N - whole; // поулчили 656
	float result;

	if (y == 0) { // переверка деления на 0
	result = -1; // если сть ошибка
 }
	y *= 1000;
	result = y / whole; // диление
	result = result * 100;
	result = (int) result * 1; // округдение до двух щнаков
	result /= 100; // обнуление

return 0;
}
