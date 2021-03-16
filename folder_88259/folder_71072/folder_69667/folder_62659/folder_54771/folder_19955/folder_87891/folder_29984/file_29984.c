// Address range: 0x7520 - 0x75e1
int64_t function_7520(uint64_t a1, uint64_t a2) {
    // 0x7520
    int64_t result; // 0x7520
    if (a1 >= a2) {
        // 0x75ad
        return result;
    }
    int64_t v1 = a1; // 0x7523
    int64_t v2; // 0x7520
    int64_t v3; // 0x7520
    int64_t v4; // 0x7520
    uint64_t v5; // 0x7520
    uint64_t v6; // 0x7520
    int64_t v7; // 0x7520
    int64_t v8; // 0x7520
    int64_t v9; // 0x7520
    int64_t v10; // 0x7576
    uint64_t v11; // 0x757d
    uint64_t v12; // 0x7584
    int64_t * v13; // 0x7588
    uint64_t v14; // 0x7588
    uint64_t v15; // 0x758c
    while (true) {
      lab_0x7576_2:
        // 0x7576
        v5 = v1;
        v10 = g43;
        v11 = (int64_t)g76;
        v12 = v5 + 1;
        v13 = (int64_t *)(v10 + 40);
        v14 = *v13;
        v15 = *(int64_t *)(v10 + 48);
        v9 = v8;
        v4 = v3;
        if (v11 != 0) {
            int64_t v16 = a2 / v11; // 0x753d
            int64_t v17 = v12 % v11;
            v9 = v17;
            v4 = v16;
            if (v16 > v12 / v11) {
                int64_t v18; // 0x7520
                if (v14 >= v15) {
                    // 0x75c8
                    function_4950(v10, 9, v17, v11, v15, v16);
                    v18 = g76;
                } else {
                    // 0x7555
                    *v13 = v14 + 1;
                    *(char *)v14 = 9;
                    v18 = v11;
                }
                // 0x7560
                v6 = v18;
                int64_t v19 = v5 % v6;
                int64_t v20 = v6 + v5 - v19; // 0x756e
                v7 = v19;
                v1 = v20;
                v2 = v16;
                if (v20 >= a2) {
                    return v5 / v6;
                }
                goto lab_0x7576;
            } else {
                goto lab_0x7595;
            }
        } else {
            goto lab_0x7595;
        }
    }
    // 0x75ad
    return v5 / v6;
  lab_0x7595:;
    int64_t v21 = v4;
    int64_t v22 = v9;
    int64_t v23; // 0x7520
    if (v14 >= v15) {
        // 0x75b8
        v23 = function_4950(v10, 32, v22, v11, v15, v21);
    } else {
        int64_t v24 = v14 + 1; // 0x759a
        *v13 = v24;
        *(char *)v14 = 32;
        v23 = v24;
    }
    // 0x75a5
    v7 = v22;
    v1 = v12;
    v2 = v21;
    result = v23;
    if (v12 >= a2) {
        return result;
    }
    goto lab_0x7576;
  lab_0x7576:
    // 0x7576
    v8 = v7;
    v3 = v2;
    goto lab_0x7576_2;
}

