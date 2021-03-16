// Address range: 0xf773 - 0xf900
int64_t function_f773(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 40); // 0xf784
    int64_t v2 = __readfsqword(40); // 0xf788
    __asm_movss(*(int32_t *)(v1 + 8));
    int64_t v3; // 0xf773
    int64_t v4; // 0xf773
    int64_t v5 = function_ed80(a2, (int64_t)*(char *)(v1 + 16), a3, v4, v3); // 0xf7a5
    int64_t result = 0; // 0xf7ad
    if (v5 != 0) {
        int64_t * v6 = (int64_t *)(a1 + 16); // 0xf7b6
        result = 1;
        if (*v6 != v5) {
            int64_t v7 = function_4a60(v5, 16); // 0xf7c8
            int64_t v8 = v7; // bp-136, 0xf7cd
            result = 0;
            if (v7 != 0) {
                int64_t v9 = &v8; // 0xf7f2
                int64_t * v10 = (int64_t *)(a1 + 72); // 0xf81f
                int64_t v11 = *v10; // 0xf81f
                int64_t v12 = function_eeb0(&v8, a1, 0); // 0xf831
                int64_t v13 = v12 & 0xffffffff; // 0xf836
                if ((char)v12 != 0) {
                    // 0xf8b8
                    function_46d0(v9);
                    *(int64_t *)a1 = v8;
                    *(int64_t *)(a1 + 8) = v7 + 16 * v5;
                    *v6 = v5;
                    *(int64_t *)(a1 + 24) = 0;
                    *v10 = v11;
                    result = v13;
                } else {
                    // 0xf83d
                    *v10 = v11;
                    int64_t * v14 = (int64_t *)a1; // 0xf851
                    if ((char)function_eeb0(v14, v9, 1) == 0) {
                        function_4db4();
                    }
                    // 0xf85e
                    if ((char)function_eeb0(v14, v9, 0) == 0) {
                        function_4db4();
                    }
                    // 0xf873
                    function_46d0(v8);
                    result = v13;
                }
            }
        }
    }
    // 0xf87c
    if (v2 != __readfsqword(40)) {
        // 0xf8ef
        return function_48e0();
    }
    // 0xf88c
    return result;
}

// Address range: 0x11403 - 0x114a7
int64_t function_11403(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0;
    uint64_t v2 = a2 + 1; // 0x11430
    int64_t v3 = function_4be0(v1, v2); // 0x1143d
    while (v3 != 0) {
        // 0x1144a
        *(int64_t *)a2 = a2;
        int64_t v4 = function_11020(a1, v3, v2, a2, a3 & 0xffffffff, (int32_t)a4); // 0x11465
        int64_t result; // 0x11403
        if (v4 == -1) {
            // 0x11490
            function_46d0(v3);
            result = 0;
            return result;
        }
        // 0x11470
        result = v3;
        if (v2 > v4) {
            // 0x11475
            return result;
        }
        v1 = v3;
        v2 = v4 + 1;
        v3 = function_4be0(v1, v2);
    }
    // 0x1149d
    function_46d0(v1);
    // 0x11475
    return 0;
}

