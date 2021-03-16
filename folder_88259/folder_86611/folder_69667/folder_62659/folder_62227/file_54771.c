// Address range: 0x14c13 - 0x14cb0
int64_t function_14c13(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x14c18
    if ((int32_t)a2 == 10) {
        function_4dcd();
    }
    int64_t v2 = 0x100000000 * a2 / 0x100000000; // bp-72, 0x14c34
    int64_t result = function_146c0(a1, a3, -1, &v2); // 0x14c82
    if (v1 != __readfsqword(40)) {
        // 0x14c9c
        return __stack_chk_fail(a1);
    }
    // 0x14c97
    return result;
}

// Address range: 0xd7b3 - 0xd827
int64_t function_d7b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_d4e0(a2, a3, a4, a5); // 0xd7e0
    int64_t result = v1; // 0xd7e8
    if (v1 < 0) {
        // 0xd800
        function_d5f0(a1, a2, v1);
        function_d680(a3, a4, a5);
        result = -1;
    }
    // 0xd7ea
    return result;
}

// Address range: 0x8060 - 0x8088
int64_t function_8060(void) {
    // 0x8060
    function_7ff0(&g29, (int64_t *)&g30);
    return function_7ff0(&g31, (int64_t *)&g32);
}

// Address range: 0xd5f3 - 0xd673
int64_t function_d5f3(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1; // 0xd5f3
    if (a3 == -1) {
        // 0xd660
        v1 = dcgettext(0, "invalid argument %s for %s", 5);
    } else {
        // 0xd60f
        v1 = dcgettext(0, "ambiguous argument %s for %s", 5);
    }
    // 0xd620
    return function_4c60(0, 0, v1, function_14c10(0, 8, a2), function_15020(1, a1));
}

// Address range: 0xd4e3 - 0xd5f0
int64_t function_d4e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = strlen(a1); // 0xd508
    if (a2 == 0) {
        // 0xd5c5
        return -1;
    }
    int64_t v2 = 0;
    int32_t v3 = 0;
    int64_t v4 = -1;
    int64_t v5 = v4; // 0xd588
    int32_t v6 = v3; // 0xd588
    int64_t result; // 0xd4e3
    int32_t v7; // 0xd55f
    if ((int32_t)strncmp(a2, (char *)a1, v1) == 0) {
        // 0xd58a
        result = v2;
        if (strlen(a2) == v1) {
            // 0xd5c5
            return result;
        }
        // 0xd597
        v5 = v4 == -1 ? v2 : v4;
        v6 = v4 == -1 ? v3 : 1;
        if (a3 != 0 && v4 != -1) {
            // 0xd53a
            v7 = (int32_t)memcmp(v4 * a4 + a3, a3, a4) != 0 ? 1 : 0x1000000 * v3 / 0x1000000;
            v5 = v4;
            v6 = v7;
        }
    }
    int32_t v8 = v6;
    int64_t v9 = v5;
    int64_t v10 = v2 + 1; // 0xd568
    int64_t v11 = *(int64_t *)(8 * v10 + a2); // 0xd56f
    int64_t v12 = a3 + a4; // 0xd576
    while (v11 != 0) {
        int64_t v13 = v11;
        int64_t v14 = v12;
        v2 = v10;
        v3 = v8;
        v4 = v9;
        v5 = v4;
        v6 = v3;
        if ((int32_t)strncmp(v13, (char *)a1, v1) == 0) {
            // 0xd58a
            result = v2;
            if (strlen(v13) == v1) {
                // 0xd5c5
                return result;
            }
            // 0xd597
            v5 = v4 == -1 ? v2 : v4;
            v6 = v4 == -1 ? v3 : 1;
            if (a3 != 0 && v4 != -1) {
                // 0xd53a
                v7 = (int32_t)memcmp(v4 * a4 + a3, v14, a4) != 0 ? 1 : 0x1000000 * v3 / 0x1000000;
                v5 = v4;
                v6 = v7;
            }
        }
        // 0xd563
        v8 = v6;
        v9 = v5;
        v10 = v2 + 1;
        v11 = *(int64_t *)(8 * v10 + a2);
        v12 = v14 + a4;
    }
    // 0xd5c5
    return (char)v8 == 0 ? v9 : -2;
}

// Address range: 0x15023 - 0x15037
int64_t function_15023(void) {
    // 0x15023
    int64_t v1; // 0x15023
    int64_t v2; // 0x15023
    return function_146c0(v1, v2, -1, &g12);
}

