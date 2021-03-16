// Address range: 0x17233 - 0x17263
int64_t function_17233(int64_t a1) {
    int32_t v1 = a1; // 0x17234
    if (v1 == 38) {
        // 0x17262
        return 0;
    }
    if (v1 > 38) {
        // 0x17250
        int64_t v2; // 0x17233
        return v2 & -256 | (int64_t)(v1 != 95);
    }
    if (v1 == 16) {
        // 0x17262
        return 0;
    }
    // 0x17242
    return v1 != 22;
}

// Address range: 0xe1d3 - 0xe28e
int64_t function_e1d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 24); // 0xe1d4
    if ((*v1 & 0xf000) == 0xa000) {
        // 0xe1e3
        return 0;
    }
    int64_t v2 = getxattr(a1, "system.posix_acl_access", 0, 0); // 0xe207
    if (v2 < 0) {
        int32_t v3 = *(int32_t *)__errno_location(); // 0xe225
        if (v3 != 61) {
            // 0xe22c
            return -((function_17230(v3) % 256)) & 0xffffffff;
        }
    } else {
        // 0xe211
        if (v2 != 0) {
            // 0xe1e3
            return 1;
        }
    }
    // 0xe240
    if ((*v1 & 0xf000) != 0x4000) {
        // 0xe1e3
        return 0;
    }
    uint64_t v4 = getxattr(a1, "system.posix_acl_default", 0, 0); // 0xe26e
    if (v4 >= 0) {
        // 0xe278
        return v4 != 0;
    }
    int32_t v5 = *(int32_t *)__errno_location(); // 0xe285
    if (v5 != 61) {
        // 0xe22c
        return -((function_17230(v5) % 256)) & 0xffffffff;
    }
    // 0xe1e3
    return 0;
}

