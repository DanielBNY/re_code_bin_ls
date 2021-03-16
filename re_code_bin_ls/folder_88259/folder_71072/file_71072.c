// Address range: 0xe093 - 0xe0ca
int64_t function_e093(int64_t a1) {
    // 0xe093
    int64_t v1; // 0xe093
    uint64_t v2 = (int64_t)(bool)((char)v1 == 47); // 0xe0a2
    int64_t result = function_e140() - a1; // 0xe0ab
    if (result <= v2) {
        // 0xe0c3
        return result;
    }
    int64_t v3 = result - 1;
    int64_t result2 = result; // 0xe0b9
    while (*(char *)(v3 + a1) == 47) {
        // 0xe0bb
        result2 = v3;
        if (v3 <= v2) {
            // break -> 0xe0c3
            break;
        }
        int64_t v4 = v3;
        v3 = v4 - 1;
        result2 = v4;
    }
    // 0xe0c3
    return result2;
}

// Address range: 0x172e3 - 0x17300
int64_t function_172e3(void) {
    int64_t result = function_e0d0(); // 0x172e8
    if (result == 0) {
        // 0x172f7
        return function_15b30();
    }
    // 0x172f2
    return result;
}

// Address range: 0x115a0 - 0x116d0
int64_t function_115a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5) {
    // 0x115a0
    int64_t v1; // 0x115a0
    if (((int32_t)v1 ^ -0x80000000) >= 0) {
        function_11540();
    }
    int64_t v2 = a1; // 0x115ac
    int64_t result = 0xffffffff; // 0x115ac
    if ((a5 & 2) == 0) {
        // 0x115b2
        uint32_t v3; // 0x115a0
        if ((int32_t)function_47e0(v3) != 0) {
            function_11553();
        }
        // 0x115bf
        v2 = v3;
        result = 0x7fffffff;
        int64_t v4; // 0x115a0
        if ((int32_t)v4 != 0x7fffffff) {
            // 0x115cc
            return function_11553();
        }
    }
    // 0x115f8
    int64_t v5; // 0x115a0
    if (v5 != __readfsqword(40)) {
        // 0x116c3
        return function_48e0(v2);
    }
    // 0x1160c
    return result;
}

// Address range: 0xe0d3 - 0xe132
int64_t function_e0d3(int64_t a1) {
    int64_t v1 = function_e090(); // 0xe0dd
    int64_t v2 = function_46e0(v1 + 1 + (int64_t)(v1 == 0)); // 0xe0f3
    if (v2 == 0) {
        // 0xe11b
        return 0;
    }
    int64_t result = function_4ae0(v2, a1, v1); // 0xe109
    int64_t v3 = v1; // 0xe114
    if (v1 == 0) {
        // 0xe128
        *(char *)result = 46;
        v3 = 1;
    }
    // 0xe116
    *(char *)(v3 + result) = 0;
    // 0xe11b
    return result;
}

// Address range: 0xeb53 - 0xeb9d
int64_t function_eb53(int64_t a1, int64_t a2) {
    int64_t v1 = function_4c00(a1, 0); // 0xeb5a
    if (v1 == 0) {
        // 0xeb89
        return 1;
    }
    unsigned char v2 = *(char *)v1; // 0xeb6c
    bool v3; // 0xeb53
    if (v2 == 67) {
        // 0xeb90
        if (*(char *)(v1 + 1) == 0) {
            // 0xeb89
            return 0;
        }
        // ._crit_edge6
        v3 = true;
        // 0xeb89
        return !((v3 | false)) != v3;
    }
    // 0xeb71
    bool v4; // 0xeb53
    int64_t v5 = v4 ? -1 : 1; // 0xeb7d
    int64_t v6 = 5; // 0xeb7d
    int64_t v7 = v1; // 0xeb7d
    int64_t v8 = (int64_t)"POSIX"; // 0xeb7d
    bool v9 = v2 < 80; // 0xeb7d
    bool v10 = false; // 0xeb7d
    if (v2 == 80) {
        v9 = v2 < 80;
        v10 = true;
        while (v6 != 0) {
            // ._crit_edge
            v7 += v5;
            v8 += v5;
            unsigned char v11 = *(char *)v7;
            unsigned char v12 = *(char *)v8; // 0xeb7d
            v6--;
            v9 = v11 < v12;
            v10 = false;
            if (v11 != v12) {
                // break -> ._crit_edge6
                break;
            }
            v9 = v11 < v12;
            v10 = true;
        }
    }
    // ._crit_edge6
    v3 = v9;
    // 0xeb89
    return !((v3 | v10)) != v3;
}

