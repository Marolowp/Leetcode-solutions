bool isPalindrome(int x) {
    char buffer[100];
    sprintf(buffer, "%d", x);
    int len = strlen(buffer);

    for(int i = 0; i < len; i++){
        if(buffer[i] != buffer[len - 1 -i]){
            return false;
        }
    }

    return true;
}