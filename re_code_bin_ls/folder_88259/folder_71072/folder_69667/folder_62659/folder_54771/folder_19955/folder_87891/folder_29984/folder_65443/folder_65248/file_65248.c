// Address range: 0xfee0 - 0xff97
int64_t function_fee0(int32_t a1, float80_t a2) {
    int64_t v1; // 0xfee0
    if (a2 > 9223372036854775808.0L || a2 == 9223372036854775808.0L) {
        // 0xff60
        v1 = (int64_t)(a2 - 9223372036854775808.0L) ^ -0x8000000000000000;
    } else {
        // 0xfeee
        v1 = a2;
    }
    float80_t v2 = v1 >= 0 ? a2 : a2 + 18446744073709551616.0L;
    return v1 + (int64_t)(a1 == 0 == (v2 != v2 || 0.0L != 0.0L));
}

