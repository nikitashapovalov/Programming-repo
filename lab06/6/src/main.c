int main()
{
    //Задаємо розмір матриці
    #define N 3 
    //Задаємо массив, який буде виповнювати роль матриці
    int mat[N][N] = { {5, 7, 4}, 
                      {4, 5, 6},
                      {7, 9, 3} };
    int matmat[N][N] = {};
    for (int i = 0; i < N; i++) 
    {  
        for (int j = 0; j < N; j++) 
        {            
            for (int p = 0; p < N; p++) 
            {
                matmat[i][j] += mat[i][p] * mat[p][j];
            }
        }
    }
	return 0;
}
