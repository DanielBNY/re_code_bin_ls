// Address range: 0x16d53 - 0x16dea
int64_t function_16d53(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16d53
    int64_t result2; // 0x16d53
    if (a1 == 0) {
        int64_t result = function_46e0(128); // 0x16dc5
        result2 = 0;
        if (result != 0) {
            // 0x16dd2
            *(int64_t *)result = 0;
            *(int16_t *)(result + 8) = 0;
            return result;
        }
    } else {
        int64_t v1 = function_48c0(a1); // 0x16d60
        uint64_t v2 = v1 + 1; // 0x16d6a
        int64_t v3 = function_46e0(v2 >= 118 ? v1 + 18 & -8 : 128); // 0x16d7e
        result2 = 0;
        if (v3 != 0) {
            // 0x16d8b
            *(int64_t *)v3 = 0;
            int64_t v4 = v3 + 9; // 0x16d97
            *(int16_t *)(v3 + 8) = 1;
            int64_t v5; // 0x16d53
            function_4ae0(v4, a1, v2, v5);
            *(char *)(v4 + v2) = 0;
            result2 = v3;
        }
    }
    // 0x16db3
    return result2;
}

// Address range: 0xf023 - 0xf029
int64_t function_f023(int64_t a1) {
    // 0xf023
    return *(int64_t *)(a1 + 32);
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
    v3 = function_48a0(0, v16, 5);
    function_4c60((int64_t)v1, 0, (char *)v3, v2, v18, a5);
    function_4750();
    v4 = 0;
    goto lab_0x162f8;
}

// Address range: 0x148c3 - 0x148d5
int64_t function_148c3(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g24 : a1; // 0x148ce
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g24;
}

// Address range: 0x6e80 - 0x6ee8
int64_t function_6e80(int64_t * a1, int32_t a2, int64_t a3) {
    int64_t v1 = function_158c0(32); // 0x6e98
    int64_t v2 = 0; // 0x6ea3
    if (a2 != 0) {
        // 0x6ea5
        v2 = function_15b10((int64_t)a2);
    }
    int64_t v3 = (int64_t)a1;
    *(int64_t *)(v1 + 8) = v2;
    int64_t v4 = v3; // 0x6eb7
    if (a1 != NULL) {
        // 0x6eb9
        v4 = function_15b10(v3);
    }
    int64_t result = g119; // 0x6ec4
    *(int64_t *)v1 = v4;
    *(char *)(v1 + 16) = (char)a3;
    *(int64_t *)(v1 + 24) = result;
    g119 = v1;
    return result;
}

// Address range: 0x15cd3 - 0x15db0
int64_t function_15cd3(void) {
    int64_t v1 = __readfsqword(40); // 0x15cec
    int64_t v2 = 34; // bp-56, 0x15cfc
    int32_t * v3 = (int32_t *)function_4760();
    int64_t v4 = 0; // 0x15d0f
    int64_t result; // 0x15cd3
    uint32_t v5; // 0x15d70
    while (true) {
        // 0x15d10
        v4 = function_15a20(v4, &v2);
        char * v6 = (char *)(v4 - 2 + v2); // 0x15d2e
        *v6 = 0;
        *v3 = 0;
        if ((int32_t)function_4ce0(v4, v2 - 1) != 0) {
            // 0x15d70
            v5 = *v3;
            if (v5 >= 37) {
                // break -> 0x15d79
                break;
            }
            if ((1 << (int64_t)(v5 % 64) & 0x1000401001) == 0) {
                // break -> 0x15d79
                break;
            }
        } else {
            // 0x15d41
            result = v4;
            if (*v6 == 0) {
                goto lab_0x15d47;
            }
        }
    }
    // 0x15d79
    function_46d0(v4);
    *v3 = v5;
    result = 0;
  lab_0x15d47:
    // 0x15d47
    if (v1 != __readfsqword(40)) {
        // 0x15d9c
        return function_48e0();
    }
    // 0x15d57
    return result;
}

// Address range: 0x16a83 - 0x16a95
int64_t function_16a83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 80); // 0x16a84
    *v1 = *v1 & -2;
    *(int64_t *)(a1 + 56) = a4;
    *(int64_t *)(a1 + 64) = a5;
    return function_169f0(a1, a2, a3);
}

