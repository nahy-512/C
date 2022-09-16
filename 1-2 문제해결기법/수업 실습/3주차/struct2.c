#include <stdio.h>
#define NUM 5

struct Stock {
    char name[20];
    float stock_earning;
    float price_to_ratio;
};

int main() {
    //variable
    struct Stock sto[NUM];
    
    //input
    for ( int i = 0; i < NUM ; i++) {
        printf("Type stock information (Name, earning, ratio): ");
        scanf("%s %f %f", &sto[i].name, &sto[i].stock_earning, &sto[i].price_to_ratio);
    }


    //output
    for ( int i = 0; i < NUM ; i++) {
        printf("Stock name %s stock price %f\n", sto[i].name, sto[i].stock_earning * sto[i].price_to_ratio);
    }
}