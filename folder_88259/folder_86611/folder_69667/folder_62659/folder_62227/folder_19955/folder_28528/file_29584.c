// Address range: 0xfc03 - 0xfe00
int64_t function_fc03(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0xfc14
    int64_t v2; // bp-40, 0xfc03
    int64_t v3; // 0xfc03
    int64_t result = function_ec00(a1, v3, &v2, 1); // 0xfc27
    int64_t v4; // 0xfc03
    int64_t v5; // 0xfc03
    int64_t v6; // 0xfc03
    int64_t * v7; // 0xfc68
    int128_t v8; // 0xfc03
    int128_t v9; // 0xfc03
    int64_t v10; // 0xfc03
    if (result == 0) {
        goto lab_0xfc43;
    } else {
        int64_t * v11 = (int64_t *)(a1 + 32); // 0xfc38
        *v11 = *v11 - 1;
        if (*(int64_t *)v2 == 0) {
            // 0xfc68
            v7 = (int64_t *)(a1 + 24);
            uint64_t v12 = *v7 - 1; // 0xfc6c
            *v7 = v12;
            int128_t v13; // 0xfc03
            if (v12 < 0) {
                // 0xfd50
                __asm_pxor(v13, v13);
                int64_t v14 = *(int64_t *)(a1 + 16); // 0xfd60
                int128_t v15 = __asm_cvtsi2ss(v12 / 2 | v12 % 2); // 0xfd64
                int64_t v16 = *(int64_t *)(a1 + 40); // 0xfd69
                int128_t v17 = __asm_addss_1(v15, v15); // 0xfd6d
                v10 = v14;
                v8 = v17;
                v5 = v16;
                v9 = v17;
                v4 = v14;
                v6 = v16;
                if (v14 >= 0) {
                    goto lab_0xfc94;
                } else {
                    goto lab_0xfd7a;
                }
            } else {
                // 0xfc7a
                __asm_pxor(v13, v13);
                int64_t v18 = *(int64_t *)(a1 + 40); // 0xfc7e
                int128_t v19 = __asm_cvtsi2ss(v12); // 0xfc82
                int64_t v20 = *(int64_t *)(a1 + 16); // 0xfc87
                v10 = v20;
                v8 = v19;
                v5 = v18;
                v9 = v19;
                v4 = v20;
                v6 = v18;
                if (v20 < 0) {
                    goto lab_0xfd7a;
                } else {
                    goto lab_0xfc94;
                }
            }
        } else {
            goto lab_0xfc43;
        }
    }
  lab_0xfc43:
    // 0xfc43
    if (v1 != __readfsqword(40)) {
        // 0xfdf7
        return __stack_chk_fail();
    }
    // 0xfc57
    return result;
  lab_0xfc94:;
    // 0xfc94
    int128_t v21; // 0xfc03
    __asm_pxor(v21, v21);
    int128_t v22 = __asm_cvtsi2ss(v10); // 0xfc98
    int64_t v23 = v10; // 0xfc98
    int128_t v24 = v8; // 0xfc98
    int64_t v25 = v5; // 0xfc98
    int128_t v26 = v22; // 0xfc98
    goto lab_0xfc9d;
  lab_0xfd7a:;
    uint64_t v47 = v4;
    __asm_pxor(v21, v21);
    int64_t v48 = v47 / 2 | v47 % 2; // 0xfd87
    int128_t v49 = __asm_cvtsi2ss(v48); // 0xfd8a
    v23 = v48;
    v24 = v9;
    v25 = v6;
    v26 = __asm_addss_1(v49, v49);
    goto lab_0xfc9d;
  lab_0xfc9d:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0xfc9d
    __asm_comiss(v28, v27);
    if (v23 != 0) {
        int64_t v29 = a1 + 40; // 0xfca6
        function_ed00(v29);
        uint64_t v30 = *(int64_t *)(a1 + 16); // 0xfcaf
        int64_t v31 = *(int64_t *)v29; // 0xfcb3
        int128_t v32; // 0xfc03
        if (v30 < 0) {
            // 0xfdc0
            __asm_pxor(v27, v27);
            int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0xfdd0
            v32 = __asm_addss_1(v33, v33);
        } else {
            // 0xfcc0
            __asm_pxor(v27, v27);
            v32 = __asm_cvtsi2ss(v30);
        }
        uint64_t v34 = *v7; // 0xfcc9
        int128_t v35; // 0xfc03
        int64_t v36; // 0xfc03
        if (v34 < 0) {
            // 0xfda0
            __asm_pxor(v28, v28);
            int64_t v37 = v34 / 2 | v34 % 2; // 0xfdad
            int128_t v38 = __asm_cvtsi2ss(v37); // 0xfdb0
            v36 = v37;
            v35 = __asm_addss_1(v38, v38);
        } else {
            // 0xfcd6
            __asm_pxor(v28, v28);
            int128_t v39 = __asm_cvtsi2ss(v34); // 0xfcda
            v36 = v34;
            v35 = v39;
        }
        // 0xfcdf
        __asm_comiss(__asm_mulss_2(__asm_movss(*(int32_t *)v31), v32), v35);
        if (v36 != 0) {
            int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0xfcf0
            int128_t v41 = v40; // 0xfcf9
            if (*(char *)(v31 + 16) == 0) {
                // 0xfcfb
                v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
            }
            // 0xfd00
            __asm_comiss(v41, 0x5f000000);
            int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0xfde8
            if ((char)function_f770(a1, v42 ^ -0x8000000000000000) == 0) {
                int64_t * v43 = (int64_t *)(a1 + 72); // 0xfd22
                int64_t v44 = *v43; // 0xfd22
                if (v44 != 0) {
                    int64_t v45 = *(int64_t *)(v44 + 8); // 0xfd33
                    free(v44);
                    int64_t v46 = v45; // 0xfd3f
                    while (v45 != 0) {
                        // 0xfd30
                        v45 = *(int64_t *)(v46 + 8);
                        free(v46);
                        v46 = v45;
                    }
                }
                // 0xfd41
                *v43 = 0;
            }
        }
    }
    goto lab_0xfc43;
}

