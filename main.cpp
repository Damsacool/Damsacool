#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    string originalWords[] = {"apple", "banana", "orange", "mango", "lemon"};
    string shuffledWords[] = {"apple", "banana", "orange", "mango", "lemon"};
    int level = 1;
    int lives = 5;


    for (string& word : shuffledWords) {
        random_shuffle (word.begin(),word.end());
    }
s
    while (level <= 5 && lives > 0) {
        string userInput;
        cout << "level" << level <<",Lives:" << lives <<endl;
        cout << "shuffle the word:" << shuffledWords[level -1] <<endl;
        cout << "enter your guess:";
        cin >> userInput;



        if (userInput == originalWords[level -1]) {
            cout << "correct guess! moving to the next level." <<endl;
            ++level;
        }
        else {
            cout << "wrong guess! you lost." <<endl;
            lives--;
        }
    }

    if (lives == 0){
        cout <<"game over. you ran out of lives." <<endl;
    }
    else{
        cout << "congratulations! you completed all levels." <<endl;
        }

    return 0;
}
