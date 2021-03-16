// Address range: 0x6c30 - 0x6e80
int64_t function_6c30(int64_t a1, int64_t a2) {
    // 0x6c30
    __readfsqword(40);
    int64_t v1; // bp-1624, 0x6c30
    for (int64_t i = 0; i < 9; i += 8) {
        int64_t v2 = *(int64_t *)(i + (int64_t)&g27); // 0x6c67
        char v3 = *(char *)v2; // 0x6c6b
        int64_t v4 = v2; // 0x6c70
        char v5 = v3; // 0x6c70
        int64_t v6 = 0; // 0x6c70
        if (v3 != 0) {
            int64_t v7 = v4;
            int64_t v8 = v7 + 1;
            char v9 = *(char *)v8; // 0x6c78
            int64_t v10 = v8; // 0x6c7f
            char v11 = v9; // 0x6c7f
            int64_t v12; // 0x6d50
            if (v5 == 37) {
                if (v9 == 37) {
                    // 0x6d50
                    v12 = v7 + 2;
                    v10 = v12;
                    v11 = *(char *)v12;
                } else {
                    // 0x6c99
                    v10 = v8;
                    v11 = v9;
                    if (v9 == 98) {
                        // break -> 0x6c9e
                        break;
                    }
                }
            }
            // 0x6c83
            v5 = v11;
            v6 = 0;
            while (v11 != 0) {
                // 0x6c78
                v7 = v10;
                v8 = v7 + 1;
                v9 = *(char *)v8;
                v10 = v8;
                v11 = v9;
                if (v5 == 37) {
                    if (v9 == 37) {
                        // 0x6d50
                        v12 = v7 + 2;
                        v10 = v12;
                        v11 = *(char *)v12;
                    } else {
                        // 0x6c99
                        v10 = v8;
                        v11 = v9;
                        v6 = v7;
                        if (v9 == 98) {
                            // break -> 0x6c9e
                            break;
                        }
                    }
                }
                // 0x6c83
                v5 = v11;
                v6 = 0;
            }
        }
        // 0x6c9e
        *(int64_t *)(i + (int64_t)&v1) = v6;
    }
    // 0x6cac
    int64_t v13; // bp-1672, 0x6c30
    int64_t v14 = &v13; // 0x6c3c
    int64_t v15; // 0x6c30
    int64_t v16; // 0x6c30
    int64_t * v17; // 0x6dab
    if (v16 != 0 || v1 != 0) {
        // 0x6cbe
        int64_t v18; // bp-72, 0x6c30
        v13 = &v18;
        int64_t v19 = 12; // 0x6cd5
        while (true) {
            int64_t v20 = v19;
            int64_t v21 = &g19; // 0x6ce5
            int64_t v22; // bp-1608, 0x6c30
            int64_t v23 = &v22; // 0x6ce5
            int64_t v24 = v20; // bp-1632, 0x6cea
            int64_t v25 = function_4b80(v21 & 0xffffffff); // 0x6cef
            if (function_4910(v25, 37) != 0) {
                // break (via goto) -> 0x6d64
                goto lab_0x6d64_2;
            }
            // 0x6d09
            if (function_11020(v25, v23, 128, &v24, 0, 0) >= 128) {
                // break (via goto) -> 0x6d64
                goto lab_0x6d64_2;
            }
            uint64_t v26 = 0;
            uint64_t v27 = v24; // 0x6d28
            int64_t v28 = v26 < v27 ? v27 : v26; // 0x6d30
            v23 += 128;
            int64_t v29 = v28; // 0x6d3f
            v21 = v21 + 1 & 0xffffffff;
            while (v23 != v13) {
                // 0x6ce8
                v24 = v20;
                v25 = function_4b80(v21 & 0xffffffff);
                if (function_4910(v25, 37) != 0) {
                    // break (via goto) -> 0x6d64
                    goto lab_0x6d64_2;
                }
                // 0x6d09
                if (function_11020(v25, v23, 128, &v24, 0, 0) >= 128) {
                    // break (via goto) -> 0x6d64
                    goto lab_0x6d64_2;
                }
                // 0x6d28
                v26 = v29;
                v27 = v24;
                v28 = v26 < v27 ? v27 : v26;
                v23 += 128;
                v29 = v28;
                v21 = v21 + 1 & 0xffffffff;
            }
            // 0x6d41
            v19 = v28;
            if (v20 <= v28) {
                // 0x6dab
                v17 = (int64_t *)(v14 + 16);
                v15 = *v17;
                goto lab_0x6dab_2;
            }
        }
    }
    goto lab_0x6d64_2;
  lab_0x6d64_2:;
    int64_t result = __readfsqword(40) ^ *(int64_t *)(v14 + (int64_t)&g133); // 0x6d6c
    if (result != 0) {
        // 0x6e7a
        return function_48e0();
    }
    // 0x6d7b
    return result;
  lab_0x6dab_2:;
    int64_t v30 = 8 * v15; // 0x6dbc
    int64_t v31 = *(int64_t *)(v30 + (int64_t)&g27); // 0x6dbc
    int64_t v32 = *(int64_t *)(*(int64_t *)(v14 + 24) + v30); // 0x6dcc
    int64_t v33 = v32 - v31; // 0x6dd7
    int64_t v34 = v32 + 2;
    int64_t v35 = v33 & 0xffffffff;
    int64_t v36 = v15 * (int64_t)&g131 + (int64_t)&g50; // 0x6dda
    int64_t v37 = *(int64_t *)(v14 + 8); // 0x6dda
    goto lab_0x6e39;
  lab_0x6e39:;
    int64_t v38 = v37;
    int64_t v39 = v36;
    int64_t v40; // 0x6c30
    if (v32 != 0) {
        if (v33 > 128) {
            goto lab_0x6d64_2;
        } else {
            // 0x6ded
            *(int64_t *)(v14 - 16) = v34;
            *(int64_t *)(v14 - 24) = v38;
            *(int64_t *)(v14 - 32) = v31;
            v40 = function_4730(v39, 128, 1, -1, "%.*s%s%s", v35);
            goto lab_0x6e22;
        }
    } else {
        // 0x6e3e
        v40 = function_4940(v39, 128, "%s", v31);
        goto lab_0x6e22;
    }
  lab_0x6e22:
    // 0x6e22
    if ((int32_t)v40 < 128) {
        int64_t v41 = v38 + 128; // 0x6e2f
        v36 = v39 + 128;
        v37 = v41;
        if (v41 == v13) {
            // 0x6e60
            if (*v17 == 1) {
                // 0x6d5d
                *(char *)&g49 = 1;
                goto lab_0x6d64_2;
            } else {
                // 0x6e6c
                *v17 = 1;
                v15 = 1;
                goto lab_0x6dab_2;
            }
        } else {
            goto lab_0x6e39;
        }
    } else {
        goto lab_0x6d64_2;
    }
}

