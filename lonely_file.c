// Address range: 0x14ff3 - 0x15000
int64_t function_14ff3(void) {
    // 0x14ff3
    int64_t v1; // 0x14ff3
    int64_t v2; // 0x14ff3
    int64_t v3; // 0x14ff3
    return function_146c0(v1, v2, v3, &g12);
}

// Address range: 0xc693 - 0xc718
int64_t function_c693(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xc694
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xc69d
    int64_t v3 = a4 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xc6a6
    if (v2 == 3 || v2 == 9) {
        // 0xc6d8
        if ((char)v3 == 0) {
            // 0xc6d1
            return 1;
        }
    } else {
        // 0xc6c3
        if ((char)v3 != 0) {
            // 0xc6d1
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a1 + 96); // 0xc6dc
    int64_t v5 = *(int64_t *)(a2 + 96); // 0xc6e0
    if (v5 > v4) {
        // 0xc6d1
        return 0xffffffff;
    }
    // 0xc6e6
    if (v5 < v4) {
        // 0xc6d1
        return 1;
    }
    uint32_t v6 = (int32_t)*(int64_t *)(a1 + 104) - *(int32_t *)(a2 + 104); // 0xc6ec
    int64_t result = v6; // 0xc6ec
    if (v6 != 0) {
        // 0xc6d1
        return result;
    }
    // 0xc6f2
    return function_4a80(a1, a1, a2, v1 & -256 | (int32_t)v3, result);
}

// Address range: 0xd038 - 0xd3d4
int64_t function_d038(void) {
    // 0xd038
    int64_t v1; // 0xd038
    int64_t v2; // 0xd038
    int64_t v3; // 0xd038
    fputs_unlocked(dcgettext(v2, "  -t                         sort by modification time, newest first\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n", v3), v1);
    fputs_unlocked(dcgettext(0, "  -u                         with -lt: sort by, and show, access time;\n                               with -l: show access time and sort by name;\n                               otherwise: sort by access time, newest first\n  -U                         do not sort; list entries in directory order\n  -v                         natural sort of (version) numbers within text\n", 5), (int64_t)g16);
    fputs_unlocked(dcgettext(0, "  -w, --width=COLS           set output width to COLS.  0 means no limit\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any security context of each file\n  -1                         list one file per line.  Avoid '\\n' with -q or -b\n", 5), (int64_t)g16);
    fputs_unlocked(dcgettext(0, "      --help     display this help and exit\n", 5), (int64_t)g16);
    fputs_unlocked(dcgettext(0, "      --version  output version information and exit\n", 5), (int64_t)g16);
    fputs_unlocked(dcgettext(0, "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n", 5), (int64_t)g16);
    fputs_unlocked(dcgettext(0, "\nThe TIME_STYLE argument can be full-iso, long-iso, iso, locale, or +FORMAT.\nFORMAT is interpreted like in date(1).  If FORMAT is FORMAT1<newline>FORMAT2,\nthen FORMAT1 applies to non-recent files and FORMAT2 to recent files.\nTIME_STYLE prefixed with 'posix-' takes effect only outside the POSIX locale.\nAlso the TIME_STYLE environment variable sets the default style to use.\n", 5), (int64_t)g16);
    fputs_unlocked(dcgettext(0, "\nUsing color to distinguish file types is disabled both by default and\nwith --color=never.  With --color=auto, ls emits color codes only when\nstandard output is connected to a terminal.  The LS_COLORS environment\nvariable can change the settings.  Use the dircolors command to set it.\n", 5), (int64_t)g16);
    fputs_unlocked(dcgettext(0, "\nExit status:\n 0  if OK,\n 1  if minor problems (e.g., cannot access subdirectory),\n 2  if serious trouble (e.g., cannot access command-line argument).\n", 5), (int64_t)g16);
    int64_t v4 = (int64_t)"ls"; // 0xd187
    if (g13 != 1) {
        // 0xd189
        v4 = g13 != 2 ? (int64_t)"vdir" : (int64_t)"dir";
    }
    int64_t v5 = &g5; // 0xd207
    int64_t v6 = &v5; // 0xd22d
    int64_t v7 = &g5; // 0xd22d
    int64_t v8 = v6; // 0xd247
    while ((int32_t)strcmp(v4, v7, 5, (int64_t)"sha512sum") != 0) {
        // 0xd230
        v6 += 16;
        v7 = *(int64_t *)v6;
        v8 = v6;
        if (v7 == 0) {
            // break -> 0xd249
            break;
        }
        v8 = v6;
    }
    int64_t v9 = *(int64_t *)(v8 + 8); // 0xd249
    __printf_chk(1, dcgettext(0, "\n%s online help: <%s>\n", 5), "GNU coreutils", "https://www.gnu.org/software/coreutils/");
    int64_t v10 = setlocale(5, 0);
    int64_t v11; // 0xd038
    if (v9 == 0) {
        if (v10 == 0) {
            goto lab_0xd36c;
        } else {
            // 0xd357
            if ((int32_t)strncmp(v10, "en_", 3) != 0) {
                goto lab_0xd3aa;
            } else {
                goto lab_0xd36c;
            }
        }
    } else {
        // 0xd264
        v11 = v9;
        if (v10 == 0) {
            goto lab_0xd2b3;
        } else {
            // 0xd29a
            v11 = v9;
            if ((int32_t)strncmp(v10, "en_", 3) != 0) {
                goto lab_0xd3aa;
            } else {
                goto lab_0xd2b3;
            }
        }
    }
  lab_0xd36c:;
    char * v12 = (char *)v4;
    __printf_chk(1, dcgettext(0, "Full documentation at: <%s%s>\n", 5), "https://www.gnu.org/software/coreutils/", v12);
    char * v13 = v12; // 0xd3a2
    int64_t v14 = (int64_t)" invocation"; // 0xd3a2
    goto lab_0xd2f4;
  lab_0xd2b3:
    // 0xd2b3
    __printf_chk(1, dcgettext(0, "Full documentation at: <%s%s>\n", 5), "https://www.gnu.org/software/coreutils/", (char *)v4);
    int64_t v15 = v4 != v11 ? (int64_t)&g2 : (int64_t)" invocation"; // 0xd2f0
    v13 = (char *)v11;
    v14 = v15;
    goto lab_0xd2f4;
  lab_0xd2f4:
    // 0xd2f4
    __printf_chk(1, dcgettext(0, "or available locally via: info '(coreutils) %s%s'\n", 5), v13, (char *)v14);
    return function_ccfa();
  lab_0xd3aa:
    // 0xd3aa
    __printf_chk(1, dcgettext(0, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5), (char *)v4, "https://www.gnu.org/software/coreutils/");
    v11 = v4;
    goto lab_0xd2b3;
}

// Address range: 0xa773 - 0xa7a6
int64_t function_a773(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 72); // 0xa774
    int64_t v2 = *(int64_t *)(a2 + 72); // 0xa77b
    if (v2 > v1) {
        // 0xa7a0
        return 0xffffffff;
    }
    int64_t v3 = v2 - v1; // 0xa77b
    if (v3 != 0) {
        // 0xa790
        return v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0;
    }
    // 0xa783
    int64_t v4; // 0xa773
    int64_t v5; // 0xa773
    return function_7310(a1, a1, v1, v5, v4);
}

// Address range: 0xf5d3 - 0xf680
int64_t function_f5d3(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0xf5de
    uint64_t v2 = *v1; // 0xf5de
    int64_t result; // 0xf5d3
    if (v2 <= a1) {
      lab_0xf66b:
        // 0xf66b
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 72);
    int64_t v4 = a1;
    int64_t * v5 = (int64_t *)v4;
    int64_t v6; // 0xf5d3
    int64_t v7; // 0xf5f0
    while (*v5 == 0) {
        // 0xf5f0
        v7 = v4 + 16;
        result = v6;
        if (v2 <= v7) {
            // break (via goto) -> 0xf66b
            goto lab_0xf66b;
        }
        v4 = v7;
        v5 = (int64_t *)v4;
    }
    int64_t * v8 = (int64_t *)(v4 + 8); // 0xf601
    int64_t v9 = *v8; // 0xf601
    int64_t result2 = v6; // 0xf60d
    int64_t v10; // 0xf5d3
    int64_t v11; // 0xf5d3
    int64_t * v12; // 0xf629
    int64_t v13; // 0xf629
    if (v9 != 0) {
        // 0xf61b
        v12 = (int64_t *)(v9 + 8);
        v13 = *v12;
        *(int64_t *)v9 = 0;
        *v12 = *v3;
        *v3 = v9;
        v10 = v9;
        result2 = v13;
        while (v13 != 0) {
            // 0xf61b
            v11 = v13;
            v12 = (int64_t *)(v11 + 8);
            v13 = *v12;
            *(int64_t *)v11 = 0;
            *v12 = v10;
            *v3 = v11;
            v10 = v11;
            result2 = v13;
        }
    }
    // 0xf645
    *v5 = 0;
    int64_t v14 = v4 + 16; // 0xf658
    *v8 = 0;
    uint64_t v15 = *v1; // 0xf665
    while (v15 > v14) {
        int64_t v16 = result2;
        uint64_t v17 = v15; // 0xf5f4
        v4 = v14;
        v5 = (int64_t *)v4;
        while (*v5 == 0) {
            // 0xf5f0
            v7 = v4 + 16;
            result = v16;
            if (v17 <= v7) {
                // break (via goto) -> 0xf66b
                goto lab_0xf66b;
            }
            v4 = v7;
            v5 = (int64_t *)v4;
        }
        // 0xf601
        v8 = (int64_t *)(v4 + 8);
        v9 = *v8;
        result2 = v16;
        if (v9 != 0) {
            // 0xf61b
            v12 = (int64_t *)(v9 + 8);
            v13 = *v12;
            *(int64_t *)v9 = 0;
            *v12 = *v3;
            *v3 = v9;
            v10 = v9;
            result2 = v13;
            while (v13 != 0) {
                // 0xf61b
                v11 = v13;
                v12 = (int64_t *)(v11 + 8);
                v13 = *v12;
                *(int64_t *)v11 = 0;
                *v12 = v10;
                *v3 = v11;
                v10 = v11;
                result2 = v13;
            }
        }
        // 0xf645
        *v5 = 0;
        v14 = v4 + 16;
        *v8 = 0;
        v15 = *v1;
    }
    // 0xf66b
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}

// Address range: 0x6f03 - 0x6f12
int64_t function_6f03(int64_t a1, int64_t a2) {
    // 0x6f03
    int64_t v1; // 0x6f03
    int64_t v2; // 0x6f03
    return function_4a80((int16_t *)a1, a1, v1, v2, a2);
}

// Address range: 0xdfd3 - 0xdfdc
int64_t function_dfd3(int64_t a1) {
    // 0xdfd3
    g18 = a1;
    int64_t result; // 0xdfd3
    return result;
}

// Address range: 0xc933 - 0xc9e8
int64_t function_c933(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xc93b
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xc944
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xc94d
    int64_t v4; // 0xc933
    if (v2 == 3 || v2 == 9) {
        // 0xc980
        if ((char)v3 == 0) {
            // 0xc976
            return 1;
        }
    } else {
        // 0xc968
        v4 = 1;
        if ((char)v3 != 0) {
            // 0xc976
            return 0xffffffff;
        }
    }
    int64_t v5 = v3 | (int64_t)(v1 & -256);
    int64_t v6 = (int64_t)(v2 & -256) | (int64_t)(v2 == 9); // 0xc961
    int64_t v7 = strrchr(a1, 46, v5, v6); // 0xc98c
    int64_t v8 = strrchr(46, 46, v5, v6); // 0xc99d
    int64_t v9 = v8 == 0 ? (int64_t)&g6 : v8; // 0xc9af
    int64_t v10 = v7 == 0 ? (int64_t)&g6 : v7; // 0xc9b6
    int64_t v11 = function_7310(v10, v9, v5, v6, v4); // 0xc9bd
    int64_t result = v11 & 0xffffffff; // 0xc9c2
    if ((int32_t)v11 != 0) {
        // 0xc976
        return result;
    }
    // 0xc9c9
    return function_7310(v10, v9, v5, v6, result);
}

