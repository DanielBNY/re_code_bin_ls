// Address range: 0x6bb0 - 0x6c30
int64_t function_6bb0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x6bbf
    int32_t v2 = function_16340(); // 0x6bd7
    int64_t result; // 0x6bb0
    if (v2 == 0) {
        // 0x6c10
        int64_t v3; // 0x6bb0
        g74 = v3;
        result = 1;
    } else {
        // 0x6bdb
        result = 0;
        if (v2 == 1) {
            // 0x6be0
            g74 = -1;
            result = 1;
        }
    }
    // 0x6bf0
    if (v1 != __readfsqword(40)) {
        // 0x6c22
        return function_48e0();
    }
    // 0x6c00
    return result;
}

// Address range: 0x7180 - 0x733a
int64_t function_7180(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = g126; // 0x7181
    int64_t v2 = v1 / 2 + v1; // 0x718e
    int64_t v3 = v2; // 0x7198
    int64_t v4 = v1; // 0x7198
    if (v2 > g122) {
        // 0x7290
        function_46d0(g123);
        uint128_t v5 = 24 * (g126 & 0xffffffffffffffff); // 0x72a4
        if ((int64_t)v5 < 0 || v5 % 0x1f0000000000000001 != 0) {
            // 0x72e9
            function_15b30();
            function_49b0("sort_type != sort_version", "src/ls.c", &g136, "sort_files");
            *(int32_t *)function_4760() = 0;
            return function_4ba0((int64_t)"sort_type != sort_version", (int64_t)"src/ls.c");
        }
        // 0x72be
        v4 = g126;
        g123 = function_158c0(24 * v1);
        v3 = 3 * v4;
        g122 = v3;
    }
    int64_t result = v3; // 0x71a1
    if (v4 != 0) {
        int64_t v6 = g123; // 0x71b5
        int64_t v7 = g128; // 0x71b5
        *(int64_t *)v6 = v7;
        v6 += 8;
        v7 += 200;
        result = v6;
        while (g123 + 8 * v4 != v6) {
            // 0x71b8
            *(int64_t *)v6 = v7;
            v6 += 8;
            v7 += 200;
            result = v6;
        }
    }
    // 0x71cb
    if (g102 == -1) {
        // 0x7278
        return result;
    }
    // 0x71d8
    return function_4a40(&g48);
}

// Address range: 0x109e3 - 0x10bc0
int64_t function_109e3(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x109f7
    int64_t v2 = a1; // 0x10a0a
    int64_t result; // 0x109e3
    if (a1 == 0) {
        int64_t v3 = function_4710("BLOCK_SIZE"); // 0x10b37
        v2 = v3;
        if (v3 != 0) {
            goto lab_0x10a10;
        } else {
            int64_t v4 = function_4710("BLOCKSIZE"); // 0x10b4f
            v2 = v4;
            if (v4 != 0) {
                goto lab_0x10a10;
            } else {
                int64_t * v5 = (int64_t *)a3;
                if (function_4710("POSIXLY_CORRECT") == 0) {
                    // 0x10ba6
                    *v5 = (int64_t)&g25;
                    *(int32_t *)a2 = 0;
                    result = 0;
                } else {
                    // 0x10b71
                    *v5 = 512;
                    *(int32_t *)a2 = 0;
                    result = 0;
                }
                goto lab_0x10a5c;
            }
        }
    } else {
        goto lab_0x10a10;
    }
  lab_0x10a10:;
    char v6 = *(char *)v2; // 0x10a13
    int64_t v7 = v2 + (int64_t)(v6 == 39);
    int64_t v8 = v6 != 39 ? 0 : 4;
    int64_t v9 = function_d4e0(v7, (int64_t)&g12, (int64_t)&g10, 4); // 0x10a38
    int64_t v10; // 0x109e3
    int64_t v11; // 0x109e3
    int64_t v12; // 0x109e3
    int64_t v13; // bp-56, 0x109e3
    int64_t v14; // 0x10a92
    if ((int32_t)v9 < 0) {
        // 0x10a80
        v14 = function_16340(v7, &v13, 0, a3, "eEgGkKmMpPtTyYzZ0");
        if ((int32_t)v14 != 0) {
            // 0x10af4
            *(int32_t *)a2 = 0;
            goto lab_0x10afd;
        } else {
            int64_t v15 = (int64_t)*(char *)v7 + 0xffffffd0; // 0x10a9e
            int64_t v16 = v15 & 0xffffffff; // 0x10a9e
            v12 = v16;
            v10 = v8;
            if ((char)v15 < 10) {
                goto lab_0x10af4_2;
            } else {
                // 0x10ac0
                v11 = v16;
                if (v13 != v7) {
                    int64_t v17 = v7 + 1; // 0x10ab0
                    int64_t v18 = (int64_t)*(char *)v17 + 0xffffffd0; // 0x10ab8
                    while ((char)v18 >= 10) {
                        // 0x10ac0
                        if (v13 == v17) {
                            // 0x10ac5
                            v11 = v18 & 0xffffffff;
                            goto lab_0x10ac5_2;
                        }
                        v17++;
                        v18 = (int64_t)*(char *)v17 + 0xffffffd0;
                    }
                    // 0x10af4
                    v12 = v18 & 0xffffffff;
                    v10 = v8;
                    goto lab_0x10af4_2;
                } else {
                    goto lab_0x10ac5_2;
                }
            }
        }
    } else {
        // 0x10a41
        *(int64_t *)a3 = 1;
        int32_t v19 = *(int32_t *)(0x100000000 * v9 / 0x40000000 + (int64_t)&g10); // 0x10a52
        *(int32_t *)a2 = v19 | (int32_t)v8;
        result = 0;
        goto lab_0x10a5c;
    }
  lab_0x10a5c:
    // 0x10a5c
    if (v1 != __readfsqword(40)) {
        // 0x10bbb
        return function_48e0();
    }
    // 0x10a70
    return result;
  lab_0x10afd:
    // 0x10afd
    *(int64_t *)a3 = function_4710("POSIXLY_CORRECT") == 0 ? 1024 : 512;
    result = 4;
    goto lab_0x10a5c;
  lab_0x10af4_2:
    // 0x10af4
    *(int32_t *)a2 = (int32_t)v10;
    result = v14;
    if (v12 != 0) {
        goto lab_0x10a5c;
    } else {
        goto lab_0x10afd;
    }
  lab_0x10ac5_2:;
    // 0x10ac5
    int64_t v20; // 0x109e3
    if (*(char *)(v13 - 1) == 66) {
        int64_t v21 = v8 | 384; // 0x10b90
        v20 = v21;
        v12 = v11;
        v10 = v21;
        if (*(char *)(v13 - 2) != 105) {
            goto lab_0x10af4_2;
        } else {
            goto lab_0x10ad3;
        }
    } else {
        // 0x10acf
        v20 = v8 | 128;
        goto lab_0x10ad3;
    }
  lab_0x10ad3:
    // 0x10ad3
    v12 = v11;
    v10 = v20 & 0xffffffdf | 32;
    goto lab_0x10af4_2;
}

