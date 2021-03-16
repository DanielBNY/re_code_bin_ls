// Address range: 0x148c3 - 0x148d5
int64_t function_148c3(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g24 : a1; // 0x148ce
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g24;
}

// Address range: 0x15753 - 0x15830
int64_t function_15753(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15753
    int64_t v1; // bp-152, 0x15753
    int64_t v2 = &v1; // 0x15772
    int64_t v3 = __readfsqword(40); // 0x15782
    int64_t v4 = 32; // 0x157b7
    int64_t v5; // 0x15753
    int64_t v6 = &v5; // 0x157b7
    for (int64_t i = 0; i < 10; i++) {
        int64_t v7 = v6;
        int64_t v8 = v4;
        if ((int32_t)v8 < 48) {
            // 0x157c0
            int64_t v9; // bp-56, 0x15753
            int64_t v10 = *(int64_t *)((v8 & 0xffffffff) + (int64_t)&v9); // 0x157ca
            *(int64_t *)(8 * i + v2) = v10;
            v4 = v8 + 8 & 0xffffffff;
            v6 = v7;
            if (v10 == 0) {
                // break -> 0x15800
                break;
            }
        } else {
            int64_t v11 = *(int64_t *)v7; // 0x157ed
            *(int64_t *)(8 * i + v2) = v11;
            v4 = v8;
            v6 = v7 + 8;
            if (v11 == 0) {
                // break -> 0x15800
                break;
            }
        }
    }
    // 0x15800
    function_15250();
    int64_t result = __readfsqword(40) ^ v3; // 0x1580a
    if (result != 0) {
        // 0x1581e
        return __stack_chk_fail(a1);
    }
    // 0x15815
    return result;
}

