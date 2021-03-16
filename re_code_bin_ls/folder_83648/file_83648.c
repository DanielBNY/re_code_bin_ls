// Address range: 0x146c0 - 0x14860
int64_t function_146c0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = v1;
    int64_t v3 = 0x100000000 * a1;
    int64_t v4 = v3 / 0x100000000; // 0x146d3
    int32_t * v5 = (int32_t *)function_4760(); // 0x146e6
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
        function_49e0(16 * (int64_t)v16 + v9, 0, 16 * (int64_t)(v17 - v16), v1, v19, v18);
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
        function_46d0(result, v29);
    }
    int64_t result2 = function_158c0(v29, v29, a2); // 0x147e0
    *v24 = result2;
    int64_t v30 = *v27; // 0x14803
    function_13470(result2, v29, a2, a3, (int64_t)*(int32_t *)&v2, v26, v20, v30, *v25);
    // 0x14818
    *v5 = v6;
    return result2;
}

