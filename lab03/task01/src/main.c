#define  UAH 1000 // 1000 гривен (сумма)
int main ()  {
    const float eur=32; // 1 евро - 32 гривен 
    const float usd=28; // 1 доллар - 28 гривен
    const float rub=0.24; // 1 рубль  - 0.24 гривен 
	float uah_euro = UAH / eur; //гривны в евро
	float uah_usd = UAH / usd; //гривны в долларах
	float uah_rub = UAH / rub; // гривны в рублях
	return 0;
}
