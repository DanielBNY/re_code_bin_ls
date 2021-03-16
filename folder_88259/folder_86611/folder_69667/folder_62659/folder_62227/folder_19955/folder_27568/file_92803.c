// Address range: 0x16a83 - 0x16a95
int64_t function_16a83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 80); // 0x16a84
    *v1 = *v1 & -2;
    *(int64_t *)(a1 + 56) = a4;
    *(int64_t *)(a1 + 64) = a5;
    return function_169f0(a1, a2, a3);
}

// Address range: 0xf023 - 0xf029
int64_t function_f023(int64_t a1) {
    // 0xf023
    return *(int64_t *)(a1 + 32);
}

// Address range: 0x148e3 - 0x14919
int64_t function_148e3(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g24 + 8 : a1 + 8; // 0x148ff
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x14904
    uint32_t v3 = *v2; // 0x14904
    uint32_t v4 = (int32_t)a2 % 32; // 0x14908
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}

// Address range: 0x132d3 - 0x1346d
int64_t function_132d3(int64_t a1) {
    // 0x132d3
    if (a1 == 0) {
        // 0x13363
        fwrite("A NULL argv[0] was passed through an exec system call.\n", 1, 55, g21);
        abort();
        int64_t v1 = function_17340(); // 0x1339b
        char v2 = *(char *)v1 & -33;
        if (v2 == 85) {
            // 0x133ab
            if ((*(char *)(v1 + 1) & -33) != 84 || (*(char *)(v1 + 2) & -33) != 70 || *(char *)(v1 + 3) != 45 || *(char *)(v1 + 4) != 56 || *(char *)(v1 + 5) != 0) {
                // 0x133d5
                return &g10;
            }
            // 0x133d5
            return &g2;
        }
        if (v2 != 71 || (*(char *)(v1 + 1) & -33) != 66 || *(char *)(v1 + 2) != 49 || *(char *)(v1 + 3) != 56 || *(char *)(v1 + 4) != 48 || *(char *)(v1 + 5) != 51 || *(char *)(v1 + 6) != 48 || *(char *)(v1 + 7) != 0) {
            // 0x133d5
            return &g10;
        }
        // 0x133d5
        return &g3;
    }
    int64_t result = strrchr(); // 0x132e6
    if (result == 0) {
        // 0x1333b
        g22 = a1;
        g20 = a1;
        return result;
    }
    int64_t v3 = result + 1; // 0x132f0
    if (v3 - a1 < 7) {
        // 0x1333b
        g22 = a1;
        g20 = a1;
        return result;
    }
    // 0x13300
    bool v4; // 0x132d3
    int64_t v5 = v4 ? -1 : 1; // 0x13310
    int64_t v6 = (int64_t)"/.libs/"; // 0x132d3
    int64_t v7 = result - 6; // 0x132d3
    int64_t v8 = 7; // 0x13310
    unsigned char v9 = *(char *)v7; // 0x13310
    char v10 = *(char *)v6; // 0x13310
    char v11 = v10; // 0x13310
    bool v12 = false; // 0x13310
    while (v9 == v10) {
        v8--;
        v6 += v5;
        v7 += v5;
        v11 = v9;
        v12 = true;
        if (v8 == 0) {
            // break ->
            break;
        }
        v9 = *(char *)v7;
        v10 = *(char *)v6;
        v11 = v10;
        v12 = false;
    }
    unsigned char v13 = v11;
    if ((v9 >= v13 && !v12) != v9 < v13) {
        // 0x1333b
        g22 = a1;
        g20 = a1;
        return result;
    }
    // 0x1331c
    if (*(char *)v3 != 108 || *(char *)(result + 2) != 116 || *(char *)(result + 3) != 45) {
        // 0x13350
        g22 = v3;
        g20 = v3;
        return result;
    }
    int64_t v14 = result + 4; // 0x13330
    g18 = v14;
    // 0x1333b
    g22 = v14;
    g20 = v14;
    return result;
}

// Address range: 0x15cd3 - 0x15db0
int64_t function_15cd3(void) {
    int64_t v1 = __readfsqword(40); // 0x15cec
    int64_t v2 = 34; // bp-56, 0x15cfc
    int32_t * v3 = (int32_t *)__errno_location();
    int64_t v4 = 0; // 0x15d0f
    int64_t result; // 0x15cd3
    uint32_t v5; // 0x15d70
    while (true) {
        // 0x15d10
        v4 = function_15a20(v4, &v2);
        char * v6 = (char *)(v4 - 2 + v2); // 0x15d2e
        *v6 = 0;
        *v3 = 0;
        if ((int32_t)gethostname(v4, v2 - 1) != 0) {
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
    free(v4);
    *v3 = v5;
    result = 0;
  lab_0x15d47:
    // 0x15d47
    if (v1 != __readfsqword(40)) {
        // 0x15d9c
        return __stack_chk_fail();
    }
    // 0x15d57
    return result;
}

// Address range: 0x75f0 - 0x76b3
int64_t function_75f0(char * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 24); // 0x75f4
    int64_t result = *v2; // 0x75f4
    int64_t * v3 = (int64_t *)(v1 + 16); // 0x75f8
    int64_t v4 = *v3; // 0x75f8
    uint64_t v5 = result - v4; // 0x75ff
    if (v5 < 8) {
        // 0x7697
        return result;
    }
    if (result == v4) {
        char * v6 = (char *)(v1 + 80); // 0x769c
        *v6 = *v6 | 2;
    }
    int64_t v7 = *(int64_t *)(v1 + 48); // 0x7615
    int64_t v8 = *(int64_t *)(v1 + 8); // 0x7619
    int64_t v9 = v7 + result & -1 - v7; // 0x762a
    int64_t v10 = *(int64_t *)(v1 + 32); // 0x762d
    uint64_t v11 = v9 - v8; // 0x7637
    uint64_t v12 = v10 - v8; // 0x763a
    int64_t v13 = v11 > v12 ? v10 : v9; // 0x7640
    *v2 = v13;
    *v3 = v13;
    fputs_unlocked((int64_t)a1, (int64_t)g43);
    int64_t v14 = v4; // 0x765f
    int64_t v15 = *(int64_t *)v14; // 0x7660
    v14 += 8;
    __printf_chk(1, " %lu", v15, v8);
    while (v14 != (v5 & -8) + v4) {
        // 0x7660
        v15 = *(int64_t *)v14;
        v14 += 8;
        __printf_chk(1, " %lu", v15, v8);
    }
    int64_t v16 = g43; // 0x767b
    int64_t * v17 = (int64_t *)(v16 + 40); // 0x7682
    uint64_t result2 = *v17; // 0x7682
    if (result2 >= *(int64_t *)(v16 + 48)) {
        // 0x76a5
        return function_4950(v16, 10, v15, v8, v11, v12);
    }
    // 0x768c
    *v17 = result2 + 1;
    *(char *)result2 = 10;
    // 0x7697
    return result2;
}

