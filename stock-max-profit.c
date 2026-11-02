#include <stdio.h>
int main(){
    int i, j, n, buyday, sellday;
    float maxProfit;
    printf("Enter no. of days to track stock price: ");
    if( scanf("%d", &n) != 1 || n < 2 || n > 31){
        printf("wrong input, days should be a positive integer up to 31");
        return 1;
    }

    float price[n];
    for (j = 0; j < n; j++){
        printf("Enter stock price on day %d : ", j+1);
        if (scanf("%f", &price[j]) != 1 || price[j] < 0){
            printf("value entered is negative or not an integer");
            return 1;
        };
    }
    printf("Prices for given week are: "); 
    for (j = 0; j < n; j++){
        printf("%.2f, ", price[j]);
    }
    printf("\n");
    
    maxProfit = 0;
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){

            float net = price[j] - price[i];
            if (net > maxProfit){
                maxProfit = net;
                buyday = i+1;
                sellday = j+1;
            }
        }
    }
    if (maxProfit <=0){
        printf("No profit available, sell on day one itself. \n");
        return 1;
    }
    printf("Highest margin is %.2f \n", maxProfit);
    printf("Buy on day %d [%.2f] and sell on day %d [%.2f] for max profit. ",
        buyday, price[buyday-1], sellday, price[sellday-1]);
    return 0;
}