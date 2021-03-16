// Address range: 0x10c63 - 0x10d6a
int64_t function_10c63(int64_t a1) {
    int32_t * v1 = g23; // 0x10c6b
    int64_t v2; // 0x10c63
    char v3 = v2;
    int64_t v4; // 0x10c63
    int64_t v5; // 0x10c63
    if (v1 != NULL) {
        int64_t v6 = (int64_t)v1;
        int64_t v7 = v6 + 16; // 0x10c89
        int64_t result; // 0x10c63
        if (*(char *)v7 == v3) {
            // 0x10c8f
            result = v6;
            if ((int32_t)function_4a80(v7, a1, v4, v5) == 0) {
                // 0x10c9f
                return result;
            }
        }
        int64_t v8 = *(int64_t *)(v6 + 8); // 0x10c80
        while (v8 != 0) {
            // 0x10c89
            v6 = v8;
            v7 = v6 + 16;
            if (*(char *)v7 == v3) {
                // 0x10c8f
                result = v6;
                if ((int32_t)function_4a80(v7, a1, v4, v5) == 0) {
                    // 0x10c9f
                    return result;
                }
            }
            // 0x10c80
            v8 = *(int64_t *)(v6 + 8);
        }
    }
    int64_t v9 = g22; // 0x10cba
    if (g22 != 0) {
        int64_t v10 = v9 + 16; // 0x10cd1
        if (*(char *)v10 == v3) {
            // 0x10cd7
            if ((int32_t)function_4a80(v10, a1, v4, v5) == 0) {
                // 0x10c9f
                return 0;
            }
        }
        // 0x10cc8
        v9 += 8;
        while (v9 != 0) {
            // 0x10cd1
            v10 = v9 + 16;
            if (*(char *)v10 == v3) {
                // 0x10cd7
                if ((int32_t)function_4a80(v10, a1, v4, v5) == 0) {
                    // 0x10c9f
                    return 0;
                }
            }
            // 0x10cc8
            v9 += 8;
        }
    }
    int64_t v11 = function_4ab0(a1); // 0x10cfb
    int64_t result2 = function_158c0((int64_t **)(function_48c0(a1) + 24 & -8)); // 0x10d13
    function_47a0(result2 + 16, a1);
    if (v11 == 0) {
        int64_t v12 = g22; // 0x10d50
        g22 = result2;
        *(int64_t *)(result2 + 8) = v12;
        return 0;
    }
    int32_t * v13 = (int32_t *)result2; // 0x10d31
    *v13 = *(int32_t *)(v11 + 16);
    int32_t * v14 = g23; // 0x10d33
    g23 = v13;
    *(int64_t *)(result2 + 8) = (int64_t)v14;
    // 0x10c9f
    return result2;
}

// Address range: 0xe143 - 0xe19d
int64_t function_e143(int64_t a1, int64_t a2) {
    // 0xe143
    int64_t v1; // 0xe143
    char v2 = v1;
    int64_t v3 = a1; // 0xe14d
    int64_t v4 = a1; // 0xe14d
    char v5 = v2; // 0xe14d
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0xe150
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0xe150
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0xe15f
    if (v5 == 0) {
      lab_0xe19c:
        // 0xe19c
        return result;
    }
    int64_t v7 = v4; // 0xe189
    int64_t v8 = 0; // 0xe189
    int64_t v9; // 0xe143
    int64_t v10; // 0xe18b
    char v11; // 0xe18b
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0xe186
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0xe18b
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0xe186
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0xe17a
    char v14 = *(char *)v13; // 0xe17a
    while (v14 != 0) {
        int64_t v15 = result2;
        v7 = v13;
        v8 = (char)v12 == 0 ? v12 : 0;
        v9 = v13;
        if (v14 == 47) {
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v15;
            if (v11 == 0) {
                return result;
            }
            // 0xe186
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0xe18b
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0xe186
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0xe170
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0xe19c
    return result2;
}

// Address range: 0x10e13 - 0x10f1a
int64_t function_10e13(int64_t a1) {
    int32_t * v1 = g21; // 0x10e1b
    int64_t v2; // 0x10e13
    char v3 = v2;
    int64_t v4; // 0x10e13
    int64_t v5; // 0x10e13
    if (v1 != NULL) {
        int64_t v6 = (int64_t)v1;
        int64_t v7 = v6 + 16; // 0x10e39
        int64_t result; // 0x10e13
        if (*(char *)v7 == v3) {
            // 0x10e3f
            result = v6;
            if ((int32_t)function_4a80(v7, a1, v4, v5) == 0) {
                // 0x10e4f
                return result;
            }
        }
        int64_t v8 = *(int64_t *)(v6 + 8); // 0x10e30
        while (v8 != 0) {
            // 0x10e39
            v6 = v8;
            v7 = v6 + 16;
            if (*(char *)v7 == v3) {
                // 0x10e3f
                result = v6;
                if ((int32_t)function_4a80(v7, a1, v4, v5) == 0) {
                    // 0x10e4f
                    return result;
                }
            }
            // 0x10e30
            v8 = *(int64_t *)(v6 + 8);
        }
    }
    int64_t v9 = g20; // 0x10e6a
    if (g20 != 0) {
        int64_t v10 = v9 + 16; // 0x10e81
        if (*(char *)v10 == v3) {
            // 0x10e87
            if ((int32_t)function_4a80(v10, a1, v4, v5) == 0) {
                // 0x10e4f
                return 0;
            }
        }
        // 0x10e78
        v9 += 8;
        while (v9 != 0) {
            // 0x10e81
            v10 = v9 + 16;
            if (*(char *)v10 == v3) {
                // 0x10e87
                if ((int32_t)function_4a80(v10, a1, v4, v5) == 0) {
                    // 0x10e4f
                    return 0;
                }
            }
            // 0x10e78
            v9 += 8;
        }
    }
    int64_t v11 = function_4af0(a1); // 0x10eab
    int64_t result2 = function_158c0((int64_t **)(function_48c0(a1) + 24 & -8)); // 0x10ec3
    function_47a0(result2 + 16, a1);
    if (v11 == 0) {
        int64_t v12 = g20; // 0x10f00
        g20 = result2;
        *(int64_t *)(result2 + 8) = v12;
        return 0;
    }
    int32_t * v13 = (int32_t *)result2; // 0x10ee1
    *v13 = *(int32_t *)(v11 + 16);
    int32_t * v14 = g21; // 0x10ee3
    g21 = v13;
    *(int64_t *)(result2 + 8) = (int64_t)v14;
    // 0x10e4f
    return result2;
}

// Address range: 0x14a03 - 0x14ae9
int64_t function_14a03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4 == 0 ? (int64_t)&g24 : a4; // 0x14a28
    int32_t * v2 = (int32_t *)function_4760(); // 0x14a3d
    int64_t v3 = v1 + 8; // 0x14a43
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x14a4b
    int32_t * v5 = (int32_t *)v1; // 0x14a4f
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x14a5d
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x14a60
    int64_t v8 = function_13470(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x14a6f
    int64_t v9 = v8 + 1; // 0x14a78
    int64_t result = function_158c0(v9, v9, a1); // 0x14a87
    function_13470(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x14ad3
        *(int64_t *)a3 = v8;
    }
    // 0x14ad7
    return result;
}

