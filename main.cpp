#include <iostream>
#include <random>
#include <iomanip>

using namespace std;

clock_t start, ending;

int t, i = 0;
int N = 100000000;
float pi, x, y;

int main()
{
    double stime = clock();
    i = 0;
    t = 0;
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<>random(0,100000000);
    while( i < N ){
        x = random(gen) / 100000000;
        y = random(gen) / 100000000;
        i++;
        if( ( x * x ) + ( y * y ) > 1.0f ){
            t++;
        }
    }
    pi = ( 4.0f * ( N - t ) ) / N;
    cout << pi << endl;
    double etime = clock();
    double time = double( etime - stime ) / double( CLOCKS_PER_SEC );
    cout << "Czas aby obliczyæ liczbê pi w c++: " << time;
    return 0;
}