// Address range: 0x6830 - 0x6869
int64_t function_6830(void) {
    // 0x6830
    return 0;
}

// Address range: 0xc183 - 0xc208
int64_t function_c183(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xc184
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xc18d
    int64_t v3 = a4 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xc196
    if (v2 == 3 || v2 == 9) {
        // 0xc1c8
        if ((char)v3 == 0) {
            // 0xc1c1
            return 1;
        }
    } else {
        // 0xc1b3
        if ((char)v3 != 0) {
            // 0xc1c1
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a1 + 96); // 0xc1cc
    int64_t v5 = *(int64_t *)(a2 + 96); // 0xc1d0
    if (v5 > v4) {
        // 0xc1c1
        return 0xffffffff;
    }
    // 0xc1d6
    if (v5 < v4) {
        // 0xc1c1
        return 1;
    }
    uint32_t v6 = (int32_t)*(int64_t *)(a1 + 104) - *(int32_t *)(a2 + 104); // 0xc1dc
    int64_t result = v6; // 0xc1dc
    if (v6 != 0) {
        // 0xc1c1
        return result;
    }
    // 0xc1e2
    return function_7310(a1, a1, a2, v3 | (int64_t)(v1 & -256), result);
}

// Address range: 0xf383 - 0xf3c3
int64_t function_f383(uint64_t a1, int64_t a2, uint64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0xf389
    uint64_t v2 = *v1; // 0xf389
    int64_t result = 0; // 0xf38d
    if (v2 <= a1) {
      lab_0xf39f:
        // 0xf39f
        return result;
    }
    int64_t result2 = 0;
    int64_t v3 = a1; // 0xf395
    int64_t v4 = v2; // 0xf393
    int64_t v5 = result2; // 0xf393
    int64_t v6 = result2; // 0xf393
    int64_t v7 = v3; // 0xf393
    int64_t v8; // 0xf3b4
    if (*(int64_t *)v3 != 0) {
        result = v6;
        if (v6 >= a3) {
            return result;
        }
        // 0xf3a8
        v5 = v6 + 1;
        *(int64_t *)(a2 - 8 + 8 * v5) = *(int64_t *)v7;
        v8 = *(int64_t *)(v7 + 8);
        v6 = v5;
        v7 = v8;
        while (v8 != 0) {
            // 0xf3bd
            result = v6;
            if (v6 >= a3) {
                return result;
            }
            // 0xf3a8
            v5 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v5) = *(int64_t *)v7;
            v8 = *(int64_t *)(v7 + 8);
            v6 = v5;
            v7 = v8;
        }
        // 0xf395
        v4 = *v1;
    }
    // 0xf395
    result2 = v5;
    v3 += 16;
    while (v4 > v3) {
        int64_t v9 = result2; // 0xf393
        v6 = result2;
        v7 = v3;
        if (*(int64_t *)v3 != 0) {
            result = v6;
            if (v6 >= a3) {
                return result;
            }
            // 0xf3a8
            v5 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v5) = *(int64_t *)v7;
            v8 = *(int64_t *)(v7 + 8);
            v6 = v5;
            v7 = v8;
            while (v8 != 0) {
                // 0xf3bd
                result = v6;
                if (v6 >= a3) {
                    return result;
                }
                // 0xf3a8
                v5 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v5) = *(int64_t *)v7;
                v8 = *(int64_t *)(v7 + 8);
                v6 = v5;
                v7 = v8;
            }
            // 0xf395
            v4 = *v1;
            v9 = v5;
        }
        // 0xf395
        result2 = v9;
        v3 += 16;
    }
    // 0xf39f
    return result2;
}

// Address range: 0xeba3 - 0xebb4
int64_t function_eba3(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0xeba3
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}

// Address range: 0xfec3 - 0xfed9
int64_t function_fec3(int64_t a1) {
    // 0xfec3
    free(a1);
    return free(a1);
}

// Address range: 0xc853 - 0xc8b5
int64_t function_c853(int64_t a1, int64_t a2) {
    // 0xc853
    int64_t v1; // 0xc853
    int64_t v2; // 0xc853
    int64_t v3 = strrchr(a1, 46, v1, v2); // 0xc866
    int64_t v4 = strrchr(46, 46, v1, v2); // 0xc876
    int64_t v5 = v4 == 0 ? (int64_t)&g6 : v4; // 0xc888
    int64_t v6 = v3 == 0 ? (int64_t)&g6 : v3; // 0xc88f
    int64_t v7; // 0xc853
    int64_t result = function_7310(v6, v5, v1, v2, v7); // 0xc896
    if ((int32_t)result != 0) {
        // 0xc8b0
        return result;
    }
    // 0xc89f
    return function_7310(v6, v5, v1, v2, v7);
}

// Address range: 0xf493 - 0xf4b4
int64_t function_f493(int64_t a1) {
    // 0xf493
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}

// Address range: 0xfe83 - 0xfebb
int64_t function_fe83(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0xfe84
    if (*(int64_t *)(a1 + 8) != v1) {
        // 0xfe90
        return 0;
    }
    int64_t v2 = *(int64_t *)(a2 + 16); // 0xfe98
    if (*(int64_t *)(a1 + 16) != v2) {
        // 0xfe90
        return 0;
    }
    int64_t v3 = strcmp(a1, a2, v1, v2); // 0xfeac
    return v3 & -256 | (int64_t)((int32_t)v3 == 0);
}

// Address range: 0xa673 - 0xa6e8
int64_t function_a673(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xa674
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xa67a
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xa683
    int64_t v4; // 0xa673
    if (v2 == 3 || v2 == 9) {
        // 0xa6b0
        if ((char)v3 == 0) {
            // 0xa6ac
            return 1;
        }
    } else {
        // 0xa69e
        v4 = 1;
        if ((char)v3 != 0) {
            // 0xa6ac
            return 0xffffffff;
        }
    }
    int64_t v5 = *(int64_t *)(a2 + 72); // 0xa6b4
    int64_t v6 = *(int64_t *)(a1 + 72); // 0xa6b8
    if (v6 > v5) {
        // 0xa6ac
        return 0xffffffff;
    }
    int64_t v7 = v6 - v5; // 0xa6b8
    if (v7 != 0) {
        // 0xa6d0
        return v7 < 0 != ((v7 ^ v6) & (v6 ^ v5)) < 0;
    }
    // 0xa6c0
    return function_4a80(a1, a2, v3 | (int64_t)(v1 & -256), v2 & -256 | (int32_t)(v2 == 9), v4);
}

// Address range: 0x68d3 - 0x68ec
int64_t function_68d3(int64_t a1, int64_t a2) {
    if (a1 == a2) {
        // 0x68e0
        return *(int64_t *)(a1 + 8) & -256 | 1;
    }
    // 0x68de
    return 0;
}

// Address range: 0x14bc3 - 0x14bd0
int64_t function_14bc3(void) {
    // 0x14bc3
    int64_t v1; // 0x14bc3
    int64_t v2; // 0x14bc3
    int64_t v3; // 0x14bc3
    return function_146c0(v1, v2, v3, (int64_t *)&g24);
}

// Address range: 0x15993 - 0x15a14
int64_t function_15993(int64_t a1, uint64_t a2, uint64_t a3) {
    int64_t v1; // 0x15993
    int64_t v2; // 0x15993
    int64_t v3; // 0x15993
    int64_t v4; // 0x15993
    if (a1 == 0) {
        // 0x159d0
        v3 = a2;
        if (a2 == 0) {
            goto lab_0x159f8;
        } else {
            goto lab_0x159d5;
        }
    } else {
        uint64_t v5 = 0x5555555555555554 / a3; // 0x159ae
        int64_t v6 = 0x5555555555555554 % a3;
        v1 = v5;
        v2 = v6;
        v4 = a2;
        if (v5 > a2) {
            int64_t v7 = a2 + 1 + a2 / 2;
            *(int64_t *)a2 = v7;
            return function_15920(a1, v7 * a3, v6);
        }
        goto lab_0x159eb;
    }
  lab_0x159f8:;
    // 0x159f8
    int64_t v8; // 0x15993
    int64_t v9 = v8; // 0x15a12
    v3 = 128 / a3 + (int64_t)(a3 >= 129);
    goto lab_0x159d5;
  lab_0x159d5:;
    uint128_t v10 = (int128_t)v3 * (int128_t)a3; // 0x159d8
    int64_t v11 = v10; // 0x159d8
    int64_t v12 = v3; // 0x159e4
    v1 = v11;
    v2 = v10 > 0xffffffffffffffff;
    int64_t v13 = v9; // 0x159e4
    v4 = v3;
    if (v11 > -1 == v10 <= 0xffffffffffffffff) {
        // 0x159c1
        *(int64_t *)a2 = v12;
        return function_15920(a1, v12 * a3, 0);
    }
    goto lab_0x159eb;
  lab_0x159eb:;
    int64_t v14 = v13 - 8; // 0x159eb
    *(int64_t *)v14 = v1;
    function_15b30(a1, v4, v2);
    v8 = v14;
    goto lab_0x159f8;
}

// Address range: 0x16893 - 0x168a8
int64_t function_16893(int64_t a1, int64_t a2) {
    // 0x16893
    int64_t v1; // 0x16893
    return function_16800(lgetfilecon() & 0xffffffff, a2, v1);
}

// Address range: 0xf093 - 0xf0f7
int64_t function_f093(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0xf097
    int64_t v2 = a1; // 0xf0a3
    int64_t v3 = 0; // 0xf0a3
    int64_t v4 = 0; // 0xf0a3
    int64_t v5 = 0; // 0xf0a3
    int64_t v6 = 0; // 0xf0a3
    int64_t v7; // 0xf093
    int64_t v8; // 0xf093
    int64_t v9; // 0xf093
    if (v1 > a1) {
        while (true) {
          lab_0xf0b9_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0xf0b0;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0xf0bf
                int64_t v13 = v10 + 1; // 0xf0c3
                int64_t v14 = v11 + 1; // 0xf0c7
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0xf0ce
                int64_t v16 = v14; // 0xf0ce
                if (v12 == 0) {
                    goto lab_0xf0b0;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0xf0d0
                    int64_t v18 = v16 + 1; // 0xf0d4
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0xf0d0
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0xf0dd
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0xf0e6
                        break;
                    }
                    goto lab_0xf0b9_2;
                }
            }
        }
    }
  lab_0xf0e6:
    // 0xf0e6
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0xf0ef
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0xf0ee
    return 0;
  lab_0xf0b0:;
    int64_t v20 = v8 + 16; // 0xf0b0
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0xf0e6
        goto lab_0xf0e6;
    }
    goto lab_0xf0b9_2;
    // 0xf0b9
    goto lab_0xf0b9_2;
}

// Address range: 0xc9f3 - 0xcaa8
int64_t function_c9f3(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xc9fb
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xca04
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xca0d
    int64_t v4; // 0xc9f3
    if (v2 == 3 || v2 == 9) {
        // 0xca40
        if ((char)v3 == 0) {
            // 0xca36
            return 1;
        }
    } else {
        // 0xca28
        v4 = 1;
        if ((char)v3 != 0) {
            // 0xca36
            return 0xffffffff;
        }
    }
    int64_t v5 = v3 | (int64_t)(v1 & -256);
    int64_t v6 = (int64_t)(v2 & -256) | (int64_t)(v2 == 9); // 0xca21
    int64_t v7 = strrchr(a2, 46, v5, v6); // 0xca4c
    int64_t v8 = strrchr(a2, 46, v5, v6); // 0xca5d
    int64_t v9 = v8 == 0 ? (int64_t)&g6 : v8; // 0xca6f
    int64_t v10 = v7 == 0 ? (int64_t)&g6 : v7; // 0xca76
    int64_t v11 = function_7310(v10, v9, v5, v6, v4); // 0xca7d
    int64_t result = v11 & 0xffffffff; // 0xca82
    if ((int32_t)v11 != 0) {
        // 0xca36
        return result;
    }
    // 0xca89
    return function_7310(v10, v10, v5, v6, result);
}

