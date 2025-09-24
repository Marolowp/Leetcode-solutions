int strStr(char* haystack, char* needle) {
    char *p = strstr(haystack, needle);
    if(p) return p-haystack;
    else return -1;
}