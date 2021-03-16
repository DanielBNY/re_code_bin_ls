// Address range: 0x15060 - 0x15190
int64_t function_15060(uint32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x1507a
    int64_t v2 = function_172e0(a2); // 0x1508d
    int64_t v3 = a1; // 0x15095
    int64_t v4; // bp-344, 0x15060
    int64_t v5 = __fxstatat(1, v3, v2, &v4, 256); // 0x150a9
    int64_t v6 = v3; // 0x150b0
    if ((int32_t)v5 != 0) {
        uint32_t v7 = *(int32_t *)__errno_location(); // 0x15174
        error(1, v7, "%s", v2);
        v6 = v7;
    }
    int64_t v8 = a3 & 0xffffffff; // 0x1506f
    free(v2, v6);
    int64_t v9 = function_172e0(a4); // 0x150c1
    int64_t v10; // bp-200, 0x15060
    int64_t v11 = __fxstatat(1, v8, v9, &v10, 256); // 0x150e2
    int64_t v12 = v8; // 0x150e9
    if ((int32_t)v11 != 0) {
        uint32_t v13 = *(int32_t *)__errno_location(); // 0x15154
        error(1, v13, "%s", v9);
        v12 = v13;
    }
    int64_t result = 0; // 0x150fb
    int64_t v14; // 0x15060
    int64_t v15; // 0x15060
    if (v14 == v15) {
        // 0x150fd
        result = v4 == v10;
    }
    // 0x1510d
    free(v9, v12);
    if (v1 != __readfsqword(40)) {
        // 0x15182
        return __stack_chk_fail(v9);
    }
    // 0x15128
    return result;
}

// Address range: 0x168d3 - 0x16960
int64_t function_168d3(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x168e7
    int64_t v2; // bp-52, 0x168d3
    int64_t v3 = a1 == 0 ? (int64_t)&v2 : a1; // 0x168ff
    int64_t v4 = mbrtowc(v3); // 0x16906
    int64_t result = v4; // 0x16912
    if (a3 != 0 == v4 > 0xfffffffffffffffd) {
        // 0x16940
        result = v4;
        if ((char)function_eb50(0) == 0) {
            // 0x1694b
            int64_t v5; // 0x168d3
            *(int32_t *)v3 = (int32_t)v5 % 256;
            result = 1;
        }
    }
    // 0x16919
    if (v1 != __readfsqword(40)) {
        // 0x1695a
        return __stack_chk_fail();
    }
    // 0x16929
    return result;
}

