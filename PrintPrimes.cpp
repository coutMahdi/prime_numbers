#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    long long end;
    cout << "Print Prime numbers to : ";
    cin >> end;
    unsigned Pcounter = 0;
    bool     isPrime  = true;
    cout << 2;
    for (size_t i = 3; i <= end; i += 2)
    {
        isPrime = true;
        for (size_t j =  3; j <= sqrt(i); j += 2)
        {
            if( i % j == 0 )
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            Pcounter++;
            cout << " , " << i;
        }    
    }
    cout << endl << "numbers of Prime numbers to " << end << " is equal to : " << Pcounter;
    getch();
    return 0;
}