int main()
{
	#define N 3 //Розмір матриці
	int tmp = 0; // Буферна змінна
	int mat[N][N] = { { 1, 2, 3 }, //Задаємо матрицю
					  { 4, 5, 6 },
					  { 7, 8, 9 } 
	};
	for (int i=0; i < N; i++) { //цикл для перестановки елементів матриці та їх зсуву 
		tmp = mat[i][0]; 
		for (int j=0; j < N; j++) { 
			mat[i][j] = mat[i][j + 1];
		}
		mat[i][N - 1] = tmp;
		
	}
	

}