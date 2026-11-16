// See problem description at:
// https://github.com/telinc1/Introduction-To-Programming-Problems/blob/master/resources/tasks/bonus/blackjack.md

#include <cstdlib>
#include <ctime>
#include <iostream>

int randomIntBetween(int min, int max) {
    return min + rand() % (max - min + 1);
}

int drawCard() {
    // 1 -> Ace
    // 2 -> 2
    // ...
    // 10 -> 10
    // 11 -> Jack
    // 12 -> Queen
    // 13 -> King

    int card = randomIntBetween(1, 13);

    if (card >= 10) {
        return 10;
    }

    return card;
}

void playBlackjack() {
    int card1 = drawCard();
    int card2 = drawCard();
    std::cout << "You first card is " << card1 << ". Your second card is "
              << card2 << "." << std::endl;
    int humanPoints = card1 + card2;

    int computerPoints = drawCard() + drawCard();

    bool humanStillPlaying = true;
    bool computerStillPlaying = true;

    while (humanStillPlaying || computerStillPlaying) {
        if (humanStillPlaying) {
            // Human makes choice
            std::cout << "You have " << humanPoints << ". Hit or Stand? ";
            char input;
            std::cin >> input; // H or S

            if (input == 'H') {
                int points = drawCard();
                std::cout << "You drew " << points << "." << std::endl;
                humanPoints += points;

                if (humanPoints > 21) {
                    std::cout << "You lose!" << std::endl;
                    return;
                }
            } else {
                humanStillPlaying = false;
            }
        }

        if (computerStillPlaying) {
            // Computer makes choice
            bool computerHits = computerPoints < 18;

            if (computerHits) {
                int points = drawCard();
                std::cout << "Dealer: I'll draw another card." << std::endl;
                computerPoints += points;
            } else {
                std::cout << "Dealer: I'll play with hand." << std::endl;
                computerStillPlaying = false;
            }
        }
    }

    std::cout << "Dealer: You have " << humanPoints << " points. I have "
              << computerPoints << "." << std::endl;
    if (computerPoints > 21) {
        std::cout << "Dealer: I broke 21, so you win!" << std::endl;
        return;
    }

    if (computerPoints > humanPoints) {
        std::cout << "You lose!" << std::endl;
    } else if (humanPoints > computerPoints) {
        std::cout << "You win!" << std::endl;
    } else {
        std::cout << "It's a tie!" << std::endl;
    }
}

int main() {
    srand(time(0));

    playBlackjack();

    return 0;
}
