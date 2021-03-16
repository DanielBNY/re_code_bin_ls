// Address range: 0xed00 - 0xed7e
int64_t function_ed00(uint64_t a1) {
    if (a1 == (int64_t)&g6) {
        // 0xed7d
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0xed0f
    __asm_comiss(v1, g7);
    if (a1 <= (int64_t)&g6) {
        // 0xed6e
        *(int64_t *)a1 = (int64_t)&g6;
        return 0;
    }
    // 0xed1d
    __asm_comiss(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), g8);
    int128_t v2 = __asm_movss((int32_t)a1); // 0xed38
    __asm_comiss(v2, g9);
    int128_t v3 = __asm_addss(v2, (int32_t)g7); // 0xed45
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0xed4d
    __asm_comiss(v4, v3);
    __asm_comiss(__asm_movss(0x3f800000), v4);
    __asm_comiss(v1, v3);
    // 0xed7d
    return 1;
}

// Address range: 0xebd0 - 0xebf1
int64_t function_ebd0(int64_t a1, int64_t a2) {
    // 0xebd0
    int64_t v1; // 0xebd0
    uint64_t v2; // 0xebd0
    if (*(int64_t *)(a1 + 16) <= v2) {
        v1 = function_4daa();
    }
    // 0xebe8
    return 16 * v1 + a2;
}

// Address range: 0xe1a3 - 0xe1c5
int64_t function_e1a3(int64_t a1) {
    int64_t result = function_48c0(a1); // 0xe1a8
    if (result < 2) {
        // 0xe1be
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0xe1bc
    while (*(char *)(v1 + a1) == 47) {
        // 0xe1c0
        result2 = 1;
        if (v1 < 2) {
            // break -> 0xe1be
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0xe1be
    return result2;
}

// Address range: 0xf4c3 - 0xf5cd
int64_t function_f4c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = function_46e0(80); // 0xf502
    if (result == 0) {
        // 0xf5a4
        return 0;
    }
    int64_t v1 = result + 40; // 0xf51d
    int64_t v2 = a2 == 0 ? (int64_t)&g6 : a2; // 0xf522
    *(int64_t *)v1 = v2;
    if ((char)function_ed00(v1) == 0) {
        // 0xf5c0
        function_46d0(result);
        // 0xf5a4
        return 0;
    }
    // 0xf538
    __asm_movss(*(int32_t *)(v2 + 8));
    int64_t v3 = function_ed80(a1, (int64_t)*(char *)(v2 + 16), a3, a4, a5); // 0xf546
    *(int64_t *)(result + 16) = v3;
    if (v3 == 0) {
        // 0xf5c0
        function_46d0(result);
        // 0xf5a4
        return 0;
    }
    int64_t v4 = function_4a60(v3, 16); // 0xf560
    *(int64_t *)result = v4;
    if (v4 == 0) {
        // 0xf5c0
        function_46d0(result);
        // 0xf5a4
        return 0;
    }
    // 0xf56e
    *(int64_t *)(result + 48) = a3 == 0 ? 0xeba0 : a3;
    *(int64_t *)(result + 56) = a4 == 0 ? 0xebc0 : a4;
    *(int64_t *)(result + 8) = v4 + 16 * v3;
    *(int64_t *)(result + 24) = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 64) = a5;
    *(int64_t *)(result + 72) = 0;
    // 0xf5a4
    return result;
}

// Address range: 0xec00 - 0xed00
int64_t function_ec00(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_ebd0(a1, a2); // 0xec14
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0xec1c
    int64_t result2 = *v2; // 0xec1c
    if (result2 == 0) {
        // 0xeca3
        return 0;
    }
    // 0xec24
    int64_t result3; // 0xec00
    int64_t result; // 0xec00
    int64_t * v3; // 0xec00
    int64_t v4; // 0xec98
    int64_t * v5; // 0xec00
    if ((char)v1 == 0 == (result2 != a2)) {
        v3 = (int64_t *)(v1 + 8);
        v4 = *v3;
        result = 0;
        while (v4 != 0) {
            // 0xec80
            v5 = (int64_t *)v4;
            int64_t v6 = *v5; // 0xec80
            result3 = a2;
            if (v6 == a2) {
                goto lab_0xecb0_2;
            }
            // 0xec88
            result3 = v6;
            if ((char)v4 != 0) {
                goto lab_0xecb0_2;
            }
            v3 = (int64_t *)(v4 + 8);
            v4 = *v3;
            result = 0;
        }
        // 0xeca3
        return result;
    }
    // 0xec3f
    if ((char)a4 == 0) {
        // 0xeca3
        return result2;
    }
    int64_t v7 = *(int64_t *)(v1 + 8); // 0xec44
    if (v7 != 0) {
        // 0xec51
        __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v7));
        *(int64_t *)v7 = 0;
        int64_t * v8 = (int64_t *)(a1 + 72); // 0xec5f
        *(int64_t *)(v7 + 8) = *v8;
        *v8 = v7;
        return result2;
    }
    // 0xece8
    *v2 = 0;
    // 0xeca3
    return result2;
  lab_0xecb0_2:
    // 0xecb0
    result = result3;
    if ((char)a4 != 0) {
        int64_t * v9 = (int64_t *)(v4 + 8); // 0xecbc
        *v3 = *v9;
        *v5 = 0;
        int64_t * v10 = (int64_t *)(a1 + 72); // 0xeccb
        *v9 = *v10;
        *v10 = v4;
        return result3;
    }
    return result;
}

