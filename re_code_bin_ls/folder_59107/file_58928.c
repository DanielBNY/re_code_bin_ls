// Address range: 0xe630 - 0xe6d7
int64_t function_e630(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a1;
    char v2 = v1;
    char v3 = v2; // 0xe638
    int64_t v4 = 0; // 0xe638
    int64_t v5 = v1; // 0xe638
    int64_t v6 = 0; // 0xe638
    int64_t result = 0; // 0xe638
    if (v2 == 0) {
      lab_0xe691_2:
        // 0xe691
        return result;
    }
    int64_t v7; // 0xe630
    int64_t v8; // 0xe630
    char v9; // 0xe630
    int64_t v10; // 0xe630
    int64_t v11; // 0xe630
    int64_t v12; // 0xe630
    while (true) {
      lab_0xe66a:;
        int64_t v13 = v6;
        int64_t v14 = v5;
        int64_t v15 = v4;
        char v16 = v3;
        char v17 = v16; // 0xe68a
        int64_t v18 = v14; // 0xe683
        int64_t v19 = v13; // 0xe67f
        while ((char)v15 == 0) {
            int64_t v20 = v19;
            int64_t v21 = v18;
            char v22 = v17;
            if (v22 == 46) {
                // 0xe6c0
                v11 = v21;
                v4 = 1;
                v7 = v20 == 0 ? v21 : v20;
                goto lab_0xe65c;
            }
            if (v22 > 90) {
                // 0xe6b0
                v11 = v21;
                v4 = v15;
                v7 = v20;
                v9 = v22;
                v12 = v21;
                v8 = v20;
                v10 = v15;
                if (v22 < 123) {
                    goto lab_0xe65c;
                } else {
                    goto lab_0xe6a4;
                }
            }
            // 0xe676
            v11 = v21;
            v4 = v15;
            v7 = v20;
            if (v22 > 64) {
                goto lab_0xe65c;
            }
            // 0xe67a
            v19 = v22 >= 58 ? 0 : v20;
            v18 = v21 + 1;
            *a1 = v18;
            v17 = *(char *)v18;
            result = v19;
            if (v17 == 0) {
                return result;
            }
        }
        if (v16 > 90) {
            // 0xe698
            v11 = v14;
            v4 = 0;
            v7 = v13;
            v9 = v16;
            v12 = v14;
            v8 = v13;
            v10 = 0;
            if (v16 < 123) {
                goto lab_0xe65c;
            } else {
                goto lab_0xe6a4;
            }
        } else {
            int64_t v23 = v16 < 65 == (64 - v16 & v16) < 0 ? v13 : 0; // 0xe658
            v11 = v14;
            v4 = 0;
            v7 = v23;
            goto lab_0xe65c;
        }
    }
    // 0xe691
    return result;
  lab_0xe65c:
    // 0xe65c
    v6 = v7;
    v5 = v11 + 1;
    *a1 = v5;
    v3 = *(char *)v5;
    result = v6;
    if (v3 == 0) {
        return result;
    }
    goto lab_0xe66a;
  lab_0xe6a4:
    // 0xe6a4
    v11 = v12;
    v4 = v10;
    v7 = v9 != 126 ? 0 : v8;
    goto lab_0xe65c;
}

