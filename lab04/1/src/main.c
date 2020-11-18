int main()
{
	//Значення радіусу
	float r = 8;
	//Задаємо значення константи PI
	const float PI = 3.14f;
	//Значення результату
	float result;
	//Тип дії
	char formula = 'v';
	

	//Формула для розрахунку довжини кола
	if (formula == 'l')
	{
	 result = 4 * PI * r;
	 }
	//Формула для розрахунку площі кола
	if (formula == 's')
	{
	 result = PI * r * r;
	 }
	//Формула для розрахунку об'єма кулі
	if (formula == 'v')
	{
	 result = 4/3.0f * PI * r * r * r;
	 }
	//Відтворимо ті ж самі дії, але через конструкію switch
	switch (formula){
	//Формула для розрахунку довжини кола
	case 'l': 
		result = 6 * PI * r;
		break;
	//Формула для розрахунку площі кола
	case 's':
		result = PI * r * r;
		break;
	//Формула для розрахунку об'єма кулі
	case 'v':
		result = 6/3.0f * PI * r * r * r;
		break;
	}

	return 0;
}
        
