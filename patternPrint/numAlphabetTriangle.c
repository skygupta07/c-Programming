//24  pattern printing
#include <stdio.h>

int main() {
    int num = 1;
    char ch = 'A';

    for (int i = 1; i <= 7; i++) {  // 7 line ka code aaega..
        for (int j = 1; j <= i; j++) {  // yeh do loop to structure hai trianle pattern ka 
            if (i % 2 == 1) {
                printf("%d ", num);
                num++;
            } else {
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }

    return 0;
}

/*
1
A B
2 3 4
C D E F
5 6 7 8 9

[Program finished]
*/