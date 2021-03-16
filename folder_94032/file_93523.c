// Address range: 0x16d53 - 0x16dea
int64_t function_16d53(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16d53
    int64_t result2; // 0x16d53
    if (a1 == 0) {
        int64_t result = malloc(128); // 0x16dc5
        result2 = 0;
        if (result != 0) {
            // 0x16dd2
            *(int64_t *)result = 0;
            *(int16_t *)(result + 8) = 0;
            return result;
        }
    } else {
        int64_t v1 = strlen(a1); // 0x16d60
        uint64_t v2 = v1 + 1; // 0x16d6a
        int64_t v3 = malloc(v2 >= 118 ? v1 + 18 & -8 : 128); // 0x16d7e
        result2 = 0;
        if (v3 != 0) {
            // 0x16d8b
            *(int64_t *)v3 = 0;
            int64_t v4 = v3 + 9; // 0x16d97
            *(int16_t *)(v3 + 8) = 1;
            int64_t v5; // 0x16d53
            memcpy(v4, a1, v2, v5);
            *(char *)(v4 + v2) = 0;
            result2 = v3;
        }
    }
    // 0x16db3
    return result2;
}

