// Address range: 0x7dc0 - 0x7fe5
int64_t function_7dc0(int32_t a1) {
    int64_t v1 = __readfsqword(40); // 0x7dd1
    int64_t v2 = (int64_t)&g3; // 0x7de7
    int64_t v3 = 20; // 0x7de7
    if ((char)a1 != 0) {
        // 0x7e60
        function_4ad0(&g63);
        int64_t v4 = 20;
        int64_t v5 = (int64_t)&g3;
        int64_t v6; // bp-216, 0x7dc0
        function_47d0(v4, 0, &v6);
        if (v6 != 1) {
            // 0x7eab
            function_4d60((int64_t)&g63, v4);
        }
        while (v5 != (int64_t)&g4) {
            // 0x7e90
            v4 = (int64_t)*(int32_t *)v5;
            v5 += 4;
            function_47d0(v4, 0, &v6);
            if (v6 != 1) {
                // 0x7eab
                function_4d60((int64_t)&g63, v4);
            }
        }
        int128_t v7 = __asm_movdqa(*(int128_t *)&g63); // 0x7ebb
        int128_t v8 = __asm_movdqa(g64); // 0x7ec3
        int128_t v9 = __asm_movdqa(g65); // 0x7edc
        int128_t v10 = __asm_movdqa(g66); // 0x7ee4
        int128_t v11 = __asm_movdqa(g67); // 0x7efa
        int128_t v12 = __asm_movdqa(g68); // 0x7f02
        int128_t v13; // 0x7dc0
        __asm_movups(v13, v7);
        int128_t v14 = __asm_movdqa(g69); // 0x7f0f
        int128_t v15 = __asm_movdqa(g70); // 0x7f17
        int128_t v16; // 0x7dc0
        __asm_movups(v16, v8);
        int128_t v17; // 0x7dc0
        __asm_movups(v17, v9);
        int128_t v18; // 0x7dc0
        __asm_movups(v18, v10);
        int128_t v19; // 0x7dc0
        __asm_movups(v19, v11);
        int128_t v20; // 0x7dc0
        __asm_movups(v20, v12);
        int128_t v21; // 0x7dc0
        __asm_movups(v21, v14);
        int128_t v22; // 0x7dc0
        __asm_movups(v22, v15);
        int32_t v23 = &v6;
        int64_t v24 = 20;
        int64_t v25 = (int64_t)&g3;
        if ((int32_t)function_4cf0((int64_t)&g63, v24) != 0) {
            // 0x7f63
            v6 = v24 == 20 ? 0x77d0 : 0x68f0;
            function_47d0(v24, v23, NULL);
        }
        while (v25 != v5) {
            // 0x7f48
            v24 = (int64_t)*(int32_t *)v25;
            v25 += 4;
            if ((int32_t)function_4cf0((int64_t)&g63, v24) != 0) {
                // 0x7f63
                v6 = v24 == 20 ? 0x77d0 : 0x68f0;
                function_47d0(v24, v23, NULL);
            }
        }
    } else {
        while (true) {
            int64_t v26 = v3;
            int64_t v27 = v2;
            if ((int32_t)function_4cf0((int64_t)&g63, v26) == 0) {
                if (v27 == (int64_t)&g4) {
                    // break -> 0x7e2f
                    break;
                }
            } else {
                // 0x7e21
                function_4a90(v26, 0);
                if (v27 == (int64_t)&g4) {
                    // break -> 0x7e2f
                    break;
                }
            }
            // 0x7e0d
            v2 = v27 + 4;
            v3 = (int64_t)*(int32_t *)v27;
        }
    }
    int64_t result = __readfsqword(40) ^ v1; // 0x7e37
    if (result == 0) {
        // 0x7e46
        return result;
    }
    // 0x7f89
    function_48e0();
    if (g34 != 0) {
        // 0x7f9a
        return function_7ff0(&g33, &g34);
    }
    // 0x7fb0
    function_7ff0(&g29, (int64_t *)&g30);
    function_7ff0(&g35, (int64_t *)&g36);
    return function_7ff0(&g31, (int64_t *)&g32);
}

