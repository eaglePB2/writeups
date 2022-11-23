#include <iostream>

using namespace std;

#include <cstdlib>

#include <iomanip>

#include <ctime>

void randnumbers(int & , int & , int & ); // Random Numbers Prototype
void guessnumbers(int & , int & , int & ); // Guess Numbers Prototype
int max(int a, int b, int c);
int middle(int a, int b, int c);
int min(int a, int b, int c);

int main() {

    // --> Guesses of Numbers and their Orders
    int guesses = 0;

    for (int counter = 0; counter <= 10; counter++) {

        while (guesses <= 2) {

            //Random Numbers
            int a, b, c;
            randnumbers(a, b, c);

            //Guessed Numbers
            int d, e, f;
            guessnumbers(d, e, f);

            int success = 0;

            if (max(a, b, c) == max(d, e, f))
                success++;
            if (middle(a, b, c) == middle(d, e, f))
                success++;
            if (min(a, b, c) == min(d, e, f))
                success++;

            cout << success << " numbers guessed!" << endl;

            int success_in_order = 0;

            if (a == d)
                success_in_order++;
            if (b == e)
                success_in_order++;
            if (c == f)
                success_in_order++;

            cout << success_in_order << " numbers in order!" << endl;

            if (success == 3)
                guesses++;
        }
    }

    if (guesses >= 3)
        cout << "Congratulations, you guessed the numbers in order 3 times! You win..\n";

    else if (guesses < 3)
        cout << "You failed to guess the numbers in order over an attempt of 10 times! You lose..\n";

    system("pause");
    return 0;
}

int max(int a, int b, int c) {
    if (a > b) {
        if (a > c)
            return a;
        else
            return c;
    } else if (b > c)
        return b;
    else
        return c;
}

int middle(int a, int b, int c) {
    if (a > b) {
        if (a < c)
            return a;
        else
            return c;
    } else if (b > c)
        return b;
    else
        return c;
}

int min(int a, int b, int c) {
    if (a < b) {
        if (a < c)
            return a;
        else
            return c;
    } else if (b < c)
        return b;
    else
        return c;
}

void randnumbers(int & x, int & y, int & z) {
    srand(time(0));
    x = rand() % 10;
    cout << x << setw(2);

    do {
        y = rand() % 10;
    }
    while (y == x);
    cout << y << setw(2);

    do {
        z = rand() % 10;
    } while (z == x || z == y);
    cout << z << setw(2);
}

void guessnumbers(int & nb1, int & nb2, int & nb3) {
    cout << "Guess the 3 numbers from 1-->6: ";
    cin >> nb1 >> nb2 >> nb3;
}
