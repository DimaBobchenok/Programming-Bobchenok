int main() {
	char strIn[] = "I am student";
	int len = 0;// длина массива
	int count = 0;//кол-во слов

	for (int i = 0; ; i++){	//нахождение длины 
		if (strIn[i] == '\0'){
			break;
		} else {
		len++;
		}
	}
	for (int i = 0; i < len; i++){// найхождение количество слов						
		if (strIn[i] != ' ' && (strIn[i + 1] == ' ' || strIn[i + 1] == '\0')){
			count++;
		} 
	}
	return 0;
} 
