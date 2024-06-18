#include <stdio.h>

int main() {
    char text[100];
    int key = 3;

    printf("Введiть текст (англ): ");
    scanf("%[^\n]%*c", text);


    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = (text[i] - 'a' + key) % 26 + 'a';
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = (text[i] - 'A' + key) % 26 + 'A';
        }
    }
    printf("Зашифрований текст: %s\n", text);


    printf("Введiть зашифрований текст: ");
    scanf("%[^\n]%*c", text);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = (text[i] - 'a' - key + 26) % 26 + 'a';
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = (text[i] - 'A' - key + 26) % 26 + 'A';
        }
    }
    printf("Розшифрований текст: %s\n", text);

    getchar();
}