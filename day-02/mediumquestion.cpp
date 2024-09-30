#include <iostream>

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++) {
        int dragonDSA, dragonTOC, dragonDM, slothDSA, slothTOC, slothDM;
        std::cin >> dragonDSA >> dragonTOC >> dragonDM;
        std::cin >> slothDSA >> slothTOC >> slothDM;

        int dragonTotal = dragonDSA + dragonTOC + dragonDM;
        int slothTotal = slothDSA + slothTOC + slothDM;

        if (dragonTotal > slothTotal) {
            std::cout << "Dragon" << std::endl;
        } else if (dragonTotal < slothTotal) {
            std::cout << "Sloth" << std::endl;
        } else {
            if (dragonDSA > slothDSA) {
                std::cout << "Dragon" << std::endl;
            } else if (dragonDSA < slothDSA) {
                std::cout << "Sloth" << std::endl;
            } else {
                if (dragonTOC > slothTOC) {
                    std::cout << "Dragon" << std::endl;
                } else if (dragonTOC < slothTOC) {
                    std::cout << "Sloth" << std::endl;
                } else {
                    std::cout << "Tie" << std::endl;
                }
            }
        }
    }

    return 0;
}
