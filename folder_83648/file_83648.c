// Address range: 0x14e63 - 0x14f00
int64_t function_14e63(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x14e68
    if ((int32_t)a2 == 10) {
        function_4dd7();
    }
    int64_t v2 = 0x100000000 * a2 / 0x100000000; // bp-72, 0x14e84
    int64_t result = function_146c0(a1, a3, -1, &v2); // 0x14ed8
    if (v1 != __readfsqword(40)) {
        // 0x14ef2
        return __stack_chk_fail(a1);
    }
    // 0x14eed
    return result;
}

// Address range: 0x14d73 - 0x14e10
int64_t function_14d73(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g24); // 0x14d78
    int128_t v2 = __asm_movdqa(g25); // 0x14d80
    int64_t v3 = __readfsqword(40); // 0x14d8a
    int128_t v4 = __asm_movdqa(g26); // 0x14da7
    int64_t v5 = __asm_movaps(v1); // bp-72, 0x14daf
    __asm_movaps(v2);
    __asm_movaps(v4);
    int32_t * v6 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v5); // 0x14dd2
    uint32_t v7 = *v6; // 0x14dd2
    uint32_t v8 = (int32_t)a3 % 32; // 0x14dd6
    *v6 = ((v7 >> v8) % 2 ^ 1) << v8 ^ v7;
    int64_t result = function_146c0(0, a1, a2, &v5); // 0x14dee
    int64_t v9 = __readfsqword(40) ^ v3; // 0x14df8
    if (v9 != 0) {
        // 0x14e08
        return __stack_chk_fail(v9);
    }
    // 0x14e03
    return result;
}

// Address range: 0x15923 - 0x15960
int64_t function_15923(int64_t a1, int64_t a2) {
    // 0x15923
    if (a2 == 0 == (a1 != 0)) {
        // 0x15950
        free(a1, 0);
        return 0;
    }
    int64_t result = realloc(); // 0x15935
    if (a2 != 0 == result == 0) {
        // 0x15959
        int64_t v1; // 0x15923
        return function_15b30(a1, a2, v1);
    }
    // 0x15944
    return result;
}

// Address range: 0x14f03 - 0x14fa0
int64_t function_14f03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g24); // 0x14f08
    int128_t v2 = __asm_movdqa(g25); // 0x14f10
    int64_t v3 = __readfsqword(40); // 0x14f18
    int128_t v4 = __asm_movdqa(g26); // 0x14f28
    __asm_movaps(v1);
    int64_t v5 = 10; // bp-72, 0x14f40
    __asm_movaps(v2);
    __asm_movaps(v4);
    if (a2 == 0) {
        function_4ddc();
    }
    if (a3 == 0) {
        function_4ddc();
    }
    int64_t result = function_146c0(a1, a4, a5, &v5); // 0x14f79
    if (v3 != __readfsqword(40)) {
        // 0x14f93
        return __stack_chk_fail(a1);
    }
    // 0x14f8e
    return result;
}

// Address range: 0x146c0 - 0x14860
int64_t function_146c0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = v1;
    int64_t v3 = 0x100000000 * a1;
    int64_t v4 = v3 / 0x100000000; // 0x146d3
    int32_t * v5 = (int32_t *)__errno_location(); // 0x146e6
    int32_t v6 = *v5; // 0x146ea
    int32_t v7 = v4; // 0x146f0
    if (v7 < 0) {
        function_4dc3();
    }
    int64_t v8 = (int64_t)g14; // 0x146df
    int64_t v9 = v8; // 0x146fe
    if (v4 >= (int64_t)g13) {
        if (v7 == 0x7fffffff) {
            // 0x14859
            return function_15b30(a1, a2, a3);
        }
        int64_t v10 = v4 + 1; // 0x1470c
        int64_t v11 = 0x100000000 * v10 / 0x10000000; // 0x1471a
        int64_t v12; // 0x146c0
        if (g14 == (int64_t *)&g16) {
            int64_t v13 = function_15920(0, v11, a3); // 0x1483a
            int128_t v14 = __asm_movdqa(g16); // 0x1483f
            *(int64_t *)&g14 = v13;
            __asm_movups(*(int128_t *)v13, v14);
            v12 = v13;
        } else {
            int64_t v15 = function_15920(v8, v11, a3); // 0x1472a
            *(int64_t *)&g14 = v15;
            v12 = v15;
        }
        // 0x14739
        v9 = v12;
        int32_t v16 = g13; // 0x14739
        int32_t v17 = v10; // 0x14740
        int64_t v18; // 0x146c0
        int64_t v19; // 0x146c0
        memset(16 * (int64_t)v16 + v9, 0, 16 * (int64_t)(v17 - v16), v1, v19, v18);
        g13 = v17;
    }
    int64_t v20 = v1 + 8; // 0x14761
    int64_t v21 = v9 + v3 / 0x10000000; // 0x14771
    int64_t * v22 = (int64_t *)v21; // 0x14780
    uint64_t v23 = *v22; // 0x14780
    int64_t * v24 = (int64_t *)(v21 + 8); // 0x14783
    int64_t result = *v24; // 0x14783
    int64_t * v25 = (int64_t *)(v1 + 48); // 0x14787
    int32_t v26 = *(int32_t *)(v1 + 4) | 1; // 0x1478a
    int64_t * v27 = (int64_t *)(v1 + 40); // 0x1478e
    uint64_t v28 = function_13470(result, v23, a2, a3, v1 & 0xffffffff, v26, v20, *v27, *v25); // 0x147a0
    if (v23 > v28) {
        // 0x14818
        *v5 = v6;
        return result;
    }
    int64_t v29 = v28 + 1; // 0x147b3
    *v22 = v29;
    if (result != (int64_t)&g23) {
        // 0x147c6
        free(result, v29);
    }
    int64_t result2 = function_158c0(v29, v29, a2); // 0x147e0
    *v24 = result2;
    int64_t v30 = *v27; // 0x14803
    function_13470(result2, v29, a2, a3, (int64_t)*(int32_t *)&v2, v26, v20, v30, *v25);
    // 0x14818
    *v5 = v6;
    return result2;
}

// Address range: 0x14cb3 - 0x14d40
int64_t function_14cb3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x14cb8
    if ((int32_t)a2 == 10) {
        function_4dd2();
    }
    int64_t v2 = 0x100000000 * a2 / 0x100000000; // bp-72, 0x14cd4
    int64_t result = function_146c0(a1, a3, a4, &v2); // 0x14d1e
    if (v1 != __readfsqword(40)) {
        // 0x14d38
        return __stack_chk_fail(a1);
    }
    // 0x14d33
    return result;
}

