// Address range: 0x7780 - 0x77cc
int64_t function_7780(int64_t a1, int64_t a2, int64_t a3) {
    // 0x7780
    if ((char)a3 == 0) {
        // 0x77a2
        return function_76c0((int64_t)&g6, a1 & 0xffffffff, a2 & 0xffffffff);
    }
    int64_t v1 = 0; // 0x77a0
    if (g100 == 0) {
        // 0x77b8
        v1 = function_10bc0();
    }
    // 0x77a2
    return function_76c0(v1, a1 & 0xffffffff, a2 & 0xffffffff);
}

