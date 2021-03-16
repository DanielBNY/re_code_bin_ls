// Address range: 0x8090 - 0x81d4
int64_t function_8090(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = __readfsqword(40); // 0x8099
    int64_t v2 = a3; // 0x8111
    int64_t v3 = a2; // 0x8111
    if ((g60 || g62) != 0) {
        if (g91 != 0) {
            // 0x8126
            function_8060();
        }
        // 0x80b8
        function_4d30((int64_t)g43);
        int64_t v4; // bp-168, 0x8090
        function_4720(0, &g63, &v4);
        int64_t v5; // 0x8090
        int64_t v6; // 0x80d5
        if (g60 == 0) {
            // 0x8130
            v6 = g62;
            function_4a90(v6, 0);
            v5 = v6;
        } else {
            // 0x80e5
            g60--;
            v5 = 19;
        }
        // 0x80f3
        function_4740(v5);
        function_4720(2, &v4, NULL);
        while ((g60 || g62) != 0) {
            // 0x811d
            if (g91 != 0) {
                // 0x8126
                function_8060();
            }
            // 0x80b8
            function_4d30((int64_t)g43);
            function_4720(0, &g63, &v4);
            if (g60 == 0) {
                // 0x8130
                v6 = g62;
                function_4a90(v6, 0);
                v5 = v6;
            } else {
                // 0x80e5
                g60--;
                v5 = 19;
            }
            // 0x80f3
            function_4740(v5);
            function_4720(2, &v4, NULL);
        }
        // 0x8109
        v2 = 0;
        v3 = &v4;
    }
    int64_t result = __readfsqword(40) ^ v1; // 0x8148
    if (result == 0) {
        // 0x8153
        return result;
    }
    int64_t result2 = function_48e0(); // 0x8177
    if (g93 != 0) {
        // 0x8180
        result2 = function_6b40(4, v3, v2, (int64_t)a4, a5);
        if ((char)result2 != 0) {
            // 0x81a0
            function_7ff0(&g29, (int64_t *)&g30);
            function_7ff0(&g37, &g38);
            return function_7ff0(&g31, (int64_t *)&g32);
        }
    }
    // 0x8153
    return result2;
}

