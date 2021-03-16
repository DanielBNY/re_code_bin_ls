// Address range: 0xeeb0 - 0xeffa
int64_t function_eeb0(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0xeeca
    uint64_t v2 = *v1; // 0xeeca
    if (v2 <= a2) {
        // 0xefb2
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0xeeb0
    int64_t v8 = a2; // 0xeeb0
    int64_t v9; // 0xeeb0
    int64_t result; // 0xeeb0
    int64_t v10; // 0xeeb0
    while (true) {
      lab_0xeee7_2:
        // 0xeee7
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0xeee7
        int64_t v12 = *v11; // 0xeee7
        v9 = v7;
        if (v12 == 0) {
            goto lab_0xeed8;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0xeef0
            int64_t v14 = *v13; // 0xeef0
            int64_t v15 = v14; // 0xeef7
            int64_t v16 = v12; // 0xeef7
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0xef11
                    int64_t v19 = *v18; // 0xef11
                    int64_t v20 = function_ebd0(v3, v19); // 0xef1a
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0xef22
                    int64_t v22 = *v21; // 0xef22
                    int64_t * v23 = (int64_t *)v20; // 0xef26
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0xef00
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0xef4c
                            break;
                        }
                    } else {
                        // 0xef2c
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0xef4c
                            break;
                        }
                    }
                    // 0xef11
                    v15 = v22;
                }
                // 0xef4c
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0xef50
                v9 = *v1;
                goto lab_0xeed8;
            } else {
                int64_t v26 = function_ebd0(v3, v25); // 0xef67
                int64_t * v27 = (int64_t *)v26; // 0xef6c
                if (*v27 == 0) {
                    // 0xefd0
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0xef75
                    int64_t * v29; // 0xeeb0
                    int64_t v30; // 0xeeb0
                    if (v28 == 0) {
                        int64_t v31 = function_46e0(16); // 0xefdf
                        result = 0;
                        if (v31 == 0) {
                            // break -> 0xefb2
                            break;
                        }
                        // 0xefda
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0xef86
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0xef95
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0xef9d
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0xefa7
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0xefb2
                    break;
                }
                goto lab_0xeee7_2;
            }
        }
    }
    // 0xefb2
    return result;
  lab_0xeed8:;
    int64_t v36 = v10 + 16; // 0xeed8
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0xeee7_2;
    // 0xeee7
    goto lab_0xeee7_2;
}

