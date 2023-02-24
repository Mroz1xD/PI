#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x, y, t, N, n, i;
float pi;

int main()
{
    N = 100000000;
    i = 0;
    t = 0;
    while( i < N ){
        srand(time(NULL));
        x = rand();
        y = rand();
        i++;
        if( ( x * x ) + ( y * y ) > 1 ){
            t++;
        }
    }
    pi = ( 4 * ( N - t ) ) / N;
    printf( "%.100000f", pi);
    return 0;
}
