// Address range: 0xe533 - 0xe629
int64_t function_e533(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_e140(); // 0xe54d
    int64_t v2 = function_e1a0(v1); // 0xe558
    int64_t v3 = v1 - a1 + v2; // 0xe563
    int64_t v4 = strlen(a2); // 0xe56b
    int64_t v5; // 0xe533
    char v6 = v5;
    bool v7; // 0xe533
    char v8; // 0xe533
    if (v2 == 0) {
        // 0xe5a8
        v8 = v6 != 47 ? 0 : 46;
        v7 = v6 == 47;
    } else {
        // 0xe578
        v8 = 0;
        v7 = false;
        if (*(char *)(a1 - 1 + v3) != 47) {
            // 0xe584
            v8 = v6 == 47 ? 0 : 47;
            v7 = v6 != 47;
        }
    }
    int64_t v9 = v7;
    int64_t result = malloc(v3 + 1 + v4 + v9); // 0xe5cc
    if (result == 0) {
        // 0xe60d
        return result;
    }
    // 0xe5d9
    int64_t v10; // 0xe533
    int64_t v11 = mempcpy(result, a1, v3, v10); // 0xe5e2
    int64_t v12 = v11 + v9; // 0xe5ec
    *(char *)v11 = v8;
    if (a3 != 0) {
        // 0xe5fc
        *(int64_t *)a3 = v12;
    }
    // 0xe5ff
    *(char *)mempcpy(v12, a2, v4, (int64_t)v8) = 0;
    // 0xe60d
    return result;
}

// Address range: 0xe513 - 0xe530
int64_t function_e513(void) {
    int64_t result = function_e530(); // 0xe518
    if (result == 0) {
        // 0xe527
        return function_15b30();
    }
    // 0xe522
    return result;
}