// Address range: 0xc013 - 0xc056
int64_t function_c013(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 96); // 0xc014
    int64_t v2 = *(int64_t *)(a2 + 96); // 0xc01b
    if (v2 > v1) {
        // 0xc045
        return 0xffffffff;
    }
    // 0xc021
    if (v2 < v1) {
        // 0xc045
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a1 + 104) - *(int32_t *)(a2 + 104); // 0xc027
    if (result != 0) {
        // 0xc045
        return result;
    }
    // 0xc02c
    int64_t v3; // 0xc013
    int64_t v4; // 0xc013
    return function_7310(a1, a1, a2, v4, v3);
}

// Address range: 0x7903 - 0x7958
int64_t function_7903(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x7904
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x790a
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0x7913
    int64_t v4; // 0x7903
    if (v2 == 3 || v2 == 9) {
        // 0x7940
        if ((char)v3 == 0) {
            // 0x793c
            return 1;
        }
    } else {
        // 0x792e
        v4 = 1;
        if ((char)v3 != 0) {
            // 0x793c
            return 0xffffffff;
        }
    }
    // 0x7944
    return function_4a80((int16_t *)a1, a2, v3 | (int64_t)(v1 & -256), (int64_t)(v2 & -256) | (int64_t)(v2 == 9), v4);
}

// Address range: 0x168b3 - 0x168c8
int64_t function_168b3(int64_t a1, int64_t a2) {
    // 0x168b3
    int64_t v1; // 0x168b3
    return function_16800(fgetfilecon() & 0xffffffff, a2, v1);
}

// Address range: 0xa5f3 - 0xa668
int64_t function_a5f3(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xa5f4
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xa5fa
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xa603
    int64_t v4; // 0xa5f3
    if (v2 == 3 || v2 == 9) {
        // 0xa630
        if ((char)v3 == 0) {
            // 0xa62c
            return 1;
        }
    } else {
        // 0xa61e
        v4 = 1;
        if ((char)v3 != 0) {
            // 0xa62c
            return 0xffffffff;
        }
    }
    int64_t v5 = *(int64_t *)(a2 + 72); // 0xa634
    int64_t v6 = *(int64_t *)(a1 + 72); // 0xa638
    if (v6 > v5) {
        // 0xa62c
        return 0xffffffff;
    }
    int64_t v7 = v6 - v5; // 0xa638
    if (v7 != 0) {
        // 0xa650
        return v7 < 0 != ((v7 ^ v6) & (v6 ^ v5)) < 0;
    }
    // 0xa640
    return function_7310(a1, a2, v3 | (int64_t)(v1 & -256), (int64_t)(v2 & -256) | (int64_t)(v2 == 9), v4);
}

// Address range: 0x76c0 - 0x777b
int64_t function_76c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x76c0
    int64_t result; // 0x7733
    if (a1 == 0) {
        // 0x7760
        __printf_chk(1, "%*lu ", a3, a2);
        // 0x772c
        result = 0x100000000 * a3 / 0x100000000 + 1 + g57;
        g57 = result;
        return result;
    }
    int32_t v1 = (int32_t)a3 - (int32_t)function_114b0(); // 0x76e5
    int64_t v2 = v1 > 0 ? v1 : 0; // 0x76ec
    fputs_unlocked(a1, (int64_t)g43);
    int64_t v3 = strlen(a1); // 0x76f7
    int64_t v4 = g43; // 0x7708
    int64_t * v5 = (int64_t *)(v4 + 40); // 0x770f
    uint64_t v6 = *v5; // 0x770f
    int64_t v7; // 0x76c0
    int64_t v8; // 0x76c0
    int64_t v9; // 0x7719
    int64_t v10; // 0x76c0
    int64_t v11; // 0x76c0
    if (v6 >= *(int64_t *)(v4 + 48)) {
        // 0x7750
        __overflow(v4, 32, a3, v11, v10, v8);
        v7 = a3;
    } else {
        // 0x7719
        v9 = v6 + 1;
        *v5 = v9;
        *(char *)v6 = 32;
        v7 = v9;
    }
    int64_t v12 = v2 + 0xffffffff; // 0x7724
    int64_t v13 = v12 & 0xffffffff; // 0x772a
    int64_t v14 = v7; // 0x772a
    while ((int32_t)v12 != -1) {
        // 0x7708
        v4 = g43;
        v5 = (int64_t *)(v4 + 40);
        v6 = *v5;
        if (v6 >= *(int64_t *)(v4 + 48)) {
            // 0x7750
            __overflow(v4, 32, v14, v11, v10, v8);
            v7 = v14;
        } else {
            // 0x7719
            v9 = v6 + 1;
            *v5 = v9;
            *(char *)v6 = 32;
            v7 = v9;
        }
        // 0x7724
        v12 = v13 + 0xffffffff;
        v13 = v12 & 0xffffffff;
        v14 = v7;
    }
    // 0x772c
    result = v3 + v2 + 1 + g57;
    g57 = result;
    return result;
}

// Address range: 0xa883 - 0xa900
int64_t function_a883(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xa884
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xa88a
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xa893
    if (v2 == 3 || v2 == 9) {
        // 0xa8c0
        if ((char)v3 == 0) {
            // 0xa8bc
            return 1;
        }
    } else {
        // 0xa8ae
        if ((char)v3 != 0) {
            // 0xa8bc
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a2 + 112); // 0xa8c4
    int64_t v5 = *(int64_t *)(a1 + 112); // 0xa8c8
    if (v5 > v4) {
        // 0xa8bc
        return 0xffffffff;
    }
    // 0xa8ce
    if (v5 < v4) {
        // 0xa8bc
        return 1;
    }
    uint32_t v6 = (int32_t)*(int64_t *)(a2 + 120) - *(int32_t *)(a1 + 120); // 0xa8d4
    int64_t result = v6; // 0xa8d4
    if (v6 != 0) {
        // 0xa8bc
        return result;
    }
    // 0xa8da
    return function_4a80(a1, a2, v3 | (int64_t)(v1 & -256), v2 & -256 | (int32_t)(v2 == 9), result);
}

// Address range: 0xc563 - 0xc5a6
int64_t function_c563(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 128); // 0xc564
    int64_t v2 = *(int64_t *)(a1 + 128); // 0xc56b
    if (v2 > v1) {
        // 0xc595
        return 0xffffffff;
    }
    // 0xc574
    if (v2 < v1) {
        // 0xc595
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a2 + 136) - *(int32_t *)(a1 + 136); // 0xc57d
    if (result != 0) {
        // 0xc595
        return result;
    }
    // 0xc585
    int64_t v3; // 0xc563
    int64_t v4; // 0xc563
    int64_t v5; // 0xc563
    return function_4a80(a1, a2, v4, (int32_t)v5, v3);
}

// Address range: 0xc143 - 0xc176
int64_t function_c143(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 96); // 0xc144
    int64_t v2 = *(int64_t *)(a1 + 96); // 0xc148
    if (v2 > v1) {
        // 0xc16d
        return 0xffffffff;
    }
    // 0xc14e
    if (v2 < v1) {
        // 0xc16d
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a2 + 104) - *(int32_t *)(a1 + 104); // 0xc154
    if (result != 0) {
        // 0xc16d
        return result;
    }
    // 0xc159
    int64_t v3; // 0xc143
    int64_t v4; // 0xc143
    int64_t v5; // 0xc143
    return function_7310(a1, a2, v4, v5, v3);
}

// Address range: 0x77f0 - 0x7852
int64_t function_77f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_14c10(4, a3); // 0x7802
    int32_t v2 = *(int32_t *)__errno_location(); // 0x7817
    int64_t v3; // 0x77f0
    int64_t result = error(0, v2, (char *)a2, v1, v3); // 0x781b
    if ((char)a1 != 0) {
        // 0x7824
        g59 = 2;
        // 0x782e
        return result;
    }
    int64_t result2 = g59; // 0x7838
    if (g59 != 0) {
        // 0x782e
        return result2;
    }
    // 0x7842
    g59 = 1;
    return result2;
}

// Address range: 0xa7f3 - 0xa880
int64_t function_a7f3(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xa7f4
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xa7fa
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xa803
    if (v2 == 3 || v2 == 9) {
        // 0xa830
        if ((char)v3 == 0) {
            // 0xa82c
            return 1;
        }
    } else {
        // 0xa81e
        if ((char)v3 != 0) {
            // 0xa82c
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a2 + 128); // 0xa834
    int64_t v5 = *(int64_t *)(a1 + 128); // 0xa83b
    if (v5 > v4) {
        // 0xa82c
        return 0xffffffff;
    }
    // 0xa844
    if (v5 < v4) {
        // 0xa82c
        return 1;
    }
    uint32_t v6 = (int32_t)*(int64_t *)(a2 + 136) - *(int32_t *)(a1 + 136); // 0xa84d
    int64_t result = v6; // 0xa84d
    if (v6 != 0) {
        // 0xa82c
        return result;
    }
    // 0xa856
    return function_4a80(a1, a2, v3 | (int64_t)(v1 & -256), v2 & -256 | (int32_t)(v2 == 9), result);
}

// Address range: 0xf003 - 0xf009
int64_t function_f003(int64_t a1) {
    // 0xf003
    return *(int64_t *)(a1 + 16);
}

// Address range: 0x11700 - 0x1193f
int64_t function_11700(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x11700
    if (a2 < 3) {
        int64_t result2; // 0x11700
        if (a2 != 2 || (int32_t)result2 < 1) {
            // 0x11726
            int64_t result; // 0x11700
            return result;
        }
        int64_t * v1 = (int64_t *)(a1 + 8); // 0x11738
        *(int64_t *)a1 = *v1;
        *v1 = a1;
        return result2;
    }
    // 0x11768
    function_11700(a1, a2 % 2, a3, a4);
    int64_t v2; // 0x11700
    int64_t v3; // 0x11700
    int64_t v4; // 0x11700
    int64_t v5; // 0x11700
    int64_t v6; // 0x11700
    int64_t v7; // 0x11700
    int64_t v8; // 0x11832
    int64_t v9; // 0x11839
    if (a2 != 3) {
        // 0x11820
        v8 = a2 / 4;
        v9 = 8 * v8 + a1;
        function_11700(v9, -v8, a3, a4);
        int64_t v10 = function_11700(a1, v8, a3, a4); // 0x11861
        int64_t v11 = a3 + 8; // 0x11886
        v5 = 0;
        v2 = v11;
        if ((int32_t)v10 < 1) {
            // 0x118b3
            *(int64_t *)a3 = a1;
            v7 = 0;
            v6 = 1;
            v3 = v11;
            if ((a2 & -4) == 4) {
                goto lab_0x11916;
            } else {
                // 0x11880
                v5 = 1;
                v2 = a3 + 16;
                goto lab_0x11890;
            }
        } else {
            goto lab_0x11890;
        }
    } else {
        // 0x117a1
        *(int64_t *)a3 = a1;
        v4 = a1;
        goto lab_0x117a7;
    }
  lab_0x11890:
    // 0x11890
    *(int64_t *)(v2 - 8) = *(int64_t *)v9;
    v7 = v8;
    v6 = v5;
    v3 = v2;
    if (0 != v8 + 1) {
        int64_t v12; // 0x11700
        int64_t v13; // 0x11700
        *(int64_t *)v13 = *(int64_t *)(8 * v12 + a1);
        v7 = v8;
        int64_t v14; // 0x11700
        v6 = v14;
        v3 = v13 + 8;
        while (0 != v12 + 1) {
            int64_t v15 = v13;
            int64_t v16 = v12;
            int64_t v17 = *(int64_t *)(8 * v16 + a1); // 0x1189f
            int64_t v18 = v15 + 8; // 0x118a6
            *(int64_t *)v15 = v17;
            int64_t v19 = v16 + 1; // 0x11894
            v12 = v19;
            v13 = v18;
            v7 = v8;
            v6 = v14;
            v3 = v18;
        }
    }
    goto lab_0x11916;
  lab_0x117a7:;
    int64_t v23 = 0; // 0x117ce
    int64_t v24 = 1; // 0x117ce
    if ((int32_t)a1 < 1) {
        // 0x117f8
        *(int64_t *)a1 = v4;
        v23 = 1;
        v24 = 2;
        if ((a2 & -2) == 2) {
            // 0x11726
            return 1;
        }
    }
    int64_t v25 = a1 - 8;
    int64_t v26 = v23;
    int64_t v27 = 8 * v24; // 0x117d0
    *(int64_t *)(v27 + v25) = *(int64_t *)a1;
    int64_t v28 = 1; // 0x117d5
    int64_t v29 = v27; // 0x117de
    int64_t v22; // 0x11700
    int64_t v21; // 0x11700
    int64_t result3; // 0x118ff
    if (v28 == a2) {
        // 0x118d0
        result3 = memcpy(v29 + a1, 8 * v26 + a3, 8 * -v26, a3, v21, v22);
        return result3;
    }
    int64_t v30 = v24 + 1; // 0x117eb
    int64_t v31 = 8 * v30; // 0x117d0
    *(int64_t *)(v31 + v25) = *(int64_t *)(8 * v28 + a1);
    int64_t v32 = v28 + 1; // 0x117d5
    int64_t v33 = v32; // 0x117de
    int64_t v34 = v30; // 0x117de
    v29 = v31;
    while (v32 != a2) {
        // 0x117e4
        v30 = v34 + 1;
        v31 = 8 * v30;
        *(int64_t *)(v31 + v25) = *(int64_t *)(8 * v33 + a1);
        v32 = v33 + 1;
        v33 = v32;
        v34 = v30;
        v29 = v31;
    }
    // 0x118d0
    result3 = memcpy(v29 + a1, 8 * v26 + a3, 8 * -v26, a3, v21, v22);
    return result3;
  lab_0x11916:;
    int64_t v20 = 8 * (v7 - v6); // 0x11929
    memcpy(v3, 8 * v6 + a1, v20, a4, v21, v22);
    v4 = v20;
    goto lab_0x117a7;
}

// Address range: 0xa5b3 - 0xa5e6
int64_t function_a5b3(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 72); // 0xa5b4
    int64_t v2 = *(int64_t *)(a1 + 72); // 0xa5b8
    if (v2 > v1) {
        // 0xa5e0
        return 0xffffffff;
    }
    int64_t v3 = v2 - v1; // 0xa5b8
    if (v3 != 0) {
        // 0xa5d0
        return v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0;
    }
    // 0xa5c0
    int64_t v4; // 0xa5b3
    int64_t v5; // 0xa5b3
    int64_t v6; // 0xa5b3
    return function_7310(a1, a2, v5, v6, v4);
}

