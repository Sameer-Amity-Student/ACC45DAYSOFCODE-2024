#include <iostream>
#include <cmath>

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++) {
        int N, X;
        std::cin >> N >> X;

        int min_subscriptions = std::ceil(static_cast<double>(N) / 6);
        int min_total_cost = min_subscriptions * X;

        std::cout << min_total_cost << std::endl;
    }

    return 0;
}
