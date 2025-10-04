int getWinner(int* arr, int arrSize, int k) {
    int roundWins = 0;
    int maxElement = arr[0];

    for (int i = 1; i < arrSize; i++){
        if(arr[i]>maxElement){
            maxElement = arr[i];
        }
    }

    if (k >= arrSize){
        return maxElement;
    }

    while (roundWins != k){
    int aux = arr[0];
    int aux1 = arr[1];
        if (arr[0] > arr[1]){
            for (int i = 1; i < arrSize - 1; i++){
                arr[i] = arr[i + 1];
            }
            arr[arrSize - 1] = aux1;
            roundWins++;
        }
        else {
            for (int i = 0; i < arrSize - 1; i++){
                arr[i] = arr[i + 1];
                arr[arrSize - 1] = aux;
            }
            roundWins = 1;
        }
        if (arr[0] == maxElement){
            return arr[0];
        }
    }

    return arr[0];
}
