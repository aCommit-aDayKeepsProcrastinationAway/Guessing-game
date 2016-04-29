#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    bool gamefinished = false;
    int rand_n, guess;
    srand(time(0));
    rand_n = rand() % 101;
    cout << "A random number between 0 and 100 has been choosen. " << endl;
    while (!gamefinished)
    {
        cout << "Take a guess: "; cin >> guess;
        if (guess == rand_n ) gamefinished = true;
        else if (guess > rand_n) cout << "Nope, try taking a lower number" << endl;
        else if (guess < rand_n) cout << "Wrong, try taking a higher number" << endl;
    }
    cout << "Good job, you guessed it. The number is : " << rand_n << " .";
    return 0;
}
