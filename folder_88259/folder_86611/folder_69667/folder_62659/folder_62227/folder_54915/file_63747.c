// Address range: 0xf903 - 0xfba0
int64_t function_f903(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0xf90e
    if (a2 == 0) {
        function_4db9();
    }
    // 0xf927
    int64_t v2; // bp-56, 0xf903
    int64_t v3 = function_ec00(a1, a2, &v2, 0); // 0xf938
    int64_t result; // 0xf903
    int64_t v4; // 0xf903
    int64_t v5; // 0xf903
    int64_t v6; // 0xf903
    int64_t * v7; // 0xf970
    int128_t v8; // 0xf903
    int128_t v9; // 0xf903
    int64_t v10; // 0xf903
    if (v3 == 0) {
        // 0xf970
        v7 = (int64_t *)(a1 + 24);
        uint64_t v11 = *v7; // 0xf970
        int128_t v12; // 0xf903
        if (v11 < 0) {
            // 0xf9f0
            __asm_pxor(v12, v12);
            int64_t v13 = *(int64_t *)(a1 + 16); // 0xfa00
            int128_t v14 = __asm_cvtsi2ss(v11 / 2 | v11 % 2); // 0xfa04
            int64_t v15 = *(int64_t *)(a1 + 40); // 0xfa09
            int128_t v16 = __asm_addss_1(v14, v14); // 0xfa0d
            v10 = v13;
            v8 = v16;
            v5 = v15;
            v9 = v16;
            v4 = v13;
            v6 = v15;
            if (v13 >= 0) {
                goto lab_0xf993;
            } else {
                goto lab_0xfa1a;
            }
        } else {
            // 0xf979
            __asm_pxor(v12, v12);
            int64_t v17 = *(int64_t *)(a1 + 40); // 0xf97d
            int128_t v18 = __asm_cvtsi2ss(v11); // 0xf981
            int64_t v19 = *(int64_t *)(a1 + 16); // 0xf986
            v10 = v19;
            v8 = v18;
            v5 = v17;
            v9 = v18;
            v4 = v19;
            v6 = v17;
            if (v19 < 0) {
                goto lab_0xfa1a;
            } else {
                goto lab_0xf993;
            }
        }
    } else {
        // 0xf942
        result = 0;
        if (a3 != 0) {
            // 0xf94a
            *(int64_t *)a3 = v3;
            result = 0;
        }
        goto lab_0xf94e;
    }
  lab_0xf94e:
    // 0xf94e
    if (v1 != __readfsqword(40)) {
        // 0xfb94
        return __stack_chk_fail();
    }
    // 0xf962
    return result;
  lab_0xf993:;
    // 0xf993
    int128_t v20; // 0xf903
    __asm_pxor(v20, v20);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v10), *(int32_t *)(v5 + 8)); // 0xf99c
    __asm_comiss(v8, v21);
    int128_t v22 = v21; // 0xf9a4
    int128_t v23 = v8; // 0xf9a4
    if (v10 == 0) {
        goto lab_0xf9aa;
    } else {
        goto lab_0xfa41;
    }
  lab_0xfa1a:;
    uint64_t v24 = v4;
    __asm_pxor(v20, v20);
    int64_t v25 = v24 / 2 | v24 % 2; // 0xfa27
    int128_t v26 = __asm_cvtsi2ss(v25); // 0xfa2a
    int128_t v27 = __asm_mulss(__asm_addss_1(v26, v26), *(int32_t *)(v6 + 8)); // 0xfa33
    __asm_comiss(v9, v27);
    v22 = v27;
    v23 = v9;
    if (v25 == 0) {
        goto lab_0xf9aa;
    } else {
        goto lab_0xfa41;
    }
  lab_0xf9aa:;
    int64_t * v28 = (int64_t *)v2; // 0xf9ae
    int64_t * v29; // 0xf903
    int64_t v30; // 0xf903
    if (*v28 == 0) {
        // 0xfab8
        *v28 = a2;
        int64_t * v31 = (int64_t *)(a1 + 32); // 0xfac2
        *v31 = *v31 + 1;
        *v7 = *v7 + 1;
        result = 1;
        goto lab_0xf94e;
    } else {
        int64_t * v32 = (int64_t *)(a1 + 72); // 0xf9b9
        int64_t v33 = *v32; // 0xf9b9
        if (v33 == 0) {
            int64_t v34 = malloc(16); // 0xfadd
            result = 0xffffffff;
            if (v34 == 0) {
                goto lab_0xf94e;
            } else {
                // 0xfad8
                v29 = (int64_t *)(v34 + 8);
                v30 = v34;
                goto lab_0xf9ce;
            }
        } else {
            int64_t * v35 = (int64_t *)(v33 + 8);
            *v32 = *v35;
            v29 = v35;
            v30 = v33;
            goto lab_0xf9ce;
        }
    }
  lab_0xfa41:;
    int128_t v36 = v23;
    int128_t v37 = v22;
    int64_t v38 = a1 + 40; // 0xfa41
    function_ed00(v38);
    int64_t v39 = *(int64_t *)v38; // 0xfa4a
    uint64_t v40 = *(int64_t *)(a1 + 16); // 0xfa4e
    int128_t v41 = __asm_movss(*(int32_t *)(v39 + 8)); // 0xfa52
    int128_t v42; // 0xf903
    if (v40 < 0) {
        // 0xfb10
        __asm_pxor(v37, v37);
        int128_t v43 = __asm_cvtsi2ss(v40 / 2 | v40 % 2); // 0xfb20
        v42 = __asm_addss_1(v43, v43);
    } else {
        // 0xfa60
        __asm_pxor(v37, v37);
        v42 = __asm_cvtsi2ss(v40);
    }
    uint64_t v44 = *v7; // 0xfa69
    int128_t v45; // 0xf903
    int64_t v46; // 0xf903
    if (v44 < 0) {
        // 0xfaf0
        __asm_pxor(v36, v36);
        int64_t v47 = v44 / 2 | v44 % 2; // 0xfafd
        int128_t v48 = __asm_cvtsi2ss(v47); // 0xfb00
        v46 = v47;
        v45 = __asm_addss_1(v48, v48);
    } else {
        // 0xfa72
        __asm_pxor(v36, v36);
        int128_t v49 = __asm_cvtsi2ss(v44); // 0xfa76
        v46 = v44;
        v45 = v49;
    }
    // 0xfa7b
    __asm_comiss(v45, __asm_mulss_2(__asm_movaps(v41), v42));
    if (v46 == 0) {
        goto lab_0xf9aa;
    } else {
        int128_t v50 = __asm_mulss(v42, *(int32_t *)(v39 + 12)); // 0xfa8b
        int128_t v51 = v50; // 0xfa94
        if (*(char *)(v39 + 16) == 0) {
            // 0xfb30
            v51 = __asm_mulss_2(v50, v41);
        }
        // 0xfa9a
        __asm_comiss(v51, 0x5f800000);
        result = 0xffffffff;
        goto lab_0xf94e;
    }
  lab_0xf9ce:;
    int64_t * v52 = (int64_t *)(v2 + 8); // 0xf9ce
    *(int64_t *)v30 = a2;
    *v29 = *v52;
    *v52 = v30;
    int64_t * v53 = (int64_t *)(a1 + 32); // 0xf9e5
    *v53 = *v53 + 1;
    result = 1;
    goto lab_0xf94e;
}

