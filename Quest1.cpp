#include <iostream>
#include <cmath>

int main() {

    //Escreva um algoritmo que leia três números inteiros
    // e positivos (A, B, C) e calcule a seguinte expressão:

    int A;
    int B;
    int C;

    int R;
    int S;
    int D;

    //Coletar

    std::cout << "Digite A: ";
    std::cin >> A;

    std::cout << "Digite B: ";
    std::cin >> B;

    std::cout << "Digite C: ";
    std::cin >> C;

    //Calculos

    R = pow((A + B), 2);
    S = (B + C) * (B + C);
    D = (R + S) / 2;

    //Resultado

    std::cout << "D: " << D;



}