// Address range: 0x14863 - 0x14899
int64_t function_14863(int64_t a1) {
    int32_t * v1 = (int32_t *)function_4760(); // 0x14878
    int64_t result = function_15ae0(a1 == 0 ? (int64_t)&g24 : a1, 56); // 0x1488c
    return result;
}

// Address range: 0x75f0 - 0x76b3
int64_t function_75f0(char * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 24); // 0x75f4
    int64_t result = *v2; // 0x75f4
    int64_t * v3 = (int64_t *)(v1 + 16); // 0x75f8
    int64_t v4 = *v3; // 0x75f8
    uint64_t v5 = result - v4; // 0x75ff
    if (v5 < 8) {
        // 0x7697
        return result;
    }
    if (result == v4) {
        char * v6 = (char *)(v1 + 80); // 0x769c
        *v6 = *v6 | 2;
    }
    int64_t v7 = *(int64_t *)(v1 + 48); // 0x7615
    int64_t v8 = *(int64_t *)(v1 + 8); // 0x7619
    int64_t v9 = v7 + result & -1 - v7; // 0x762a
    int64_t v10 = *(int64_t *)(v1 + 32); // 0x762d
    uint64_t v11 = v9 - v8; // 0x7637
    uint64_t v12 = v10 - v8; // 0x763a
    int64_t v13 = v11 > v12 ? v10 : v9; // 0x7640
    *v2 = v13;
    *v3 = v13;
    function_4a50((int64_t)a1, (int64_t)g43);
    int64_t v14 = v4; // 0x765f
    int64_t v15 = *(int64_t *)v14; // 0x7660
    v14 += 8;
    function_4c10(1, " %lu", v15, v8);
    while (v14 != (v5 & -8) + v4) {
        // 0x7660
        v15 = *(int64_t *)v14;
        v14 += 8;
        function_4c10(1, " %lu", v15, v8);
    }
    int64_t v16 = g43; // 0x767b
    int64_t * v17 = (int64_t *)(v16 + 40); // 0x7682
    uint64_t result2 = *v17; // 0x7682
    if (result2 >= *(int64_t *)(v16 + 48)) {
        // 0x76a5
        return function_4950(v16, 10, v15, v8, v11, v12);
    }
    // 0x768c
    *v17 = result2 + 1;
    *(char *)result2 = 10;
    // 0x7697
    return result2;
}

