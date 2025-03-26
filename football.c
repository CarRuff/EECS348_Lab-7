#include "football.h"

void find(int score) {
    
    // Print Pre-text
    std::cout << "\nPossible combinations of scoring plays if a team’s score is " << score << ":\n";
    
    // Loop For 2 point touchdowns
    for (int td2pt = 0; td2pt * 8 <= score; ++td2pt) {
        // Loop for 1  point touchdown
        for (int td1pt = 0; td1pt * 7 + td2pt * 8 <= score; ++td1pt) {
            // Loop for touchdown
            for (int td = 0; td * 6 + td1pt * 7 + td2pt * 8 <= score; ++td) {
                // Loop for field goal
                for (int fg = 0; fg * 3 + td * 6 + td1pt * 7 + td2pt * 8 <= score; ++fg) {
                    // Loop for safety
                    for (int safety = 0; safety * 2 + fg * 3 + td * 6 + td1pt * 7 + td2pt * 8 <= score; ++safety) {
                        
                        // Add up total
                        int total = td2pt * 8 + td1pt * 7 + td * 6 + fg * 3 + safety * 2;
                        // Check Total agaisnt given score
                        if (total == score) {
                            
                            // Print Combination
                            std::cout << td2pt << " TD + 2pt, "
                                      << td1pt << " TD + FG, "
                                      << td << " TD, "
                                      << fg << " 3pt FG, "
                                      << safety << " Safety\n";
                        }
                    }
                }
            }
        }
    }
}
