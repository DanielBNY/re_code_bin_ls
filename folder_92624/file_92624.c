// Address range: 0x16ac3 - 0x16bb0
int64_t function_16ac3(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 + 24) - *(int64_t *)(a1 + 16); // 0x16ad2
    uint64_t v2 = v1 + a2; // 0x16ada
    uint64_t v3 = v2 + *(int64_t *)(a1 + 48); // 0x16ae3
    uint64_t v4 = v1 / 8; // 0x16aea
    int64_t v5 = v3 <= a1 ? a1 : v3; // 0x16af6
    int64_t v6 = v5; // 0x16b04
    if (v2 >= a2) {
        uint64_t v7 = v4 + 100 + v3; // 0x16af1
        v6 = v3 >= v2 == v5 < v7 ? v7 : v5;
    }
    // 0x16ba5
    return function_16960(a1, v6, v4, a4 & -256 | (int64_t)(v3 < v2));
}

// Address range: 0x169d0 - 0x169e5
int64_t function_169d0(int64_t a1, int64_t a2) {
    // 0x169d0
    return *(int64_t *)(a1 + 64);
}

// Address range: 0x16bf3 - 0x16c5d
int64_t function_16bf3(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x16bfb
    int64_t v2 = *v1; // 0x16bfb
    int64_t v3; // 0x16bf3
    if (v2 != 0) {
        char * v4 = (char *)(a1 + 80);
        uint64_t result; // 0x16c18
        if (v2 < a2) {
            // 0x16c18
            result = *(int64_t *)v2;
            if (result >= a2) {
                // 0x16c48
                *(int64_t *)(a1 + 24) = a2;
                *(int64_t *)(a1 + 16) = a2;
                *(int64_t *)(a1 + 32) = result;
                *v1 = v2;
                return result;
            }
        }
        int64_t v5 = *(int64_t *)(v2 + 8); // 0x16c20
        int64_t v6 = function_169d0(a1, v2); // 0x16c27
        *v4 = *v4 | 2;
        v3 = v6;
        while (v5 != 0) {
            uint64_t v7 = v5;
            if (v7 < a2) {
                // 0x16c18
                result = *(int64_t *)v7;
                if (result >= a2) {
                    // 0x16c48
                    *(int64_t *)(a1 + 24) = a2;
                    *(int64_t *)(a1 + 16) = a2;
                    *(int64_t *)(a1 + 32) = result;
                    *v1 = v7;
                    return result;
                }
            }
            // 0x16c20
            v5 = *(int64_t *)(v7 + 8);
            v6 = function_169d0(a1, v7);
            *v4 = *v4 | 2;
            v3 = v6;
        }
    }
    int64_t result2 = v3; // 0x16c38
    if (a2 != 0) {
        result2 = function_4deb();
    }
    // 0x16c3e
    return result2;
}

