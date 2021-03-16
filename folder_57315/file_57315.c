// Address range: 0x17463 - 0x174d3
int64_t function_17463(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17463
    if (*(int64_t *)(a1 + 16) != *(int64_t *)(a1 + 8) || *(int64_t *)(a1 + 40) != *(int64_t *)(a1 + 32) || *(int64_t *)(a1 + 72) != 0) {
        // 0x17476
        return function_4c70(a1);
    }
    int64_t v1 = function_4990(function_4b20(a1) & 0xffffffff, (int32_t)a2, a3 & 0xffffffff); // 0x174b0
    int64_t result = 0xffffffff; // 0x174b9
    if (v1 != -1) {
        // 0x174bb
        *(int32_t *)a1 = (int32_t)a1 & -17;
        *(int64_t *)(a1 + 144) = v1;
        result = 0;
    }
    // 0x174c8
    return result;
}

// Address range: 0xdfe3 - 0xe08a
int64_t function_dfe3(void) {
    // 0xdfe3
    int64_t v1; // 0xdfe3
    int64_t v2; // 0xdffb
    if ((int32_t)function_17270((int64_t)g16) == 0) {
        goto lab_0xe011;
    } else {
        // 0xdffb
        v2 = function_4760();
        if (g18 == 0) {
            goto lab_0xe029;
        } else {
            // 0xe00c
            v1 = v2;
            if (*(int32_t *)v2 != 32) {
                goto lab_0xe029;
            } else {
                goto lab_0xe011;
            }
        }
    }
  lab_0xe011:;
    int64_t result = function_17270(g17); // 0xe018
    int64_t v3 = v1; // 0xe01f
    if ((int32_t)result == 0) {
        // 0xe021
        return result;
    }
    goto lab_0xe068;
  lab_0xe068:;
    int64_t v4 = function_4790(g14); // 0xe06e
    int64_t v5 = v3; // 0xe06e
    int64_t v6; // 0xdfe3
    int64_t v7 = v6; // 0xe06e
    goto lab_0xe073;
  lab_0xe029:;
    int64_t v8 = function_48a0(0, "write error", 5); // 0xe037
    v4 = v8;
    v5 = v2;
    if (g19 == 0) {
        goto lab_0xe073;
    } else {
        int64_t v9 = function_14e30((int64_t)g19); // 0xe04b
        function_4c60(0, *(int32_t *)v2, (int64_t)"%s: %s", v9, v8);
        v3 = v2;
        v6 = v8;
        goto lab_0xe068;
    }
  lab_0xe073:
    // 0xe073
    function_4c60(0, *(int32_t *)v5, (int64_t)"%s", v4, v7);
    v3 = v5;
    v6 = v7;
    goto lab_0xe068;
}

// Address range: 0x17413 - 0x17458
int64_t function_17413(int64_t a1, int64_t a2) {
    if (a1 == 0 || (int32_t)function_4bc0(a1) == 0) {
        // 0x1742f
        return function_4b70(a1);
    }
    if ((a1 & 256) == 0) {
        // 0x1742f
        return function_4b70(a1);
    }
    // 0x17440
    function_17460(a1, 0, 1);
    return function_4b70(a1);
}

// Address range: 0x17273 - 0x172d5
int64_t function_17273(int64_t a1) {
    int64_t v1 = function_47b0(); // 0x1727b
    int64_t result = function_17380(a1); // 0x1728c
    int64_t v2; // 0x17273
    if ((v2 & 32) != 0) {
        // 0x172b8
        if ((int32_t)result == 0) {
            // 0x172bc
            *(int32_t *)function_4760() = 0;
        }
        // 0x172ae
        return 0xffffffff;
    }
    // 0x17295
    if ((int32_t)result == 0) {
        // 0x172ae
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x1729c
    if (v1 == 0) {
        // 0x1729e
        result2 = *(int32_t *)function_4760() != 9 ? 0xffffffff : 0;
    }
    // 0x172ae
    return result2;
}

// Address range: 0x17383 - 0x1740a
int64_t function_17383(int64_t a1, int64_t a2) {
    // 0x17383
    if ((int32_t)function_4b20(a1) < 0) {
        // 0x173ef
        return function_4860(a1);
    }
    // 0x17397
    if ((int32_t)function_4bc0(a1) != 0) {
        // 0x173d0
        if (function_4990(function_4b20(a1) & 0xffffffff, 0, 1) == -1) {
            // 0x173ef
            return function_4860(a1);
        }
    }
    // 0x173a0
    if ((int32_t)function_17410(a1) == 0) {
        // 0x173ef
        return function_4860(a1);
    }
    int32_t * v1 = (int32_t *)function_4760(); // 0x173b4
    int32_t v2 = *v1; // 0x173b4
    int64_t result = function_4860(a1); // 0x173c2
    if (v2 != 0) {
        // 0x17400
        *v1 = v2;
        result = 0xffffffff;
    }
    // 0x173c4
    return result;
}

