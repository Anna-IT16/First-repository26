#include <iostream>

int main() {
    double a[10];

    for (int i = 0; i < 10; i++) {
        std::cout << "Введите " << i + 1 << " -й элемент\n";
        std::cin >> a[i];
    }

    bool vozrastanie_posledovatelnosti = true;
    for (int i = 0; i < 9; i++) {
        if (a[i] > a[i + 1]) {
         vozrastanie_posledovatelnosti = false;
    	 break;
        }
    }

    if (vozrastanie_posledovatelnosti) {
        std::cout << "Последовательность возрастающая";
    } else {
       std::cout << "Последовательность не возрастающая";
    }

    return 0;
}
