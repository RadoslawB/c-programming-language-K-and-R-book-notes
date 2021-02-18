#include <stdio.h>

void copyChars() {
    int c;


//    EOF = -1
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
};

void charCounterVersion1() {
    long nc = 0;

    while (getchar() != EOF)
        ++nc;

    printf("%ld\n", nc);
}

void charCounterVersion2() {
    double nc;

    for (nc = 0; getchar() != EOF; ++nc);


    printf("%.0f\n", nc);
}

int countWhiteSpaces() {
    int w = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ')
            ++w;
    }

    return w;
}

void copyCharsReplaceWhiteSpacesToSingleWhiteSpace() {
    int c;
    int prev;
    while ((c = getchar()) != EOF) {
        if ((c == '\n' || c == '\t' || c == ' ') && c == prev) {
            continue;
        }

        prev = c;
        putchar(c);
    }
}

void printEachWordInSeparateLine() {
    int c;
    int prev;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ' || c=='\n') {
            if (prev == c) {
                continue;
            }
            putchar('\n');
        } else {
            putchar(c);
        }
        prev = c;

    }
}


int main() {
    printEachWordInSeparateLine();
}