// Address range: 0xc0f3 - 0xc136
int64_t function_c0f3(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 112); // 0xc0f4
    int64_t v2 = *(int64_t *)(a2 + 112); // 0xc0fb
    if (v2 > v1) {
        // 0xc125
        return 0xffffffff;
    }
    // 0xc101
    if (v2 < v1) {
        // 0xc125
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a1 + 120) - *(int32_t *)(a2 + 120); // 0xc107
    if (result != 0) {
        // 0xc125
        return result;
    }
    // 0xc10c
    int64_t v3; // 0xc0f3
    int64_t v4; // 0xc0f3
    return function_7310(a1, a1, a2, v4, v3);
}

// Address range: 0x7c73 - 0x7cc8
int64_t function_7c73(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x7c74
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x7c7a
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0x7c83
    int64_t v4; // 0x7c73
    if (v2 == 9 || v2 == 3) {
        // 0x7cb0
        if ((char)v3 == 0) {
            // 0x7cac
            return 1;
        }
    } else {
        // 0x7c9e
        v4 = 1;
        if ((char)v3 != 0) {
            // 0x7cac
            return 0xffffffff;
        }
    }
    // 0x7cb4
    return function_e6e0(a1, a2, v3 | (int64_t)(v1 & -256), (int64_t)(v2 & -256) | (int64_t)(v2 == 3), v4);
}

// Address range: 0xcced - 0xccf5
int64_t function_cced(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xcced
    int64_t result; // 0xcced
    *(char *)result = 2 * (char)result;
    char * v1 = (char *)(result - 119); // 0xccef
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x15aa3 - 0x15ae0
int64_t function_15aa3(int64_t a1, int64_t a2) {
    if (a2 * a1 < 0) {
        // 0x15acd
        return function_15b30(a1, a2, 0);
    }
    int64_t result = calloc(); // 0x15abe
    if (result == 0) {
        // 0x15acd
        return function_15b30(a1, a2, 0);
    }
    // 0x15ac8
    return result;
}

// Address range: 0xd893 - 0xd8fb
int64_t function_d893(int64_t a1, int64_t a2, int64_t a3) {
    if (a1 == a2 || a3 == 0) {
        // 0xd8f8
        return 0;
    }
    int64_t v1 = 0; // 0xd8a4
    unsigned char v2 = *(char *)(v1 + a1); // 0xd8bd
    int64_t v3 = v2; // 0xd8bd
    bool v4 = v2 == 90 | (int32_t)v2 < 90; // 0xd8ca
    int64_t v5 = v4 ? v3 + 32 : v3;
    unsigned char v6 = *(char *)(v1 + a2); // 0xd8d3
    bool v7 = v6 == 90 | (int32_t)v6 < 90; // 0xd8e3
    while (v1 != a3 - 1 && v5 != 0) {
        // 0xd8b4
        v1++;
        if ((v4 ? v2 + 32 : v2) != (v7 ? v6 + 32 : v6)) {
            // break -> 0xd8f1
            break;
        }
        v2 = *(char *)(v1 + a1);
        v3 = v2;
        v4 = v2 == 90 | (int32_t)v2 < 90;
        v5 = v4 ? v3 + 32 : v3;
        v6 = *(char *)(v1 + a2);
        v7 = v6 == 90 | (int32_t)v6 < 90;
    }
    int64_t v8 = v6; // 0xd8d3
    return v5 - (v7 ? v8 + 32 : v8) & 0xffffffff;
}

// Address range: 0x7b83 - 0x7c00
int64_t function_7b83(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x7b84
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x7b8a
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0x7b93
    if (v2 == 3 || v2 == 9) {
        // 0x7bc0
        if ((char)v3 == 0) {
            // 0x7bbc
            return 1;
        }
    } else {
        // 0x7bae
        if ((char)v3 != 0) {
            // 0x7bbc
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a2 + 96); // 0x7bc4
    int64_t v5 = *(int64_t *)(a1 + 96); // 0x7bc8
    if (v5 > v4) {
        // 0x7bbc
        return 0xffffffff;
    }
    // 0x7bce
    if (v5 < v4) {
        // 0x7bbc
        return 1;
    }
    uint32_t v6 = (int32_t)*(int64_t *)(a2 + 104) - *(int32_t *)(a1 + 104); // 0x7bd4
    int64_t result = v6; // 0x7bd4
    if (v6 != 0) {
        // 0x7bbc
        return result;
    }
    // 0x7bda
    return function_4a80((int16_t *)a1, a2, v3 | (int64_t)(v1 & -256), (int64_t)(v2 & -256) | (int64_t)(v2 == 9), result);
}

// Address range: 0xc293 - 0xc320
int64_t function_c293(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xc294
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xc29a
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xc2a3
    if (v2 == 3 || v2 == 9) {
        // 0xc2d0
        if ((char)v3 == 0) {
            // 0xc2cc
            return 1;
        }
    } else {
        // 0xc2be
        if ((char)v3 != 0) {
            // 0xc2cc
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a2 + 128); // 0xc2d4
    int64_t v5 = *(int64_t *)(a1 + 128); // 0xc2db
    if (v5 > v4) {
        // 0xc2cc
        return 0xffffffff;
    }
    // 0xc2e4
    if (v5 < v4) {
        // 0xc2cc
        return 1;
    }
    uint32_t v6 = (int32_t)*(int64_t *)(a2 + 136) - *(int32_t *)(a1 + 136); // 0xc2ed
    int64_t result = v6; // 0xc2ed
    if (v6 != 0) {
        // 0xc2cc
        return result;
    }
    // 0xc2f6
    return function_7310(a1, a2, v3 | (int64_t)(v1 & -256), (int64_t)(v2 & -256) | (int64_t)(v2 == 9), result);
}

// Address range: 0x7863 - 0x7896
int64_t function_7863(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 72); // 0x7864
    int64_t v2 = *(int64_t *)(a1 + 72); // 0x7868
    if (v2 > v1) {
        // 0x7890
        return 0xffffffff;
    }
    int64_t v3 = v2 - v1; // 0x7868
    if (v3 != 0) {
        // 0x7880
        return v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0;
    }
    // 0x7870
    int64_t v4; // 0x7863
    int64_t v5; // 0x7863
    int64_t v6; // 0x7863
    return function_4a80((int16_t *)a1, a2, v5, v6, v4);
}

// Address range: 0x7c03 - 0x7c68
int64_t function_7c03(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x7c04
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x7c0d
    int64_t v3 = a4 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0x7c16
    int64_t v4; // 0x7c03
    if (v2 == 9 || v2 == 3) {
        // 0x7c48
        if ((char)v3 == 0) {
            // 0x7c41
            return 1;
        }
    } else {
        // 0x7c33
        v4 = 1;
        if ((char)v3 != 0) {
            // 0x7c41
            return 0xffffffff;
        }
    }
    // 0x7c4c
    return function_e6e0(a1, a1, a2, v3 | (int64_t)(v1 & -256), v4);
}

// Address range: 0xfe53 - 0xfe7d
int64_t function_fe53(int64_t a1, int64_t a2) {
    // 0xfe53
    if (*(int64_t *)(a1 + 8) != *(int64_t *)(a2 + 8) || *(int64_t *)(a1 + 16) != *(int64_t *)(a2 + 16)) {
        // 0xfe5e
        return 0;
    }
    // 0xfe72
    return function_15230(a1, a2);
}

// Address range: 0x6873 - 0x68a9
int64_t function_6873(void) {
    // 0x6873
    if (g47 != 0) {
        // 0x68a8
        int64_t result; // 0x6873
        return result;
    }
    // 0x687d
    int64_t result2; // 0x6873
    if (*(int64_t *)0x22ff0 != 0) {
        // 0x688b
        result2 = __cxa_finalize(*(int64_t *)0x23008);
    }
    // 0x6897
    g47 = 1;
    return result2;
}

// Address range: 0x67d3 - 0x6829
int64_t function_67d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x67d3
    int64_t v1; // 0x67d3
    __libc_start_main(0x4df0, (int32_t)a4, (char **)&v1, (void (*)())0x174e0, (void (*)())0x17550, (void (*)())a3);
    __asm_hlt();
    return 0x23268;
}

// Address range: 0xf453 - 0xf481
int64_t function_f453(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0xf45b
    if (v1 == 0) {
        // 0xf47d
        return 0;
    }
    int64_t result = 0; // 0xf45b
    v2++;
    char v3 = *(char *)v2; // 0xf473
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0xf47d
    return result;
}

// Address range: 0x15913 - 0x15916
int64_t function_15913(void) {
    // 0x15913
    int64_t v1; // 0x15913
    int64_t v2; // 0x15913
    int64_t v3; // 0x15913
    return function_158c0(v1, v2, v3);
}

// Address range: 0x7963 - 0x79c8
int64_t function_7963(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x7964
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x796d
    bool v3 = v2 == 3 | v2 == 9;
    if (v3) {
        // 0x79a8
        if (v1 != 3 && v1 != 9) {
            // 0x79a1
            return 1;
        }
    } else {
        // 0x7993
        if (v1 == 3 || v1 == 9) {
            // 0x79a1
            return 0xffffffff;
        }
    }
    // 0x79a1
    return (int64_t)v3 | (int64_t)(v1 & -256);
}

// Address range: 0x16963 - 0x169c5
int64_t function_16963(int64_t a1) {
    // 0x16963
    __fprintf_chk(g11, 1, "%s\n", dcgettext(0, (int64_t)"memory exhausted", 5));
    exit(g8);
    return g9;
}

// Address range: 0xcf93 - 0xcf9b
int64_t function_cf93(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xcf93
    int64_t v1; // 0xcf93
    int32_t * v2 = (int32_t *)(4 * a4 + 37 + v1); // 0xcf95
    *v2 = *v2 - 1;
    return function_cffd();
}

// Address range: 0x68f3 - 0x6905
int64_t function_68f3(int64_t a1) {
    uint32_t result = g62; // 0x68f4
    if (result == 0) {
        // 0x68fe
        g62 = a1;
    }
    // 0x6904
    return result;
}

// Address range: 0xc643 - 0xc686
int64_t function_c643(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 128); // 0xc644
    int64_t v2 = *(int64_t *)(a2 + 128); // 0xc64e
    if (v2 > v1) {
        // 0xc67d
        return 0xffffffff;
    }
    // 0xc657
    if (v2 < v1) {
        // 0xc67d
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a1 + 136) - *(int32_t *)(a2 + 136); // 0xc660
    if (result != 0) {
        // 0xc67d
        return result;
    }
    // 0xc668
    int64_t v3; // 0xc643
    int64_t v4; // 0xc643
    return function_4a80(a1, a1, a2, (int32_t)v4, v3);
}

