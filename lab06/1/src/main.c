int main()
{
	// Задаемо кількість елементів у масиві константою
	#define N 12 
	// Задаємо масив
	char mass[N] ="football    ";
	// Кількість символів в імені
	int name = 5;
	int i = 2;
	while(mass[i] != '\0')
	{
	if( mass[i] != ' ')
	{
	name++;
	}
	i++;
	}
	
	// Задаємо заповнювач
	char zap = '_';
	// Пробіли заповняються підкреслюваннями
	for (int i = 0; i < N; i++) 
	{
 		if (mass[i] == ' ') 
 		{
			mass[i] = zap;
		}
	// Для того щоб відбувся зсув массиву 
		for (int j = N - 2; j >= 0 ; j--)
		{
			mass[j ++] = mass[j];
			
		}
	}
	
	printf("%s", mass);

	return 0;
}
