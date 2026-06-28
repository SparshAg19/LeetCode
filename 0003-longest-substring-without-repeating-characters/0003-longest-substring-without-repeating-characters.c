int lengthOfLongestSubstring(char* s) {
    int last[256];
    int i, maxLen = 0, start = 0;

    for(i = 0; i < 256; i++) {
        last[i] = -1;
    }

    for(i = 0; s[i] != '\0'; i++) {

        if(last[(unsigned char)s[i]] >= start) {
            start = last[(unsigned char)s[i]] + 1;
        }

        last[(unsigned char)s[i]] = i;

        int currLen = i - start + 1;

        if(currLen > maxLen) {
            maxLen = currLen;
        }
    }

    return maxLen;
}