// Address range: 0x15833 - 0x158b4
int64_t function_15833(int64_t a1) {
    // 0x15833
    int64_t v1; // 0x15833
    __printf_chk(1, dcgettext(0, (int64_t *)"\nReport bugs to: %s\n", 5), "bug-coreutils@gnu.org", v1);
    __printf_chk(1, dcgettext(0, (int64_t *)"%s home page: <%s>\n", 5), "GNU coreutils", (int64_t)"https://www.gnu.org/software/coreutils/");
    int64_t v2 = dcgettext(0, (int64_t *)"General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x158a3
    return function_4a50(v2, g19);
}

// Address range: 0x14923 - 0x14939
int64_t function_14923(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g24 + 4 : a1 + 4); // 0x14932
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}

// Address range: 0x16c63 - 0x16c86
int64_t function_16c63(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x16c64
    if (v1 == 0) {
        // 0x16c82
        return 0;
    }
    int64_t result = 0; // 0x16c6e
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x16c76
    result += *(int64_t *)v2 - v2;
    while (v3 != 0) {
        // 0x16c70
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
        result += *(int64_t *)v2 - v2;
    }
    // 0x16c82
    return result;
}

// Address range: 0xc323 - 0xc3a8
int64_t function_c323(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xc324
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xc32d
    int64_t v3 = a4 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xc336
    if (v2 == 3 || v2 == 9) {
        // 0xc368
        if ((char)v3 == 0) {
            // 0xc361
            return 1;
        }
    } else {
        // 0xc353
        if ((char)v3 != 0) {
            // 0xc361
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a1 + 112); // 0xc36c
    int64_t v5 = *(int64_t *)(a2 + 112); // 0xc370
    if (v5 > v4) {
        // 0xc361
        return 0xffffffff;
    }
    // 0xc376
    if (v5 < v4) {
        // 0xc361
        return 1;
    }
    uint32_t v6 = (int32_t)*(int64_t *)(a1 + 120) - *(int32_t *)(a2 + 120); // 0xc37c
    int64_t result = v6; // 0xc37c
    if (v6 != 0) {
        // 0xc361
        return result;
    }
    // 0xc382
    return function_7310(a1, a1, a2, v3 | (int64_t)(v1 & -256), result);
}

// Address range: 0x16800 - 0x1686a
int64_t function_16800(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a1; // 0x16801
    if (v1 == 0) {
        // 0x16858
        *(int32_t *)__errno_location() = 95;
        return 0xffffffff;
    }
    if (v1 != 10) {
        // 0x1680c
        return a1 & 0xffffffff;
    }
    // 0x16810
    bool v2; // 0x16800
    int64_t v3 = v2 ? -1 : 1; // 0x16825
    int64_t v4 = (int64_t)"unlabeled"; // 0x16800
    int64_t v5 = a2; // 0x16825
    int64_t v6 = 10; // 0x16825
    unsigned char v7 = *(char *)v5; // 0x16825
    char v8 = *(char *)v4; // 0x16825
    v5 += v3;
    v6--;
    char v9 = v8; // 0x16825
    bool v10 = false; // 0x16825
    while (v7 == v8) {
        // 0x16810
        v4 += v3;
        v9 = v7;
        v10 = true;
        if (v6 == 0) {
            // break ->
            break;
        }
        v7 = *(char *)v5;
        v8 = *(char *)v4;
        v5 += v3;
        v6--;
        v9 = v8;
        v10 = false;
    }
    unsigned char v11 = v9;
    uint64_t v12 = (int64_t)!((v7 < v11 | v10)) - (int64_t)(v7 < v11); // 0x1682a
    if ((char)v12 != 0) {
        // 0x1680c
        return a1 & 0xffffffff;
    }
    // 0x16831
    freecon(a2, v5, v12 % 256 | a3 & -256, v6);
    *(int64_t *)a2 = 0;
    *(int32_t *)__errno_location() = 61;
    return 0xffffffff;
}

// Address range: 0x7363 - 0x7372
int64_t function_7363(int64_t a1, int64_t a2) {
    // 0x7363
    int64_t v1; // 0x7363
    int64_t v2; // 0x7363
    return function_e6e0(a1, a1, v1, v2, a2);
}

// Address range: 0xdfc3 - 0xdfcc
int64_t function_dfc3(int64_t a1) {
    // 0xdfc3
    g19 = a1;
    int64_t result; // 0xdfc3
    return result;
}

// Address range: 0xcbb3 - 0xcc9b
int64_t function_cbb3(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xcbc1
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xcbc7
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xcbd0
    int64_t v4; // 0xcbb3
    if (v2 == 3 || v2 == 9) {
        // 0xcc10
        if ((char)v3 == 0) {
            // 0xcbfd
            return 1;
        }
    } else {
        // 0xcbeb
        v4 = 1;
        if ((char)v3 != 0) {
            // 0xcbfd
            return 0xffffffff;
        }
    }
    int64_t v5 = v3 | (int64_t)(v1 & -256);
    int64_t v6 = (int64_t)(v2 & -256) | (int64_t)(v2 == 9); // 0xcbe4
    int64_t v7 = strrchr(a1, 46, v5, v6); // 0xcc1f
    int64_t v8 = strrchr(46, 46, v5, v6); // 0xcc32
    int64_t v9; // 0xcbb3
    int64_t v10; // 0xcbb3
    if (v8 == 0) {
        // 0xcc78
        v9 = v7;
        v10 = &g6;
        if (v7 == 0) {
            // 0xcc5c
            return strcmp(a1, 46, v5, (int32_t)v6, v4);
        }
    } else {
        // 0xcc3f
        v9 = v7 == 0 ? (int64_t)&g6 : v7;
        v10 = v8;
    }
    int32_t v11 = v6;
    int64_t v12 = strcmp(v9, v10, v5, v11, v4); // 0xcc50
    int64_t result = v12 & 0xffffffff; // 0xcc55
    if ((int32_t)v12 != 0) {
        // 0xcbfd
        return result;
    }
    // 0xcc5c
    return strcmp(a1, 46, v5, v11, result);
}

// Address range: 0x78a3 - 0x78f8
int64_t function_78a3(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x78a4
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x78aa
    bool v3 = v2 == 3 | v2 == 9;
    if (v3) {
        // 0x78e0
        if (v1 != 3 && v1 != 9) {
            // 0x78dc
            return 1;
        }
    } else {
        // 0x78ce
        if (v1 == 3 || v1 == 9) {
            // 0x78dc
            return 0xffffffff;
        }
    }
    // 0x78dc
    return (int64_t)v3 | (int64_t)(v1 & -256);
}

// Address range: 0xc4d3 - 0xc506
int64_t function_c4d3(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 112); // 0xc4d4
    int64_t v2 = *(int64_t *)(a1 + 112); // 0xc4d8
    if (v2 > v1) {
        // 0xc4fd
        return 0xffffffff;
    }
    // 0xc4de
    if (v2 < v1) {
        // 0xc4fd
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a2 + 120) - *(int32_t *)(a1 + 120); // 0xc4e4
    if (result != 0) {
        // 0xc4fd
        return result;
    }
    // 0xc4e9
    int64_t v3; // 0xc4d3
    int64_t v4; // 0xc4d3
    int64_t v5; // 0xc4d3
    return function_4a80(a1, a2, v4, (int32_t)v5, v3);
}

// Address range: 0xf103 - 0xf257
int64_t function_f103(uint64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0xf117
    uint64_t v2 = *(int64_t *)(a1 + 16); // 0xf11f
    uint64_t v3 = *(int64_t *)(a1 + 24); // 0xf123
    if (v1 > a1) {
        while (true) {
            int64_t v4 = a1; // 0xf130
            while (*(int64_t *)v4 == 0) {
                // 0xf130
                v4 += 16;
                if (v4 >= v1) {
                    // break (via goto) -> 0xf16d
                    goto lab_0xf16d;
                }
            }
        }
    }
  lab_0xf16d:;
    // 0xf16d
    int128_t v5; // 0xf103
    __fprintf_chk(a2, 1, (int64_t)"# entries:         %lu\n", *(int64_t *)(a1 + 32), v5);
    __fprintf_chk(a2, 1, (int64_t)"# buckets:         %lu\n", v2, v5);
    __asm_pxor(v5, v5);
    int128_t v6; // 0xf103
    int128_t v7; // 0xf103
    if (v3 < 0) {
        int128_t v8 = __asm_cvtsi2sd(v3 / 2 | v3 % 2); // 0xf223
        int128_t v9 = __asm_mulsd(__asm_addsd(v8, v8), 0x4059000000000000); // 0xf22c
        v6 = v9;
        v7 = v9;
        if (v2 >= 0) {
            goto lab_0xf1ba;
        } else {
            goto lab_0xf239;
        }
    } else {
        int128_t v10 = __asm_mulsd(__asm_cvtsi2sd(v3), 0x4059000000000000); // 0xf1ad
        v6 = v10;
        v7 = v10;
        if (v2 < 0) {
            goto lab_0xf239;
        } else {
            goto lab_0xf1ba;
        }
    }
  lab_0xf1ba:;
    // 0xf1ba
    int128_t v11; // 0xf103
    __asm_pxor(v11, v11);
    int128_t v12 = v6; // 0xf1be
    int128_t v13 = __asm_cvtsi2sd(v2); // 0xf1be
    goto lab_0xf1c3;
  lab_0xf239:
    // 0xf239
    __asm_pxor(v11, v11);
    int128_t v15 = __asm_cvtsi2sd(v2 / 2 | v2 % 2); // 0xf249
    v12 = v7;
    v13 = __asm_addsd(v15, v15);
    goto lab_0xf1c3;
  lab_0xf1c3:;
    int128_t v14 = __asm_divsd(v12, v13); // 0xf1c3
    __fprintf_chk(a2, 1, (int64_t)"# buckets used:    %lu (%.2f%%)\n", v3, v14);
    return __fprintf_chk(a2, 1, (int64_t)"max bucket length: %lu\n", 0, v14);
}

// Address range: 0xf3d3 - 0xf448
int64_t function_f3d3(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0xf3e5
    int64_t result = 0; // 0xf3e9
    if (v1 <= a1) {
      lab_0xf409:
        // 0xf409
        return result;
    }
    int64_t v2 = a1; // 0xf3ff
    int64_t v3 = 0;
    int64_t v4 = v3; // 0xf3fd
    int64_t v5 = v2; // 0xf3fd
    int64_t v6 = v3; // 0xf3fd
    int64_t v7; // 0xf3d3
    int64_t v8; // 0xf428
    int64_t v9; // 0xf42c
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0xf428
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0xf438
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0xf428
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
        }
    }
    int64_t result2 = v4;
    v2 += 16;
    while (v1 > v2) {
        // 0xf3f7
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0xf428
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0xf438
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0xf428
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0xf3ff
        result2 = v4;
        v2 += 16;
    }
    // 0xf409
    return result2;
}

