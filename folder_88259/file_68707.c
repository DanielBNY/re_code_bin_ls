// Address range: 0x14a03 - 0x14ae9
int64_t function_14a03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4 == 0 ? (int64_t)&g24 : a4; // 0x14a28
    int32_t * v2 = (int32_t *)__errno_location(); // 0x14a3d
    int64_t v3 = v1 + 8; // 0x14a43
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x14a4b
    int32_t * v5 = (int32_t *)v1; // 0x14a4f
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x14a5d
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x14a60
    int64_t v8 = function_13470(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x14a6f
    int64_t v9 = v8 + 1; // 0x14a78
    int64_t result = function_158c0(v9, v9, a1); // 0x14a87
    function_13470(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x14ad3
        *(int64_t *)a3 = v8;
    }
    // 0x14ad7
    return result;
}

// Address range: 0x10c63 - 0x10d6a
int64_t function_10c63(int64_t a1) {
    int32_t * v1 = g23; // 0x10c6b
    int64_t v2; // 0x10c63
    char v3 = v2;
    int64_t v4; // 0x10c63
    int64_t v5; // 0x10c63
    if (v1 != NULL) {
        int64_t v6 = (int64_t)v1;
        int64_t v7 = v6 + 16; // 0x10c89
        int64_t result; // 0x10c63
        if (*(char *)v7 == v3) {
            // 0x10c8f
            result = v6;
            if ((int32_t)strcmp(v7, a1, v4, v5) == 0) {
                // 0x10c9f
                return result;
            }
        }
        int64_t v8 = *(int64_t *)(v6 + 8); // 0x10c80
        while (v8 != 0) {
            // 0x10c89
            v6 = v8;
            v7 = v6 + 16;
            if (*(char *)v7 == v3) {
                // 0x10c8f
                result = v6;
                if ((int32_t)strcmp(v7, a1, v4, v5) == 0) {
                    // 0x10c9f
                    return result;
                }
            }
            // 0x10c80
            v8 = *(int64_t *)(v6 + 8);
        }
    }
    int64_t v9 = g22; // 0x10cba
    if (g22 != 0) {
        int64_t v10 = v9 + 16; // 0x10cd1
        if (*(char *)v10 == v3) {
            // 0x10cd7
            if ((int32_t)strcmp(v10, a1, v4, v5) == 0) {
                // 0x10c9f
                return 0;
            }
        }
        // 0x10cc8
        v9 += 8;
        while (v9 != 0) {
            // 0x10cd1
            v10 = v9 + 16;
            if (*(char *)v10 == v3) {
                // 0x10cd7
                if ((int32_t)strcmp(v10, a1, v4, v5) == 0) {
                    // 0x10c9f
                    return 0;
                }
            }
            // 0x10cc8
            v9 += 8;
        }
    }
    int64_t v11 = getpwnam(a1); // 0x10cfb
    int64_t result2 = function_158c0((int64_t **)(strlen(a1) + 24 & -8)); // 0x10d13
    strcpy(result2 + 16, a1);
    if (v11 == 0) {
        int64_t v12 = g22; // 0x10d50
        g22 = result2;
        *(int64_t *)(result2 + 8) = v12;
        return 0;
    }
    int32_t * v13 = (int32_t *)result2; // 0x10d31
    *v13 = *(int32_t *)(v11 + 16);
    int32_t * v14 = g23; // 0x10d33
    g23 = v13;
    *(int64_t *)(result2 + 8) = (int64_t)v14;
    // 0x10c9f
    return result2;
}

// Address range: 0x13470 - 0x13512
int64_t function_13470(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x13470
    __readfsqword(40);
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 >= 11) {
        function_4dbe();
    }
    int32_t v1 = *(int32_t *)((4 * a5 & 0x3fffffffc) + (int64_t)&g5); // 0x13508
    return (int64_t)v1 + (int64_t)&g5;
}

