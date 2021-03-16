// Address range: 0x17033 - 0x170d6
int64_t function_17033(int64_t a1, int64_t a2, int64_t result) {
    if (a1 == 0) {
        // 0x170c0
        return function_4980(a2, result);
    }
    int64_t v1 = function_16f50(a1); // 0x1704d
    if (v1 == 0) {
        // 0x1707f
        return 0;
    }
    // 0x1705a
    if (localtime_r(a2, result) != 0) {
        // 0x1706a
        if ((char)function_16df0(a1, result) != 0) {
            // 0x17079
            if (v1 == 1 || (char)function_16cf0(v1) != 0) {
                // 0x1707f
                return result;
            }
            // 0x1707f
            return 0;
        }
    }
    if (v1 != 1) {
        // 0x17096
        function_16cf0(v1);
    }
    // 0x1707f
    return 0;
}

// Address range: 0x13283 - 0x132d0
int64_t function_13283(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __readfsqword(40); // 0x13288
    char v2 = 0; // bp-17, 0x13298
    int64_t result = function_119f0((int32_t)a1, a2, (int32_t)a3, a4, 0, (int64_t)&v2, a5, a6, (int64_t)&g30, (int64_t)&g30, (int64_t)&g30); // 0x132a9
    if (v1 != __readfsqword(40)) {
        // 0x132c5
        return __stack_chk_fail(a1);
    }
    // 0x132c0
    return result;
}

