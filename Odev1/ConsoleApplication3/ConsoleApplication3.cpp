#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

// 1. Görev: Player Sınıfı
class Player {
private:
    std::string name;
    int score;

public:
    Player(std::string playerName, int playerScore) : name(playerName), score(playerScore) {}

    ~Player() {}
    // Oyuncunun adını döndürenme
    std::string getName() const {
        return name;
    }

    // Oyuncunun puanını döndürenme
    int getScore() const {
        return score;
    }
};

// 2. Görev: Swap 
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    Player player1("Rivialı Geralt", 100);
    Player player2("Dutch Van Der Linde", 90);

    std::cout << "Player 1: " << player1.getName() << ", Score: " << player1.getScore() << std::endl;
    std::cout << "Player 2: " << player2.getName() << ", Score: " << player2.getScore() << std::endl;

    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    const int SIZE = 5;
    int intArray[SIZE];
    std::cout << "Randomly generated array: ";
    srand(time(NULL)); 
    for (int i = 0; i < SIZE; ++i) {
        intArray[i] = rand() % 100; // sayı üretme
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // 4. Görev: String ve vektör oluşturma
    std::string word;
    std::vector<char> charVector;
    std::cout << "Kelime girin: ";
    std::cin >> word;

    // Her harfi vektöre ekleyip ekrana yazdırma
    for (char c : word) {
        charVector.push_back(c);
    }
    std::cout << "Characters in the vector: ";
    for (char c : charVector) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    // 5. Görev
    int *dynamicIntArray = new int[SIZE];
    std::cout << "Dynamically allocated array: ";
    for (int i = 0; i < SIZE; ++i) {
        dynamicIntArray[i] = rand() % 100;
        std::cout << dynamicIntArray[i] << " ";
    }
    std::cout << std::endl;

    // Belleği serbest bırakma kısmı
    delete[] dynamicIntArray;

    return 0;
}
