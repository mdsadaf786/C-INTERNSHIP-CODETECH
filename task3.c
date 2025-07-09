#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isKeyword(char *word) {
    char keywords[][10] = {"int", "float", "if", "else", "while", "return", "for"};
    for (int i = 0; i < 7; i++) {
        if (strcmp(keywords[i], word) == 0)
            return 1;
    }
    return 0;
}

int main() {
    char ch, str[20];
    int i = 0;

    FILE *file = fopen("input.c", "r");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isalnum(ch)) {
            str[i++] = ch;
        } else {
            str[i] = '\0';
            i = 0;
            if (strlen(str) > 0) {
                if (isKeyword(str))
                    printf("Keyword: %s\n", str);
                else
                    printf("Identifier: %s\n", str);
            }
            if (ch == '+' || ch == '-' || ch == '*' || ch == '=' || ch == '/' || ch == '%') {
                printf("Operator: %c\n", ch);
            }
        }
    }

    fclose(file);
    return 0;
}
