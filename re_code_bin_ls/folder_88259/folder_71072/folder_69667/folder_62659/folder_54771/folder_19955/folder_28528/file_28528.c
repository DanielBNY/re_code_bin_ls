// Address range: 0x6910 - 0x6ad4
int64_t function_6910(int64_t * a1, int64_t * a2, uint32_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // 0x6923
    int64_t v2 = (int64_t)a2; // 0x6923
    int64_t v3 = (int64_t)a1; // 0x6923
    int64_t v4; // 0x6910
    int64_t result2; // 0x6910
    int64_t v5; // 0x6910
    int64_t v6; // 0x6910
    while (true) {
        char v7 = *(char *)v2; // 0x6925
        char v8; // 0x6910
        char v9 = v8; // 0x692d
        char v10; // 0x6910
        char v11 = v10; // 0x692d
        int64_t v12 = v1; // 0x692d
        char v13 = v7; // 0x692d
        int64_t v14 = v2; // 0x692d
        int64_t v15 = v3; // 0x692d
        char v16 = v8; // 0x692d
        char v17 = v10; // 0x692d
        int64_t v18 = v1; // 0x692d
        int64_t v19 = v2; // 0x692d
        int64_t v20 = v3; // 0x692d
        char v21; // 0x6910
        char v22; // 0x6910
        int64_t v23; // 0x6910
        int64_t v24; // 0x6910
        if (v7 == 92) {
          lab_0x695a:;
            int64_t result = v18;
            char v25 = *(char *)(v19 + 1); // 0x695a
            int64_t v26 = v19 + 2; // 0x695f
            v6 = result;
            result2 = 0;
            v5 = v26;
            v4 = v20;
            if (v25 == 0) {
                // break -> 0x69d5
                break;
            }
            if (v25 < 121) {
                // 0x6976
                return result;
            }
            // 0x69eb
            *(char *)v20 = v25;
            v21 = v16;
            v22 = v17;
            v24 = result;
            v2 = v26;
            v23 = v20;
        } else {
            char v27; // 0x6910
            char v28; // 0x6910
            int64_t v29; // 0x6910
            int64_t v30; // 0x6910
            int64_t v31; // 0x6910
            while (true) {
                // 0x692f
                v29 = v15;
                v30 = v14;
                unsigned char v32 = v13;
                v31 = v12;
                v28 = v11;
                v27 = v9;
                if (v27 > v28) {
                    if (v32 == 94) {
                        // break -> 0x698e
                        break;
                    }
                } else {
                    if (v32 == 61) {
                        // 0x6ab0
                        v6 = v31;
                        result2 = a3;
                        v5 = v30;
                        v4 = v29;
                        if ((char)a3 != 0) {
                            // break (via goto) -> 0x69d5
                            goto lab_0x69d5_2;
                        }
                    } else {
                        if (v32 <= 61) {
                            // 0x69c0
                            v6 = v31;
                            result2 = 1;
                            v5 = v30;
                            v4 = v29;
                            if (v32 != 0 != v32 != 58) {
                                // break (via goto) -> 0x69d5
                                goto lab_0x69d5_2;
                            }
                        }
                    }
                }
                int64_t v33 = v30 + 1; // 0x6941
                *(char *)v29 = v32;
                int64_t v34 = v31 + 1; // 0x6948
                int64_t v35 = v29 + 1; // 0x694c
                char v36 = *(char *)v33; // 0x6950
                v9 = v36;
                v11 = 92;
                v12 = v34;
                v13 = v36;
                v14 = v33;
                v15 = v35;
                v16 = v36;
                v17 = 92;
                v18 = v34;
                v19 = v33;
                v20 = v35;
                if (v36 == 92) {
                    goto lab_0x695a;
                }
            }
            int64_t v37 = v30 + 1; // 0x698e
            unsigned char v38 = *(char *)v37; // 0x698e
            if (v38 < 127) {
                // 0x69a5
                *(char *)v29 = v38 % 32;
                v21 = v27;
                v22 = v28;
                v24 = v31;
                v2 = v30 + 2;
                v23 = v29;
            } else {
                // 0x6a98
                v6 = v31;
                result2 = 0;
                v5 = v37;
                v4 = v29;
                if (v38 != 63) {
                    // break -> 0x69d5
                    break;
                }
                // 0x6ac0
                *(char *)v29 = 127;
                v21 = v27;
                v22 = v28;
                v24 = v31;
                v2 = v37;
                v23 = v29;
            }
        }
        // 0x6925
        v8 = v21;
        v10 = v22;
        v1 = v24 + 1;
        v3 = v23 + 1;
    }
  lab_0x69d5_2:
    // 0x69d5
    *a1 = v4;
    *a2 = v5;
    *(int64_t *)a4 = v6;
    return result2;
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

// Address range: 0x132d3 - 0x1346d
int64_t function_132d3(int64_t a1) {
    // 0x132d3
    if (a1 == 0) {
        // 0x13363
        function_4d10("A NULL argv[0] was passed through an exec system call.\n", 1, 55, g21);
        function_4750();
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
    int64_t result = function_4960(); // 0x132e6
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

