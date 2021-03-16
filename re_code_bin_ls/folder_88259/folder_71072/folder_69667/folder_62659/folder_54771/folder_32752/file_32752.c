// Address range: 0x7ff0 - 0x8059
int64_t function_7ff0(int64_t * a1, int64_t * a2) {
    // 0x7ff0
    int64_t v1; // 0x7ff0
    if (g91 != 0) {
        // 0x8005
        v1 = (int64_t)a1;
        return function_4bd0(v1, v1, 1, (int64_t)g43);
    }
    // 0x8028
    g91 = 1;
    int64_t v2 = 1; // 0x803b
    if ((int32_t)function_4b30(1) >= 0) {
        // 0x8048
        function_7dc0(1);
        v2 = 1;
    }
    // 0x8005
    v1 = v2;
    return function_4bd0(v1, v1, 1, (int64_t)g43);
}

