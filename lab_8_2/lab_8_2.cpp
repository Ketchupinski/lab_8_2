#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>

using namespace std;

int Count(char* str);

int main()
{
    char str[100]; // оголошується масив символів
    cout << "Enter string:" << endl;
    cin.getline(str, 100); // введенні символи поміщаються у масив

    cout << "Words, which have same first and last letter: " << Count(str) << endl; // виклик та виведення функції
}

int Count(char* str) {
    int k = 0;
    char* str2; // оголошення допоміжного масиву

    str2 = strtok(str, " "); // функція шукає розділення 
    while (str2 != NULL) // Провірка чи розділення було знайдене
    {
        int d = strlen(str2); // визначення скільки символів у "слові"
        if (str2[0] == str2[d - 1]) { // провірка чи останній та перший символи однакові
            k++; // лічильник збільшується
        }
        str2 = strtok(NULL, " "); // Після модифікації строки ставиться нульовий символ і таким чином функція продвигається далі
    }
    return k;
}