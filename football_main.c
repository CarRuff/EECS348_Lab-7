#include "football.h"

// Main Function 
int main() {
    // Print pre-text
    std::cout<<"Enter 0 or 1 to STOP\n";
    
    // Declare score
    int score;
    
    // Get Points from user
    std::cout << "Enter points:";
    std::cin >> score;

    // If the user inputed 1 or less
    if (score <= 1) {
        // Exit 
        return 0;
    // If the user inputed 1 or more
    } else {
        // Call find with score
        find(score);
    }

    // Program Success
    return 0;
}
