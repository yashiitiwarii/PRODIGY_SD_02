#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    cout << "*Welcome to the number guessing game!*" << endl;
    cout << endl;
    cout << "You have to guess the number between 1 and 100 , you will have limited choices based on the level you choose. Best of Luck !" << endl;

    while(true){
        cout << "YOU MUST CHOOSE THE LEVEL : " << endl;

        cout << endl;

        int levelChoice;
        cout << "Enter your level choice: ";
        cin >> levelChoice;

        srand(time(0));
        int secretNum = (rand() % 100 + 1);
        int num;

        if(levelChoice == 1){
            cout << "Welcome to level 1 of number guessing game. You will be given 10 chances to make the guess!" << endl;
            cout << endl;

            int chanceLeft = 10;
            for(int i = 0; i <= 10; i++){
                cout << "Enter the num : ";
                cin >> num;

                if(num == secretNum){
                    cout << "Woah! you guessed it right, " << num
                    << " " << "is the secret number." << endl;

                    cout << "Thanks for playing..." << endl;
                    cout << "Play the game again with us!!\n\n"
                    << endl;
                    break;
                }

                else{
                    cout << "NOPE." << " " << num << " " << "is not the right number\n";

                    cout << endl;

                    if(num > secretNum){
                        cout << "**HINT : The secret number is smaller than the number"
                        "you have chosen**"
                        << endl;
                    }

                    else{
                        cout << "**HINT : The secret number is greater than the number you have chosen**"
                        << endl;
                    }
                    chanceLeft--;

                    cout << chanceLeft << " " << "Chances are left." << endl;

                    if(chanceLeft == 0){
                        cout << "You could not find the secret number, it was: " << secretNum << endl;

                        cout << "Play the game again to win \n\n";

                    }

                }
                
            }
    

        }

        if(levelChoice == 2){
            cout << "Welcome to Level 2 of guessing the number."
            "you will be given 7 chances to guess the secret number" << endl;
            cout << endl;
            int chanceLeft = 7;
            for(int i = 0; i <= 7; i++){
                cout << "Enter the number of your choice";
                cin >> num;

                if(num == secretNum){
                    cout << "Bravo! you guessed the right number."<< endl;
                    cout << endl;
                    cout << "Thank you for playing the game!" << endl;
                    break;
                }

                else{
                    cout << "**NOPE! Your guess is wrong!!!**";

                    if(num > secretNum){
                        cout << endl;
                        cout << "**HINT : The secret number is smaller than the number"
                        "you have chosen**"
                        << endl;
                    }

                    else{
                        cout << "**HINT : the secret number is greater than the number"
                        "you have choosen**" << endl;
                    }

                    chanceLeft--;
                    cout << endl;
                     cout << chanceLeft << " " << "chances are left." << endl;

                     if(chanceLeft == 0){
                        cout << endl;
                        cout << "Sorry honey!, you lost, start the game again!";
                     }
                }
            }
        }

        if(levelChoice == 3){
            cout << "Welcome to Level 3 of Number guesing" << endl;
            cout << "*YOU GOT ONLY 5 CHANCES TO PLAY!*" << endl;

            cout << endl;

            int chanceLeft = 5;
            for(int i = 0; i <= 5; i++){
                cout << "Enter the number";
                cin >> num;

                if(num == secretNum){
                    cout << "You guessed it right, the secret number is: " << secretNum << endl;

                    cout << "Thank you for playing!" << endl;
                    break;
                }


                else{
                    cout << endl;
                    cout << "**NOPE! Your guess is wrong, TRY AGAIN**" << endl;

                    if(num < secretNum){
                        cout << "**HINT : Your guess is less than the secret number.** "<< endl;
                    }

                    else{
                        cout << "**HINT : Your guess is greater than the secret number.**" << endl;
                    }

                    cout << endl;

                    chanceLeft--;
                    cout << chanceLeft << " " << "chances are left!" << endl;

                    cout << endl;

                    if(chanceLeft == 0){
                        cout << "You lost the game, start again to win it" << endl;
                    }
                }
            }      
        }


        else if(levelChoice == 0){
            cout << "You Exit the game!" << endl;
            exit(0);
        }

        else{
            cout << "Wrong Choice! Enter a valid choice to play the game! (1,2,3)."
            << endl;
        }



        
    }


    return 0;
}