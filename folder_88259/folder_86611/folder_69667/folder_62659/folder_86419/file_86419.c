// Address range: 0x15193 - 0x15221
int64_t function_15193(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_e140(a2); // 0x151b1
    int64_t v2 = function_e140(a4); // 0x151bc
    int64_t v3 = function_e1a0(v1); // 0x151c7
    if (v3 != function_e1a0(v2) || (int32_t)memcmp(v1, v2, v3) != 0) {
        // 0x151dc
        return 0;
    }
    // 0x15202
    return function_15060((int32_t)a1, a2, a3 & 0xffffffff, a4);
}

