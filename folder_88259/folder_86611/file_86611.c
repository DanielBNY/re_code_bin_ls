// Address range: 0x156c3 - 0x15750
int64_t function_156c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __readfsqword(40); // 0x156ce
    int64_t v2; // bp-104, 0x156c3
    int64_t v3 = &v2; // 0x156de
    int64_t v4 = v3; // 0x156de
    int64_t * v5 = (int64_t *)(a5 + 8);
    int32_t v6 = v3; // 0x156e1
    int64_t v7 = 0; // 0x156e1
    while (true) {
        int64_t v8 = v7;
        uint32_t v9 = v6; // 0x1570b
        if (v9 < 48) {
            // 0x156e8
            *(int32_t *)a5 = v9 + 8;
            int64_t v10 = *(int64_t *)(*(int64_t *)(a5 + 16) + (int64_t)v9); // 0x156f5
            *(int64_t *)(v4 + 8 * v8) = v10;
            if (v8 == 9 || v10 == 0) {
                // break -> 0x15730
                break;
            }
        } else {
            int64_t v11 = *v5; // 0x15713
            *v5 = v11 + 8;
            int64_t v12 = *(int64_t *)v11; // 0x1571f
            *(int64_t *)(v4 + 8 * v8) = v12;
            if (v8 == 9 || v12 == 0) {
                // break -> 0x15730
                break;
            }
        }
        // 0x15701
        v6 = *(int32_t *)&v4;
        v7 = v8 + 1;
    }
    // 0x15730
    function_15250();
    int64_t result = __readfsqword(40) ^ v1; // 0x1573a
    if (result != 0) {
        // 0x1574a
        return __stack_chk_fail(a1);
    }
    // 0x15745
    return result;
}

// Address range: 0x15b73 - 0x15c70
int64_t function_15b73(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    int64_t v1 = __readfsqword(40); // 0x15b92
    int32_t v2 = function_16340(); // 0x15bae
    int32_t * v3; // 0x15b73
    uint64_t result; // 0x15b73
    if (v2 != 0) {
        int64_t v4 = __errno_location(); // 0x15c42
        if (v2 == 1) {
            int32_t * v5 = (int32_t *)v4;
            *v5 = 75;
            v3 = v5;
        } else {
            int32_t * v6 = (int32_t *)v4;
            v3 = v6;
            if (v2 == 3) {
                // 0x15c54
                *v6 = 0;
                v3 = v6;
            }
        }
        goto lab_0x15bdf;
    } else {
        if (result < a3 || result > a4) {
            int32_t * v7 = (int32_t *)__errno_location();
            *v7 = result < 0x40000000 ? 34 : 75;
            v3 = v7;
            goto lab_0x15bdf;
        } else {
            goto lab_0x15c1a;
        }
    }
  lab_0x15bdf:;
    int64_t v8 = function_146c0(a1); // 0x15be2
    int32_t v9 = *v3; // 0x15be7
    int32_t v10 = v9 == 22 ? 0 : v9; // 0x15c00
    error((int64_t)(a7 == 0 ? 1 : a7), v10, "%s: %s", a6, v8, a6);
    goto lab_0x15c1a;
  lab_0x15c1a:
    // 0x15c1a
    if (v1 != __readfsqword(40)) {
        // 0x15c6b
        return __stack_chk_fail();
    }
    // 0x15c2a
    return result;
}

// Address range: 0x15253 - 0x15691
int64_t function_15253(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    int64_t v1; // 0x15253
    if (a2 == 0) {
        // 0x15300
        __fprintf_chk(a1, 1, "%s %s\n", a3, a4, a6);
        v1 = a6;
    } else {
        // 0x15274
        __fprintf_chk(a1, 1, "%s (%s) %s\n", a2, a3, a4);
        v1 = a4;
    }
    int64_t v2 = dcgettext(0, (int64_t *)"(C)", 5); // 0x1529e
    __fprintf_chk(a1, 1, "Copyright %s %d Free Software Foundation, Inc.", v2, (int64_t)&g29, v1);
    fputs_unlocked(dcgettext(0, (int64_t *)"\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), a1);
    if (a6 < 10) {
        int32_t v3 = *(int32_t *)(4 * a6 + (int64_t)&g9); // 0x152f1
        return (int64_t)v3 + (int64_t)&g9;
    }
    int64_t v4 = *(int64_t *)(a5 + 16); // 0x1566d
    int64_t v5 = *(int64_t *)(a5 + 8); // 0x15671
    int64_t v6 = dcgettext(0, (int64_t *)"Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x15402
    return __fprintf_chk(a1, 1, (char *)v6, *(int64_t *)(a5 + 40), v5, v4);
}

// Address range: 0x14983 - 0x149f8
int64_t function_14983(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g24 : a5; // 0x149a8
    int32_t * v2 = (int32_t *)__errno_location(); // 0x149c0
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x149ca
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x149ce
    uint32_t v5 = *(int32_t *)v1; // 0x149d1
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x149d7
    int64_t result = function_13470(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x149e0
    return result;
}