// Address range: 0x6b40 - 0x6ba1
int64_t function_6b40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 16 * a1 & 0xffffffff0; // 0x6b4c
    int64_t v2 = *(int64_t *)(v1 + (int64_t)&g29); // 0x6b53
    if (v2 == 0) {
        // 0x6b71
        return 0;
    }
    int64_t v3 = *(int64_t *)(v1 + (int64_t)&g29 + 8); // 0x6b5b
    switch (v2) {
        case 1: {
            // 0x6b78
            return *(char *)v3 != 48;
        }
        case 2: {
            int32_t v4 = (int32_t)*(char *)v3 - 48; // 0x6b8b
            int32_t v5 = v4; // 0x6b8e
            if (v4 == 0) {
                // 0x6b90
                v5 = (int32_t)*(char *)(v3 + 1) - 48;
            }
            // 0x6b97
            return v5 != 0;
        }
    }
    // 0x6b71
    return 1;
}

// Address range: 0xa1a0 - 0xa52b
int64_t function_a1a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint32_t v1 = *(int32_t *)&g63; // 0xa1a0
    if (v1 >= 5) {
        // 0xa52a
        int64_t result; // 0xa1a0
        return result;
    }
    int32_t v2 = *(int32_t *)(4 * (int64_t)v1 + (int64_t)&g2); // 0xa1c8
    return (int64_t)v2 + (int64_t)&g2;
}

// Address range: 0x15753 - 0x15830
int64_t function_15753(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15753
    int64_t v1; // bp-152, 0x15753
    int64_t v2 = &v1; // 0x15772
    int64_t v3 = __readfsqword(40); // 0x15782
    int64_t v4 = 32; // 0x157b7
    int64_t v5; // 0x15753
    int64_t v6 = &v5; // 0x157b7
    for (int64_t i = 0; i < 10; i++) {
        int64_t v7 = v6;
        int64_t v8 = v4;
        if ((int32_t)v8 < 48) {
            // 0x157c0
            int64_t v9; // bp-56, 0x15753
            int64_t v10 = *(int64_t *)((v8 & 0xffffffff) + (int64_t)&v9); // 0x157ca
            *(int64_t *)(8 * i + v2) = v10;
            v4 = v8 + 8 & 0xffffffff;
            v6 = v7;
            if (v10 == 0) {
                // break -> 0x15800
                break;
            }
        } else {
            int64_t v11 = *(int64_t *)v7; // 0x157ed
            *(int64_t *)(8 * i + v2) = v11;
            v4 = v8;
            v6 = v7 + 8;
            if (v11 == 0) {
                // break -> 0x15800
                break;
            }
        }
    }
    // 0x15800
    function_15250();
    int64_t result = __readfsqword(40) ^ v3; // 0x1580a
    if (result != 0) {
        // 0x1581e
        return function_48e0(a1);
    }
    // 0x15815
    return result;
}

