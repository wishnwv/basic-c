#include <stdio.h>

char filename[] = "output.txt";

char fileWrite(FILE *file) {
    char buffer[100];
    for (int i=0; i<16; i++) {
        buffer[i] = 'a' + i; // Fill buffer with letters A-J
    }
    fprintf(file, "Buffer contents: %s\n", buffer);
}

void fileRead(FILE *file){
    char content[100];
    file = fopen(filename,"r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;       
    }
    fgets(content, 100, file);
    printf("File contents: %s\n", content);
    fclose(file);
}

int main () {
    FILE *file;
    fileRead(file);
    file = fopen(filename,"w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;       
    }
    fileWrite(file);
    fclose(file);
    return 0;
}