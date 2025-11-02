#include <stdio.h>
#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int var = 0;
    if(n == 0){
        return true;
    }
    for (int i = 0; i < flowerbedSize; i++){
        if (flowerbed[i] == 0 && i == 0){
            if (flowerbedSize == 1 && flowerbed[i] == 0){
                return true;
            }
            else if(flowerbedSize == 1 && flowerbed[i] == 1){
                return false;
            }
            else if(flowerbed[i+1] == 0){
                flowerbed[i] = 1;
                var++;
            }
        }
        else if (flowerbed[i] == 0  && i != (flowerbedSize - 1)){
            if(flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0){
                flowerbed[i] = 1;
                var++;
            }
        }
        else if (flowerbed[i] == 0 && i == (flowerbedSize - 1)){
            if(flowerbed[i - 1] == 0){
                flowerbed[i] == 1;
                var++;
            }
        }
        if (var == n) return true;
    }
    return false;
}

int main(){
    int flowerbed[] = {1,0,0,0,1};
    int flowerbedSize = 5;
    int n = 1;

    bool result = canPlaceFlowers(flowerbed, flowerbedSize, n);

    printf("O valor de result é: %d", result);
}