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

// Address range: 0xeb53 - 0xeb9d
int64_t function_eb53(int64_t a1, int64_t a2) {
    int64_t v1 = setlocale(a1, 0); // 0xeb5a
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
        return __stack_chk_fail();
    }
    // 0x6c00
    return result;
}

