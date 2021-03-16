// Address range: 0x16cf0 - 0x16d4d
int64_t function_16cf0(int64_t a1) {
    int32_t * v1 = (int32_t *)function_4760(); // 0x16d0a
    int32_t v2 = *(char *)(a1 + 8) != 0 ? (int32_t)a1 + 9 : 0; // 0x16d14
    int32_t v3; // 0x16cf0
    int64_t result; // 0x16cf0
    if ((int32_t)function_16c90(v2) == 0) {
        // 0x16d40
        function_4b10();
        v3 = *v1;
        result = 1;
    } else {
        // 0x16d1d
        v3 = *v1;
        result = 0;
    }
    // 0x16d23
    function_16cc0(a1);
    *v1 = v3;
    return result;
}

// Address range: 0x16df0 - 0x16f45
int64_t function_16df0(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 48); // 0x16dfe
    uint64_t v2 = *v1; // 0x16dfe
    if (v2 == 0 || v2 >= a2 == v2 < a2 + 56) {
        // 0x16e91
        return 1;
    }
    // 0x16e24
    if (*(char *)v2 == 0) {
        // 0x16e88
        *v1 = (int64_t)&g1;
        // 0x16e91
        return 1;
    }
    int64_t v3 = a1 + 9; // 0x16e29
    if ((int32_t)function_4a80(v3, v2) == 0) {
        // 0x16e88
        *v1 = v3;
        // 0x16e91
        return 1;
    }
    int64_t v4 = a1;
    int64_t v5 = v3;
    int64_t v6; // 0x16e44
    if (*(char *)v5 == 0) {
        // 0x16e44
        v6 = v4 + 9;
        if (v5 != v6) {
            // break (via goto) -> 0x16ec8
            goto lab_0x16ec8_2;
        }
        // 0x16e4d
        if (*(char *)(v4 + 8) == 0) {
            // break (via goto) -> 0x16ec8
            goto lab_0x16ec8_2;
        }
    }
    int64_t v7 = v5 + 1 + function_48c0(v5); // 0x16e5b
    int64_t v8; // 0x16df0
    int64_t v9; // 0x16e65
    int64_t v10; // 0x16e6e
    int64_t v11; // 0x16e7b
    while (*(char *)v7 == 0) {
        // 0x16e65
        v9 = *(int64_t *)v4;
        if (v9 == 0) {
            // break -> 0x16e30
            break;
        }
        // 0x16e6e
        v10 = v9 + 9;
        v11 = function_4a80(v10, v2);
        v8 = v10;
        if ((int32_t)v11 == 0) {
            // 0x16e88
            *v1 = v8;
            // 0x16e91
            return 1;
        }
        v4 = v9;
        v5 = v10;
        if (*(char *)v5 == 0) {
            // 0x16e44
            v6 = v4 + 9;
            if (v5 != v6) {
                // break (via goto) -> 0x16ec8
                goto lab_0x16ec8_2;
            }
            // 0x16e4d
            if (*(char *)(v4 + 8) == 0) {
                // break (via goto) -> 0x16ec8
                goto lab_0x16ec8_2;
            }
        }
        // 0x16e53
        v7 = v5 + 1 + function_48c0(v5);
    }
    int64_t v12 = function_4a80(v7, v2); // 0x16e36
    // 0x16e88
    *v1 = v7;
    while ((int32_t)v12 != 0) {
        // 0x16e3f
        v5 = v7;
        if (*(char *)v5 == 0) {
            // 0x16e44
            v6 = v4 + 9;
            if (v5 != v6) {
                // break (via goto) -> 0x16ec8
                goto lab_0x16ec8_2;
            }
            // 0x16e4d
            if (*(char *)(v4 + 8) == 0) {
                // break (via goto) -> 0x16ec8
                goto lab_0x16ec8_2;
            }
        }
        // 0x16e53
        v7 = v5 + 1 + function_48c0(v5);
        while (*(char *)v7 == 0) {
            // 0x16e65
            v9 = *(int64_t *)v4;
            if (v9 == 0) {
                // break -> 0x16e30
                break;
            }
            // 0x16e6e
            v10 = v9 + 9;
            v11 = function_4a80(v10, v2);
            v8 = v10;
            if ((int32_t)v11 == 0) {
                // 0x16e88
                *v1 = v8;
                // 0x16e91
                return 1;
            }
            v4 = v9;
            v5 = v10;
            if (*(char *)v5 == 0) {
                // 0x16e44
                v6 = v4 + 9;
                if (v5 != v6) {
                    // break (via goto) -> 0x16ec8
                    goto lab_0x16ec8_2;
                }
                // 0x16e4d
                if (*(char *)(v4 + 8) == 0) {
                    // break (via goto) -> 0x16ec8
                    goto lab_0x16ec8_2;
                }
            }
            // 0x16e53
            v7 = v5 + 1 + function_48c0(v5);
        }
        // 0x16e30
        v12 = function_4a80(v7, v2);
        // 0x16e88
        *v1 = v7;
    }
    // 0x16e91
    return 1;
  lab_0x16ec8_2:;
    int64_t v13 = function_48c0(v2); // 0x16ecb
    uint64_t v14 = v13 + 1; // 0x16ed3
    int64_t v15 = v5 - v6; // 0x16eda
    uint64_t v16 = -1 - v15;
    if (v14 > v16) {
        // 0x16f08
        *(int32_t *)function_4760() = 12;
        // 0x16e91
        return 0;
    }
    if (v14 + v15 < 119) {
        // 0x16ef1
        function_4ae0(v5, v2, v14, v16);
        *(char *)(v5 + 1 + v13) = 0;
        // 0x16e88
        *v1 = v5;
        // 0x16e91
        return 1;
    }
    int64_t v17 = function_16d50(v2); // 0x16f23
    *(int64_t *)v4 = v17;
    if (v17 == 0) {
        // 0x16e91
        return 0;
    }
    // 0x16f31
    *(char *)(v17 + 8) = 0;
    // 0x16e88
    *v1 = v17 + 9;
    // 0x16e91
    return 1;
}

