#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    int maxLead = 0;
    int winner = 0;

    int cumulativeScore1 = 0;
    int cumulativeScore2 = 0;

    for (int i = 0; i < N; ++i) {
        int Si, Ti;
        std::cin >> Si >> Ti;

        cumulativeScore1 += Si;
        cumulativeScore2 += Ti;

        int currentLead = std::abs(cumulativeScore1 - cumulativeScore2);
        int currentLeader = (cumulativeScore1 > cumulativeScore2) ? 1 : 2;

        if (currentLead > maxLead) {
            maxLead = currentLead;
            winner = currentLeader;
        }
    }

    std::cout << winner << " " << maxLead << std::endl;

    return 0;
}