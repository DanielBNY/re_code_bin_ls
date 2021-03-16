// Address range: 0x4df3 - 0x67d0
int64_t function_4df3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x4e0b
    function_132d0();
    function_4c00(6, (int64_t *)&g9);
    function_4890("coreutils", "/usr/share/locale");
    function_4850("coreutils");
    *(int32_t *)&g42 = 2;
    function_17560(0xdfe0);
    *(char *)&g75 = 1;
    g117 = -0x8000000000000000;
    g59 = 0;
    g119 = 0;
    g118 = -1;
    g79 = 0;
    int64_t v2; // 0x4df3
    if (g41 == 2) {
        // 0x5ce2
        g104 = 2;
        function_148c0(0, 7, a3);
        v2 = 7;
    } else {
        if (g41 != 3) {
            if (g41 != 1) {
                // 0x5cdd
                return function_4da5();
            }
            // 0x5091
            if ((int32_t)function_47c0(1) != 0) {
                // 0x5ec8
                g104 = 2;
                function_148c0(0, 3, a3);
                g79 = 1;
                v2 = 3;
            } else {
                // 0x50a3
                g104 = 1;
                v2 = (int64_t)"/usr/share/locale";
            }
        } else {
            // 0x4ebd
            g104 = 0;
            function_148c0(0, 7, a3);
            v2 = 7;
        }
    }
    // 0x4ed3
    *(char *)&g101 = 0;
    g103 = 0;
    g102 = 0;
    g100 = 0;
    g99 = 0;
    g94 = 0;
    *(char *)&g87 = 0;
    g86 = 1;
    g85 = 0;
    g84 = 0;
    *(int32_t *)&g82 = 0;
    g81 = 0;
    g80 = 0;
    g116 = 0;
    int64_t v3 = function_4710("QUOTING_STYLE"); // 0x4f53
    int64_t v4 = a4; // 0x4f5e
    int64_t v5 = a3; // 0x4f5e
    int64_t v6 = v2; // 0x4f5e
    if (v3 != 0) {
        int64_t v7 = function_d4e0(v3, g23, (int64_t *)&g15, 4); // 0x4f76
        if ((int32_t)v7 < 0) {
            int64_t v8 = function_15040(v3); // 0x586c
            int64_t v9 = function_48a0(0, "ignoring invalid value of environment variable QUOTING_STYLE: %s", 5, 4); // 0x5882
            function_4c60(0, (int32_t)"ignoring invalid value of environment variable QUOTING_STYLE: %s" ^ (int32_t)"ignoring invalid value of environment variable QUOTING_STYLE: %s", (char *)v9, v8, a5);
            v4 = v8;
            v5 = v9;
            v6 = (int32_t)"ignoring invalid value of environment variable QUOTING_STYLE: %s" ^ (int32_t)"ignoring invalid value of environment variable QUOTING_STYLE: %s";
        } else {
            uint32_t v10 = *(int32_t *)(0x100000000 * v7 / 0x40000000 + (int64_t)&g15); // 0x4f8e
            int64_t v11 = v10; // 0x4f8e
            function_148c0(0, v11, (int64_t)&g15);
            v4 = 4;
            v5 = (int64_t)&g15;
            v6 = v11;
        }
    }
    // 0x4f96
    g74 = 80;
    int64_t v12 = function_4710("COLUMNS"); // 0x4fa8
    if (v12 != 0) {
        // 0x4fb5
        if (*(char *)v12 != 0) {
            // 0x589d
            if ((char)function_6bb0(v12, v6, v5) == 0) {
                int64_t v13 = function_15040(v12); // 0x58b0
                function_4c60(0, (int32_t)"ignoring invalid width in environment variable COLUMNS: %s" ^ (int32_t)"ignoring invalid width in environment variable COLUMNS: %s", (char *)function_48a0(0, "ignoring invalid width in environment variable COLUMNS: %s", 5, v4), v13, a5);
            }
        }
    }
    // 0x4fbe
    int32_t v14; // bp-88, 0x4df3
    uint16_t v15; // 0x4df3
    if (v15 != 0 == ((int32_t)function_49f0(1, 0x5413, (int64_t *)&v14) != -1)) {
        // 0x585d
        g74 = v15;
    }
    int64_t v16 = &v14; // 0x4fcf
    int64_t v17 = function_4710("TABSIZE"); // 0x4ff1
    g76 = 8;
    if (v17 != 0) {
        // 0x5009
        if ((int32_t)function_15db0(v17, 0, 0, (int64_t *)&v14, 0) != 0) {
            int64_t v18 = function_15040(v17); // 0x5d55
            function_4c60(0, (int32_t)"ignoring invalid tab size in environment variable TABSIZE: %s" ^ (int32_t)"ignoring invalid tab size in environment variable TABSIZE: %s", (char *)function_48a0(0, "ignoring invalid tab size in environment variable TABSIZE: %s", 5, v16), v18, 0);
        } else {
            // 0x5023
            g76 = v14;
        }
    }
    uint64_t v19 = a1 & 0xffffffff; // 0x4dfc
    v14 = -1;
    int64_t v20 = function_48f0(v19, a2, "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1", &g20, (int64_t *)&v14); // 0x5060
    int64_t v21; // 0x4df3
    int64_t v22; // 0x4df3
    int64_t v23; // 0x4df3
    if ((int32_t)v20 == -1) {
        // 0x50d0
        if (g97 == 0) {
            int64_t v24 = function_4710("LS_BLOCK_SIZE"); // 0x5d8d
            function_109e0(v24, &g98, &g97);
            if (v24 == 0) {
                // 0x6610
                if (function_4710("BLOCK_SIZE") != 0) {
                    goto lab_0x5db4;
                } else {
                    goto lab_0x50de;
                }
            } else {
                goto lab_0x5db4;
            }
        } else {
            goto lab_0x50de;
        }
    } else {
        int64_t v25 = v20 + 131; // 0x506a
        if ((int32_t)v25 < 276) {
            int32_t v26 = *(int32_t *)((4 * v25 & 0x3fffffffc) + (int64_t)&g2); // 0x507a
            return (int64_t)v26 + (int64_t)&g2;
        }
        // 0x6497
        function_cca0(2);
        v23 = (int64_t)&g20;
        v22 = v16;
        v21 = 0;
        goto lab_0x64a1;
    }
  lab_0x6295:;
    // 0x6295
    int64_t v27; // 0x4df3
    int64_t v28 = v27;
    int64_t v29 = v28; // 0x6299
    int64_t v30; // 0x4df3
    int64_t v31; // 0x4df3
    int64_t v32; // 0x4df3
    int64_t v33; // 0x4df3
    int64_t v34; // 0x659f
    if (*(char *)v28 == 43) {
        // 0x659f
        v34 = v28 + 1;
        int64_t v35 = function_4910(v34, 10); // 0x65ab
        v33 = v34;
        if (v35 == 0) {
            goto lab_0x65d9;
        } else {
            int64_t v36 = v35 + 1; // 0x65bc
            v32 = 3;
            v31 = v16;
            v30 = v34;
            if (function_4910(v36, 10) != 0) {
                goto lab_0x66a0;
            } else {
                // 0x65d6
                *(char *)v35 = 0;
                v33 = v36;
                goto lab_0x65d9;
            }
        }
    } else {
        goto lab_0x629f;
    }
  lab_0x6095_5:;
    // 0x6095
    int64_t v37; // 0x4df3
    int64_t v38 = v37;
    int64_t v39 = function_48a0(0, "unparsable value for LS_COLORS environment variable", 5, v38); // 0x60a3
    function_4c60(0, (int32_t)"unparsable value for LS_COLORS environment variable" ^ (int32_t)"unparsable value for LS_COLORS environment variable", (char *)v39, v38, v16);
    function_46d0(g89);
    int64_t v40 = g90; // 0x60da
    if (g90 != 0) {
        goto lab_0x60cb;
    } else {
        goto lab_0x60dc;
    }
  lab_0x6061_2:;
    // 0x6061
    int16_t v41; // bp-67, 0x4df3
    int64_t v42 = function_15040((int64_t)&v41); // 0x6069
    int64_t v43; // 0x4df3
    function_4c60(0, (int32_t)"unrecognized prefix: %s" ^ (int32_t)"unrecognized prefix: %s", (char *)function_48a0(0, "unrecognized prefix: %s", 5, v43), v42, v16);
    v37 = v42;
    goto lab_0x6095_5;
  lab_0x5c2c:;
    // 0x5c2c
    int64_t v44; // 0x4df3
    int64_t v45 = v44; // 0x5c33
    int64_t v46; // 0x4df3
    int64_t v47 = v46; // 0x5c33
    int64_t v48 = (int64_t)&g9; // 0x5c33
    int64_t v49; // 0x4df3
    int64_t v50; // 0x4df3
    int64_t v51; // 0x4df3
    if (g93 == 0) {
        goto lab_0x5c42;
    } else {
        // 0x5c35
        v45 = v44;
        v47 = v46;
        v48 = (int64_t)&g9;
        if (g91 != 0) {
            // 0x5e03
            v51 = v44;
            v50 = v46;
            v49 = (int64_t)&g9;
            v23 = v44;
            v22 = v46;
            v21 = (int64_t)&g9;
            if (g29 == 2 == *(int16_t *)&g30 == 0x5b1b) {
                goto lab_0x64a1;
            } else {
                goto lab_0x5e1f;
            }
        } else {
            goto lab_0x5c42;
        }
    }
  lab_0x6188_2:;
    // 0x6188
    uint64_t v52; // 0x4df3
    char * v53 = (char *)(v52 + (int64_t)&g51); // 0x6188
    char v54; // 0x4df3
    *v53 = *v53 | v54;
    if (v52 == 255) {
        // break -> 0x61c8
        goto lab_0x61c8_2;
    }
    int64_t v55 = v52 + 1; // 0x4df3
    goto lab_0x6197_2;
  lab_0x61b4:;
    char * v62 = (char *)(v52 + (int64_t)&g51); // 0x61b9
    *v62 = *v62 | 1;
    int64_t v60; // 0x4df3
    int64_t v63 = v60; // 0x61c6
    if (v52 == 255) {
        // break -> 0x61c8
        goto lab_0x61c8_2;
    }
    // 0x6197
    v55 = v52 + 1;
    goto lab_0x6197_2;
  lab_0x617d:;
    // 0x617d
    int32_t v57; // 0x4df3
    v54 = v57 == 95;
    goto lab_0x6188_2;
  lab_0x64c9:;
    // 0x64c9
    int64_t v64; // 0x4df3
    int64_t v65 = v64;
    int32_t v66; // 0x4df3
    int64_t v67 = v66 / 0x1000000;
    int64_t v68 = v65; // 0x64d1
    int64_t v69; // 0x4df3
    int64_t v70 = v69; // 0x64d1
    int64_t v71 = v67; // 0x64d1
    int64_t v72; // 0x4df3
    int64_t v73 = v72; // 0x64d1
    if (g39 == 6) {
        // 0x64d7
        v68 = v65;
        v70 = 6;
        v71 = v67;
        v73 = (int64_t)"target";
        if ((int32_t)function_4770((int64_t)g40, (int64_t)"target", 6) == 0) {
            // 0x64f7
            g121 = 1;
            v68 = v65;
            v70 = 6;
            v71 = v67;
            v73 = (int64_t)"target";
        }
    }
    goto lab_0x632e_2;
  lab_0x5f9b_2:;
    // 0x5f9b
    int64_t v139; // 0x4df3
    int64_t v128 = v139; // 0x4df3
    int64_t v127; // 0x4df3
    int64_t v129 = v127; // 0x4df3
    goto lab_0x5f9b_3;
  lab_0x632e:
    // 0x632e
    g93 = 0;
    int64_t v160; // 0x4df3
    int64_t v76 = v160; // 0x4df3
    int64_t v119; // 0x59f9
    int64_t v77 = v119; // 0x4df3
    goto lab_0x5a06;
  lab_0x50de:;
    uint64_t v191 = (int64_t)g74;
    g58 = v191 / 3 + (int64_t)(v191 % 3 != 0);
    int64_t v192 = function_148a0(0); // 0x5104
    char v193 = 0; // 0x4df3
    switch (g104) {
        default: {
            // 0x5123
            v193 = 0;
            if (g104 != 0 != ((int64_t)g74 == 0)) {
                // 0x5137
                v193 = (int32_t)v192 == 6 | (v192 & 0xfffffffd) == 1;
            }
        }
        case 4: {
        }
        case 1: {
            // 0x58e3
            g124 = v193;
            int64_t v194 = function_14860(0); // 0x58f2
            g78 = v194;
            if ((int32_t)v192 == 7) {
                // 0x6301
                function_148e0(v194, 32, 1);
            }
            // break -> 0x5907
            break;
        }
    }
    // 0x5907
    if (g94 >= 2) {
        int64_t v195 = (int64_t)(g94 - 2) + (int64_t)"*=>@|"; // 0x591c
        char v196 = *(char *)v195; // 0x5920
        char v197 = v196; // 0x5926
        int64_t v198 = v195; // 0x5926
        if (v196 != 0) {
            int64_t v199 = v198 + 1; // 0x593f
            function_148e0((int64_t)g78, (int64_t)v197, 1);
            char v200 = *(char *)v199; // 0x5948
            v197 = v200;
            v198 = v199;
            while (v200 != 0) {
                // 0x5930
                v199 = v198 + 1;
                function_148e0((int64_t)g78, (int64_t)v197, 1);
                v200 = *(char *)v199;
                v197 = v200;
                v198 = v199;
            }
        }
    }
    int64_t v201 = function_14860(0); // 0x5951
    g77 = v201;
    function_148e0(v201, 58, 1);
    if (g95 == 0) {
        goto lab_0x598c;
    } else {
        // 0x5978
        if (g104 == 0 == g92 == 0) {
            goto lab_0x65ec;
        } else {
            // 0x5985
            g95 = 0;
            goto lab_0x598c;
        }
    }
  lab_0x64a1:
    // 0x64a1
    v51 = v23;
    v50 = v22;
    v49 = v21;
    int64_t v202; // 0x4df3
    int64_t v203; // 0x4df3
    int64_t v204; // 0x4df3
    if (g31 != 1) {
        goto lab_0x5e1f;
    } else {
        // 0x64af
        v51 = v23;
        v50 = v22;
        v49 = v21;
        v204 = v23;
        v203 = v22;
        v202 = v21;
        if (*(char *)&g32 != 109) {
            goto lab_0x5e1f;
        } else {
            goto lab_0x5e24;
        }
    }
  lab_0x5db4:
    // 0x5db4
    *(int32_t *)&g96 = *(int32_t *)&g98;
    g25 = g97;
    goto lab_0x50de;
  lab_0x598c:;
    int64_t v205 = g104; // 0x5992
    int64_t v113; // 0x4df3
    int64_t v115; // 0x4df3
    int64_t v117; // 0x4df3
    if (g103 < 3) {
        if (g104 == 0) {
            goto lab_0x65ec;
        } else {
            // 0x5f14
            g102 = 4;
            v113 = 3;
            v115 = v205;
            v117 = 58;
            goto lab_0x59f2;
        }
    } else {
        // 0x59ab
        v113 = 3;
        v115 = v205;
        v117 = 58;
        if (g104 != 0) {
            goto lab_0x59f2;
        } else {
            goto lab_0x65ec;
        }
    }
  lab_0x5e1f:
    // 0x5e1f
    function_8060();
    v204 = v51;
    v203 = v50;
    v202 = v49;
    goto lab_0x5e24;
  lab_0x65ec:;
    int64_t v208 = function_4710("TIME_STYLE"); // 0x65f3
    v29 = (int64_t)"locale";
    if (v208 != 0) {
        int64_t v209 = function_4770(v208, (int64_t)"posix-", 6); // 0x59d7
        int64_t v210 = v208; // 0x59de
        if ((int32_t)v209 != 0) {
            goto lab_0x6295;
        } else {
            v113 = 3;
            v115 = 6;
            v117 = (int64_t)"posix-";
            while ((char)function_eb50(2) != 0) {
                int64_t v211 = v210 + 6; // 0x59c8
                int64_t v212 = function_4770(v211, (int64_t)"posix-", 6); // 0x59d7
                v210 = v211;
                v27 = v211;
                if ((int32_t)v212 != 0) {
                    goto lab_0x6295;
                }
                v113 = 3;
                v115 = 6;
                v117 = (int64_t)"posix-";
            }
            goto lab_0x59f2;
        }
    } else {
        goto lab_0x629f;
    }
  lab_0x5e24:
    // 0x5e24
    function_4d30((int64_t)g43);
    function_7dc0(0);
    if (g60 != 0) {
        function_4740(19);
        int32_t v206 = g60 - 1; // 0x5e52
        int32_t v207 = v206; // 0x5e55
        while (v206 != 0) {
            // 0x5e48
            function_4740(19);
            v206 = v207 - 1;
            v207 = v206;
        }
    }
    // 0x5e57
    v45 = v204;
    v47 = v203;
    v48 = v202;
    if (g62 != 0) {
        // 0x5e65
        function_4740((int64_t)g62);
        v45 = v204;
        v47 = v203;
        v48 = v202;
    }
    goto lab_0x5c42;
  lab_0x59f2:;
    int64_t v118 = v113;
    v119 = g44;
    v76 = v118;
    v77 = v119;
    int64_t v120; // 0x4df3
    int64_t v121; // 0x4df3
    int64_t v122; // 0x4df3
    if (g93 != 0) {
        // 0x5f54
        v121 = v117;
        v120 = v115;
        int64_t v123 = function_4710("LS_COLORS"); // 0x5f5b
        char * v124 = (char *)v123; // 0x5f60
        char * v125 = v124; // bp-96, 0x5f60
        if (v123 == 0) {
            goto lab_0x6318;
        } else {
            // 0x5f71
            if (*v124 == 0) {
                goto lab_0x6318;
            } else {
                // 0x5f7a
                v41 = 0x3f3f;
                int64_t v126 = function_15b10(v123); // 0x5f86
                v66 = 0x1000000 * g44;
                g89 = v126;
                v14 = v126;
                v127 = (int64_t)&v125;
                v128 = v118;
                v129 = v121;
                while (true) {
                  lab_0x5f9b_3:;
                    int64_t v130 = v128;
                    char * v131 = v125; // 0x4df3
                    char * v132; // 0x5f9b
                    while (true) {
                      lab_0x5f9b:
                        // 0x5f9b
                        v132 = v131;
                        v64 = v130;
                        v69 = 0;
                        v72 = v129;
                        switch (*v132) {
                            case 42: {
                                int64_t v133 = function_158c0(40); // 0x6516
                                int64_t v134 = g90; // 0x652b
                                v125 = (char *)((int64_t)v125 + 1);
                                g90 = v133;
                                *(int64_t *)(v133 + 32) = v134;
                                *(int64_t *)(v133 + 8) = (int64_t)v14;
                                int64_t v135 = function_6910((int64_t *)&v14, (int64_t *)&v125, 1, v133, v16, v122); // 0x654c
                                v37 = v133;
                                if ((char)v135 == 0) {
                                    goto lab_0x6095_5;
                                }
                                char * v136 = v125; // 0x656b
                                v125 = (char *)((int64_t)v136 + 1);
                                v37 = v133;
                                if (*v136 != 61) {
                                    goto lab_0x6095_5;
                                }
                                int64_t v137 = v133 + 16; // 0x6583
                                *(int64_t *)(v133 + 24) = (int64_t)v14;
                                int64_t v138 = function_6910((int64_t *)&v14, (int64_t *)&v125, 0, v137, v16, v122); // 0x6590
                                v37 = v137;
                                v139 = v137;
                                if ((char)v138 == 0) {
                                    goto lab_0x6095_5;
                                }
                                goto lab_0x5f9b_2;
                            }
                            case 58: {
                                char * v140 = (char *)((int64_t)v132 + 1); // 0x6507
                                v125 = v140;
                                v131 = v140;
                                goto lab_0x5f9b;
                            }
                            case 0: {
                                goto lab_0x64c9;
                            }
                            default: {
                                goto lab_0x5fbd;
                            }
                        }
                    }
                  lab_0x5fbd:;
                    int64_t v141 = (int64_t)v132; // 0x5f9b
                    char * v142 = (char *)(v141 + 1); // 0x5fc1
                    v125 = v142;
                    v41 = (int16_t)*v132;
                    v37 = v130;
                    if (*v142 == 0) {
                        goto lab_0x6095_5;
                    }
                    int64_t v143 = v141 + 3; // 0x5fe8
                    v125 = (char *)v143;
                    int64_t v144 = (int64_t)"lc"; // 0x5ff5
                    v37 = v130;
                    if (*(char *)(v141 + 2) != 61) {
                        goto lab_0x6095_5;
                    }
                    int64_t v145 = 0;
                    while ((int32_t)function_4a80(&v41, v144, v143, v130, v16) != 0) {
                        int64_t v146 = v145 + 1; // 0x6010
                        v144 = *(int64_t *)(8 * v146 + (int64_t)&g21);
                        v43 = v130;
                        if (v144 == 0) {
                            goto lab_0x6061_2;
                        }
                        v145 = v146;
                    }
                    int64_t v147 = 0x100000000 * v145 / 0x10000000; // 0x603f
                    int64_t v148 = v147 + (int64_t)&g29; // 0x6048
                    *(int64_t *)(v147 + (int64_t)&g29 + 8) = (int64_t)v14;
                    int64_t v149 = function_6910((int64_t *)&v14, (int64_t *)&v125, 0, v148, v16, v122); // 0x6054
                    v43 = v148;
                    v139 = v148;
                    if ((char)v149 == 0) {
                        goto lab_0x6061_2;
                    }
                    goto lab_0x5f9b_2;
                }
                goto lab_0x64c9;
            }
        }
    } else {
        goto lab_0x5a06;
    }
  lab_0x629f:;
    int64_t v150 = v29;
    int64_t v151 = function_d4e0(v150, g22, &g5, 4); // 0x62b5
    int64_t v104 = v151; // 0x62bd
    int64_t v105 = 4; // 0x62bd
    int64_t v103 = v150; // 0x62bd
    int64_t v114; // 0x4df3
    int64_t v111; // 0x4df3
    int64_t v116; // 0x4df3
    int64_t v112; // 0x4df3
    if (v151 < 0) {
        goto lab_0x66d2;
    } else {
        if (v151 == 2) {
            // 0x6644
            *(int64_t *)&g27 = (int64_t)"%Y-%m-%d ";
            *(int64_t *)&g28 = (int64_t)"%m-%d %H:%M";
            v114 = 4;
            v116 = &g5;
            v112 = (int64_t)&g22;
            v111 = v150;
        } else {
            if (v151 > 2) {
                // 0x641e
                v114 = 4;
                v116 = &g5;
                v112 = (int64_t)&g22;
                v111 = v150;
                if (v151 == 3) {
                    int64_t v152 = function_eb50(2); // 0x642d
                    v114 = 4;
                    v116 = &g5;
                    v112 = (int64_t)&g22;
                    v111 = 2;
                    if ((char)v152 != 0) {
                        int64_t v153 = function_48a0(0, g27, 2, 4); // 0x6448
                        *(int64_t *)&g27 = v153;
                        int64_t v154 = function_48a0(0, g28, 2, 4); // 0x6462
                        *(int64_t *)&g28 = v154;
                        v114 = 4;
                        v116 = 2;
                        v112 = (int64_t)g28;
                        v111 = 0;
                    }
                }
            } else {
                if (v151 == 0) {
                    // 0x662a
                    *(int64_t *)&g28 = (int64_t)"%Y-%m-%d %H:%M:%S.%N %z";
                    *(int64_t *)&g27 = (int64_t)"%Y-%m-%d %H:%M:%S.%N %z";
                    v114 = 4;
                    v116 = &g5;
                    v112 = (int64_t)&g22;
                    v111 = v150;
                } else {
                    // 0x62dc
                    v114 = 4;
                    v116 = &g5;
                    v112 = (int64_t)&g22;
                    v111 = v150;
                    if (v151 == 1) {
                        // 0x62e2
                        *(int64_t *)&g28 = (int64_t)"%Y-%m-%d %H:%M";
                        *(int64_t *)&g27 = (int64_t)"%Y-%m-%d %H:%M";
                        v114 = 4;
                        v116 = &g5;
                        v112 = (int64_t)&g22;
                        v111 = v150;
                    }
                }
            }
        }
        goto lab_0x62f7;
    }
  lab_0x5c42:
    // 0x5c42
    if (g95 != 0) {
        // 0x6221
        function_75f0("//DIRED//", &g56);
        function_75f0("//SUBDIRED//", &g55);
        int64_t v155 = function_148a0(g78); // 0x624e
        int64_t v156 = *(int64_t *)((8 * v155 & 0x7fffffff8) + (int64_t)&g23); // 0x6268
        function_4c10(1, "//DIRED-OPTIONS// --quoting-style=%s\n", v156, v45);
    }
    // 0x5c4f
    int64_t v157; // 0x4df3
    if (g129 == 0) {
        goto lab_0x5c74;
    } else {
        // 0x5c5b
        if (function_f020(g129) != 0) {
            // 0x667c
            function_49b0("hash_get_n_entries (active_dir_set) == 0", "src/ls.c", &g134, "main");
            v157 = (int64_t)"main";
            goto lab_0x669b;
        } else {
            // 0x5c6c
            function_f680(g129);
            goto lab_0x5c74;
        }
    }
  lab_0x5a06:;
    int64_t v91 = v77;
    if (g86 == 1) {
        int32_t v100 = 2; // 0x5f2f
        if (g84 == 0 && g94 != 3) {
            // 0x5f3a
            v100 = (int32_t)(g104 == 0) + 4 & -2;
        }
        // 0x5f49
        g86 = v100;
    }
    int64_t v83 = v76; // 0x5a1a
    int64_t v85 = v16; // 0x5a1a
    if (g85 == 0) {
        goto lab_0x5a6b;
    } else {
        int64_t v101 = function_f4c0(30, 0, 0x68c0, 0x68d0, 0x6b30); // 0x5a38
        g129 = v101;
        if (v101 == 0) {
            goto lab_0x676f;
        } else {
            int64_t v102 = *(int64_t *)0x22fe0; // 0x5a54
            _obstack_begin(&g52, 0, 0, v102, g24);
            v83 = v102;
            v85 = g24;
            goto lab_0x5a6b;
        }
    }
  lab_0x66d2:
    // 0x66d2
    function_d5f0("time style", v103, v104);
    function_4a50(function_48a0((int32_t)"time style" ^ (int32_t)"time style", "Valid arguments are:\n", 5, v105), (int64_t)g46);
    int64_t v106 = (int64_t)&g22 + 8; // 0x6725
    function_4d20((int64_t)g46, 1, (int64_t)"  - [posix-]%s\n", (char *)(int64_t)"full-iso");
    int64_t v107 = *(int64_t *)v106; // 0x6738
    int64_t v108 = v107; // 0x673e
    int64_t v109 = v106; // 0x673e
    while (v107 != 0) {
        // 0x671e
        v106 = v109 + 8;
        function_4d20((int64_t)g46, 1, (int64_t)"  - [posix-]%s\n", (char *)v108);
        v107 = *(int64_t *)v106;
        v108 = v107;
        v109 = v106;
    }
    // 0x6740
    function_4a50(function_48a0(0, "  - +FORMAT (e.g., +%H:%M) for a 'date'-style format\n", 5, v107), (int64_t)g46);
    function_cca0(2);
    goto lab_0x676f;
  lab_0x5c74:
    // 0x5c74
    v157 = v45;
    if (v1 == __readfsqword(40)) {
        // 0x5c8e
        return g59;
    }
    goto lab_0x669b;
  lab_0x6318:;
    int64_t v170 = function_4710("COLORTERM"); // 0x631f
    if (v170 == 0) {
        goto lab_0x6374;
    } else {
        // 0x6329
        v68 = v118;
        v70 = v120;
        v71 = v119;
        v73 = v121;
        if (*(char *)v170 == 0) {
            goto lab_0x6374;
        } else {
            goto lab_0x632e_2;
        }
    }
  lab_0x5a6b:
    // 0x5a6b
    g73 = function_16d50(function_4710("TZ"));
    char v81; // 0x4df3
    if ((g102 - 2 & -3) == 0) {
        // 0x5aa1
        *(char *)&g72 = 1;
        v81 = 0;
        goto lab_0x5aaa;
    } else {
        // 0x5a94
        if (g104 != 0) {
            // 0x5e6f
            if (g116 != 0) {
                // 0x5aa1
                *(char *)&g72 = 1;
                v81 = 0;
                goto lab_0x5aaa;
            } else {
                // 0x5e7c
                if (g99 != 0) {
                    // 0x5aa1
                    *(char *)&g72 = 1;
                    v81 = 0;
                    goto lab_0x5aaa;
                } else {
                    // 0x5e89
                    *(char *)&g72 = 0;
                    v81 = 1;
                    if (g85 == 0) {
                        // 0x5ea2
                        v81 = 1;
                        if (g93 == 0) {
                            // 0x5eaf
                            v81 = g94 != 0 ? 1 : *(char *)&g83;
                        }
                    }
                    goto lab_0x5aaa;
                }
            }
        } else {
            // 0x5aa1
            *(char *)&g72 = 1;
            v81 = 0;
            goto lab_0x5aaa;
        }
    }
  lab_0x676f:;
    int64_t v110 = function_15b30(); // 0x676f
    function_16270(v110 & 0xffffffff, (int64_t)v14, 0, &g20, (int64_t)g45);
    // 0x678f
    function_49b0("dev_ino_size <= obstack_object_size (&dev_ino_obstack)", "src/ls.c", &g130, "dev_ino_pop");
    // 0x67ae
    return function_49b0("found", "src/ls.c", &g132, "main");
  lab_0x62f7:
    // 0x62f7
    function_6c30(v111, v112);
    v113 = v114;
    v115 = v116;
    v117 = v112;
    goto lab_0x59f2;
  lab_0x669b:
    // 0x669b
    function_48e0();
    v32 = v157;
    v31 = v47;
    v30 = v48;
    goto lab_0x66a0;
  lab_0x6374:;
    int64_t v159 = function_4710("TERM"); // 0x637b
    v160 = v118;
    if (v159 == 0) {
        goto lab_0x632e;
    } else {
        // 0x638c
        if (*(char *)v159 == 0) {
            goto lab_0x632e;
        } else {
            int64_t v161 = v118; // 0x4df3
            int64_t v162 = (int64_t)"# Configuration file for dircolors, a utility to help you set the"; // 0x63b6
            while (true) {
                int64_t v163 = v162;
                if ((int32_t)function_4770(v163, (int64_t)"TERM ", 5) == 0) {
                    int64_t v164 = function_49d0(v163 + 5, v159, 0); // 0x63ec
                    v68 = v161;
                    v70 = 0;
                    v71 = v119;
                    v73 = v159;
                    if ((int32_t)v164 == 0) {
                        // break -> 0x632e
                        break;
                    }
                }
                int64_t v165 = v163; // 0x63a7
                int64_t v166 = -1; // 0x63a7
                int64_t v167 = 0; // 0x63a7
                while (v166 != 0) {
                    int64_t v168 = v165;
                    v166--;
                    bool v169; // 0x4df3
                    v165 = v168 + (v169 ? -1 : 1);
                    v167 = v166;
                    if (*(char *)v168 == 0) {
                        // break ->
                        break;
                    }
                    v167 = 0;
                }
                v162 = v163 + -1 - v167;
                v161 = (int64_t)"# Configuration file for dircolors, a utility to help you set the";
                v160 = (int64_t)"# Configuration file for dircolors, a utility to help you set the";
                if (v162 - (int64_t)"# Configuration file for dircolors, a utility to help you set the" > (int64_t)&g1) {
                    goto lab_0x632e;
                }
            }
            goto lab_0x632e_2;
        }
    }
  lab_0x65d9:
    // 0x65d9
    *(int64_t *)&g27 = v34;
    *(int64_t *)&g28 = v33;
    v114 = 3;
    v116 = 6;
    v112 = 10;
    v111 = v33;
    goto lab_0x62f7;
  lab_0x66a0:;
    int64_t v158 = function_15040(v30); // 0x66a3
    v104 = function_4c60(2, (int32_t)"invalid time style format %s" ^ (int32_t)"invalid time style format %s", (char *)function_48a0(0, "invalid time style format %s", 5, v32), v158, v31);
    v105 = v158;
    v103 = v30;
    goto lab_0x66d2;
  lab_0x632e_2:;
    int64_t v74 = v71;
    int64_t v75 = v68;
    v76 = v75;
    v77 = v74;
    if (g93 == 0) {
        goto lab_0x5a06;
    } else {
        int64_t v78 = v73;
        int64_t v79 = v70;
        if ((char)function_6b40(13, v78, v79, v75, v16) != 0) {
            goto lab_0x6368;
        } else {
            // 0x6349
            if ((char)function_6b40(14, v78, v79, v75, v16) == 0 || g121 == 0) {
                int64_t v80 = function_6b40(12, v78, v79, v75, v16); // 0x63ff
                v76 = v75;
                v77 = v74;
                if ((char)v80 == 0) {
                    goto lab_0x5a06;
                } else {
                    // 0x640c
                    v76 = v75;
                    v77 = v74;
                    if (g104 != 0) {
                        goto lab_0x5a06;
                    } else {
                        goto lab_0x6368;
                    }
                }
            } else {
                goto lab_0x6368;
            }
        }
    }
  lab_0x5aaa:
    // 0x5aaa
    g71 = v81 % 2;
    int64_t v82 = v83; // 0x5abe
    int64_t v84 = v85; // 0x5abe
    if (g95 != 0) {
        int64_t v86 = *(int64_t *)0x22fe0; // 0x61e9
        _obstack_begin(&g56, 0, 0, v86, g24);
        _obstack_begin(&g55, 0, 0, v86, g24);
        v82 = v86;
        v84 = g24;
    }
    int64_t v87 = v84;
    int64_t v88 = v82; // 0x5acb
    v55 = 0;
    if (g92 != 0) {
        while (true) {
          lab_0x6197_2:
            // 0x6197
            v52 = v55;
            int64_t v56 = v52 & 0xffffffff; // 0x6197
            v57 = v52;
            if (v52 < 91) {
                if (v57 > 64 || v57 < 58) {
                    char * v58 = (char *)(v52 + (int64_t)&g51); // 0x6188
                    *v58 = *v58 | 1;
                    // 0x6197
                    v55 = v52 + 1;
                    goto lab_0x6197_2;
                } else {
                    int64_t v59 = v56 + 0xffffffd3; // 0x616a
                    v60 = v59 & 0xffffffff;
                    if ((int32_t)v59 < 2) {
                        goto lab_0x61b4;
                    } else {
                        goto lab_0x617d;
                    }
                }
            } else {
                // 0x619f
                v54 = 1;
                if (v57 < 123) {
                    goto lab_0x6188_2;
                } else {
                    int64_t v61 = v56 + 0xffffffd3; // 0x61ac
                    v60 = v61 & 0xffffffff;
                    if (v57 == 126 || (int32_t)v61 < 2) {
                        goto lab_0x61b4;
                    } else {
                        goto lab_0x617d;
                    }
                }
            }
        }
      lab_0x61c8_2:;
        int64_t v89 = function_15cd0(); // 0x61c8
        g120 = (int16_t *)(v89 == 0 ? (int64_t)&g9 : v89);
        v88 = v63;
    }
    // 0x5ad1
    g127 = 100;
    g126 = 0;
    g128 = function_158c0(0x4e20);
    function_6f70();
    int32_t v90 = a1 - v91; // 0x5b0a
    int64_t v92 = v91; // 0x5b0d
    int64_t v93; // 0x4df3
    int64_t v94; // 0x4df3
    int64_t v95; // 0x4df3
    int64_t v96; // 0x4df3
    if (v90 < 1) {
        // 0x5cfd
        int64_t v97; // 0x4df3
        int64_t v98; // 0x4df3
        if (g84 != 0) {
            // 0x5eea
            function_a9d0((int64_t)&g11, 3, 1, (int64_t)&g9);
            v97 = (int64_t)&g9;
            v98 = 3;
        } else {
            // 0x5d0a
            function_6e80(&g11, 0, 1);
            v97 = v88;
            v98 = 0;
        }
        // 0x5d1d
        v93 = v97;
        v94 = v97;
        v96 = v98;
        if ((int64_t)g126 != 0) {
            goto lab_0x60e8;
        } else {
            goto lab_0x5d2b;
        }
    } else {
        int64_t v99 = v92 + 1; // 0x5b27
        function_a9d0(*(int64_t *)(8 * v92 + a2), 0, 1, (int64_t)&g9);
        v92 = v99;
        while (v19 > v99) {
            // 0x5b18
            v99 = v92 + 1;
            function_a9d0(*(int64_t *)(8 * v92 + a2), 0, 1, (int64_t)&g9);
            v92 = v99;
        }
        // 0x5b35
        v95 = (int64_t)&g9;
        v94 = (int64_t)&g9;
        v96 = 0;
        if ((int64_t)g126 != 0) {
            goto lab_0x60e8;
        } else {
            goto lab_0x5b43;
        }
    }
  lab_0x6368:
    // 0x6368
    *(char *)&g88 = 1;
    v76 = v75;
    v77 = v74;
    goto lab_0x5a06;
  lab_0x60e8:;
    int64_t v171 = v94;
    function_7180((int64_t)&g11, v96, 1, v171, v87);
    if (g84 == 0) {
        // 0x6473
        function_7390(0, 1, 1);
    }
    // 0x60fa
    v95 = v171;
    int64_t v172; // 0x4df3
    int64_t v173; // 0x4df3
    if ((int64_t)g126 == 0) {
        goto lab_0x5b43;
    } else {
        // 0x6108
        function_a1a0();
        v44 = v171;
        v46 = v87;
        if (g119 == 0) {
            goto lab_0x5c2c;
        } else {
            int64_t v174 = g43; // 0x611b
            int64_t * v175 = (int64_t *)(v174 + 40); // 0x6122
            uint64_t v176 = *v175; // 0x6122
            if (*(int64_t *)(v174 + 48) > v176) {
                // 0x6130
                *v175 = v176 + 1;
                *(char *)v176 = 10;
            } else {
                // 0x666d
                function_4950(v174, 10, 1, v171, v87, v122);
            }
            // 0x613b
            g57++;
            v173 = v171;
            v172 = v87;
            goto lab_0x5b7e;
        }
    }
  lab_0x5d2b:;
    int64_t v177 = v93;
    int64_t v178 = g119; // 0x5d2b
    v44 = v177;
    v46 = v87;
    int64_t v179; // 0x4df3
    int64_t v180; // 0x4df3
    if (v178 == 0) {
        goto lab_0x5c2c;
    } else {
        // 0x5d3b
        v180 = v177;
        v179 = v178;
        if (*(int64_t *)(v178 + 24) == 0) {
            // 0x5d46
            *(char *)&g75 = 0;
            v180 = v177;
            v179 = v178;
        }
        goto lab_0x5b8e;
    }
  lab_0x5b43:
    // 0x5b43
    v173 = v95;
    v172 = v87;
    v93 = v95;
    if (v90 > 1) {
        goto lab_0x5b7e;
    } else {
        goto lab_0x5d2b;
    }
  lab_0x5b7e:
    // 0x5b7e
    v180 = v173;
    v179 = g119;
    v44 = v173;
    v46 = v172;
    if (g119 == 0) {
        goto lab_0x5c2c;
    } else {
        goto lab_0x5b8e;
    }
  lab_0x5b8e:;
    int64_t v181 = v180;
    int64_t v182 = v179;
    int64_t v183 = g129; // 0x5b92
    int64_t * v184 = (int64_t *)v182;
    int64_t v185 = *v184; // 0x5b99
    g119 = *(int64_t *)(v182 + 24);
    while (v183 != 0 && v185 == 0) {
        // 0x5bae
        if (g54 - g53 < 16) {
            // 0x678f
            function_49b0("dev_ino_size <= obstack_object_size (&dev_ino_obstack)", "src/ls.c", &g130, "dev_ino_pop");
            // 0x67ae
            return function_49b0("found", "src/ls.c", &g132, "main");
        }
        int64_t v186 = g54 - 16; // 0x5bc9
        g54 = v186;
        int64_t v187 = *(int64_t *)v186; // 0x5bda
        v14 = v187;
        int64_t v188 = function_fc00(v183, (int64_t *)&v14, v187); // 0x5bec
        if (v188 == 0) {
            // 0x67ae
            return function_49b0("found", "src/ls.c", &g132, "main");
        }
        // 0x5bfd
        function_46d0(v188);
        function_46d0(*v184);
        function_46d0(*(int64_t *)(v182 + 8));
        function_46d0(v182);
        v44 = v181;
        v46 = v183;
        if (g119 == 0) {
            goto lab_0x5c2c;
        }
        v182 = g119;
        v183 = g129;
        v184 = (int64_t *)v182;
        v185 = *v184;
        g119 = *(int64_t *)(v182 + 24);
    }
    int64_t * v189 = (int64_t *)(v182 + 8); // 0x5b54
    function_b8c0(v185, *v189, *(char *)(v182 + 16));
    function_46d0(*v184);
    function_46d0(*v189);
    function_46d0(v182);
    *(char *)&g75 = 1;
    v173 = v181;
    v172 = v183;
    goto lab_0x5b7e;
  lab_0x60cb:;
    int64_t v190 = *(int64_t *)(v40 + 32); // 0x60cb
    function_46d0(v40);
    v40 = v190;
    if (v190 != 0) {
        goto lab_0x60cb;
    } else {
        goto lab_0x60dc;
    }
  lab_0x60dc:
    // 0x60dc
    g93 = 0;
    v64 = v38;
    v69 = v39;
    v72 = (int32_t)"unparsable value for LS_COLORS environment variable" ^ (int32_t)"unparsable value for LS_COLORS environment variable";
    goto lab_0x64c9;
}

