#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void game ();
void gamereset();

int main ()			// Had to write everything in void functions because main can't call itself
{
	game();
  	return 0;
}

void game ()
{
    bool gamefinished = false;
    int rand_n, guess, max_n;
    string difficulty;
    srand(time(0));
    cout << "Choose game difficulty: easy medium hard" << endl;	cin >> difficulty;
    if (difficulty == "easy") 
    	{
    		rand_n = rand() % 101;
    		max_n = 100;
    	}
    else if (difficulty == "medium") 
    	{
    		rand_n = rand() % 1001;
    		max_n = 1000;
    	}
    else if (difficulty == "hard") 
    	{
    		rand_n = rand() % 10001;
    		max_n = 10000;
    	}
    cout << "A random number between 0 and " << max_n << " has been choosen. " << endl;
    while (!gamefinished)
    {
        cout << "Take a guess: "; cin >> guess;
        if (guess == rand_n ) gamefinished = true;
        else if (guess > rand_n) cout << "Nope, try taking a lower number" << endl;
        else if (guess < rand_n) cout << "Wrong, try taking a higher number" << endl;
    }
    gamereset();		// Call to function which asks if player wants to play again
}

void gamereset()
{
	string request;
	cout << "Do you want to play again? (y/n)" << endl; cin >> request;
	if (request == "y") return game();		//Calls game function if players want to play again, reason why I had to rewrite this
	else if (request == "n");				//and couldn't use the main function for game.
	else 
	{
		cout << "Incorrect answer, please use y (for yes) or n (for no)." << endl;
		gamereset();						// Calls to ask the same question again, reason why I had to use two different functions
	}   									// apart from main.
}