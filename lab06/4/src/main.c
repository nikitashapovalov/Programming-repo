int main()
{
        //Визначення кількості слів
        int words = 5; 
        //Показує кількість символів в массиві
	int n = 2; 
	//Kількість символів в массиві
        char mass[] = "world"; 
        //Цикл for потрібен для того щоб знайти потрібне кол-во слів у реченні
        for (int i = 1; i < n; i++)
             if (mass[i] != ' ' && mass[i ++] <= ' ') 
        {
        
            {
                words++;
            }
        }
	printf("%s\n", words); 
	
	return 0;
}
