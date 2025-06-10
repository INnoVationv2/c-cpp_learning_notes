#include<stdio.h>

int main() {
    int no;
    double price;
    char date[15];
    printf("Enter item number: ");
    scanf("%d", &no);

    printf("Enter unit price: ");
    scanf("%lf", &price);

    printf("Enter purchase date (mm/dd/yyyy)");
    scanf("%s", date);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%d\t$%6.2lf\t%s\n", no, price, date);
    return 0;
}
