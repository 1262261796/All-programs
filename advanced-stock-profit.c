#include <stdio.h>
int main(){
int i, n, buyday = 0, sellday = 0, minDay = 0;
float minPrice, maxProfit = 0;

printf("Enter number of days: ");
if (scanf("%d", &n) != 1 || n < 2){
    printf("Invalid number of days.");
    return 1;
}

float price[n];

    for (i = 0; i < n; i++){
    printf("Enter stock price on day %d: ", i + 1);

    if (scanf("%f", &price[i]) != 1 || price[i] < 0){
        printf("Invalid stock price.");
        return 1;
    }
}

        printf("Stock prices for the given period: ");

        for (i = 0; i < n; i++){
            printf("%.2f, ", price[i]);
        }

    printf("\n");

    minPrice = price[0];

    for (i = 1; i < n; i++){

        float net = price[i] - minPrice;

        if (net > maxProfit){
            maxProfit = net;
            buyday = minDay;
            sellday = i;
        }

        if (price[i] < minPrice){
            minPrice = price[i];
            minDay = i;
        }
    }

    if (maxProfit <= 0){
        printf("No profitable transaction available.\n");
        return 0;
    }

    printf("\nHighest profit: %.2f\n", maxProfit);
    printf("Buy on day %d (Price: %.2f)\n", buyday + 1, price[buyday]);
    printf("Sell on day %d (Price: %.2f)\n", sellday + 1, price[sellday]);

return 0;
}