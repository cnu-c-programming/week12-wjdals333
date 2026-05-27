#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

    int sum = 0;
    int num;
    int temp;

    while ((temp = fscanf(fp, "%d", &num)) != EOF) {
        if (temp == 1) {
            sum += num;
        }
        else {
            char invalid_input[64];
            fscanf(fp, "%s", invalid_input);

            fprintf(stderr, "invalid input %s\n", invalid_input);
        }
    }

    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}





