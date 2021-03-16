// Address range: 0xd3e3 - 0xd4cf
int64_t function_d3e3(int64_t a1, uint64_t a2) {
    int64_t v1 = a2 >= (uint64_t)(int64_t)&g26 ? (int64_t)&g26 : a2 + 1; // 0xd419
    int64_t v2 = v1; // 0xd41d
    int64_t v3 = malloc(v2); // 0xd423
    int64_t result = 0; // 0xd42e
    while (v3 != 0) {
        uint64_t v4 = v2;
        int64_t v5 = v3;
        int64_t v6 = readlink(a1, v5, v4); // 0xd439
        if (v6 < 0) {
            // 0xd498
            if (*(int32_t *)__errno_location() != 34) {
                // 0xd4a2
                free(v5);
                result = 0;
                return result;
            }
        }
        if (v4 > v6) {
            // 0xd4b0
            *(char *)(v6 + v5) = 0;
            result = v5;
            return result;
        }
        // 0xd44b
        free(v5);
        while (v4 <= 0x3fffffffffffffff) {
            int64_t v7 = 2 * v4; // 0xd458
            int64_t v8 = malloc(v7); // 0xd45e
            result = v8;
            if (v8 == 0) {
                return result;
            }
            v4 = v7;
            v5 = v8;
            v6 = readlink(a1, v5, v4);
            if (v6 < 0) {
                // 0xd498
                if (*(int32_t *)__errno_location() != 34) {
                    // 0xd4a2
                    free(v5);
                    result = 0;
                    return result;
                }
            }
            if (v4 > v6) {
                // 0xd4b0
                *(char *)(v6 + v5) = 0;
                result = v5;
                return result;
            }
            // 0xd44b
            free(v5);
        }
        // 0xd480
        v2 = 0x7fffffffffffffff;
        if (v4 > 0x7ffffffffffffffe) {
            // 0xd4c0
            *(int32_t *)__errno_location() = 12;
            result = 0;
            return result;
        }
        v3 = malloc(v2);
        result = 0;
    }
  lab_0xd46b:
    // 0xd46b
    return result;
}

// Address range: 0x15ca3 - 0x15cd0
int64_t function_15ca3(int64_t a1, int64_t a2) {
    int64_t result = getcwd(0, 0); // 0x15caa
    if (result != 0 || *(int32_t *)__errno_location() != 12) {
        // 0x15cb7
        return result;
    }
    // 0x15cca
    return function_15b30();
}

// Address range: 0xfba3 - 0xfc00
int64_t function_fba3(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0xfbac
    int64_t v2 = function_f900(); // 0xfbbf
    if (v1 != __readfsqword(40)) {
        // 0xfbf4
        return __stack_chk_fail();
    }
    int32_t v3 = v2; // 0xfbc4
    int64_t v4; // 0xfba3
    return v3 == -1 ? 0 : v3 == 0 ? v4 : a2;
}

// Address range: 0xf263 - 0xf2b3
int64_t function_f263(int64_t a1, int64_t result) {
    int64_t v1 = function_ebd0(a1, result); // 0xf26e
    int64_t v2 = *(int64_t *)v1; // 0xf273
    if (v2 == 0) {
        // 0xf29d
        return 0;
    }
    // 0xf283
    if (v2 == result) {
        // 0xf29d
        return result;
    }
    int64_t v3 = v1; // 0xf294
    int64_t result2 = v2; // 0xf292
    while ((char)v1 == 0) {
        // 0xf294
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0xf29d
            break;
        }
        // 0xf280
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0xf29d
            break;
        }
        result2 = v2;
    }
    // 0xf29d
    return result2;
}

// Address range: 0xe293 - 0xe320
int64_t function_e293(int64_t a1, int64_t a2, int64_t a3) {
    if (a1 == 0) {
        // 0xe300
        int64_t result; // 0xe293
        return result;
    }
    int64_t result2 = function_158c0((int64_t **)24); // 0xe2b1
    *(int64_t *)result2 = function_15ae0(a2);
    *(int64_t *)(result2 + 8) = *(int64_t *)(a3 + 8);
    *(int64_t *)(result2 + 16) = a3;
    int64_t v1 = function_fba0(a1, result2); // 0xe2da
    if (v1 == 0) {
        // 0xe311
        return function_15b30();
    }
    // 0xe2e4
    if (result2 == v1) {
        // 0xe300
        return result2;
    }
    // 0xe2e9
    return function_fec0(result2);
}

// Address range: 0xe323 - 0xe380
int64_t function_e323(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0xe328
    int64_t result = 0; // 0xe33b
    if (a1 != 0) {
        int64_t v2 = function_f260(); // 0xe355
        result = v2 & -256 | (int64_t)(v2 != 0);
    }
    // 0xe360
    if (v1 != __readfsqword(40)) {
        // 0xe375
        return __stack_chk_fail();
    }
    // 0xe370
    return result;
}

