// Address range: 0xd683 - 0xd7a8
int64_t function_d683(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_48a0(0, "Valid arguments are:", 5); // 0xd6bf
    function_4a50(v1, g17);
    int64_t v2 = 0; // 0xd6d7
    int64_t v3 = a2; // 0xd6d7
    int64_t v4 = v1; // 0xd6d7
    int64_t v5 = 0; // 0xd6d7
    int64_t v6; // 0xd683
    int64_t v7; // 0xd683
    int64_t v8; // 0xd683
    int128_t v9; // 0xd683
    if (v1 != 0) {
        while (true) {
          lab_0xd719:
            // 0xd719
            v6 = v4;
            v8 = v3;
            if (v2 == 0) {
                goto lab_0xd6e0;
            } else {
                int64_t v10 = v5;
                if ((int32_t)function_4a30(v10, v8, a3) != 0) {
                    goto lab_0xd6e0;
                } else {
                    // 0xd730
                    function_4d20(g17, 1, (int64_t)", %s", function_15040(v6), v9);
                    v7 = v10;
                    goto lab_0xd704;
                }
            }
        }
    }
  lab_0xd760:;
    int64_t * v11 = (int64_t *)(g17 + 40); // 0xd767
    uint64_t result = *v11; // 0xd767
    if (result >= *(int64_t *)(g17 + 48)) {
        // 0xd790
        return function_4950(g17, 10);
    }
    // 0xd771
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
  lab_0xd6e0:
    // 0xd6e0
    function_4d20(g17, 1, (int64_t)"\n  - %s", function_15040(v6), v9);
    v7 = v8;
    goto lab_0xd704;
  lab_0xd704:
    // 0xd704
    v2++;
    v4 = *(int64_t *)(8 * v2 + a1);
    v3 = v8 + a3;
    v5 = v7;
    if (v4 == 0) {
        // break -> 0xd760
        goto lab_0xd760;
    }
    goto lab_0xd719;
}