// Address range: 0xc5b3 - 0xc5f6
int64_t function_c5b3(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 96); // 0xc5b4
    int64_t v2 = *(int64_t *)(a2 + 96); // 0xc5bb
    if (v2 > v1) {
        // 0xc5e5
        return 0xffffffff;
    }
    // 0xc5c1
    if (v2 < v1) {
        // 0xc5e5
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a1 + 104) - *(int32_t *)(a2 + 104); // 0xc5c7
    if (result != 0) {
        // 0xc5e5
        return result;
    }
    // 0xc5cc
    int64_t v3; // 0xc5b3
    int64_t v4; // 0xc5b3
    return function_4a80(a1, a1, a2, (int32_t)v4, v3);
}

// Address range: 0x14b03 - 0x14b93
int64_t function_14b03(void) {
    uint32_t v1 = g13; // 0x14b04
    int64_t v2 = v1; // 0x14b04
    int64_t v3 = (int64_t)g14; // 0x14b0c
    int64_t v4 = v2; // 0x14b18
    int64_t v5; // 0x14b03
    if (v1 >= 2) {
        int64_t v6 = (int64_t)&g17;
        int64_t v7 = v6 + 16; // 0x14b33
        v4 = free(*(int64_t *)v6, v5);
        while (v7 != v3 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x14b30
            v6 = v7;
            v7 = v6 + 16;
            v4 = free(*(int64_t *)v6, v5);
        }
    }
    int64_t v8 = v4; // 0x14b50
    if (g15 != (int64_t)&g23) {
        // 0x14b52
        v8 = free(g15, v5);
        *(int64_t *)&g17 = (int64_t)&g23;
        g16 = 256;
    }
    int64_t result = v8; // 0x14b73
    if (g14 != (int64_t *)&g16) {
        // 0x14b75
        result = free(v3, v5);
        *(int64_t *)&g14 = (int64_t)&g16;
    }
    // 0x14b84
    g13 = 1;
    return result;
}

// Address range: 0xc063 - 0xc0a6
int64_t function_c063(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 128); // 0xc064
    int64_t v2 = *(int64_t *)(a1 + 128); // 0xc06b
    if (v2 > v1) {
        // 0xc095
        return 0xffffffff;
    }
    // 0xc074
    if (v2 < v1) {
        // 0xc095
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a2 + 136) - *(int32_t *)(a1 + 136); // 0xc07d
    if (result != 0) {
        // 0xc095
        return result;
    }
    // 0xc085
    int64_t v3; // 0xc063
    int64_t v4; // 0xc063
    int64_t v5; // 0xc063
    return function_7310(a1, a2, v4, v5, v3);
}

// Address range: 0xebc3 - 0xebcb
int64_t function_ebc3(int64_t a1, int64_t a2) {
    // 0xebc3
    int64_t v1; // 0xebc3
    return v1 & -256 | (int64_t)(bool)(a2 == a1);
}

