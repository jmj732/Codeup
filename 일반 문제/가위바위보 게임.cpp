#include <stdio.h>

int main() {
    int you, computer;
    scanf("%d %d", &you, &computer);
    int result = (you - computer + 3) % 3;
    if(result == 1) {
        printf("lose");
    }
    else if(result == 2) {
        printf("win");
    }
    else {
        printf("tie");
    }


    return 0;
}
