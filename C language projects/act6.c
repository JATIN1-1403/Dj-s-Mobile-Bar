#include <stdio.h>
//input
void numage() {
    printf("Enter Your Age: ");
}
void numtickets() {
    printf("Enter Number of Tickets: ");
}
int sum(int price, int numticks) {
    return price * numticks;
}
// output
int tickprice(int price) {
  return  printf("Ticket Price: ₱ %d\n", price);
}
int totprice(int total) {
  return  printf("Total: ₱ %d\n", total);
}
// case 
void baby(int a) {
   return price = 0;
}
void teen(int price) {
   return price = 150;
}
void adult(int price) {
   return price = 200;
}
void senior(int price) {
   return price = 100;
}


int main() {
    int age, numticks, price, pricerange, total;
    int C = 1;
    
    
    while (C <= 3) {
    printf("---Custumer %d---\n", C);
    
    numage();
    scanf("%d", &age);
    numtickets();
    scanf("%d", &numticks);
    
    if (age <= 4) {
        pricerange = 1;
    }
    else if (age <= 17) {
        pricerange = 2;
    }
    else if (age <= 59) {
        pricerange = 3;
    }
    else {
        pricerange = 4;
    }
    
    switch (pricerange) {
        case 1: 
        baby(price);
        break;
        case 2:
        teen(price);
        break;
        case 3:
        adult(price);
        break;
        case 4:
        senior(price);
        break;
    }
    total = sum(price, numticks);
    tickprice(price);
    totprice(total);
    C++;
    }
    return 0;
}