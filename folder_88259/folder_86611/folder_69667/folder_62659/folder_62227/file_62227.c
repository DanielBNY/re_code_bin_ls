// Address range: 0xf313 - 0xf37d
int64_t function_f313(int64_t a1, int64_t a2) {
    int64_t v1 = function_ebd0(a1, a2); // 0xf320
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0xf338
    while (*(int64_t *)v2 != a2) {
        // 0xf330
        if (v3 == 0) {
            goto lab_0xf346;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0xf370
        return *(int64_t *)v3;
    }
  lab_0xf346:;
    int64_t v4 = v1 + 16; // 0xf358
    int64_t result = 0; // 0xf35f
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0xf350
        result = v5;
        if (v5 != 0) {
            // break -> 0xf364
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0xf364
    return result;
}

