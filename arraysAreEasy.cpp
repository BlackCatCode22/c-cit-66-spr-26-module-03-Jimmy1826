#include <iostream>
#include <iomanip>

int main() {
    int arr3D[2][3][4];

        int value = 1;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                arr3D[i][j][k] = value++;
            }
        }
    }

       std::cout << "3D Array Elements:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        std::cout << "Layer " << i << ":" << std::endl;
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                std::cout << std::setw(3) << arr3D[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}