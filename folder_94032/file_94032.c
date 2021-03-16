// Address range: 0x16f50 - 0x17005
int64_t function_16f50(int64_t a1) {
    int64_t v1 = getenv("TZ"); // 0x16f5e
    char * v2 = (char *)(a1 + 8);
    char v3 = *v2;
    if (v1 == 0) {
        // 0x16fe0
        if (v3 == 0) {
            // 0x16fb3
            return 1;
        }
    } else {
        if (v3 != 0) {
            // 0x16fc0
            if ((int32_t)strcmp(a1 + 9, v1) == 0) {
                // 0x16fb3
                return 1;
            }
        }
    }
    int64_t result = function_16d50(v1); // 0x16f74
    if (result == 0) {
        // 0x16fb3
        return 0;
    }
    // 0x16f81
    if ((int32_t)function_16c90(*v2 == 0 ? 0 : (int32_t)a1 + 9) == 0) {
        // 0x16ff8
        tzset();
        return result;
    }
    int32_t * v4 = (int32_t *)__errno_location(); // 0x16f9b
    if (result != 1) {
        // 0x16fa6
        function_16cc0(result);
    }
    // 0x16fb3
    return 0;
}

