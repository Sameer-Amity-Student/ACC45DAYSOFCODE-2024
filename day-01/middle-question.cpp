#include <iostream>
#include <string>

int main() {
    int T;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        std::cin >> N;
        std::string S;
        std::cin >> S;
        int consonants = 0;
        for (char c : S) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                consonants = 0;
            } else {
                consonants++;
                if (consonants >= 4) {
                    std::cout << "NO\n";
                    break;
                }
            }
        }
        if (consonants < 4) {
            std::cout << "YES\n";
        }
    }
    return 0;
}
