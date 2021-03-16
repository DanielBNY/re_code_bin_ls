// Address range: 0x10bc3 - 0x10c55
int64_t function_10bc3(int64_t a1) {
    int32_t * v1 = g23; // 0x10bca
    int64_t v2; // 0x10bc3
    if (v1 != NULL) {
        int64_t v3 = (int64_t)v1;
        while (*(int32_t *)v3 != (int32_t)a1) {
            int64_t v4 = *(int64_t *)(v3 + 8); // 0x10be0
            if (v4 == 0) {
                goto lab_0x10c00;
            }
            v3 = v4;
        }
        // 0x10bed
        v2 = v3 + 16;
        return *(char *)v2 == 0 ? 0 : v2;
    }
  lab_0x10c00:;
    int64_t v5 = getpwuid(a1 & 0xffffffff); // 0x10c09
    int64_t ** v6 = (int64_t **)24; // 0x10c16
    int64_t v7 = (int64_t)&g2; // 0x10c16
    if (v5 != 0) {
        // 0x10c18
        v7 = *(int64_t *)v5;
        v6 = (int64_t **)(strlen(v7) + 24 & -8);
    }
    int64_t v8 = function_158c0(v6); // 0x10c2b
    int32_t * v9 = (int32_t *)v8; // 0x10c33
    *v9 = (int32_t)a1;
    int64_t v10 = v8 + 16;
    strcpy(v10, v7);
    int32_t * v11 = g23; // 0x10c41
    g23 = v9;
    *(int64_t *)(v8 + 8) = (int64_t)v11;
    // 0x10bed
    v2 = v10;
    return *(char *)v2 == 0 ? 0 : v2;
}

