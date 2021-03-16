// Address range: 0x15a83 - 0x15a9d
int64_t function_15a83(int64_t a1, int64_t a2) {
    // 0x15a83
    int64_t v1; // 0x15a83
    int64_t v2; // 0x15a83
    int64_t v3; // 0x15a83
    int64_t v4; // 0x15a83
    return function_49e0(function_158c0(a1, a2, v3), 0, a1, v4, v2, v1);
}

// Address range: 0x10d73 - 0x10e05
int64_t function_10d73(int64_t a1) {
    int32_t * v1 = g21; // 0x10d7a
    int64_t v2; // 0x10d73
    if (v1 != NULL) {
        int64_t v3 = (int64_t)v1;
        while (*(int32_t *)v3 != (int32_t)a1) {
            int64_t v4 = *(int64_t *)(v3 + 8); // 0x10d90
            if (v4 == 0) {
                goto lab_0x10db0;
            }
            v3 = v4;
        }
        // 0x10d9d
        v2 = v3 + 16;
        return *(char *)v2 == 0 ? 0 : v2;
    }
  lab_0x10db0:;
    int64_t v5 = function_4920(a1 & 0xffffffff); // 0x10db9
    int64_t ** v6 = (int64_t **)24; // 0x10dc6
    int64_t v7 = (int64_t)&g2; // 0x10dc6
    if (v5 != 0) {
        // 0x10dc8
        v7 = *(int64_t *)v5;
        v6 = (int64_t **)(function_48c0(v7) + 24 & -8);
    }
    int64_t v8 = function_158c0(v6); // 0x10ddb
    int32_t * v9 = (int32_t *)v8; // 0x10de3
    *v9 = (int32_t)a1;
    int64_t v10 = v8 + 16;
    function_47a0(v10, v7);
    int32_t * v11 = g21; // 0x10df1
    g21 = v9;
    *(int64_t *)(v8 + 8) = (int64_t)v11;
    // 0x10d9d
    v2 = v10;
    return *(char *)v2 == 0 ? 0 : v2;
}

