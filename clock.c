#include <stdio.h>
#include <windows.h>

void clock();

int main() {
    clock();
    return 0;
}

void clock() {
    int h, m, s;
    printf("CLOCK\n");
    printf("Enter time hh:mm:ss: ");
    scanf("%d:%d:%d", &h, &m, &s);
    while (h < 24) {
        while (m < 60){
            while (s < 60) {
                printf("%d:%d:%d\n", h, m, s);
                Sleep(1000);
                s++;
            }
            s = 0;
            m++;
        }
        m = 0;
        h++;
    }
}
