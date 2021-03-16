// Address range: 0x15a23 - 0x15a80
int64_t function_15a23(int64_t a1, uint64_t a2) {
    // 0x15a23
    int64_t v1; // 0x15a23
    if (a1 != 0) {
        // 0x15a2f
        if (a2 >= 0x5555555555555554) {
            // 0x15a72
            return function_15b30(a1, a2, 0x5555555555555553);
        }
        int64_t v2 = a2 / 2; // 0x15a41
        // 0x15a49
        v1 = a2 + 1 + v2;
        *(int64_t *)a2 = v1;
        return function_15920(a1, v1, v2);
    }
    if (a2 == 0) {
        // 0x15a5d
        *(int64_t *)a2 = 128;
        int64_t v3; // 0x15a23
        return function_15920(0, 128, v3);
    }
    // 0x15a70
    if (a2 < 0) {
        // 0x15a72
        int64_t v4; // 0x15a23
        return function_15b30(a1, a2, v4);
    }
    // 0x15a49
    v1 = a2;
    *(int64_t *)a2 = v1;
    int64_t v5; // 0x15a23
    return function_15920(a1, v1, v5);
}

