#include <iostream>

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++) {
        int X, Y;
        std::cin >> X >> Y;

        int totalHours = 4 * X + Y;

        std::cout << totalHours << std::endl;
    }

    return 0;
}
