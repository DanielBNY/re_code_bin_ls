// Address range: 0x170e3 - 0x17230
int64_t function_170e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x170f0
    int64_t result; // 0x170e3
    int64_t v2; // bp-96, 0x170e3
    int64_t v3; // 0x1710c
    if (a1 == 0) {
        // 0x17200
        result = timegm(a2);
        goto lab_0x17163;
    } else {
        // 0x17109
        v3 = function_16f50(a1);
        result = -1;
        if (v3 == 0) {
            goto lab_0x17163;
        } else {
            int64_t v4 = mktime(a2); // 0x17120
            v2 = v4;
            if (v4 == -1) {
                // 0x17188
                int32_t v5; // bp-88, 0x170e3
                int64_t v6 = &v5; // 0x17188
                if (localtime_r((int64_t)&v2, v6) == 0) {
                    goto lab_0x17148;
                } else {
                    int32_t v7 = *(int32_t *)(a2 + 32); // 0x1719c
                    int32_t v8; // 0x170e3
                    if (v8 >= 0 == v7 > -1 == (v7 == 0 != (v8 == 0))) {
                        goto lab_0x17148;
                    } else {
                        int32_t v9 = *(int32_t *)(a2 + 16); // 0x171bb
                        int32_t v10 = *(int32_t *)(a2 + 20); // 0x171be
                        int32_t v11 = *(int32_t *)(a2 + 12); // 0x171cb
                        int32_t v12 = *(int32_t *)(a2 + 8); // 0x171d4
                        int32_t v13 = *(int32_t *)(a2 + 4); // 0x171dd
                        int32_t v14; // 0x170e3
                        int32_t v15; // 0x170e3
                        int32_t v16; // 0x170e3
                        int32_t v17; // 0x170e3
                        int32_t v18; // 0x170e3
                        if ((v10 ^ v17 | v9 ^ v18 | v11 ^ v16 | v12 ^ v15 || v13 ^ v14 || v5 ^ (int32_t)v6) == 0) {
                            goto lab_0x17130;
                        } else {
                            goto lab_0x17148;
                        }
                    }
                }
            } else {
                goto lab_0x17130;
            }
        }
    }
  lab_0x17163:
    // 0x17163
    if (v1 != __readfsqword(40)) {
        // 0x1721c
        return __stack_chk_fail();
    }
    // 0x17177
    return result;
  lab_0x17130:
    // 0x17130
    if ((char)function_16df0(a1, a2) == 0) {
        // 0x1713f
        v2 = -1;
    }
    goto lab_0x17148;
  lab_0x17148:
    if (v3 == 1) {
        // 0x1715e
        result = v2;
        goto lab_0x17163;
    } else {
        // 0x1714e
        result = -1;
        if ((char)function_16cf0(v3) == 0) {
            goto lab_0x17163;
        } else {
            // 0x1715e
            result = v2;
            goto lab_0x17163;
        }
    }
}

// Address range: 0x119a0 - 0x119e1
int64_t function_119a0(int64_t result, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x119d9
        return result;
    }
    int64_t * v1 = (int64_t *)__ctype_toupper_loc(); // 0x119c5
    int64_t v2 = a3; // 0x119b8
    v2--;
    int32_t v3 = *(int32_t *)(4 * (int64_t)*(char *)(v2 + a2) + *v1); // 0x119c8
    *(char *)(v2 + result) = (char)v3;
    while (v2 != 0) {
        // 0x119c0
        v2--;
        v3 = *(int32_t *)(4 * (int64_t)*(char *)(v2 + a2) + *v1);
        *(char *)(v2 + result) = (char)v3;
    }
    // 0x119d9
    return result;
}

// Address range: 0x11950 - 0x11991
int64_t function_11950(int64_t result, int64_t * a2, int64_t a3) {
    if (a3 == 0) {
        // 0x11989
        return result;
    }
    int64_t * v1 = (int64_t *)__ctype_tolower_loc(); // 0x11975
    int64_t v2 = a3; // 0x11968
    v2--;
    unsigned char v3 = *(char *)(v2 + (int64_t)a2); // 0x11970
    int32_t v4 = *(int32_t *)(4 * (int64_t)v3 + *v1); // 0x11978
    *(char *)(v2 + result) = (char)v4;
    while (v2 != 0) {
        // 0x11970
        v2--;
        v3 = *(char *)(v2 + (int64_t)a2);
        v4 = *(int32_t *)(4 * (int64_t)v3 + *v1);
        *(char *)(v2 + result) = (char)v4;
    }
    // 0x11989
    return result;
}

