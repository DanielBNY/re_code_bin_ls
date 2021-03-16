// Address range: 0x6f20 - 0x6f62
int64_t function_6f20(int64_t a1) {
    // 0x6f20
    free(a1);
    free(*(int64_t *)(a1 + 8));
    free(*(int64_t *)(a1 + 16));
    int64_t v1 = *(int64_t *)(a1 + 176); // 0x6f3e
    if (v1 == (int64_t)&g26) {
        // 0x6f60
        return &g26;
    }
    // 0x6f51
    return function_4cd0(v1);
}

