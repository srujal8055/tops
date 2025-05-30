<<<<<<< HEAD
#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

class RockPaperScissor {
public:
    void playGame(int rounds);
};

void RockPaperScissor::playGame(int rounds) {
    string playerName;
    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0;

    cout << "Enter your name: ";
    cin >> playerName;

   
    cout << "\nWelcome, " << playerName << "! Let's play Rock Paper Scissors!\n";
    cout << "Choices:\n";
    cout << "1. Rock\n2. Paper\n3. Scissor\n";

    
    srand(time(0));

    int round = 1;
    while (round <= rounds) {
        cout << "\nThis is Round " << round << endl;

        
        cout << "Select your choice (1 = Rock, 2 = Paper, 3 = Scissor): ";
        cin >> playerChoice;

        
        if (playerChoice < 1 || playerChoice > 3) {
            cout << "Invalid choice! Please enter 1, 2, or 3.\n";
            continue;  
        }

       
        computerChoice = (rand() % 3) + 1;

        
        cout << "Computer chose: ";
        if (computerChoice == 1) cout << "Rock\n";
        else if (computerChoice == 2) cout << "Paper\n";
        else cout << "Scissor\n";

        
        if (playerChoice == computerChoice) {
            cout << "It's a tie!\n";
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            cout << playerName << " wins this round!\n";
            playerScore++;
        } else {
            cout << "Computer wins this round!\n";
            computerScore++;
        }

        round++;  
    }

    
    cout << "\nFinal Scores:\n";
    cout << playerName << ": " << playerScore << endl;
    cout << "Computer: " << computerScore << endl;

    if (playerScore > computerScore) {
        cout << playerName << " wins the game!\n";
    } else if (playerScore < computerScore) {
        cout << "Computer wins the game!\n";
    } else {
        cout << "The game is a tie!\n";
    }
}

int main() {
    RockPaperScissor game;
    int rounds;

    cout << "Enter number of rounds to play: ";
    cin >> rounds;

    
    game.playGame(rounds);

    return 0;
}
=======
#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

class RockPaperScissor {
public:
    void playGame(int rounds);
};

void RockPaperScissor::playGame(int rounds) {
    string playerName;
    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0;

    cout << "Enter your name: ";
    cin >> playerName;

   
    cout << "\nWelcome, " << playerName << "! Let's play Rock Paper Scissors!\n";
    cout << "Choices:\n";
    cout << "1. Rock\n2. Paper\n3. Scissor\n";

    
    srand(time(0));

    int round = 1;
    while (round <= rounds) {
        cout << "\nThis is Round " << round << endl;

        
        cout << "Select your choice (1 = Rock, 2 = Paper, 3 = Scissor): ";
        cin >> playerChoice;

        
        if (playerChoice < 1 || playerChoice > 3) {
            cout << "Invalid choice! Please enter 1, 2, or 3.\n";
            continue;  
        }

       
        computerChoice = (rand() % 3) + 1;

        
        cout << "Computer chose: ";
        if (computerChoice == 1) cout << "Rock\n";
        else if (computerChoice == 2) cout << "Paper\n";
        else cout << "Scissor\n";

        
        if (playerChoice == computerChoice) {
            cout << "It's a tie!\n";
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            cout << playerName << " wins this round!\n";
            playerScore++;
        } else {
            cout << "Computer wins this round!\n";
            computerScore++;
        }

        round++;  
    }

    
    cout << "\nFinal Scores:\n";
    cout << playerName << ": " << playerScore << endl;
    cout << "Computer: " << computerScore << endl;

    if (playerScore > computerScore) {
        cout << playerName << " wins the game!\n";
    } else if (playerScore < computerScore) {
        cout << "Computer wins the game!\n";
    } else {
        cout << "The game is a tie!\n";
    }
}

int main() {
    RockPaperScissor game;
    int rounds;

    cout << "Enter number of rounds to play: ";
    cin >> rounds;

    
    game.playGame(rounds);

    return 0;
}
>>>>>>> 994bd57 (oops assign)
