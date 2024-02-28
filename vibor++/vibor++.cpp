#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int v;
    string kek;
    string vowels = "aeiouyAEIOUY";
    cout << "write a word\n";
    cin >> kek;
    cout << "what do you wont to do with a word\n";
    cout << "1 reverse it\n";
    cout << "2 delete all vowels from it\n";
    cout << "3 delete all Consonants from it\n";
    cout << "4 randomize all letters in it\n";
    cin >> v;
    if (v == 1)
    {
        reverse(kek.begin(), kek.end());
    }
    if (v == 2)
    {

    }
    if (v == 3)
    {

    }
    if (v == 4)
    {
        random_shuffle(kek.begin(), kek.end());
    }
    cout << kek;
}