// Address range: 0xf033 - 0xf089
int64_t function_f033(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0xf037
    int64_t result = 0; // 0xf041
    if (v1 <= a1) {
      lab_0xf085:
        // 0xf085
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0xf048
    while (*(int64_t *)v3 == 0) {
        // 0xf048
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0xf057
    int64_t v6 = v5; // 0xf063
    int64_t v7 = 1; // 0xf063
    int64_t v8; // 0xf033
    int64_t v9; // 0xf068
    int64_t v10; // 0xf06c
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v6 = v9;
        v8 = v10;
        v7 = v10;
        while (v9 != 0) {
            // 0xf068
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v6 = v9;
            v8 = v10;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0xf078
    int64_t v12 = v3 + 16; // 0xf07c
    while (v12 < v1) {
        // 0xf051
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0xf048
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0xf057
        v5 = *(int64_t *)(v3 + 8);
        v6 = v5;
        v7 = 1;
        if (v5 != 0) {
            v9 = *(int64_t *)(v6 + 8);
            v10 = 2;
            v6 = v9;
            v8 = v10;
            v7 = v10;
            while (v9 != 0) {
                // 0xf068
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v6 = v9;
                v8 = v10;
                v7 = v10;
            }
        }
        // 0xf075
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0xf085
    return result2;
}

// Address range: 0xfe33 - 0xfe41
int64_t function_fe33(int64_t a1, uint64_t a2, int64_t a3) {
    // 0xfe33
    return *(int64_t *)(a1 + 8) % a2;
}

// Address range: 0xc723 - 0xc7a8
int64_t function_c723(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xc724
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xc72d
    int64_t v3 = a4 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xc736
    if (v2 == 3 || v2 == 9) {
        // 0xc768
        if ((char)v3 == 0) {
            // 0xc761
            return 1;
        }
    } else {
        // 0xc753
        if ((char)v3 != 0) {
            // 0xc761
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a1 + 112); // 0xc76c
    int64_t v5 = *(int64_t *)(a2 + 112); // 0xc770
    if (v5 > v4) {
        // 0xc761
        return 0xffffffff;
    }
    // 0xc776
    if (v5 < v4) {
        // 0xc761
        return 1;
    }
    uint32_t v6 = (int32_t)*(int64_t *)(a1 + 120) - *(int32_t *)(a2 + 120); // 0xc77c
    int64_t result = v6; // 0xc77c
    if (v6 != 0) {
        // 0xc761
        return result;
    }
    // 0xc782
    return function_4a80(a1, a1, a2, v1 & -256 | (int32_t)v3, result);
}

// Address range: 0x17303 - 0x17337
int64_t function_17303(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = a1;
    int64_t v2 = a1; // 0x1730a
    if (v1 == 0) {
        // 0x17330
        return 0;
    }
    uint64_t v3 = 0;
    v2++;
    int64_t v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v1; // 0x17318
    char v5 = *(char *)v2; // 0x1731b
    while (v5 != 0) {
        // 0x17310
        v3 = v4;
        v2++;
        v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v5;
        v5 = *(char *)v2;
    }
    // 0x17323
    return v4 % a2;
}

// Address range: 0xa533 - 0xa5b0
int64_t function_a533(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xa534
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xa53d
    bool v3 = v2 == 3 | v2 == 9;
    int64_t v4; // 0xa533
    if (v3) {
        // 0xa578
        if (v1 != 3 && v1 != 9) {
            // 0xa571
            return 1;
        }
    } else {
        // 0xa563
        v4 = 1;
        if (v1 == 3 || v1 == 9) {
            // 0xa571
            return 0xffffffff;
        }
    }
    int64_t v5 = *(int64_t *)(a1 + 72); // 0xa57c
    int64_t v6 = *(int64_t *)(a2 + 72); // 0xa580
    if (v6 > v5) {
        // 0xa571
        return 0xffffffff;
    }
    int64_t v7 = v6 - v5; // 0xa580
    if (v7 != 0) {
        // 0xa598
        return v7 < 0 != ((v7 ^ v6) & (v6 ^ v5)) < 0;
    }
    // 0xa588
    return function_4a80(a1, a1, (int64_t)v3 | (int64_t)(v1 & -256), (int32_t)v5, v4);
}

// Address range: 0x6b33 - 0x6b39
int64_t function_6b33(void) {
    // 0x6b33
    int64_t v1; // 0x6b33
    return function_46d0(v1);
}

// Address range: 0x10f23 - 0x10fbc
int64_t function_10f23(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 20; // 0x10f24
    *(char *)v1 = 0;
    int64_t result = v1; // 0x10f39
    if (a1 >= 0) {
        result--;
        *(char *)result = (char)a1 + 48;
        // 0x10f66
        return result;
    }
    int64_t v2 = v1;
    int64_t v3 = v2 - 1; // 0x10f86
    int64_t v4 = a1 / 0x8000000000000000; // 0x10f98
    *(char *)v3 = 48 - (char)a1 + 10 * (char)v4;
    while (v4 != 0) {
        // 0x10f80
        v2 = v3;
        uint64_t v5 = v4;
        v3 = v2 - 1;
        v4 = v5 / 0x8000000000000000;
        *(char *)v3 = 48 - (char)v5 + 10 * (char)v4;
    }
    int64_t result2 = v2 - 2; // 0x10faf
    *(char *)result2 = 45;
    return result2;
}

// Address range: 0xc3b3 - 0xc448
int64_t function_c3b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xc3b4
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xc3bd
    int64_t v3 = a4 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xc3c6
    if (v2 == 3 || v2 == 9) {
        // 0xc3f8
        if ((char)v3 == 0) {
            // 0xc3f1
            return 1;
        }
    } else {
        // 0xc3e3
        if ((char)v3 != 0) {
            // 0xc3f1
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a1 + 128); // 0xc3fc
    int64_t v5 = *(int64_t *)(a2 + 128); // 0xc403
    if (v5 > v4) {
        // 0xc3f1
        return 0xffffffff;
    }
    // 0xc40c
    if (v5 < v4) {
        // 0xc3f1
        return 1;
    }
    uint32_t v6 = (int32_t)*(int64_t *)(a1 + 136) - *(int32_t *)(a2 + 136); // 0xc415
    int64_t result = v6; // 0xc415
    if (v6 != 0) {
        // 0xc3f1
        return result;
    }
    // 0xc41e
    return function_7310(a1, a1, a2, v3 | (int64_t)(v1 & -256), result);
}

// Address range: 0x17013 - 0x17021
int64_t function_17013(int64_t a1) {
    // 0x17013
    if (a1 == 1) {
        // 0x17020
        int64_t result; // 0x17013
        return result;
    }
    // 0x1701a
    return function_16cc0(a1);
}

// Address range: 0x169f0 - 0x16a80
int64_t function_169f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 == 0 ? 15 : a3 - 1;
    *(int64_t *)(a1 + 48) = v1;
    *(int64_t *)a1 = a2 == 0 ? (int64_t)&g13 : a2;
    *(int64_t *)(a1 + 8) = (int64_t)&g13;
    int64_t v2 = v1 + (int64_t)&g13 + 16 & (a3 == 0 ? -16 : -a3); // 0x16a2f
    *(int64_t *)(a1 + 16) = v2;
    int64_t v3 = a1 + (int64_t)&g13; // 0x16a39
    *(int64_t *)(a1 + 24) = v2;
    g13 = v3;
    *(int64_t *)(a1 + 32) = v3;
    *(int64_t *)&g14 = 0;
    char * v4 = (char *)(a1 + 80); // 0x16a54
    *v4 = *v4 & -7;
    return 1;
}

// Address range: 0x158e3 - 0x15910
int64_t function_158e3(int64_t a1, int64_t a2) {
    int64_t v1 = a2 * a1; // 0x158e7
    if (v1 < 0) {
        // 0x158ff
        return function_15b30(v1, a2, 0);
    }
    // 0x158fd
    return function_158c0(v1, a2, 0);
}

// Address range: 0xc7b3 - 0xc848
int64_t function_c7b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xc7b4
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xc7bd
    int64_t v3 = a4 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xc7c6
    if (v2 == 3 || v2 == 9) {
        // 0xc7f8
        if ((char)v3 == 0) {
            // 0xc7f1
            return 1;
        }
    } else {
        // 0xc7e3
        if ((char)v3 != 0) {
            // 0xc7f1
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a1 + 128); // 0xc7fc
    int64_t v5 = *(int64_t *)(a2 + 128); // 0xc803
    if (v5 > v4) {
        // 0xc7f1
        return 0xffffffff;
    }
    // 0xc80c
    if (v5 < v4) {
        // 0xc7f1
        return 1;
    }
    uint32_t v6 = (int32_t)*(int64_t *)(a1 + 136) - *(int32_t *)(a2 + 136); // 0xc815
    int64_t result = v6; // 0xc815
    if (v6 != 0) {
        // 0xc7f1
        return result;
    }
    // 0xc81e
    return function_4a80(a1, a1, a2, v1 & -256 | (int32_t)v3, result);
}

// Address range: 0xcab3 - 0xcb2c
int64_t function_cab3(int64_t a1, int64_t a2) {
    // 0xcab3
    int64_t v1; // 0xcab3
    int64_t v2; // 0xcab3
    int64_t v3 = strrchr(a1, 46, v1, v2); // 0xcac7
    int64_t v4 = strrchr(46, 46, v1, v2); // 0xcadb
    int64_t v5; // 0xcab3
    int64_t v6; // 0xcab3
    int64_t v7; // 0xcab3
    if (v4 == 0) {
        // 0xcb10
        v5 = v3;
        v6 = &g6;
        if (v3 == 0) {
            // 0xcb1c
            return strcmp(a1, 46, v1, (int32_t)v2, v7);
        }
    } else {
        // 0xcae5
        v5 = v3 == 0 ? (int64_t)&g6 : v3;
        v6 = v4;
    }
    int32_t v8 = v2;
    int64_t result = strcmp(v5, v6, v1, v8, v7); // 0xcaf9
    if ((int32_t)result != 0) {
        // 0xcb02
        return result;
    }
    // 0xcb1c
    return strcmp(a1, 46, v1, v8, v7);
}

// Address range: 0xc8c3 - 0xc925
int64_t function_c8c3(int64_t a1, int64_t a2) {
    // 0xc8c3
    int64_t v1; // 0xc8c3
    int64_t v2; // 0xc8c3
    int64_t v3 = strrchr(46, 46, v1, v2); // 0xc8d7
    int64_t v4 = strrchr(46, 46, v1, v2); // 0xc8e7
    int64_t v5 = v3 == 0 ? (int64_t)&g6 : v3; // 0xc900
    int64_t v6; // 0xc8c3
    int64_t result = function_7310(v5, v4 == 0 ? (int64_t)&g6 : v4, v1, v2, v6); // 0xc907
    if ((int32_t)result != 0) {
        // 0xc920
        return result;
    }
    // 0xc910
    return function_7310(v5, v5, v1, v2, v6);
}

// Address range: 0x7383 - 0x738f
int64_t function_7383(int64_t a1, int64_t a2) {
    // 0x7383
    int64_t v1; // 0x7383
    int64_t v2; // 0x7383
    int64_t v3; // 0x7383
    return function_e6e0(a1, a2, v2, v3, v1);
}

// Address range: 0x15b08 - 0x15b0e
int64_t function_15b08(int64_t a1) {
    // 0x15b08
    int64_t v1; // 0x15b08
    int64_t v2; // 0x15b08
    int64_t v3; // 0x15b08
    int64_t v4; // 0x15b08
    return function_4ae0(v1, v2, v3, v4);
}

// Address range: 0x16bb3 - 0x16be7
int64_t function_16bb3(int64_t a1, uint64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x16bb4
    if (v1 == 0) {
        // 0x16bd3
        return 0;
    }
    if (v1 < a2) {
        // 0x16bc5
        if (*(int64_t *)v1 >= a2) {
            // break -> 0x16bd3
            break;
        }
    }
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x16bca
    int64_t result = 0; // 0x16bd1
    while (v2 != 0) {
        uint64_t v3 = v2;
        if (v3 < a2) {
            // 0x16bc5
            result = 1;
            if (*(int64_t *)v3 >= a2) {
                // break -> 0x16bd3
                break;
            }
        }
        // 0x16bca
        v2 = *(int64_t *)(v3 + 8);
        result = 0;
    }
    // 0x16bd3
    return result;
}

// Address range: 0x68c3 - 0x68d0
int64_t function_68c3(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x68c3
    return a1 % a2;
}

// Address range: 0xe383 - 0xe4f3
int64_t function_e383(uint64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xf000; // 0xe38b
    char v2 = 45; // 0xe383
    int64_t v3; // 0xe383
    int32_t v4; // 0xe423
    switch ((v1 - 0x2000) / 0x2000 || 0x8000000000000 * v1) {
        case 1: {
            // 0xe3ed
            v2 = 100;
        }
        case 3: {
          lab_0xe3ed:
            // 0xe3ed
            *(char *)a2 = v2;
            *(char *)(a2 + 1) = (a1 & 256) == 0 ? 45 : 114;
            int64_t v5 = a1 & 128; // 0xe406
            char v6 = v5; // 0xe40e
            *(char *)(a2 + 2) = (v6 - ((char)(v5 == 0) | v6) & -74) + 119;
            int64_t v7 = a1 & 64; // 0xe41b
            int64_t v8 = v7 - (v7 | (int64_t)(v7 == 0)); // 0xe421
            v4 = a1;
            if ((v4 & (int32_t)&g27) == 0) {
                // 0xe4c8
                v3 = (v8 & 0xffffffb5) + 120 & 0xfffffffd;
            } else {
                // 0xe42f
                v3 = (v8 & 0xffffffe0) + 115 & 0xfffffff3;
            }
            // break -> 0xe435
            break;
        }
        case 2: {
            // 0xe3ed
            v2 = 98;
            // branch (via goto) -> 0xe3ed
            goto lab_0xe3ed;
        }
        case 0: {
            // 0xe3ed
            v2 = 99;
            // branch (via goto) -> 0xe3ed
            goto lab_0xe3ed;
        }
        case 4: {
            // 0xe3ed
            v2 = 108;
            // branch (via goto) -> 0xe3ed
            goto lab_0xe3ed;
        }
        default: {
            int32_t v9 = v1; // 0xe3d2
            v2 = 112;
            if (v9 != 0x1000) {
                // 0xe3da
                v2 = v9 != 0xc000 ? 63 : 115;
            }
            // branch (via goto) -> 0xe3ed
            goto lab_0xe3ed;
        }
    }
    // 0xe435
    *(char *)(a2 + 3) = (char)v3;
    int64_t v10 = a1 & 32; // 0xe43a
    char v11 = v10; // 0xe440
    *(char *)(a2 + 4) = (v11 - ((char)(v10 == 0) | v11) & -69) + 114;
    int64_t v12 = a1 & 16; // 0xe44d
    char v13 = v12; // 0xe453
    *(char *)(a2 + 5) = (v13 - ((char)(v12 == 0) | v13) & -74) + 119;
    int64_t v14 = a1 & 8; // 0xe460
    int64_t v15 = v14 - (v14 | (int64_t)(v14 == 0)); // 0xe466
    int64_t v16; // 0xe383
    if ((v4 & (int32_t)&g25) == 0) {
        // 0xe4d8
        v16 = (v15 & 0xffffffb5) + 120 & 0xfffffffd;
    } else {
        // 0xe470
        v16 = (v15 & 0xffffffe0) + 115 & 0xfffffff3;
    }
    // 0xe476
    *(char *)(a2 + 6) = (char)v16;
    int64_t v17 = a1 & 4; // 0xe47b
    char v18 = v17; // 0xe481
    *(char *)(a2 + 7) = (v18 - ((char)(v17 == 0) | v18) & -69) + 114;
    int64_t v19 = a1 & 2; // 0xe48e
    char v20 = v19; // 0xe494
    *(char *)(a2 + 8) = (v20 - ((char)(v19 == 0) | v20) & -74) + 119;
    char v21 = a1 % 2 == 0; // 0xe4a7
    if ((a1 & 512) == 0) {
        // 0xe4e0
        *(char *)(a2 + 9) = (v21 & -75) + 120;
        *(int16_t *)(a2 + 10) = 32;
        return 32;
    }
    // 0xe4b1
    *(char *)(a2 + 9) = (v21 & -32) + 116;
    *(int16_t *)(a2 + 10) = 32;
    return 32;
}

// Address range: 0x7cd3 - 0x7dbb
int64_t function_7cd3(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x7ce1
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x7ce7
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0x7cf0
    int64_t v4; // 0x7cd3
    if (v2 == 3 || v2 == 9) {
        // 0x7d30
        if ((char)v3 == 0) {
            // 0x7d1d
            return 1;
        }
    } else {
        // 0x7d0b
        v4 = 1;
        if ((char)v3 != 0) {
            // 0x7d1d
            return 0xffffffff;
        }
    }
    int64_t v5 = v3 | (int64_t)(v1 & -256);
    int64_t v6 = (int64_t)(v2 & -256) | (int64_t)(v2 == 9); // 0x7d04
    int32_t v7 = v5; // 0x7d3f
    int64_t v8 = strrchr(a2, 46, v7, v6); // 0x7d3f
    int64_t v9 = strrchr(a2, 46, v7, v6); // 0x7d52
    int64_t v10; // 0x7cd3
    int64_t v11; // 0x7cd3
    if (v9 == 0) {
        // 0x7d98
        v10 = v8;
        v11 = (int64_t)&g9;
        if (v8 == 0) {
            // 0x7d7c
            return strcmp((int16_t *)a2, a2, v5, v6, v4);
        }
    } else {
        // 0x7d5f
        v10 = v8 == 0 ? (int64_t)&g9 : v8;
        v11 = v9;
    }
    int64_t v12 = strcmp((int16_t *)v10, v11, v5, v6, v4); // 0x7d70
    int64_t result = v12 & 0xffffffff; // 0x7d75
    if ((int32_t)v12 != 0) {
        // 0x7d1d
        return result;
    }
    // 0x7d7c
    return strcmp((int16_t *)a2, a2, v5, v6, result);
}

// Address range: 0x14ba3 - 0x14bb7
int64_t function_14ba3(void) {
    // 0x14ba3
    int64_t v1; // 0x14ba3
    int64_t v2; // 0x14ba3
    return function_146c0(v1, v2, -1, (int64_t *)&g24);
}

// Address range: 0xa6f3 - 0xa770
int64_t function_a6f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xa6f4
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xa6fd
    bool v3 = v2 == 3 | v2 == 9;
    int64_t v4; // 0xa6f3
    if (v3) {
        // 0xa738
        if (v1 != 3 && v1 != 9) {
            // 0xa731
            return 1;
        }
    } else {
        // 0xa723
        v4 = 1;
        if (v1 == 3 || v1 == 9) {
            // 0xa731
            return 0xffffffff;
        }
    }
    int64_t v5 = *(int64_t *)(a1 + 72); // 0xa73c
    int64_t v6 = *(int64_t *)(a2 + 72); // 0xa740
    if (v6 > v5) {
        // 0xa731
        return 0xffffffff;
    }
    int64_t v7 = v6 - v5; // 0xa740
    if (v7 != 0) {
        // 0xa758
        return v7 < 0 != ((v7 ^ v6) & (v6 ^ v5)) < 0;
    }
    // 0xa748
    return function_7310(a1, a1, (int64_t)v3 | (int64_t)(v1 & -256), v5, v4);
}

// Address range: 0xc0b3 - 0xc0e6
int64_t function_c0b3(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 112); // 0xc0b4
    int64_t v2 = *(int64_t *)(a1 + 112); // 0xc0b8
    if (v2 > v1) {
        // 0xc0dd
        return 0xffffffff;
    }
    // 0xc0be
    if (v2 < v1) {
        // 0xc0dd
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a2 + 120) - *(int32_t *)(a1 + 120); // 0xc0c4
    if (result != 0) {
        // 0xc0dd
        return result;
    }
    // 0xc0c9
    int64_t v3; // 0xc0b3
    int64_t v4; // 0xc0b3
    int64_t v5; // 0xc0b3
    return function_7310(a1, a2, v4, v5, v3);
}

// Address range: 0x77d3 - 0x77ee
int64_t function_77d3(void) {
    uint32_t v1 = g62; // 0x77d4
    int64_t result = v1; // 0x77dc
    if (v1 == 0) {
        // 0x77de
        g60 = &g61;
        result = &g61;
    }
    // 0x77ed
    return result;
}

// Address range: 0x16aa3 - 0x16ab9
int64_t function_16aa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a1 + 80); // 0x16aa4
    *v1 = *v1 | 1;
    *(int64_t *)(a1 + 56) = a4;
    *(int64_t *)(a1 + 64) = a5;
    *(int64_t *)(a1 + 72) = a6;
    return function_169f0(a1, a2, a3);
}

// Address range: 0xa7b3 - 0xa7e6
int64_t function_a7b3(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 72); // 0xa7b4
    int64_t v2 = *(int64_t *)(a2 + 72); // 0xa7bb
    if (v2 > v1) {
        // 0xa7e0
        return 0xffffffff;
    }
    int64_t v3 = v2 - v1; // 0xa7bb
    if (v3 != 0) {
        // 0xa7d0
        return v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0;
    }
    // 0xa7c3
    int64_t v4; // 0xa7b3
    int64_t v5; // 0xa7b3
    return function_4a80(a1, a1, v1, (int32_t)v5, v4);
}

