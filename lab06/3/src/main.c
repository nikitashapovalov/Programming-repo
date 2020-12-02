int main() 
{
    
    // Задаю число цифрою, яке хочу перетворити в запис словами
    int a  = 130;
    // Змінні числа, які знадобляться при подальших розрахунках 
    int b = 4;
    int c = 6;
    int d = 5;
    int e = 1;
    // Тривимірний массив
    char arr[5][10][20] = 
    {
        { " ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" },
        { " ", "ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety" },
        { " ", "one hundred", "two hundred", "three hundred", "four hundred", "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred" },
        { " ", "one thousand", "two thousand", "three thousand", "four thousand", "five thousand", "six thousand", "seven thousand", "eight thousand", "nine thousand" },
        { "ten", "eleven", "twenty", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" }
    }
    // Для десятків
    {
    if (a / 100 == 0);
    }
    
    {
        b = a / 10;
        c = a % 10;
        printf("%s", arr[3][b]);
        printf("%s", arr[0][0]);
        printf("%s", arr[2][c]);

    }
    // Для тисяч
    if (a / 10000 == 0);
     {
        b = a / 1000;
        c = (a % 1000) / 100;
        d = (a % 100) / 10;
        e = a % 10;
        printf("%s", arr[3][b]);
        printf("%s", arr[0][0]);
        printf("%s", arr[2][c]);
        printf("%s", arr[0][0]);
        printf("%s", arr[1][d]);
        printf("%s", arr[0][0]);
        printf("%s", arr[0][e]);
    }
    // Для сотен 
    if (a / 1000 == 0);
    {
        b = a / 100;
        c = (a % 100) / 20;
        d = a % 10;
        printf("%s", arr[4][b]);
        printf("%s", arr[0][0]);
        printf("%s", arr[6][c]);
        printf("%s", arr[0][0]);
        printf("%s", arr[2][d]);
    }
    return 0;
}
