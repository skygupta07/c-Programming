#include <stdio.h>

int main() {
    int marks[10][5]; //10 students 5 courses
    // Input marks for each student and each course
    for (int i = 0; i <10; i++) { // for each student inner loop runs five times..
        printf("Enter marks for student %d:->\n", i + 1);
        for (int j = 0; j <5; j++) {
            printf("Course %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
        printf("\n");
    }

    // Display the marks
    printf("Marks obtained by students:\n");
    for (int i = 0; i<10; i++) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j<5; j++) {
            printf("Course %d: %d\n", j + 1, marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
