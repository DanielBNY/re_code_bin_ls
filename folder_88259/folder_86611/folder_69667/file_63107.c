// Address range: 0xf683 - 0xf766
int64_t function_f683(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0xf693
    uint64_t v2 = *v1; // 0xf693
    int64_t v3 = a1; // 0xf697
    int64_t v4; // 0xf683
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0xf6f3;
    } else {
        // 0xf699
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0xf6f3;
        } else {
            // 0xf6a0
            v4 = a1;
            if (v2 > a1) {
                int64_t v5 = a1;
                int64_t v6 = *(int64_t *)v5; // 0xf6b9
                int64_t v7; // 0xf6b0
                while (v6 == 0) {
                    // 0xf6b0
                    v7 = v5 + 16;
                    v3 = 0;
                    if (v2 <= v7) {
                        // break (via goto) -> 0xf6f3
                        goto lab_0xf6f3;
                    }
                    v5 = v7;
                    v6 = *(int64_t *)v5;
                }
                int64_t v8 = *(int64_t *)(v5 + 8); // 0xf6d8
                int64_t v9 = v8; // 0xf6df
                int64_t v10 = v6; // 0xf6df
                int64_t v11; // 0xf683
                int64_t v12; // 0xf6d8
                if (v8 != 0) {
                    v11 = v9;
                    v12 = *(int64_t *)(v11 + 8);
                    while (v12 != 0) {
                        // 0xf6d0
                        v11 = v12;
                        v12 = *(int64_t *)(v11 + 8);
                    }
                    // 0xf6d3
                    v10 = *(int64_t *)v11;
                }
                int64_t v13 = v5 + 16; // 0xf6e6
                v3 = v10;
                while (v2 > v13) {
                    // 0xf6b9
                    v5 = v13;
                    v6 = *(int64_t *)v5;
                    while (v6 == 0) {
                        // 0xf6b0
                        v7 = v5 + 16;
                        v3 = 0;
                        if (v2 <= v7) {
                            // break (via goto) -> 0xf6f3
                            goto lab_0xf6f3;
                        }
                        v5 = v7;
                        v6 = *(int64_t *)v5;
                    }
                    // 0xf6d3
                    v8 = *(int64_t *)(v5 + 8);
                    v9 = v8;
                    v10 = v6;
                    if (v8 != 0) {
                        v11 = v9;
                        v12 = *(int64_t *)(v11 + 8);
                        while (v12 != 0) {
                            // 0xf6d0
                            v11 = v12;
                            v12 = *(int64_t *)(v11 + 8);
                        }
                        // 0xf6d3
                        v10 = *(int64_t *)v11;
                    }
                    // 0xf6e1
                    v13 = v5 + 16;
                    v3 = v10;
                }
                goto lab_0xf6f3;
            } else {
                goto lab_0xf72c;
            }
        }
    }
  lab_0xf6f3:
    // 0xf6f3
    v4 = v3;
    if (v3 < v2) {
        int64_t v14 = *(int64_t *)(v3 + 8); // 0xf700
        int64_t v15 = v14; // 0xf707
        int64_t v16 = v2; // 0xf707
        int64_t v17 = v3; // 0xf707
        int64_t v18; // 0xf683
        int64_t v19; // 0xf713
        if (v14 != 0) {
            v18 = v15;
            v19 = *(int64_t *)(v18 + 8);
            free(v18);
            while (v19 != 0) {
                // 0xf710
                v18 = v19;
                v19 = *(int64_t *)(v18 + 8);
                free(v18);
            }
            // 0xf721
            v16 = *v1;
            v17 = v18;
        }
        int64_t v20 = v3 + 16; // 0xf721
        int64_t v21 = v16; // 0xf72a
        int64_t v22 = v20; // 0xf72a
        int64_t v23 = v17; // 0xf72a
        v4 = v17;
        while (v16 > v20) {
            // 0xf700
            v14 = *(int64_t *)(v22 + 8);
            v15 = v14;
            v16 = v21;
            v17 = v23;
            if (v14 != 0) {
                v18 = v15;
                v19 = *(int64_t *)(v18 + 8);
                free(v18);
                while (v19 != 0) {
                    // 0xf710
                    v18 = v19;
                    v19 = *(int64_t *)(v18 + 8);
                    free(v18);
                }
                // 0xf721
                v16 = *v1;
                v17 = v18;
            }
            // 0xf721
            v20 = v22 + 16;
            v21 = v16;
            v22 = v20;
            v23 = v17;
            v4 = v17;
        }
    }
    goto lab_0xf72c;
  lab_0xf72c:;
    int64_t v24 = *(int64_t *)(a1 + 72); // 0xf72c
    if (v24 == 0) {
        // 0xf751
        free(v4);
        return free(a1);
    }
    int64_t v25 = *(int64_t *)(v24 + 8); // 0xf743
    free(v24);
    int64_t v26 = v24; // 0xf74f
    while (v25 != 0) {
        int64_t v27 = v25;
        v25 = *(int64_t *)(v27 + 8);
        free(v27);
        v26 = v27;
    }
    // 0xf751
    free(v26);
    return free(a1);
}

