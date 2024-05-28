#include <iostream>
#include <cmath>

// İki boyutlu vektör yapısı tanımı
struct Vector2 {
    double x;
    double y;
};

// Vektör çıkarma fonksiyonu
Vector2 subtract(Vector2 a, Vector2 b) {
    Vector2 result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result;
}

// Vektör büyüklüğünü hesaplayan fonksiyon
double magnitude(Vector2 v) {
    return sqrt(v.x * v.x + v.y * v.y);
}

// Vektör normalizasyon fonksiyonu
Vector2 normalize(Vector2 v) {
    double mag = magnitude(v);
    Vector2 result;
    result.x = v.x / mag;
    result.y = v.y / mag;
    return result;
}

// Normalizasyonu kullanarak halat uzunluğu kadar bir vektör oluşturma
Vector2 scale(Vector2 v, double length) {
    Vector2 norm = normalize(v);
    Vector2 result;
    result.x = norm.x * length;
    result.y = norm.y * length;
    return result;
}

int main() {
    // Ninja'nın başlangıç noktası ve duvarın tepe noktası
    Vector2 ninjaPosition = {0.0, 0.0};
    Vector2 wallTop = {3.0, 4.0};
    double ropeLength = 10.0;

    // Vektör çıkarma
    Vector2 direction = subtract(wallTop, ninjaPosition);

    // Halat uzunluğuna göre ölçeklendirme
    Vector2 reachablePoint = scale(direction, ropeLength);

    // Sonuçları ekrana yazdırma
    std::cout << "Ninja'nın ulaşabileceği nokta: (" << reachablePoint.x << ", " << reachablePoint.y << ")" << std::endl;

    return 0;
}
