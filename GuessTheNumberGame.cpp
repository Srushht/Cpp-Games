#include<iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main () {
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    string name;
    cout << "<><><><><><><>";
    cout<< " Welcome to 'Guess the Number'!";
    cout << "<><><><><><><>" << endl;
    cout << "Enter player name : ";
    cin>>name;
    cout << "I'm Thinking of a Number Between 1 to 100" << endl;

    for(int i=0;i<5;i++)
    {
        cout<< "Enter your guess :";
        cin>> guess;

       

        if (guess > randomNumber)
        {
            cout<<" It is too high ! Try again." << endl;
        } else if (guess < randomNumber)
        {
            cout<<"It is too low ! Try again." << endl;
        }else
        {
            cout<< "Yayyy Congratulations "<<name <<"! you guessed the number in " << attempts << " attempts" << endl;
            break;

        }
        attempts++;

    }
    if(attempts == 5)
    {
        cout << "Better luck next time buddy."<<endl;
        cout << "The number I thought of was " << randomNumber << endl;
    }
             
     return 0;   

    }
    
