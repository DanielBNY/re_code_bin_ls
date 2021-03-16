// Address range: 0xa1a0 - 0xa52b
int64_t function_a1a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint32_t v1 = *(int32_t *)&g63; // 0xa1a0
    if (v1 >= 5) {
        // 0xa52a
        int64_t result; // 0xa1a0
        return result;
    }
    int32_t v2 = *(int32_t *)(4 * (int64_t)v1 + (int64_t)&g2); // 0xa1c8
    return (int64_t)v2 + (int64_t)&g2;
}

// Address range: 0x6b40 - 0x6ba1
int64_t function_6b40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 16 * a1 & 0xffffffff0; // 0x6b4c
    int64_t v2 = *(int64_t *)(v1 + (int64_t)&g29); // 0x6b53
    if (v2 == 0) {
        // 0x6b71
        return 0;
    }
    int64_t v3 = *(int64_t *)(v1 + (int64_t)&g29 + 8); // 0x6b5b
    switch (v2) {
        case 1: {
            // 0x6b78
            return *(char *)v3 != 48;
        }
        case 2: {
            int32_t v4 = (int32_t)*(char *)v3 - 48; // 0x6b8b
            int32_t v5 = v4; // 0x6b8e
            if (v4 == 0) {
                // 0x6b90
                v5 = (int32_t)*(char *)(v3 + 1) - 48;
            }
            // 0x6b97
            return v5 != 0;
        }
    }
    // 0x6b71
    return 1;
}

// Address range: 0x6e80 - 0x6ee8
int64_t function_6e80(int64_t * a1, int32_t a2, int64_t a3) {
    int64_t v1 = function_158c0(32); // 0x6e98
    int64_t v2 = 0; // 0x6ea3
    if (a2 != 0) {
        // 0x6ea5
        v2 = function_15ae0((int64_t)a2);
    }
    int64_t v3 = (int64_t)a1;
    *(int64_t *)(v1 + 8) = v2;
    int64_t v4 = v3; // 0x6eb7
    if (a1 != NULL) {
        // 0x6eb9
        v4 = function_15ae0(v3);
    }
    int64_t result = g119; // 0x6ec4
    *(int64_t *)v1 = v4;
    *(char *)(v1 + 16) = (char)a3;
    *(int64_t *)(v1 + 24) = result;
    g119 = v1;
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
        free(g123);
        uint128_t v5 = 24 * (g126 & 0xffffffffffffffff); // 0x72a4
        if ((int64_t)v5 < 0 || v5 % 0x1f0000000000000001 != 0) {
            // 0x72e9
            function_15b30();
            __assert_fail("sort_type != sort_version", "src/ls.c", &g136, "sort_files");
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
    return _setjmp(&g48);
}

// Address range: 0x6f70 - 0x701c
int64_t function_6f70(void) {
    // 0x6f70
    int64_t result; // 0x6f70
    if ((int64_t)g126 != 0) {
        int64_t v1 = 0;
        int64_t v2 = v1 + 1; // 0x6f8b
        result = function_6f20(*(int64_t *)(g123 + 8 * v1));
        while (v2 < (int64_t)g126) {
            // 0x6f80
            v1 = v2;
            v2 = v1 + 1;
            result = function_6f20(*(int64_t *)(g123 + 8 * v1));
        }
    }
    // 0x6f9d
    g126 = 0;
    *(char *)&g125 = 0;
    *(char *)&g115 = 0;
    *(int32_t *)&g114 = 0;
    *(int32_t *)&g113 = 0;
    *(int32_t *)&g112 = 0;
    *(int32_t *)&g110 = 0;
    *(int32_t *)&g109 = 0;
    *(int32_t *)&g108 = 0;
    *(int32_t *)&g111 = 0;
    *(int32_t *)&g107 = 0;
    *(int32_t *)&g106 = 0;
    *(int32_t *)&g105 = 0;
    return result;
}

// Address range: 0x16273 - 0x16337
int64_t function_16273(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16273
    __readfsqword(40);
    uint32_t v1 = (int32_t)a1;
    int64_t v2 = a4; // 0x1629a
    int64_t v3 = a3; // 0x1629a
    int64_t v4 = a2; // 0x1629a
    int64_t v5; // 0x16273
    int64_t v6; // 0x16273
    int64_t v7; // 0x16273
    int64_t v8; // 0x16273
    int64_t v9; // 0x16273
    int64_t v10; // 0x16273
    if (v1 < 4) {
        int64_t v11 = (int64_t)"invalid suffix in %s%s argument '%s'"; // 0x1629f
        if (v1 < 2) {
            // 0x162a5
            v11 = (int64_t)"%s%s argument '%s' too large";
            if (v1 != 1) {
                int64_t v12 = function_4de6(); // 0x16332
            }
        }
        int64_t v13 = 0x100000000 * a2 / 0x100000000; // 0x162b2
        v7 = v13;
        v9 = a4;
        v5 = v11;
        v8 = v13;
        v10 = a3;
        v6 = v11;
        if ((int32_t)a2 < 0) {
            goto lab_0x1630f;
        } else {
            goto lab_0x162b9;
        }
    } else {
        goto lab_0x162f8;
    }
  lab_0x162f8:
    // 0x162f8
    if (v1 != 4) {
        function_4de6();
    }
    int64_t v14 = 0x100000000 * v4 / 0x100000000; // 0x16308
    v7 = v14;
    v9 = v2;
    v5 = (int64_t)"invalid %s%s argument '%s'";
    v8 = v14;
    v10 = v3;
    v6 = (int64_t)"invalid %s%s argument '%s'";
    if ((int32_t)v4 >= 0) {
        goto lab_0x162b9;
    } else {
        goto lab_0x1630f;
    }
  lab_0x1630f:;
    int64_t v15 = 0x100000000000000 * v10 / 0x100000000000000; // bp-50, 0x16316
    int64_t v16 = v6; // 0x16327
    int64_t v17 = (int64_t)"--" - v8; // 0x16327
    int64_t v18 = &v15; // 0x16327
    goto lab_0x162c8;
  lab_0x162b9:
    // 0x162b9
    v16 = v5;
    v17 = (int64_t)"--";
    v18 = *(int64_t *)(v9 + 32 * v7);
    goto lab_0x162c8;
  lab_0x162c8:
    // 0x162c8
    v2 = v17;
    v3 = dcgettext(0, v16, 5);
    error((int64_t)v1, 0, (char *)v3, v2, v18, a5);
    abort();
    v4 = 0;
    goto lab_0x162f8;
}

// Address range: 0x14863 - 0x14899
int64_t function_14863(int64_t a1) {
    int32_t * v1 = (int32_t *)__errno_location(); // 0x14878
    int64_t result = function_15ae0(a1 == 0 ? (int64_t)&g24 : a1, 56); // 0x1488c
    return result;
}