// Address range: 0x7390 - 0x7512
int64_t function_7390(int32_t a1, uint64_t a2, int64_t a3) {
    // 0x7390
    if (a1 != 0 && g129 != 0) {
        // 0x73ae
        function_6e80(NULL, a1, 0);
    }
    uint64_t v1 = a2 % 256; // 0x7394
    int64_t result = g126; // 0x73ba
    int64_t v2 = result; // 0x73c8
    if (result == 0) {
        // 0x7500
        g126 = 0;
        return result;
    }
    int64_t v3; // 0x7390
    int64_t v4; // 0x7390
    int64_t v5; // 0x73e5
    int32_t * v6; // 0x73e9
    while (true) {
      lab_0x73de_2:
        // 0x73de
        v4 = v2 - 1;
        v5 = *(int64_t *)(8 * v4 + g123);
        v6 = (int32_t *)(v5 + 168);
        uint32_t v7 = *v6; // 0x73e9
        if (v7 == 3) {
            goto lab_0x73f9;
        } else {
            // 0x73f4
            v3 = v7;
            if (v7 != 9) {
                goto lab_0x73d0;
            } else {
                goto lab_0x73f9;
            }
        }
    }
  lab_0x7470_2:;
    int64_t v8 = g126; // 0x7470
    int64_t result2; // 0x7390
    if (v8 == 0) {
        // 0x7500
        g126 = 0;
        return result2;
    }
    int64_t v9 = 0; // 0x748e
    int64_t v10 = *(int64_t *)g123; // 0x7490
    *(int64_t *)(8 * v9 + g123) = v10;
    int64_t result3 = g123 + 8; // 0x74a1
    int64_t v11 = v9 + (int64_t)(*(int32_t *)(v10 + 168) != 9); // 0x74a8
    int64_t v12 = result3; // 0x74ae
    v9 = v11;
    while (g123 + 8 * v8 != result3) {
        // 0x7490
        v10 = *(int64_t *)v12;
        *(int64_t *)(8 * v9 + g123) = v10;
        result3 = v12 + 8;
        v11 = v9 + (int64_t)(*(int32_t *)(v10 + 168) != 9);
        v12 = result3;
        v9 = v11;
    }
    // 0x74b0
    g126 = v11;
    return result3;
  lab_0x73f9:;
    int64_t v13 = *(int64_t *)v5; // 0x73f9
    if (a1 == 0) {
        goto lab_0x74c0;
    } else {
        // 0x7406
        if (*(char *)function_e140(v13) == 46) {
            // 0x74d8
            int64_t v14; // 0x7409
            int64_t v15 = v14 + 1; // 0x74da
            char v16 = *(char *)v15; // 0x74da
            unsigned char v17 = *(char *)(v15 + (int64_t)(v16 == 46)); // 0x74e1
            int64_t v18 = v17; // 0x74e1
            v3 = v18;
            v3 = v18;
            switch (v17) {
                case 0: {
                    goto lab_0x73d0;
                }
                case 47: {
                    goto lab_0x73d0;
                }
                default: {
                    goto lab_0x7417;
                }
            }
        } else {
            goto lab_0x7417;
        }
    }
  lab_0x74c0:;
    int64_t v19 = *(int64_t *)(v5 + 8); // 0x74c0
    int64_t v20 = function_6e80((int64_t *)v13, (int32_t)v19, v1); // 0x74cf
    goto lab_0x7448;
  lab_0x73d0:
    // 0x73d0
    result2 = v3;
    if (v4 == 0) {
        // break -> 0x7470
        goto lab_0x7470_2;
    }
    // 0x73de
    v2 = v4;
    goto lab_0x73de_2;
  lab_0x7448:
    // 0x7448
    v3 = v20;
    if (*v6 != 9) {
        goto lab_0x73d0;
    } else {
        // 0x7455
        result2 = function_6f20(v5);
        if (v4 == 0) {
            // break -> 0x7470
            goto lab_0x7470_2;
        }
        // 0x73de
        v2 = v4;
        goto lab_0x73de_2;
    }
  lab_0x7417:
    // 0x7417
    if (*(char *)v13 == 47) {
        goto lab_0x74c0;
    } else {
        int64_t v21 = function_e510((int64_t)a1, v13, 0); // 0x7429
        function_6e80((int64_t *)v21, (int32_t)*(int64_t *)(v5 + 8), v1);
        v20 = free(v21);
        goto lab_0x7448;
    }
}

