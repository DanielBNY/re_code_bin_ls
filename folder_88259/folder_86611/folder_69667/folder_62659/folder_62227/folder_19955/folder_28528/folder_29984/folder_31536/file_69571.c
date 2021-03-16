// Address range: 0x10fc3 - 0x11014
int64_t function_10fc3(uint64_t a1, int64_t a2) {
    int64_t v1 = a2 + 20; // 0x10fc4
    *(char *)v1 = 0;
    int64_t result = v1; // 0x10fd6
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x10fe0
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x11010
    return result;
}

