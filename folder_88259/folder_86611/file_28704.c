// Address range: 0x148a3 - 0x148b5
int64_t function_148a3(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g24 : a1); // 0x148b2
    return result;
}

// Address range: 0x7020 - 0x7180
int64_t function_7020(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x703f
    char v2; // bp-34, 0x7020
    int64_t v3 = &v2; // 0x704f
    int64_t v4 = function_14980((int64_t *)&v2, 2, a1, -1, (int64_t)g78); // 0x7054
    int64_t v5 = v3; // 0x7061
    int64_t result = 1; // 0x7061
    if (v2 == (char)v3) {
        int64_t v6 = strlen(a1); // 0x7086
        v5 = a1;
        result = v6 & -256 | (int64_t)(v6 != v4);
    }
    // 0x7068
    if (v1 == __readfsqword(40)) {
        // 0x7078
        return result;
    }
    // 0x7093
    __stack_chk_fail();
    uint64_t v7 = strlen(v5) + 1; // 0x70b3
    uint128_t v8 = 3 * (int128_t)v7; // 0x70bc
    if ((int64_t)v8 < 0) {
        // 0x7172
        return function_15b30();
    }
    if (v8 % 0x30000000000000001 != 0) {
        // 0x7172
        return function_15b30();
    }
    int64_t result2 = function_158c0(3 * v7); // 0x70db
    char v9 = *(char *)v5; // 0x70e3
    char v10 = v9; // 0x70eb
    int64_t v11 = v5; // 0x70eb
    int64_t v12 = result2; // 0x70eb
    if (v9 == 0) {
        // 0x7151
        *(char *)result2 = 0;
        return result2;
    }
    int64_t v13; // 0x7020
    int64_t v14; // 0x7020
    while (true) {
      lab_0x710e_2:
        // 0x710e
        v13 = v12;
        unsigned char v15 = v10;
        v11++;
        if (v15 != 47) {
            int64_t v16 = v15;
            if (*(char *)(v16 + (int64_t)&g51) != 0) {
                // 0x7100
                *(char *)v13 = v15;
                goto lab_0x7107;
            } else {
                int64_t v17 = v13 + 3; // 0x7133
                function_4d90(v13, 1, -1, "%%%02x", v16);
                char v18 = *(char *)v11; // 0x714a
                v10 = v18;
                v12 = v17;
                v14 = v17;
                if (v18 == 0) {
                    // break -> 0x7151
                    break;
                }
                goto lab_0x710e_2;
            }
        } else {
            // 0x7168
            *(char *)v13 = 47;
            goto lab_0x7107;
        }
    }
  lab_0x7151:
    // 0x7151
    *(char *)v14 = 0;
    return result2;
  lab_0x7107:;
    int64_t v19 = v13 + 1;
    char v20 = *(char *)v11; // 0x7107
    v10 = v20;
    v12 = v19;
    v14 = v19;
    if (v20 == 0) {
        // break -> 0x7151
        goto lab_0x7151;
    }
    goto lab_0x710e_2;
    // 0x710e
    goto lab_0x710e_2;
}

