// Address range: 0x7b30 - 0x7b7a
int64_t function_7b30(uint64_t a1) {
    // 0x7b30
    int64_t v1; // 0x7b30
    int64_t v2; // 0x7b30
    int64_t v3; // 0x7b30
    int64_t v4 = function_7a40(a1 % 256, v1, v2, v3); // 0x7b35
    char v5 = v4; // 0x7b3c
    if (v5 == 0) {
        // 0x7b63
        return v4 & -256 | (int64_t)(v5 != 0);
    }
    int64_t v6 = g43; // 0x7b40
    int64_t * v7 = (int64_t *)(v6 + 40); // 0x7b47
    uint64_t v8 = *v7; // 0x7b47
    int64_t v9; // 0x7b30
    if (v8 >= *(int64_t *)(v6 + 48)) {
        // 0x7b70
        int64_t v10; // 0x7b30
        int64_t v11; // 0x7b30
        v9 = function_4950(v6, v4 % 256, v2, v3, v11, v10);
    } else {
        // 0x7b51
        *v7 = v8 + 1;
        *(char *)v8 = v5;
        v9 = v8;
    }
    // 0x7b5b
    g57++;
    // 0x7b63
    return v9 & -256 | (int64_t)(v5 != 0);
}

// Address range: 0x7a40 - 0x7b29
int64_t function_7a40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    bool v1; // 0x7a40
    if ((char)a1 == 0) {
        int32_t v2 = a3; // 0x7a6a
        if (v2 == 5) {
            // 0x7a62
            return 0;
        }
        // 0x7a6f
        v1 = v2 == 9 | v2 == 3;
    } else {
        int64_t v3 = a2 & 0xf000; // 0x7a47
        if (v3 == 0x8000) {
            // 0x7a53
            if (g94 == 3) {
                // 0x7af8
                return (a2 & 73) == 0 ? 0 : 42;
            }
            // 0x7a62
            return 0;
        }
        // 0x7ac8
        v1 = v3 == 0x4000;
    }
    // 0x7a7d
    if (v1) {
        // 0x7a62
        return 47;
    }
    // 0x7a86
    if (g94 == 1) {
        // 0x7a62
        return 0;
    }
    if ((char)a1 == 0) {
        int64_t result = 61; // 0x7a40
        switch ((int32_t)a3) {
            case 6: {
                // 0x7a62
                return 64;
            }
            case 1: {
                // 0x7a62
                return 124;
            }
            default: {
                // 0x7aec
                result = 0;
            }
            case 7: {
                // 0x7a62
                return result;
            }
        }
    }
    int64_t v4 = a2 & 0xf000; // 0x7a96
    if (v4 == 0xa000) {
        // 0x7a62
        return 64;
    }
    int32_t v5 = v4; // 0x7aae
    if (v5 == 0x1000) {
        // 0x7a62
        return 124;
    }
    // 0x7a62
    return v5 == 0xc000 ? 61 : 0;
}

