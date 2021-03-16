// Address range: 0x4003 - 0x401b
int64_t function_4003(void) {
    int64_t result = 0; // 0x4012
    if (*(int64_t *)0x22fd8 != 0) {
        // 0x4014
        __gmon_start__();
        result = &g1;
    }
    // 0x4016
    return result;
}

// Address range: 0x174e3 - 0x17545
int64_t function_174e3(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = function_4000(); // 0x1750c
    if ((int64_t)&g7 - (int64_t)&g6 >> 3 == 0) {
        // 0x17536
        return result;
    }
    int64_t v1 = 0; // 0x17515
    while (v1 + 1 != (int64_t)&g7 - (int64_t)&g6 >> 3) {
        // 0x17520
        v1++;
    }
    // 0x17536
    return result;
}

