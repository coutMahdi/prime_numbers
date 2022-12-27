#include <iostream>
#include <cmath>
#include <conio.h>
#include <Windows.h>


using namespace std;

int main()
{
    unsigned n , Pcounter = 0;
    cout << "this program Prints Prime numbers to nth Prime number." << endl;
    cout << "choose n: ";
    cin >> n;
    bool     isPrime  = true;
    cout << 2;
    for (size_t i = 3;; i += 2)
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
            Sleep(40);
            cout << " , " << i;
            if(Pcounter == n)break;
        }    
    }
    getch();
    return 0;
}