// Address range: 0xf013 - 0xf019
int64_t function_f013(int64_t a1) {
    // 0xf013
    return *(int64_t *)(a1 + 24);
}

// Address range: 0xc603 - 0xc636
int64_t function_c603(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 96); // 0xc604
    int64_t v2 = *(int64_t *)(a1 + 96); // 0xc608
    if (v2 > v1) {
        // 0xc62d
        return 0xffffffff;
    }
    // 0xc60e
    if (v2 < v1) {
        // 0xc62d
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a2 + 104) - *(int32_t *)(a1 + 104); // 0xc614
    if (result != 0) {
        // 0xc62d
        return result;
    }
    // 0xc619
    int64_t v3; // 0xc603
    int64_t v4; // 0xc603
    int64_t v5; // 0xc603
    return function_4a80(a1, a2, v4, (int32_t)v5, v3);
}

// Address range: 0xc513 - 0xc556
int64_t function_c513(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 112); // 0xc514
    int64_t v2 = *(int64_t *)(a2 + 112); // 0xc51b
    if (v2 > v1) {
        // 0xc545
        return 0xffffffff;
    }
    // 0xc521
    if (v2 < v1) {
        // 0xc545
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a1 + 120) - *(int32_t *)(a2 + 120); // 0xc527
    if (result != 0) {
        // 0xc545
        return result;
    }
    // 0xc52c
    int64_t v3; // 0xc513
    int64_t v4; // 0xc513
    return function_4a80(a1, a1, a2, (int32_t)v4, v3);
}

// Address range: 0xeae3 - 0xeb50
int64_t function_eae3(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0xeaf1
    if ((int32_t)clock_gettime() != 0) {
        // 0xeb0a
        int64_t v2; // bp-40, 0xeae3
        gettimeofday(&v2, 0);
        *(int64_t *)a1 = v2;
        int128_t v3; // 0xeae3
        *(int64_t *)(a1 + 8) = (int64_t)v3 * (int64_t)&g24;
    }
    int64_t result = __readfsqword(40) ^ v1; // 0xeb2d
    if (result != 0) {
        // 0xeb3e
        return __stack_chk_fail();
    }
    // 0xeb38
    return result;
}

// Address range: 0x79d3 - 0x7a38
int64_t function_79d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x79d4
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x79dd
    int64_t v3 = a4 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0x79e6
    int64_t v4; // 0x79d3
    if (v2 == 3 || v2 == 9) {
        // 0x7a18
        if ((char)v3 == 0) {
            // 0x7a11
            return 1;
        }
    } else {
        // 0x7a03
        v4 = 1;
        if ((char)v3 != 0) {
            // 0x7a11
            return 0xffffffff;
        }
    }
    // 0x7a1c
    return function_4a80((int16_t *)a1, a1, a2, v3 | (int64_t)(v1 & -256), v4);
}

// Address range: 0x156a3 - 0x156c0
int64_t function_156a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x156a3
    if (a5 == 0) {
        // 0x156bb
        return function_15250();
    }
    int64_t v1 = 0; // 0x156ab
    while (*(int64_t *)(8 * (v1 + 1) + a5) != 0) {
        // 0x156b0
        v1++;
    }
    // 0x156bb
    return function_15250();
}

// Address range: 0xc453 - 0xc4d0
int64_t function_c453(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xc454
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xc45a
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xc463
    if (v2 == 3 || v2 == 9) {
        // 0xc490
        if ((char)v3 == 0) {
            // 0xc48c
            return 1;
        }
    } else {
        // 0xc47e
        if ((char)v3 != 0) {
            // 0xc48c
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a2 + 96); // 0xc494
    int64_t v5 = *(int64_t *)(a1 + 96); // 0xc498
    if (v5 > v4) {
        // 0xc48c
        return 0xffffffff;
    }
    // 0xc49e
    if (v5 < v4) {
        // 0xc48c
        return 1;
    }
    uint32_t v6 = (int32_t)*(int64_t *)(a2 + 104) - *(int32_t *)(a1 + 104); // 0xc4a4
    int64_t result = v6; // 0xc4a4
    if (v6 != 0) {
        // 0xc48c
        return result;
    }
    // 0xc4aa
    return function_7310(a1, a2, v3 | (int64_t)(v1 & -256), (int64_t)(v2 & -256) | (int64_t)(v2 == 9), result);
}

// Address range: 0xc213 - 0xc290
int64_t function_c213(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0xc214
    int32_t v2 = *(int32_t *)(a2 + 168); // 0xc21a
    int64_t v3 = a3 & 0xffffff00 | (int64_t)(v1 == 3) | (int64_t)(v1 == 9); // 0xc223
    if (v2 == 3 || v2 == 9) {
        // 0xc250
        if ((char)v3 == 0) {
            // 0xc24c
            return 1;
        }
    } else {
        // 0xc23e
        if ((char)v3 != 0) {
            // 0xc24c
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a2 + 112); // 0xc254
    int64_t v5 = *(int64_t *)(a1 + 112); // 0xc258
    if (v5 > v4) {
        // 0xc24c
        return 0xffffffff;
    }
    // 0xc25e
    if (v5 < v4) {
        // 0xc24c
        return 1;
    }
    uint32_t v6 = (int32_t)*(int64_t *)(a2 + 120) - *(int32_t *)(a1 + 120); // 0xc264
    int64_t result = v6; // 0xc264
    if (v6 != 0) {
        // 0xc24c
        return result;
    }
    // 0xc26a
    return function_7310(a1, a2, v3 | (int64_t)(v1 & -256), (int64_t)(v2 & -256) | (int64_t)(v2 == 9), result);
}

// Address range: 0x6ef3 - 0x6eff
int64_t function_6ef3(int64_t a1, int64_t a2) {
    // 0x6ef3
    int64_t v1; // 0x6ef3
    int64_t v2; // 0x6ef3
    int64_t v3; // 0x6ef3
    return function_4a80((int16_t *)a1, a2, v2, v3, v1);
}

// Address range: 0xf2c3 - 0xf30c
int64_t function_f2c3(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf2c3
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0xf2f1
        return 0;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0xf2d2
    if (v1 <= a1) {
        // 0xf2db
        return function_4daf();
    }
    int64_t v2 = a1; // 0xf2d9
    int64_t result = *(int64_t *)v2; // 0xf2e9
    while (result == 0) {
        // 0xf2e0
        v2 += 16;
        if (v2 >= v1) {
            // 0xf307
            return function_4daf();
        }
        result = *(int64_t *)v2;
    }
    // 0xf2f1
    return result;
}

// Address range: 0x17343 - 0x1737c
int64_t function_17343(void) {
    int64_t v1 = nl_langinfo(14); // 0x1734d
    if (v1 == 0) {
        // 0x17370
        return (int64_t)"ASCII";
    }
    // 0x17357
    return *(char *)v1 == 0 ? (int64_t)"ASCII" : v1;
}

// Address range: 0xbfc3 - 0xc006
int64_t function_bfc3(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 128); // 0xbfc4
    int64_t v2 = *(int64_t *)(a2 + 128); // 0xbfce
    if (v2 > v1) {
        // 0xbffd
        return 0xffffffff;
    }
    // 0xbfd7
    if (v2 < v1) {
        // 0xbffd
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a1 + 136) - *(int32_t *)(a2 + 136); // 0xbfe0
    if (result != 0) {
        // 0xbffd
        return result;
    }
    // 0xbfe8
    int64_t v3; // 0xbfc3
    int64_t v4; // 0xbfc3
    return function_7310(a1, a1, a2, v4, v3);
}

// Address range: 0x14fa3 - 0x14fb0
int64_t function_14fa3(void) {
    // 0x14fa3
    int64_t v1; // 0x14fa3
    int64_t v2; // 0x14fa3
    int64_t v3; // 0x14fa3
    int64_t v4; // 0x14fa3
    return function_14f00(v1, v2, v3, v4, -1);
}

// Address range: 0x15963 - 0x15990
int64_t function_15963(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 * a2; // 0x15967
    if (v1 < 0) {
        // 0x1597f
        return function_15b30(a1, v1, 0);
    }
    // 0x1597d
    return function_15920(a1, v1, 0);
}

// Address range: 0x16873 - 0x16888
int64_t function_16873(int64_t a1, int64_t a2) {
    // 0x16873
    int64_t v1; // 0x16873
    return function_16800(getfilecon() & 0xffffffff, a2, v1);
}

// Address range: 0xcb33 - 0xcbac
int64_t function_cb33(int64_t a1, int64_t a2) {
    // 0xcb33
    int64_t v1; // 0xcb33
    int64_t v2; // 0xcb33
    int64_t v3 = strrchr(a2, 46, v1, v2); // 0xcb47
    int64_t v4 = strrchr(a2, 46, v1, v2); // 0xcb5b
    int64_t v5; // 0xcb33
    int64_t v6; // 0xcb33
    int64_t v7; // 0xcb33
    if (v4 == 0) {
        // 0xcb90
        v5 = v3;
        v6 = &g6;
        if (v3 == 0) {
            // 0xcb9c
            return strcmp(a2, a2, v1, (int32_t)v2, v7);
        }
    } else {
        // 0xcb65
        v5 = v3 == 0 ? (int64_t)&g6 : v3;
        v6 = v4;
    }
    int32_t v8 = v2;
    int64_t result = strcmp(v5, v6, v1, v8, v7); // 0xcb79
    if ((int32_t)result != 0) {
        // 0xcb82
        return result;
    }
    // 0xcb9c
    return strcmp(a2, a2, v1, v8, v7);
}

// Address range: 0xd833 - 0xd885
int64_t function_d833(int64_t a1, int64_t result, int64_t a3, int64_t a4) {
    // 0xd833
    if (result == 0) {
        // 0xd879
        return 0;
    }
    int64_t v1 = result; // 0xd877
    if ((int32_t)memcmp(a1, a3, a4) == 0) {
        // 0xd879
        return result;
    }
    int64_t v2 = a3; // 0xd877
    v1 += 8;
    int64_t v3 = *(int64_t *)v1; // 0xd858
    int64_t result2 = 0; // 0xd865
    while (v3 != 0) {
        // 0xd867
        v2 += a4;
        result2 = v3;
        if ((int32_t)memcmp(a1, v2, a4) == 0) {
            // break -> 0xd879
            break;
        }
        v1 += 8;
        v3 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0xd879
    return result2;
}

// Address range: 0x14943 - 0x1497b
int64_t function_14943(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g24 : a1; // 0x14952
    *(int32_t *)v1 = 10;
    int64_t v2 = (int64_t)&g24; // 0x1495f
    if (a2 == 0) {
        v2 = function_4dc8();
    }
    int64_t result = v2; // 0x14968
    if (a3 == 0) {
        result = function_4dc8();
    }
    // 0x1496e
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return result;
}

// Address range: 0xcf9b - 0xcffd
int64_t function_cf9b(int64_t a1) {
    // 0xcf9b
    int64_t v1; // 0xcf9b
    *(int32_t *)v1 = 2 * (int32_t)v1;
    int64_t v2; // 0xcf9b
    fputs_unlocked((int64_t *)dcgettext(0, "  -q, --hide-control-chars   print ? instead of nongraphic characters\n      --show-control-chars   show nongraphic characters as-is (the default,\n                               unless program is 'ls' and output is a terminal)\n  -Q, --quote-name           enclose entry names in double quotes\n      --quoting-style=WORD   use quoting style WORD for entry names:\n                               literal, locale, shell, shell-always,\n                               shell-escape, shell-escape-always, c, escape\n                               (overrides QUOTING_STYLE environment variable)\n", 5), v2);
    fputs_unlocked((int64_t *)dcgettext(0, "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the allocated size of each file, in blocks\n", 5), (int64_t)g19);
    return dcgettext(0, "  -S                         sort by file size, largest first\n      --sort=WORD            sort by WORD instead of name: none (-U), size (-S),\n                               time (-t), version (-v), extension (-X)\n      --time=WORD            with -l, show time as WORD instead of default\n                               modification time: atime or access or use (-u);\n                               ctime or status (-c); also use specified time\n                               as sort key if --sort=time (newest first)\n", 5);
}

