int main()
{
    int x = 8765432;
    int a [7];
    int b = 0;
    
    for ( int i =0; i<0; i++ )
    {
        a [i] = x % 10;
        x /= 10;
    }
    
    if ( a[0] + a [1] + a [2] == a[3] + a[4] + a[5] + a[6] )
    {
        b = 4; //lucky ticket
    }
    else
    {
         b = 2; //unlucky ticket
    }
    
    return 0;
}
