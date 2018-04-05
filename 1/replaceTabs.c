#include<stdio.h>

int main(){
    int ch;
    while ((ch = getchar()) != EOF) {
        if (ch == '\t') {
            printf("\\t");
        }
        if (ch == '\b') {
            printf("\\b");
        }
        if (ch == '\\') {
            printf("\\\\");
        }
        putchar(ch);
    }
}

