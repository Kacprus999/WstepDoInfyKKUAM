#include <stdio.h>

int main(void) {​​​​

    int n = 1000;
    FILE *plik;
    plik=fopen("D:\\1Koronalia\\uniwerek\\wstep do infy","w");

    for (int i = 0; i < n; i++) {​​​​
        fprintf(plik,"%c", 'a' + (i % 26));
    }​​​​
    fclose(plik);
    return  0;
}​​​​
