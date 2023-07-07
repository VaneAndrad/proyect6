#include <iostream>
#include <string>
#include <cstdlib>

void clearScreen() {
    #ifdef _WIN32
        std::system("cls");
    #else
        std::system("clear");
    #endif
}

void pause() {
    std::cout << "\nPresiona Enter para continuar...";
    std::cin.ignore();
    std::cin.get();
}

void printMenu() {
    clearScreen();
    std::cout << "======= MENU DE SELECCIÓN DE FUNCIONES =======\n";
    std::cout << "1. Comparar dos cadenas de caracteres\n";
    std::cout << "2. Calcular edad de una persona\n";
    std::cout << "3. Multiplicar elementos de un arreglo por 2\n";
    std::cout << "4. Leer 5 cadenas\n";
    std::cout << "5. Salir\n";
    std::cout << "==============================================\n";
    std::cout << "Ingresa la opción deseada: ";
}

void compareStrings() {
    clearScreen();
    std::string cadena1, cadena2;

    std::cout << "=== Comparar dos cadenas de caracteres ===\n";
    std::cout << "Ingresa la primera cadena: ";
    std::cin >> cadena1;
    std::cout << "Ingresa la segunda cadena: ";
    std::cin >> cadena2;

    if (cadena1 == cadena2) {
        std::cout << "Las cadenas son iguales.\n";
    } else {
        std::cout << "Las cadenas son diferentes.\n";
    }

    pause();
}

int calculateAge() {
    clearScreen();
    int birthYear, currentYear;

    std::cout << "=== Calcular la edad de una persona ===\n";
    std::cout << "Ingresa el año de nacimiento: ";
    std::cin >> birthYear;
    std::cout << "Ingresa el año actual: ";
    std::cin >> currentYear;

    int age = currentYear - birthYear;
    return age;
}

char retrieveCharacter(std::string str, int index) {
    return str[index];
}

void multiplyArrayByTwo() {
    clearScreen();
    int numbers[10];

    std::cout << "=== Multiplicar elementos de un arreglo por 2 ===\n";
    std::cout << "Ingresa 10 números enteros:\n";
    for (int i = 0; i < 10; ++i) {
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> numbers[i];
        numbers[i] *= 2;
    }

    std::cout << "El arreglo modificado es:\n";
    for (int i = 0; i < 10; ++i) {
        std::cout << numbers[i] << " ";
    }

    std::cout << "\n";
    pause();
}

void readStrings() {
    clearScreen();
    std::string strings[5];

    std::cout << "=== Leer 5 cadenas ===\n";
    std::cout << "Ingresa 5 cadenas:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Cadena " << i + 1 << ": ";
        std::cin >> strings[i];
    }

    std::cout << "Las cadenas ingresadas son:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << strings[i] << "\n";
    }

    pause();
}

int main() {
    int opcion;

    do {
        printMenu();
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                compareStrings();
                break;
            case 2:
                std::cout << "La edad de la persona es: " << calculateAge() << " años.\n";
                pause();
                break;
            case 3:
                multiplyArrayByTwo();
                break;
            case 4:
                readStrings();
                break;
            case 5:
                clearScreen();
                std::cout << "¡Hasta luego!\n";
                break;
            default:
                std::cout << "Opción inválida. Inténtalo nuevamente.\n";
                pause();
                break;
        }
    } while (opcion != 5);

    return 0;
}

