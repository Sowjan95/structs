#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct foodItem{
  char food[10];
  int price;
};

struct foodItem example(){
  srand(time(NULL));
  
  struct foodItem itemOne;
  
  itemOne.price = 2 + rand() % 8;
  char foodNameOne[10] = "Chocolate";
  char foodNameTwo[10] = "Broccoli";
  if (itemOne.price < 4){
    int i;
    for (i = 0; i < 9; i++)
      itemOne.food[i] = foodNameOne[i];
    itemOne.food[i] = 0;
  }
  else{
    int i;
    for (i = 0; i < 9; i++)
      itemOne.food[i] = foodNameTwo[i];
    itemOne.food[i] = 0;
  }
  return itemOne;
  //printf("Food: %s\tPrice: %d\n", itemOne.food, itemOne.price);
}

void print_foodAndPrice(struct foodItem someItem){
  srand(time(NULL));
  printf("Example food item:\n");
  printf("Food: %s\tPrice:%d\n", someItem.food, someItem.price);
  int i = rand() % 2;
  int costChange;
  if (i == 1)
    costChange = 1 + rand() %5;
  else
    costChange = 1 - (rand() %5);
  printf("Price Change:\n");
  printf("Food: %s\tPrice:%d\n", someItem.food, someItem.price + costChange);
}

int main(){
  print_foodAndPrice(example());
}

