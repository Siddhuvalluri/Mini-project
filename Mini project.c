#include<stdio.h>
void main()
{
    char pname[25];
    int qty;
    float price,amount,discount,netbill;
    printf("productname:");
    scanf("%s",pname);
    printf("quantity:");
    scanf("%d",&qty);
    printf("unit price:");
    scanf("%f",&price);
    amount = price * qty;
    discount = amount * 25;
    netbill = amount - discount;
    printf("Bill amount:Rs %2f\n",amount);
    printf("Discount amount:Rs %2f\n",discount);
    printf("Net bill amount : rs %2f\n", netbill);
    
}
