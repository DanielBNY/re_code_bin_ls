// Address range: 0x15923 - 0x15960
int64_t function_15923(int64_t a1, int64_t a2) {
    // 0x15923
    if (a2 == 0 == (a1 != 0)) {
        // 0x15950
        function_46d0(a1, 0);
        return 0;
    }
    int64_t result = function_4be0(); // 0x15935
    if (a2 != 0 == result == 0) {
        // 0x15959
        int64_t v1; // 0x15923
        return function_15b30(a1, a2, v1);
    }
    // 0x15944
    return result;
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
        return function_48e0(a1);
    }
    // 0x14d33
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
        return function_48e0(v9);
    }
    // 0x14e03
    return result;
}

// Address range: 0x13470 - 0x13512
int64_t function_13470(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x13470
    __readfsqword(40);
    function_48b0();
    if ((uint32_t)(int32_t)a5 >= 11) {
        function_4dbe();
    }
    int32_t v1 = *(int32_t *)((4 * a5 & 0x3fffffffc) + (int64_t)&g5); // 0x13508
    return (int64_t)v1 + (int64_t)&g5;
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
        return function_48e0(a1);
    }
    // 0x14f8e
    return result;
}

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
        return function_48e0(a1);
    }
    // 0x14eed
    return result;
}

