// Address range: 0x109e3 - 0x10bc0
int64_t function_109e3(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x109f7
    int64_t v2 = a1; // 0x10a0a
    int64_t result; // 0x109e3
    if (a1 == 0) {
        int64_t v3 = getenv("BLOCK_SIZE"); // 0x10b37
        v2 = v3;
        if (v3 != 0) {
            goto lab_0x10a10;
        } else {
            int64_t v4 = getenv("BLOCKSIZE"); // 0x10b4f
            v2 = v4;
            if (v4 != 0) {
                goto lab_0x10a10;
            } else {
                int64_t * v5 = (int64_t *)a3;
                if (getenv("POSIXLY_CORRECT") == 0) {
                    // 0x10ba6
                    *v5 = (int64_t)&g25;
                    *(int32_t *)a2 = 0;
                    result = 0;
                } else {
                    // 0x10b71
                    *v5 = 512;
                    *(int32_t *)a2 = 0;
                    result = 0;
                }
                goto lab_0x10a5c;
            }
        }
    } else {
        goto lab_0x10a10;
    }
  lab_0x10a10:;
    char v6 = *(char *)v2; // 0x10a13
    int64_t v7 = v2 + (int64_t)(v6 == 39);
    int64_t v8 = v6 != 39 ? 0 : 4;
    int64_t v9 = function_d4e0(v7, (int64_t)&g12, (int64_t)&g10, 4); // 0x10a38
    int64_t v10; // 0x109e3
    int64_t v11; // 0x109e3
    int64_t v12; // 0x109e3
    int64_t v13; // bp-56, 0x109e3
    int64_t v14; // 0x10a92
    if ((int32_t)v9 < 0) {
        // 0x10a80
        v14 = function_16340(v7, &v13, 0, a3, "eEgGkKmMpPtTyYzZ0");
        if ((int32_t)v14 != 0) {
            // 0x10af4
            *(int32_t *)a2 = 0;
            goto lab_0x10afd;
        } else {
            int64_t v15 = (int64_t)*(char *)v7 + 0xffffffd0; // 0x10a9e
            int64_t v16 = v15 & 0xffffffff; // 0x10a9e
            v12 = v16;
            v10 = v8;
            if ((char)v15 < 10) {
                goto lab_0x10af4_2;
            } else {
                // 0x10ac0
                v11 = v16;
                if (v13 != v7) {
                    int64_t v17 = v7 + 1; // 0x10ab0
                    int64_t v18 = (int64_t)*(char *)v17 + 0xffffffd0; // 0x10ab8
                    while ((char)v18 >= 10) {
                        // 0x10ac0
                        if (v13 == v17) {
                            // 0x10ac5
                            v11 = v18 & 0xffffffff;
                            goto lab_0x10ac5_2;
                        }
                        v17++;
                        v18 = (int64_t)*(char *)v17 + 0xffffffd0;
                    }
                    // 0x10af4
                    v12 = v18 & 0xffffffff;
                    v10 = v8;
                    goto lab_0x10af4_2;
                } else {
                    goto lab_0x10ac5_2;
                }
            }
        }
    } else {
        // 0x10a41
        *(int64_t *)a3 = 1;
        int32_t v19 = *(int32_t *)(0x100000000 * v9 / 0x40000000 + (int64_t)&g10); // 0x10a52
        *(int32_t *)a2 = v19 | (int32_t)v8;
        result = 0;
        goto lab_0x10a5c;
    }
  lab_0x10a5c:
    // 0x10a5c
    if (v1 != __readfsqword(40)) {
        // 0x10bbb
        return __stack_chk_fail();
    }
    // 0x10a70
    return result;
  lab_0x10afd:
    // 0x10afd
    *(int64_t *)a3 = getenv("POSIXLY_CORRECT") == 0 ? 1024 : 512;
    result = 4;
    goto lab_0x10a5c;
  lab_0x10af4_2:
    // 0x10af4
    *(int32_t *)a2 = (int32_t)v10;
    result = v14;
    if (v12 != 0) {
        goto lab_0x10a5c;
    } else {
        goto lab_0x10afd;
    }
  lab_0x10ac5_2:;
    // 0x10ac5
    int64_t v20; // 0x109e3
    if (*(char *)(v13 - 1) == 66) {
        int64_t v21 = v8 | 384; // 0x10b90
        v20 = v21;
        v12 = v11;
        v10 = v21;
        if (*(char *)(v13 - 2) != 105) {
            goto lab_0x10af4_2;
        } else {
            goto lab_0x10ad3;
        }
    } else {
        // 0x10acf
        v20 = v8 | 128;
        goto lab_0x10ad3;
    }
  lab_0x10ad3:
    // 0x10ad3
    v12 = v11;
    v10 = v20 & 0xffffffdf | 32;
    goto lab_0x10af4_2;
}

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
            int64_t v25 = nl_langinfo(v21 & 0xffffffff); // 0x6cef
            if (strchr(v25, 37) != 0) {
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
                v25 = nl_langinfo(v21 & 0xffffffff);
                if (strchr(v25, 37) != 0) {
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
        return __stack_chk_fail();
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
            v40 = __snprintf_chk(v39, 128, 1, -1, "%.*s%s%s", v35);
            goto lab_0x6e22;
        }
    } else {
        // 0x6e3e
        v40 = snprintf(v39, 128, "%s", v31);
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

