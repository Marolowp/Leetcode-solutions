int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime) {
    int count = 0;
    
    for (int i = 0; i < startTimeSize; i++){
        while (startTime[i] != endTime[i]){
            if(startTime[i] == queryTime) count++;
            startTime[i]++;
        }
        if(startTime[i] == queryTime) count++;
    }
    
    return count;
}
