// Address range: 0xa900 - 0xbfc0
int64_t function_a900(uint32_t a1, int64_t a2) {
    // 0xa900
    int64_t v1; // bp-56, 0xa900
    int64_t v2 = &v1; // 0xa904
    int64_t v3 = __readfsqword(40); // 0xa908
    int64_t v4; // 0xa998
    int64_t v5; // 0xa9ab
    if (g59 == 0) {
        // 0xa998
        v4 = function_10bc0();
        if (v4 == 0) {
            goto lab_0xa921;
        } else {
            // 0xa9a9
            v5 = function_116d0(v4, 0);
            goto lab_0xa97e;
        }
    } else {
        goto lab_0xa921;
    }
  lab_0xbdc0:;
    // 0xbdc0
    int64_t v6; // 0xa900
    int64_t v7; // 0xa900
    int64_t v8; // 0xa900
    int64_t v9; // 0xa900
    int64_t v10; // 0xbb63
    int64_t * v11; // 0xbb39
    int64_t v12; // 0xbb52
    if (g43 != 0) {
        int64_t v13 = g43;
        int64_t v14 = function_49d0(*(int64_t *)v13, v10, 4); // 0xbde4
        v7 = v6;
        v9 = v10;
        while ((int32_t)v14 != 0) {
            int64_t v15 = *(int64_t *)(v13 + 8); // 0xbdd0
            int64_t v16 = v15; // 0xbdd7
            if (v15 == 0) {
                goto lab_0xbdf8;
            }
            v13 = v16;
            v14 = function_49d0(*(int64_t *)v13, v10, 4);
            v7 = v6;
            v9 = v10;
        }
    } else {
      lab_0xbdf8:;
        unsigned char v17 = *(char *)(v12 + 18); // 0xbdf8
        int64_t v18 = (int64_t)v17 + 0xffffffff; // 0xbdfe
        int64_t v19 = v18 & 0xffffffff; // 0xbe03
        int64_t v20 = 0; // 0xbe03
        if ((char)v18 < 14) {
            // 0xbe05
            v19 = v17 - 1;
            uint32_t v21 = *(int32_t *)(4 * v19 + (int64_t)&g3); // 0xbe0f
            v20 = v21;
        }
        int64_t v22 = v20;
        *v11 = *v11 + v19;
        v7 = v8;
        v9 = v22;
        if (*(int32_t *)&g63 == 1) {
            // 0xbe31
            v7 = v8;
            v9 = v22;
            if (g61 == -1) {
                // 0xbe3e
                v7 = v8;
                v9 = v22;
                if (g58 == 0) {
                    // 0xbe4b
                    v7 = v8;
                    v9 = v22;
                    if (g46 == 0) {
                        // 0xbe58
                        function_7180(v10, v22, 0, v8);
                        function_a1a0(v10, v22, 0, (int64_t)&g96, (int64_t)&g96, (int64_t)&g96);
                        function_6f70();
                        v7 = v8;
                        v9 = v22;
                    }
                }
            }
        }
    }
    goto lab_0xbbc8;
  lab_0xbbc8:
    // 0xbbc8
    function_8090();
    int64_t v23 = v7; // 0xbbcd
    int64_t v24 = v9; // 0xbbcd
    goto lab_0xbb48;
  lab_0xa921:;
    // 0xa921
    int64_t v37; // 0xa900
    function_4d90(v2, 1, 21, "%lu", (int64_t *)(int64_t)a1, (int32_t)v37);
    int64_t v38 = v2; // 0xa942
    int32_t v39 = *(int32_t *)v38; // 0xa945
    v38 += 4;
    while ((v39 - 0x1010101 & (v39 ^ -0x7f7f7f80) & -0x7f7f7f80) == 0) {
        // 0xa945
        v39 = *(int32_t *)v38;
        v38 += 4;
    }
    // 0xa95d
    int64_t v40; // 0xa900
    int64_t v41 = v40 + 6; // 0xa97c
    int64_t v42; // 0xa902
    int64_t v43 = v42; // 0xa97c
    goto lab_0xa97e;
  lab_0xa97e:;
    int64_t v44 = __readfsqword(40) ^ v3; // 0xa983
    if (v44 == 0) {
        // 0xa98e
        return (int32_t)v5 < 0 ? 0 : v5 & 0xffffffff;
    }
    int64_t v45 = 0;
    uint64_t v46 = 0;
    function_48e0();
    int64_t v47 = v2; // bp-64, 0xa9d0
    int128_t v48; // bp-976, 0xa900
    int64_t v49 = &v48; // 0xa9e6
    int128_t v50 = g85; // 0xa9f3
    int64_t v51 = v50; // 0xa9f3
    int64_t v52 = g87; // 0xa9fa
    int64_t v53 = __readfsqword(40); // 0xaa01
    int64_t v54 = v51; // 0xaa17
    int64_t v55 = v46; // 0xaa17
    int64_t v56 = v45; // 0xaa17
    int64_t v57 = v52; // 0xaa17
    int64_t v58; // 0xa900
    int64_t v59; // 0xa900
    int64_t v60; // 0xa900
    int64_t v61; // 0xa900
    int64_t v62; // 0xa900
    int64_t v63; // 0xa900
    int64_t v64; // 0xa900
    int64_t v65; // 0xa900
    if (g86 != v51) {
        goto lab_0xaa65;
    } else {
        uint128_t v66 = 400 * (v50 & 0xffffffffffffffff); // 0xaa21
        int64_t v67 = v66 % 0x1ff0000000000000001 != 0; // 0xaa27
        v62 = v51;
        v63 = v67;
        v61 = v44;
        v65 = v49;
        v64 = v45;
        v8 = v52;
        v60 = v43;
        v58 = v45;
        v59 = v41;
        if ((int64_t)v66 < 0 || v66 % 0x1ff0000000000000001 != 0) {
            goto lab_0xb8af;
        } else {
            int64_t v68 = 400 * v51; // 0xaa44
            int64_t v69 = function_15920(v52, v68, v67); // 0xaa48
            g86 *= 2;
            g87 = v69;
            v54 = g85;
            v55 = v67;
            v56 = v68;
            v57 = v69;
            goto lab_0xaa65;
        }
    }
  lab_0xaa65:;
    int64_t v70 = v57 + 200 * v54; // 0xaa6d
    int64_t v71 = v70 + 8; // 0xaa73
    int64_t v72 = v70 + 192; // 0xaa7a
    *(int64_t *)v72 = 0;
    int64_t v73 = v71 & -8; // 0xaa85
    int64_t * v74 = (int64_t *)v70; // 0xaa89
    *v74 = 0;
    __asm_rep_stosq_memset((char *)v73, 0, (v70 + 200 - v73) / 8 % 0x20000000);
    int64_t * v75 = (int64_t *)(v70 + 32); // 0xaa9f
    *v75 = 0;
    int32_t * v76 = (int32_t *)(v70 + 168); // 0xaaa7
    *v76 = (int32_t)v45;
    int32_t * v77 = (int32_t *)(v70 + 196); // 0xaab5
    *v77 = -1;
    int64_t v78 = v55; // 0xaabf
    if (g84 == 0) {
        // 0xaac1
        v78 = v55;
        if (g83 != 0) {
            uint64_t v79 = function_7020(v4); // 0xb2e3
            int64_t v80 = v79 % 256; // 0xb2e8
            *v77 = (int32_t)v80;
            v78 = v80;
            if ((char)v79 != 0) {
                // 0xb2f9
                g84 = 1;
                v78 = v80;
            }
        }
    }
    unsigned char v81 = *(char *)&g51; // 0xaad5
    int64_t v82 = v81; // 0xaad5
    int64_t v83; // 0xa900
    int64_t v84; // 0xa900
    int64_t v85; // 0xa900
    int64_t v86; // 0xa900
    int64_t v87; // 0xa900
    int64_t v88; // 0xa900
    int64_t v89; // 0xa900
    int64_t v90; // 0xa900
    char v91; // 0xa900
    char v92; // 0xa900
    int64_t v93; // 0xa900
    int64_t v94; // 0xa900
    int64_t v95; // 0xa900
    int64_t v96; // 0xa900
    if ((char)v46 == 0) {
        if (v81 != 0) {
            char v97 = *(char *)v4; // 0xb1c0
            v96 = v49;
            v86 = v4;
            if (v97 != 47) {
                char v98 = *(char *)v41; // 0xb308
                v91 = v97;
                v92 = v98;
                v96 = v49;
                v86 = v4;
                if (v98 == 0) {
                    goto lab_0xb1d1;
                } else {
                    goto lab_0xad31;
                }
            } else {
                goto lab_0xb1d1;
            }
        } else {
            // 0xac29
            if (g36 != 0) {
                goto lab_0xad10;
            } else {
                // 0xac40
                if (g48 != 0) {
                    // 0xb670
                    if (v45 != 0) {
                        goto lab_0xad10;
                    } else {
                        goto lab_0xb684;
                    }
                } else {
                    // 0xac4f
                    v89 = 0;
                    v90 = v78;
                    v95 = v49;
                    v93 = v56;
                    v88 = v82;
                    v83 = v45;
                    v85 = 0;
                    v87 = v41;
                    if (g35 == 0) {
                        goto lab_0xabe0;
                    } else {
                        int64_t v99 = v45 == 0; // 0xac5f
                        v89 = v99;
                        v90 = v99;
                        v95 = v49;
                        v93 = v56;
                        v88 = v82;
                        v83 = v45;
                        v85 = 0;
                        v87 = v41;
                        if (v45 == 0) {
                            goto lab_0xb684;
                        } else {
                            goto lab_0xabe0;
                        }
                    }
                }
            }
        }
    } else {
        char v100 = *(char *)v4; // 0xaae3
        v94 = v49;
        v84 = v4;
        if (v100 == 47) {
            goto lab_0xaafd;
        } else {
            char v101 = *(char *)v41; // 0xaaf0
            v94 = v49;
            v84 = v4;
            v91 = v100;
            v92 = v101;
            if (v101 != 0) {
                goto lab_0xad31;
            } else {
                goto lab_0xaafd;
            }
        }
    }
  lab_0xb8af:;
    int64_t v102 = v64;
    function_15b30();
    *(int64_t *)(v65 - 8) = v59;
    int64_t v103; // 0xa900
    *(int64_t *)(v65 - 16) = v103;
    *(int64_t *)(v65 - 24) = v58;
    *(int64_t *)(v65 - 32) = v4;
    *(int64_t *)(v65 - 40) = (int64_t)&v47;
    int64_t v104 = v65 - 48; // 0xb8cf
    *(int64_t *)v104 = v61;
    int64_t v105 = v104 - (int64_t)&g90; // 0xb8d0
    int64_t v106 = v105 + 20; // 0xb8d7
    *(int32_t *)v106 = (int32_t)v63;
    char * v31 = (char *)(v105 + 19); // 0xb8db
    *v31 = (char)v63;
    int64_t v107 = __readfsqword(40); // 0xb8df
    int64_t * v108 = (int64_t *)(v105 + (int64_t)&g89); // 0xb8e8
    *v108 = v107;
    int32_t * v26 = (int32_t *)function_4760(v8, v102, v63, v62); // 0xb8fa
    *v26 = 0;
    int64_t v27 = function_4870(v8); // 0xb903
    int64_t v109; // 0xa900
    int64_t v110; // 0xa900
    int64_t v111; // 0xa900
    int64_t v112; // 0xa900
    int64_t v113; // 0xb92a
    if (v27 == 0) {
        int64_t v114 = function_48a0(0, "cannot open directory %s", 5); // 0xbf60
        function_77f0((int64_t)*(char *)v106, v114, v8);
        goto lab_0xb9f1;
    } else {
        // 0xb911
        v109 = v62;
        v110 = v63;
        v112 = v102;
        if (g88 == 0) {
            goto lab_0xba75;
        } else {
            int64_t v115 = function_4aa0(v27); // 0xb925
            v113 = v105 + 32;
            if ((int32_t)v115 < 0) {
                int64_t v116 = function_4b40(1, v8, v113, v62); // 0xbbf8
                v111 = v8;
                if ((int32_t)v116 > -1) {
                    goto lab_0xb94e;
                } else {
                    goto lab_0xbc08;
                }
            } else {
                int64_t v117 = v115 & 0xffffffff; // 0xb92f
                int64_t v118 = function_4b90(1, v117, v113); // 0xb93e
                v111 = v117;
                if ((int32_t)v118 <= -1) {
                    goto lab_0xbc08;
                } else {
                    goto lab_0xb94e;
                }
            }
        }
    }
  lab_0xaafd:;
    int64_t v119 = v94; // 0xab00
    int64_t v120 = v84; // 0xab00
    v96 = v94;
    v86 = v84;
    if (v81 != 0) {
        goto lab_0xb1d1;
    } else {
        goto lab_0xab06;
    }
  lab_0xb1d1:;
    int64_t v121 = function_d900(v86, 2); // 0xb1d9
    *(int64_t *)(v70 + 16) = v121;
    v119 = v96;
    v120 = v86;
    if (v121 == 0) {
        // 0xb1eb
        function_77f0(v46 % 256, function_48a0(0, "error canonicalizing %s", 5), v86);
        v119 = v96;
        v120 = v86;
    }
    goto lab_0xab06;
  lab_0xad10:;
    char v504 = *(char *)v4; // 0xad10
    v119 = v49;
    v120 = v4;
    char v202 = v504; // 0xad1b
    if (v504 == 47) {
        goto lab_0xab06;
    } else {
        goto lab_0xad21;
    }
  lab_0xab06:;
    int64_t v122 = v120;
    int64_t v123 = v119;
    int64_t v124 = g47; // 0xab06
    int64_t v125 = v70 + 24; // 0xab0c
    int32_t v126; // 0xa900
    int64_t v127; // 0xa900
    int64_t v128; // 0xa900
    int64_t v129; // 0xa900
    int64_t v130; // 0xa900
    int64_t v131; // 0xa900
    int64_t v132; // 0xb183
    if (g47 < 5) {
        // 0xab19
        v130 = v124;
        if ((char)v46 == 0 || g47 < 3) {
            goto lab_0xab22;
        } else {
            // 0xb16d
            v48 = g47;
            v132 = (int64_t)v48 & 0xffffffff;
            v126 = function_4b40(1, v122, v125, v124);
            if ((int32_t)v48 == 3) {
                goto lab_0xb1ab;
            } else {
                if (v126 < 0) {
                    int32_t v133 = *(int32_t *)function_4760(1, v122, v125, v132); // 0xb6f5
                    v130 = v132;
                    if (v133 == 2) {
                        goto lab_0xab22;
                    } else {
                        goto lab_0xb6fe;
                    }
                } else {
                    // 0xb196
                    v130 = v132;
                    if ((*(int32_t *)(v70 + 48) & 0xf000) != 0x4000) {
                        goto lab_0xab22;
                    } else {
                        goto lab_0xb1ab;
                    }
                }
            }
        }
    } else {
        // 0xaf20
        v130 = v124;
        v129 = v124;
        v131 = v123;
        v127 = v122;
        v128 = v125;
        if (g47 != 5) {
            goto lab_0xab22;
        } else {
            goto lab_0xaf29;
        }
    }
  lab_0xad31:;
    int64_t v134 = v91;
    int64_t v135 = v92;
    v48 = v92;
    int64_t v136 = function_48c0(v4, v135, v134) + 25 + function_48c0(v41, v135, v134); // 0xad6a
    int64_t v137 = v49 - (v136 & -0x1000); // 0xad78
    int64_t v138 = v49; // 0xad82
    while (v138 != v137) {
        // 0xad89
        v138 -= (int64_t)&g1;
    }
    char v139 = v48; // 0xad82
    int64_t v140 = v137 - (v136 & (int64_t)(int32_t)&g95 & -16); // 0xb3ee
    int64_t v141 = v41 + 1;
    char v142 = *(char *)v141; // 0xb3ff
    int64_t v143 = v140 + 15 & -16; // 0xb404
    int64_t v144 = v143; // 0xb40f
    if (v139 == 46 != (v142 == 0)) {
        int64_t v145 = v143 | 1; // 0xb429
        *(char *)v143 = v139;
        int64_t v146 = v41; // 0xb438
        int64_t v147 = v143; // 0xb438
        int64_t v148 = v145; // 0xb438
        int64_t v149 = v141; // 0xb438
        if (v142 != 0) {
            char v150 = *(char *)(v41 + 2); // 0xb422
            int64_t v151 = v145 + 1; // 0xb429
            int64_t v152 = v141 + 1; // 0xb42d
            *(char *)v145 = v142;
            char v153 = v150; // 0xb438
            int64_t v154 = v141; // 0xb438
            v146 = v141;
            v147 = v145;
            v148 = v151;
            v149 = v152;
            while (v150 != 0) {
                int64_t v155 = v151;
                int64_t v156 = v152;
                v150 = *(char *)(v154 + 2);
                v151 = v155 + 1;
                v152 = v156 + 1;
                *(char *)v155 = v153;
                v153 = v150;
                v154 = v156;
                v146 = v156;
                v147 = v155;
                v148 = v151;
                v149 = v152;
            }
        }
        // 0xb43a
        v144 = v148;
        if (v41 < v149) {
            // 0xb43f
            v144 = v148;
            if (*(char *)v146 != 47) {
                // 0xb445
                *(char *)v148 = 47;
                v144 = v147 + 2;
            }
        }
    }
    int64_t v157 = v144; // 0xb44e
    if (v91 != 0) {
        int64_t v158 = v4 + 1; // 0xb458
        *(char *)v144 = v91;
        int64_t v159 = v144 + 1; // 0xb45e
        char v160 = *(char *)v158; // 0xb462
        int64_t v161 = v159; // 0xb467
        int64_t v162 = v158; // 0xb467
        v157 = v159;
        while (v160 != 0) {
            // 0xb458
            v158 = v162 + 1;
            *(char *)v161 = v160;
            v159 = v161 + 1;
            v160 = *(char *)v158;
            v161 = v159;
            v162 = v158;
            v157 = v159;
        }
    }
    // 0xb469
    *(char *)v157 = 0;
    v94 = v140;
    v84 = v143;
    goto lab_0xaafd;
  lab_0xb9f1:;
    int64_t result = __readfsqword(40) ^ *v108; // 0xb9f9
    if (result != 0) {
        // 0xbfac
        return function_48e0();
    }
    // 0xa98e
    return result;
  lab_0xba75:
    // 0xba75
    function_6f70();
    int64_t v163 = v109; // 0xba81
    int64_t v164 = v112; // 0xba81
    int64_t v165 = v60; // 0xba81
    int64_t v166; // 0xa900
    int64_t v167 = v166; // 0xba81
    if ((g39 || g46) != 0) {
        // 0xba87
        if (g8 == 0) {
            int64_t v168 = g19; // 0xba90
            int64_t * v169 = (int64_t *)(v168 + 40); // 0xba97
            uint64_t v170 = *v169; // 0xba97
            if (v170 >= *(int64_t *)(v168 + 48)) {
                // 0xbf7a
                function_4950(v168, 10, v110);
            } else {
                // 0xbaa5
                *v169 = v170 + 1;
                *(char *)v170 = 10;
            }
            // 0xbab0
            g31++;
        }
        // 0xbab8
        g8 = 0;
        if (g54 != 0) {
            // 0xbf28
            function_4bd0("  ", 1, 2, (int64_t)g19, v60, v166);
            g31 += 2;
        }
        int64_t v171 = 0; // 0xbad5
        if (*(char *)&g51 != 0) {
            int64_t v172 = function_d900(v8, 2); // 0xbeb8
            v171 = v172;
            if (v172 == 0) {
                int64_t v173 = function_48a0(0, "error canonicalizing %s", 5); // 0xbed7
                function_77f0((int64_t)*(char *)v106, v173, v8);
                v171 = v172;
            }
        }
        int64_t v174 = v102 == 0 ? v8 : v102; // 0xbaf1
        int64_t * v175 = (int64_t *)(v105 - 16); // 0xbb01
        *v175 = v171;
        function_8650(v174, g40, -1, 0, 1, (int64_t)&g29);
        function_46d0(v171);
        function_4bd0(":\n", 1, 2, (int64_t)g19, 1, (int64_t)&g29);
        g31 += 2;
        v163 = *v175;
        v164 = *(int64_t *)(v105 - 8);
        v165 = 1;
        v167 = &g29;
    }
    // 0xbb39
    v11 = (int64_t *)(v105 + 8);
    *v11 = 0;
    v23 = v163;
    v24 = v164;
    int64_t v28; // 0xa900
    int64_t v29; // 0xa900
    while (true) {
      lab_0xbb48:;
        int64_t v25 = v24;
        v6 = v23;
        *v26 = 0;
        v12 = function_4b50(v27);
        if (v12 == 0) {
            // 0xbc40
            v28 = 0;
            v29 = v25;
            if (*v26 == 0) {
                // break -> 0xbc74
                break;
            }
            int64_t v30 = function_48a0(0, "reading directory %s", 5); // 0xbc55
            function_77f0((int64_t)*v31, v30, v8);
            v7 = v6;
            v9 = v30;
            v28 = v8;
            v29 = v30;
            if (*v26 != 75) {
                // break -> 0xbc74
                break;
            }
            goto lab_0xbbc8;
        } else {
            // 0xbb63
            v10 = v12 + 19;
            if (g44 == 2) {
                goto lab_0xbdc0;
            } else {
                // 0xbb76
                if (*(char *)v10 == 46) {
                    // 0xbda0
                    v7 = v6;
                    v9 = v25;
                    if (g44 == 0) {
                        goto lab_0xbbc8;
                    } else {
                        int64_t v32 = v12 + 20; // 0xbdaa
                        v7 = v6;
                        v9 = v25;
                        if (*(char *)(v32 + (int64_t)(*(char *)v32 == 46)) == 0) {
                            goto lab_0xbbc8;
                        } else {
                            goto lab_0xbdc0;
                        }
                    }
                } else {
                    if (g44 != 0) {
                        goto lab_0xbdc0;
                    } else {
                        // 0xbb88
                        if (g42 != 0) {
                            int64_t v33 = g42;
                            int64_t v34 = function_49d0(*(int64_t *)v33, v10, 4); // 0xbbb8
                            v7 = v6;
                            v9 = v10;
                            while ((int32_t)v34 != 0) {
                                int64_t v35 = *(int64_t *)(v33 + 8); // 0xbba0
                                int64_t v36 = v35; // 0xbba7
                                if (v35 == 0) {
                                    goto lab_0xbdc0;
                                }
                                v33 = v36;
                                v34 = function_49d0(*(int64_t *)v33, v10, 4);
                                v7 = v6;
                                v9 = v10;
                            }
                            goto lab_0xbbc8;
                        } else {
                            goto lab_0xbdc0;
                        }
                    }
                }
            }
        }
    }
    int64_t v176 = function_4a20(v27); // 0xbc77
    int64_t v177 = v28; // 0xbc7e
    int64_t v178 = v29; // 0xbc7e
    int64_t v179 = v27; // 0xbc7e
    if ((int32_t)v176 != 0) {
        int64_t v180 = function_48a0(0, "closing directory %s", 5); // 0xbe8e
        int64_t v181 = (int64_t)*(char *)v106; // 0xbe93
        function_77f0(v181, v180, v8);
        v177 = v8;
        v178 = v180;
        v179 = v181;
    }
    // 0xbc84
    function_7180(v179, v178, v177, v6);
    int64_t v182 = v178; // 0xbc90
    int64_t v183 = v179; // 0xbc90
    if (g46 != 0) {
        // 0xbe70
        function_7390(v8, 0);
        v182 = 0;
        v183 = v8;
    }
    int64_t v184 = v177; // 0xbc9e
    int64_t v185 = v182; // 0xbc9e
    int64_t v186 = v183; // 0xbc9e
    if (*(int32_t *)&g63 != 0 != (g58 == 0)) {
        // 0xbcad
        if (g54 != 0) {
            // 0xbef8
            function_4bd0("  ", 1, 2, (int64_t)g19, v165, v167);
            g31 += 2;
        }
        int64_t v187 = function_48a0(0, "total", 5); // 0xbcc8
        int64_t v188 = g19; // 0xbccd
        function_4a50((int64_t *)v187, v188);
        int64_t v189 = g19; // 0xbce7
        g31 += function_48c0(v187, v188, 5);
        int64_t * v190 = (int64_t *)(v189 + 40); // 0xbcf5
        uint64_t v191 = *v190; // 0xbcf5
        if (v191 >= *(int64_t *)(v189 + 48)) {
            // 0xbf89
            function_4950(v189, 32, 5);
        } else {
            // 0xbd03
            *v190 = v191 + 1;
            *(char *)v191 = 32;
        }
        int64_t v192 = g57; // 0xbd0e
        g31++;
        int64_t v193 = function_ffa0(*v11, (int64_t *)(v105 + 176), g57, 512, g56, v167); // 0xbd35
        int64_t v194 = g19; // 0xbd3a
        function_4a50((int64_t *)v193, v194);
        int64_t v195 = g19; // 0xbd54
        g31 += function_48c0(v193, v194, v192);
        int64_t * v196 = (int64_t *)(v195 + 40); // 0xbd62
        uint64_t v197 = *v196; // 0xbd62
        int64_t v198; // 0xa900
        int64_t v199; // 0xa900
        if (v197 >= *(int64_t *)(v195 + 48)) {
            // 0xbf98
            function_4950(v195, 10, v192);
            v198 = v192;
            v199 = 10;
        } else {
            int64_t v200 = v197 + 1; // 0xbd70
            *v196 = v200;
            *(char *)v197 = 10;
            v198 = v200;
            v199 = v194;
        }
        // 0xbd7b
        g31++;
        v184 = v198;
        v185 = v199;
        v186 = v195;
    }
    // 0xbd83
    if ((int64_t)g85 != 0) {
        // 0xbd91
        function_a1a0(v186, v185, v184, (int64_t)&g96, (int64_t)&g96, (int64_t)&g96);
    }
    goto lab_0xb9f1;
  lab_0xad21:;
    char v201 = *(char *)v41; // 0xad21
    v119 = v49;
    v120 = v4;
    v91 = v202;
    v92 = v201;
    if (v201 == 0) {
        goto lab_0xab06;
    } else {
        goto lab_0xad31;
    }
  lab_0xb684:;
    int64_t v203 = 0;
    if (g47 == 5) {
        char v204 = *(char *)v4; // 0xb890
        v202 = v204;
        if (v204 != 47) {
            goto lab_0xad21;
        } else {
            // 0xb89e
            v129 = v203;
            v131 = v49;
            v127 = v4;
            v128 = v70 + 24;
            goto lab_0xaf29;
        }
    } else {
        // 0xb691
        if (g81 != 0) {
            goto lab_0xad10;
        } else {
            // 0xb69e
            if ((g49 || g48) == 0) {
                int64_t v205 = v78 & -256 | (int64_t)(v45 == 0);
                v89 = v203;
                v90 = v205;
                v95 = v49;
                v93 = v56;
                v88 = v82;
                v83 = v45;
                v85 = 0;
                v87 = v41;
                if (g35 == 0) {
                    goto lab_0xabe0;
                } else {
                    // 0xb6bc
                    v89 = v203;
                    v90 = v205;
                    v95 = v49;
                    v93 = v56;
                    v88 = v82;
                    v83 = v45;
                    v85 = 0;
                    v87 = v41;
                    if ((char)v205 != 0) {
                        goto lab_0xad10;
                    } else {
                        goto lab_0xabe0;
                    }
                }
            } else {
                goto lab_0xad10;
            }
        }
    }
  lab_0xabe0:;
    int64_t v206 = function_15b10(v4); // 0xabe3
    g85 = (int64_t)g85 + 1;
    *v74 = v206;
    int64_t v207 = v89; // 0xabf0
    int64_t v208 = v90; // 0xabf0
    int64_t v209 = v95; // 0xabf0
    int64_t v210 = v93; // 0xabf0
    int64_t v211 = v4; // 0xabf0
    int64_t v212 = v88; // 0xabf0
    int64_t v213; // 0xa900
    int64_t v214 = v213; // 0xabf0
    int64_t v215 = v83; // 0xabf0
    int64_t v216 = v85; // 0xabf0
    int64_t v217 = v87; // 0xabf0
    goto lab_0xabf3;
  lab_0xab22:;
    int64_t v485 = function_48d0(1, v122, v125); // 0xab2d
    int64_t v232 = v130; // 0xab36
    int64_t v230 = 0; // 0xab36
    int64_t v228 = v123; // 0xab36
    int64_t v226 = v122; // 0xab36
    int64_t v224 = v125; // 0xab36
    int64_t v221 = v130; // 0xab36
    int64_t v222 = v123; // 0xab36
    int64_t v220 = v122; // 0xab36
    if ((int32_t)v485 != 0) {
        goto lab_0xaf46;
    } else {
        goto lab_0xab3c;
    }
  lab_0xaf29:;
    int64_t v486 = function_4b40(1, v127, v128, v129); // 0xaf34
    v232 = v129;
    v230 = 1;
    v228 = v131;
    v226 = v127;
    v224 = v128;
    v221 = v129;
    v222 = v131;
    v220 = v127;
    if ((int32_t)v486 == 0) {
        goto lab_0xab3c;
    } else {
        goto lab_0xaf46;
    }
  lab_0xb94e:;
    int64_t * v487 = (int64_t *)(v105 + 40); // 0xb94e
    int64_t v488 = *v487; // 0xb94e
    int64_t * v489 = (int64_t *)v113; // 0xb953
    int64_t v490 = *v489; // 0xb953
    int64_t * v491 = (int64_t *)(v105 + 24); // 0xb95d
    *v491 = v488;
    int64_t * v492 = (int64_t *)(v105 + 8); // 0xb962
    *v492 = v490;
    int64_t v493 = function_158c0(16, v111, (int128_t)v490, v488); // 0xb967
    int64_t v494 = *v491; // 0xb96c
    *(int64_t *)v493 = v494;
    *(int64_t *)(v493 + 8) = *v492;
    int64_t v495 = function_fba0(g88, v493); // 0xb98a
    if (v495 == 0) {
        // 0xbfa7
        function_15b30();
        // 0xbfac
        return function_48e0();
    }
    if (v493 == v495) {
        int64_t v496 = *v489; // 0xba33
        uint64_t v497 = g28 - g27; // 0xba38
        int64_t v498 = v496; // 0xba3f
        int64_t v499 = v493; // 0xba3f
        if (v497 < 16) {
            // 0xba41
            *v492 = v496;
            _obstack_newchunk(&g26, 16, v497, v496);
            v498 = *v492;
            v499 = 16;
        }
        int64_t v500 = g27;
        int64_t v501 = v500 + 16; // 0xba63
        g27 = v501;
        *(int64_t *)(v500 + 8) = v498;
        *(int64_t *)v500 = *v487;
        v109 = v498;
        v110 = v501;
        v112 = v499;
        goto lab_0xba75;
    } else {
        // 0xb9a1
        function_46d0(v493);
        int64_t v502 = function_14e60(0, 3, v8, (int32_t)v494); // 0xb9b3
        function_4c60(0, (int32_t)"%s: not listing already-listed directory" ^ (int32_t)"%s: not listing already-listed directory", (char *)function_48a0(0, "%s: not listing already-listed directory", 5), v502);
        function_4a20(v27);
        *(int32_t *)&g34 = 2;
        goto lab_0xb9f1;
    }
  lab_0xbc08:;
    int64_t v503 = function_48a0(0, "cannot determine device and inode of %s", 5); // 0xbc16
    function_77f0((int64_t)*(char *)v106, v503, v8);
    function_4a20(v27);
    goto lab_0xb9f1;
  lab_0xabf3:;
    int64_t result2 = v216; // 0xac00
    if (v53 == __readfsqword(40)) {
        // 0xa98e
        return result2;
    }
    // 0xb8aa
    function_48e0();
    v62 = v207;
    v63 = v208;
    v61 = v70;
    v65 = v209;
    v64 = v210;
    v8 = v211;
    v60 = v212;
    v166 = v214;
    v58 = v215;
    v103 = v216;
    v59 = v217;
    goto lab_0xb8af;
  lab_0xaf46:;
    int64_t v218 = function_48a0(0, "cannot access %s", 5); // 0xaf54
    int64_t v219 = v46 % 256;
    function_77f0(v219, v218, v220);
    v89 = v221;
    v90 = v220;
    v95 = v222;
    v93 = v218;
    v88 = v82;
    v83 = v45;
    v85 = 0;
    v87 = v46;
    v207 = v221;
    v208 = v220;
    v209 = v222;
    v210 = v218;
    v211 = v219;
    v212 = v82;
    v215 = v45;
    v216 = 0;
    v217 = v46;
    if ((char)v46 != 0) {
        goto lab_0xabf3;
    } else {
        goto lab_0xabe0;
    }
  lab_0xab3c:;
    int64_t v223 = v224;
    int64_t v225 = v226;
    int64_t v227 = v228;
    int64_t v229 = v230;
    int64_t v231 = v232;
    *(char *)(v70 + 184) = 1;
    int32_t * v233 = (int32_t *)(v70 + 48); // 0xab4d
    int64_t v234 = v229; // 0xab5a
    int64_t v235 = 1; // 0xab5a
    int64_t v236 = v45; // 0xab5a
    if ((*v233 & 0xf000) == 0x8000 && g52 != 0) {
        // 0xb10d
        v48 = 0x100000000000000 * v229 / 0x100000000000000;
        int64_t v237 = (int64_t)v48 % 256; // 0xb11d
        v234 = v237;
        v235 = 21;
        v236 = v45;
        if ((char)function_6b40(21, (int32_t)v225, v229, v231, v82) != 0) {
            int64_t v238 = function_4760(21, v225, v237, v231); // 0xb12c
            int64_t v239 = *(int64_t *)(v70 + 24); // 0xb131
            *(int32_t *)v238 = 95;
            if (v239 != g23) {
                // 0xb14b
                g23 = v239;
            }
            // 0xb152
            *(char *)v72 = 0;
            v234 = (int64_t)v48 % 256;
            v235 = 21;
            v236 = v239;
        }
    }
    int64_t v240 = v236;
    int64_t v241 = v235;
    int64_t v242 = v234;
    int64_t v243; // 0xa900
    int64_t v244; // 0xa900
    int64_t v245; // 0xa900
    int64_t v246; // 0xa900
    if (*(int32_t *)&g63 == 0) {
        goto lab_0xaf80;
    } else {
        // 0xab6e
        v244 = v231;
        v245 = v242;
        v246 = v225;
        v243 = v240;
        if (g78 != 0) {
            goto lab_0xaf80;
        } else {
            goto lab_0xab7b;
        }
    }
  lab_0xb1ab:
    if (v126 != 0) {
        goto lab_0xb6fe;
    } else {
        // 0xb1b3
        v232 = v132;
        v230 = v46 % 256;
        v228 = v123;
        v226 = v122;
        v224 = v125;
        goto lab_0xab3c;
    }
  lab_0xaf80:;
    int64_t * v247 = (int64_t *)(v70 + 24); // 0xaf87
    int64_t v248; // 0xa900
    int64_t v249; // 0xa900
    int64_t v250; // 0xa900
    int64_t v251; // 0xaf91
    if (*v247 == g22) {
        int64_t v252 = function_4760(v241, v225, v242, v231); // 0xb547
        *(int32_t *)v252 = 95;
        *(int64_t *)(v70 + 176) = (int64_t)&g13;
        v249 = v231;
        v250 = v242;
        v248 = v252;
        goto lab_0xb568;
    } else {
        // 0xaf91
        v251 = v70 + 176;
        if ((char)v242 == 0) {
            // 0xb250
            if ((int32_t)function_16890(v225, v251, v242) >= 0) {
                goto lab_0xafb0;
            } else {
                goto lab_0xb25d;
            }
        } else {
            // 0xafa3
            if ((int32_t)function_16870(v225, v251, v242) < 0) {
                goto lab_0xb25d;
            } else {
                goto lab_0xafb0;
            }
        }
    }
  lab_0xb6fe:;
    int64_t v253 = function_48a0(0, "cannot access %s", 5); // 0xb70c
    function_77f0(1, v253, v122);
    v207 = v132;
    v208 = v122;
    v209 = v123;
    v210 = v253;
    v211 = 1;
    v212 = v82;
    v215 = v45;
    v216 = 0;
    v217 = v125;
    goto lab_0xabf3;
  lab_0xab7b:;
    int32_t v254 = *v233 & 0xf000; // 0xab7e
    int32_t v255 = v254; // 0xab88
    int64_t v256 = v244; // 0xab88
    int64_t v257 = v245; // 0xab88
    int64_t v258 = v246; // 0xab88
    int64_t v259 = v243; // 0xab88
    int64_t v260 = v223; // 0xab88
    int64_t v261 = v244; // 0xab88
    int64_t v262 = v245; // 0xab88
    int64_t v263 = v246; // 0xab88
    int64_t v264 = v243; // 0xab88
    if (v254 == 0xa000) {
        goto lab_0xb4f8;
    } else {
        goto lab_0xab8e;
    }
  lab_0xb568:;
    uint32_t v265 = *(int32_t *)&g63; // 0xb568
    int64_t v266 = 0; // 0xb570
    int64_t v267 = 0; // 0xb570
    int64_t v268 = v248; // 0xb570
    int64_t v269 = v249; // 0xb570
    int64_t v270 = v250; // 0xb570
    int64_t v271 = v265; // 0xb570
    int64_t v272 = v248; // 0xb570
    if (v265 == 0) {
        goto lab_0xb38d;
    } else {
        goto lab_0xb576;
    }
  lab_0xb4f8:;
    int64_t v273 = v261; // 0xb4ff
    int64_t v274 = v262; // 0xb4ff
    int64_t v275 = v261; // 0xb4ff
    int64_t v276 = v262; // 0xb4ff
    int64_t v277 = v263; // 0xb4ff
    int64_t v278 = v264; // 0xb4ff
    int64_t v279 = v223; // 0xb4ff
    if (g49 != 0) {
        goto lab_0xb01c;
    } else {
        goto lab_0xb0ee;
    }
  lab_0xab8e:;
    int64_t v280 = v260;
    int64_t v281 = v259;
    int64_t v282 = v258;
    int64_t v283 = v257;
    int64_t v284 = v256;
    int64_t v285; // 0xa900
    int64_t v286; // 0xa900
    int64_t v287; // 0xa900
    int64_t v288; // 0xa900
    int64_t v289; // 0xa900
    if (v255 == 0x4000) {
        if ((char)v46 == 0) {
            goto lab_0xb538;
        } else {
            // 0xb519
            if (g45 != 0) {
                goto lab_0xb538;
            } else {
                // 0xb522
                *v76 = 9;
                v287 = v284;
                v288 = v283;
                v289 = v282;
                v285 = v281;
                v286 = v280;
                goto lab_0xaba3;
            }
        }
    } else {
        // 0xab99
        *v76 = 5;
        v287 = v284;
        v288 = v283;
        v289 = v282;
        v285 = v281;
        v286 = v280;
        goto lab_0xaba3;
    }
  lab_0xb38d:;
    int64_t v290 = v266;
    int32_t * v291 = (int32_t *)v268;
    int64_t v292; // 0xa900
    int64_t v293; // 0xa900
    int64_t v294; // 0xa900
    int64_t v295; // 0xa900
    int64_t v296; // 0xa900
    int64_t v297; // 0xa900
    int64_t v298; // 0xa900
    if (*v247 == (int64_t)g21) {
        // 0xb880
        *v291 = 95;
        v293 = 0;
        v296 = v290;
        v298 = v267;
        goto lab_0xb766;
    } else {
        // 0xb39e
        *v291 = 0;
        v48 = 0x100000000000000 * v290 / 0x100000000000000;
        int64_t v299 = function_e1d0(v225, v223, (int32_t)v290); // 0xb3b2
        v292 = 0;
        v294 = 2;
        v295 = 1;
        v297 = v223;
        if ((int32_t)v299 < 1) {
            int32_t v300 = *v291; // 0xb740
            int64_t v301 = v299 < 0; // 0xb744
            int64_t v302 = (int64_t)v48 % 256; // 0xb747
            uint32_t v303 = v300 - 22 & -17; // 0xb751
            int64_t v304 = v303; // 0xb751
            v293 = v301;
            v296 = v302;
            v298 = v304;
            if (v300 != 95 != v303 != 0) {
                // 0xb75b
                g21 = (int32_t)*v247;
                v293 = v301;
                v296 = v302;
                v298 = v304;
            }
            goto lab_0xb766;
        } else {
            goto lab_0xb3cb;
        }
    }
  lab_0xb576:
    // 0xb576
    *(int32_t *)(v70 + 188) = 0;
    v244 = v269;
    v245 = v270;
    v246 = v271;
    v243 = v272;
    goto lab_0xab7b;
  lab_0xafb0:;
    // 0xafb0
    bool v305; // 0xa900
    int64_t v306 = v305 ? -1 : 1; // 0xafc3
    int64_t v307 = *(int64_t *)v251; // 0xa900
    int64_t v308 = (int64_t)"unlabeled"; // 0xa900
    int64_t v309 = 10; // 0xa900
    unsigned char v310 = *(char *)v308; // 0xafc3
    char v311 = *(char *)v307; // 0xafc3
    int64_t v312 = v307 + v306; // 0xafc3
    int64_t v313 = v308 + v306; // 0xafc3
    char v314 = v311; // 0xafc3
    bool v315 = false; // 0xafc3
    while (v310 == v311) {
        int64_t v316 = v309 - 1; // 0xafc3
        v307 = v312;
        v308 = v313;
        v309 = v316;
        v314 = v310;
        v315 = true;
        if (v316 == 0) {
            // break ->
            break;
        }
        v310 = *(char *)v308;
        v311 = *(char *)v307;
        v312 = v307 + v306;
        v313 = v308 + v306;
        v314 = v311;
        v315 = false;
    }
    bool v317 = v315;
    unsigned char v318 = v314;
    uint32_t v319 = *(int32_t *)&g63; // 0xafc5
    int64_t v320 = v319; // 0xafc5
    int64_t v321 = !((v310 < v318 | v317)) != v310 < v318; // 0xafd5
    int64_t v322; // 0xa900
    int64_t v323; // 0xa900
    int64_t v324; // 0xa900
    int64_t v325; // 0xa900
    if (v319 == 0) {
        // 0xb378
        v48 = !((v310 < v318 | v317)) != v310 < v318;
        int64_t v326 = function_4760(v312, v313, v321, v320); // 0xb37e
        v266 = (int64_t)v48 % 256;
        v267 = v313;
        v268 = v326;
        goto lab_0xb38d;
    } else {
        // 0xafe0
        v269 = v320;
        v270 = v321;
        v271 = v313;
        v272 = v240;
        if ((v310 >= v318 && !v317) == v310 < v318) {
            goto lab_0xb576;
        } else {
            // 0xafe8
            *(int32_t *)(v70 + 188) = 1;
            g77 = 1;
            v323 = v320;
            v324 = v321;
            v325 = v313;
            v322 = v240;
            goto lab_0xaff9;
        }
    }
  lab_0xb25d:;
    int64_t v327 = function_4760(v225, v251, v242, v231); // 0xb25d
    uint32_t v328 = *(int32_t *)v327; // 0xb262
    if (v328 != 95 != (v328 - 22 & -17) != 0) {
        // 0xb279
        g22 = *v247;
    }
    int64_t v329 = v231 & -256 | (int64_t)(v328 == 95); // 0xb26d
    *(int64_t *)v251 = (int64_t)&g13;
    v249 = v329;
    v250 = v328;
    v248 = v327;
    int32_t v330; // 0xa900
    int64_t v331; // 0xa900
    if (v328 == 61 || v328 == 95) {
        goto lab_0xb568;
    } else {
        // 0xb2a3
        *(int32_t *)(v70 + 188) = 0;
        v330 = v329;
        v331 = v329;
        goto lab_0xb2ad;
    }
  lab_0xb01c:;
    int64_t v332 = v273;
    int64_t v333 = *(int64_t *)(v70 + 72); // 0xb01c
    int64_t v334 = function_d3e0(v225, v333); // 0xb023
    int64_t * v335 = (int64_t *)v71; // 0xb028
    *v335 = v334;
    int64_t v336 = v274; // 0xb032
    int64_t v337 = v333; // 0xb032
    int64_t v338 = v334; // 0xb032
    int64_t v339; // 0xa900
    int64_t v340; // 0xa900
    int64_t v341; // 0xa900
    int64_t v342; // 0xa900
    if (v334 == 0) {
        int64_t v343 = function_48a0(0, "cannot read symbolic link %s", 5); // 0xb796
        function_77f0(v46 % 256, v343, v225);
        int64_t v344 = *v335; // 0xb7ad
        v336 = v225;
        v337 = v343;
        v338 = v344;
        v341 = v225;
        v342 = v343;
        v339 = v344;
        v340 = 0;
        if (v344 != 0) {
            goto lab_0xb038;
        } else {
            goto lab_0xb0d3;
        }
    } else {
        goto lab_0xb038;
    }
  lab_0xb0ee:
    // 0xb0ee
    *v76 = 6;
    v287 = v275;
    v288 = v276;
    v289 = v277;
    v285 = v278;
    v286 = v279;
    goto lab_0xaba3;
  lab_0xb038:;
    int64_t v370 = v338;
    int64_t v463 = v337;
    int64_t v462 = v336;
    int64_t v365; // 0xa900
    int64_t v369; // 0xa900
    int64_t v367; // 0xa900
    if (*(char *)v370 == 47) {
        goto lab_0xb660;
    } else {
        int64_t v480 = function_e090(v225); // 0xb046
        if (v480 == 0) {
            goto lab_0xb660;
        } else {
            // 0xb054
            v48 = v480;
            int64_t v481 = v48; // 0xb063
            int64_t v482 = function_158c0(function_48c0(v370, v463, v462) + 2 + v481, v463, (int128_t)v481, v332); // 0xb06f
            int64_t v483 = v48; // 0xb074
            int64_t v484 = (int64_t)(*(char *)(v225 - 1 + v483) != 47) + v483;
            function_47a0(function_4bf0(v482, v225, v484), v370);
            v369 = v484;
            v367 = v370;
            v365 = v482;
            goto lab_0xb0a0;
        }
    }
  lab_0xaba3:;
    int64_t v345 = v286;
    uint32_t v346 = *(int32_t *)&g63; // 0xaba3
    int64_t v347 = v346; // 0xaba3
    int64_t v348 = *(int64_t *)(v70 + 88); // 0xabaa
    int64_t v349; // 0xa900
    int64_t v350; // 0xa900
    int64_t v351; // 0xa900
    int64_t v352; // 0xa900
    int64_t v353; // 0xa900
    if (v346 == 0) {
        goto lab_0xada8;
    } else {
        // 0xabb7
        v351 = v287;
        v352 = v288;
        v353 = v289;
        v350 = v82;
        v349 = v285;
        if (g58 != 0) {
            goto lab_0xada8;
        } else {
            goto lab_0xabc4;
        }
    }
  lab_0xb538:
    // 0xb538
    *v76 = 3;
    v287 = v284;
    v288 = v283;
    v289 = v282;
    v285 = v281;
    v286 = v280;
    goto lab_0xaba3;
  lab_0xb766:;
    int64_t v354 = v298;
    int64_t v355 = v293;
    v292 = v355;
    v294 = 1;
    v295 = v296;
    v297 = v354;
    if ((char)v296 == 0) {
        // 0xb773
        v292 = v355;
        v294 = 0;
        v295 = g77;
        v297 = v354;
    }
    goto lab_0xb3cb;
  lab_0xb3cb:;
    int32_t v356 = v294;
    *(int32_t *)(v70 + 188) = v356;
    g77 = v295;
    v323 = v294;
    v324 = v295;
    v325 = v297;
    v322 = v268;
    v330 = v356;
    v331 = v294;
    if ((int32_t)v292 != 0) {
        goto lab_0xb2ad;
    } else {
        goto lab_0xaff9;
    }
  lab_0xb2ad:;
    int64_t v357 = function_14e60(0, 3, v225, v330); // 0xb2b7
    uint32_t v358 = *(int32_t *)function_4760(0, 3, v225, v331); // 0xb2d0
    function_4c60(0, v358, "%s", v357);
    v323 = v357;
    v324 = (int64_t)"%s";
    v325 = v358;
    v322 = v357;
    goto lab_0xaff9;
  lab_0xb0d3:
    // 0xb0d3
    function_46d0(v340);
    int32_t v461 = *v233 & 0xf000; // 0xb0de
    v255 = v461;
    v256 = v332;
    v257 = v341;
    v258 = v342;
    v259 = v339;
    v260 = v340;
    v275 = v332;
    v276 = v341;
    v277 = v342;
    v278 = v339;
    v279 = v340;
    if (v461 != 0xa000) {
        goto lab_0xab8e;
    } else {
        goto lab_0xb0ee;
    }
  lab_0xb660:
    // 0xb660
    v369 = v462;
    v367 = v463;
    v365 = function_15b10(v370);
    goto lab_0xb0a0;
  lab_0xada8:;
    // 0xada8
    int64_t v413; // bp-784, 0xa900
    int64_t v464 = function_ffa0(v348, &v413, g57, 512, g56, v347); // 0xadc7
    int32_t v465 = function_116d0(v464, 0); // 0xaddc
    if (g73 < v465) {
        // 0xadde
        g73 = v465;
    }
    int64_t v466 = g57; // 0xadaf
    int64_t v428 = &v413; // 0xadbd
    uint32_t v467 = *(int32_t *)&g63; // 0xade4
    int64_t v468 = v467; // 0xade4
    v351 = 512;
    v352 = v466;
    v353 = 0;
    v350 = v468;
    v349 = v428;
    int64_t v452; // 0xa900
    int64_t v451; // 0xa900
    int64_t v441; // 0xa900
    int64_t v448; // 0xa900
    int64_t v438; // 0xa900
    int64_t v449; // 0xa900
    int64_t v439; // 0xa900
    int64_t v450; // 0xa900
    int64_t v440; // 0xa900
    int64_t v442; // 0xa900
    int64_t v429; // 0xb5b7
    if (v467 != 0) {
        goto lab_0xabc4;
    } else {
        // 0xadf4
        if (g12 != 0) {
            int32_t v469 = function_a900(*(int32_t *)(v70 + 52), 0); // 0xb646
            if (g69 < v469) {
                // 0xb64c
                g69 = v469;
            }
        }
        // 0xae01
        v448 = 512;
        v449 = v466;
        v450 = 0;
        v451 = v468;
        v452 = v345;
        if (g11 != 0) {
            // 0xb5b0
            v429 = (int64_t)*(int32_t *)(v70 + 56);
            if (g59 == 0) {
                int64_t v470 = function_10d70(v429, 0, g57); // 0xb833
                if (v470 == 0) {
                    goto lab_0xb5c1;
                } else {
                    int64_t v471 = function_116d0(v470, 0); // 0xb846
                    v438 = 512;
                    v439 = 0;
                    v440 = 0;
                    v441 = v468;
                    v442 = (int32_t)v471 < 0 ? 0 : v471 & 0xffffffff;
                    goto lab_0xb61c;
                }
            } else {
                goto lab_0xb5c1;
            }
        } else {
            goto lab_0xae0e;
        }
    }
  lab_0xaff9:;
    int64_t v359 = v325;
    int64_t v360 = v324;
    int64_t v361 = v323;
    int32_t v362 = *v233 & 0xf000; // 0xaffc
    v255 = v362;
    v256 = v361;
    v257 = v360;
    v258 = v359;
    v259 = v322;
    v260 = v223;
    if (v362 != 0xa000) {
        goto lab_0xab8e;
    } else {
        uint32_t v363 = *(int32_t *)&g63; // 0xb00c
        v273 = v361;
        v274 = v360;
        v261 = v361;
        v262 = v360;
        v263 = v359;
        v264 = v363;
        if (v363 != 0) {
            goto lab_0xb4f8;
        } else {
            goto lab_0xb01c;
        }
    }
  lab_0xb0a0:;
    int64_t v364 = v365;
    int64_t v366 = v367;
    int64_t v368 = v369;
    v341 = v368;
    v342 = v366;
    v339 = v370;
    v340 = 0;
    if (v364 == 0) {
        goto lab_0xb0d3;
    } else {
        // 0xb0a9
        if (*v77 == 0) {
            // 0xb860
            if ((char)function_7020(*v335) != 0) {
                // 0xb871
                *v77 = -1;
            }
        }
        // 0xb0b9
        if (g53 < 2) {
            // 0xb0c6
            v341 = v368;
            v342 = v366;
            v339 = v370;
            v340 = v364;
            if (g49 != 0) {
                goto lab_0xb478;
            } else {
                goto lab_0xb0d3;
            }
        } else {
            goto lab_0xb478;
        }
    }
  lab_0xabc4:;
    int64_t v371 = v351; // 0xabcb
    int64_t v372 = v352; // 0xabcb
    int64_t v373 = v353; // 0xabcb
    int64_t v374 = v350; // 0xabcb
    int64_t v375 = v349; // 0xabcb
    int64_t v376 = v345; // 0xabcb
    int64_t v377 = v351; // 0xabcb
    int64_t v378 = v352; // 0xabcb
    int64_t v379 = v353; // 0xabcb
    int64_t v380 = v350; // 0xabcb
    int64_t v381 = v349; // 0xabcb
    int64_t v382 = v345; // 0xabcb
    if (g78 != 0) {
        goto lab_0xae24;
    } else {
        goto lab_0xabd1;
    }
  lab_0xae24:;
    int64_t v383 = v382;
    int64_t v384 = v381;
    int64_t v385 = v380;
    int64_t v386 = v379;
    int64_t v387 = v378;
    int64_t v388 = v377;
    int32_t v389 = function_48c0(*(int64_t *)(v70 + 176), v386, v387); // 0xae36
    int64_t v390 = v388; // 0xae36
    int64_t v391 = v387; // 0xae36
    int64_t v392 = v386; // 0xae36
    int64_t v393 = v385; // 0xae36
    int64_t v394 = v384; // 0xae36
    int64_t v395 = v383; // 0xae36
    if (g70 < v389) {
        // 0xb320
        g70 = v389;
        v390 = v388;
        v391 = v387;
        v392 = v386;
        v393 = v385;
        v394 = v384;
        v395 = v383;
    }
    goto lab_0xae3c;
  lab_0xabd1:;
    int64_t v472 = v376;
    int64_t v473 = v375;
    int64_t v474 = v374;
    int64_t v475 = v372;
    int64_t v476 = v371;
    v89 = v476;
    v90 = v475;
    v95 = v227;
    v93 = v373;
    v88 = v474;
    v213 = v347;
    v83 = v473;
    v85 = v348;
    v87 = v472;
    if (g48 != 0) {
        int64_t v477 = &v413; // 0xb21c
        int64_t v478 = function_10fc0(*v75, &v413, v475, (int64_t *)v476); // 0xb223
        int32_t v479 = function_48c0(v478, v477, v475); // 0xb236
        v89 = v476;
        v90 = v475;
        v95 = v227;
        v93 = v477;
        v88 = v474;
        v213 = v347;
        v83 = v473;
        v85 = v348;
        v87 = v472;
        if (*(int32_t *)&g75 < v479) {
            // 0xb23c
            *(int32_t *)&g75 = v479;
            v89 = v476;
            v90 = v475;
            v95 = v227;
            v93 = v477;
            v88 = v474;
            v213 = v347;
            v83 = v473;
            v85 = v348;
            v87 = v472;
        }
    }
    goto lab_0xabe0;
  lab_0xae0e:;
    int64_t v453 = v450;
    if (g60 != 0) {
        int32_t v454 = function_a900(*(int32_t *)(v70 + 52), v453); // 0xb596
        if (g67 < v454) {
            // 0xb59c
            g67 = v454;
        }
    }
    // 0xae1b
    v377 = v448;
    v378 = v449;
    v379 = v453;
    v380 = v451;
    v381 = v428;
    v382 = v452;
    v390 = v448;
    v391 = v449;
    v392 = v453;
    v393 = v451;
    v394 = v428;
    v395 = v452;
    if (g78 == 0) {
        goto lab_0xae3c;
    } else {
        goto lab_0xae24;
    }
  lab_0xb478:;
    // 0xb478
    int64_t v455; // bp-960, 0xa900
    int64_t v456 = &v455; // 0xb478
    int64_t v457 = function_4b40(1, v364, v456, v332); // 0xb487
    v341 = v456;
    v342 = v364;
    v339 = v370;
    v340 = v364;
    int64_t v458; // 0xa900
    if ((int32_t)v457 != 0) {
        goto lab_0xb0d3;
    } else {
        // 0xb494
        *(char *)(v70 + 185) = 1;
        v458 = v456;
        if ((char)v46 == 0 | *(int32_t *)&g63 == 0) {
            goto lab_0xb4d0;
        } else {
            // 0xb4b6
            int32_t v459; // 0xa900
            uint32_t v460 = v459 & 0xf000;
            v458 = v460;
            if (v460 == 0x4000) {
                goto lab_0xb0d3;
            } else {
                goto lab_0xb4d0;
            }
        }
    }
  lab_0xae3c:;
    int64_t v396 = v395;
    int64_t v397 = v394;
    int64_t v398 = v393;
    int64_t v399 = v391;
    int64_t v400 = v390;
    v371 = v400;
    v372 = v399;
    v373 = v392;
    v374 = v398;
    v375 = v397;
    v376 = v396;
    int32_t v401; // 0xa900
    int64_t v402; // 0xa900
    int64_t v403; // 0xa900
    int64_t v404; // 0xa900
    int64_t v405; // 0xa900
    int64_t v406; // 0xa900
    if (*(int32_t *)&g63 != 0) {
        goto lab_0xabd1;
    } else {
        int64_t * v407 = (int64_t *)v400; // 0xae55
        int64_t v408; // bp-816, 0xa900
        int64_t v409 = function_10fc0(*(int64_t *)(v70 + 40), &v408, v399, v407); // 0xae55
        int32_t v410 = function_48c0(v409, (int64_t)&v408, v399); // 0xae68
        if (g72 < v410) {
            // 0xae6a
            g72 = v410;
        }
        // 0xae70
        if ((*v233 & 0xb000) != 0x2000) {
            int64_t v411 = g55; // 0xb347
            int64_t v412 = function_ffa0(*(int64_t *)(v70 + 72), &v413, g55, 1, g10, v347); // 0xb34d
            int32_t v414 = function_116d0(v412, 0);
            v371 = 1;
            v372 = v411;
            v373 = 0;
            v374 = g10;
            v375 = v397;
            v376 = v396;
            v401 = v414;
            v404 = 1;
            v405 = v411;
            v406 = 0;
            v403 = g10;
            v402 = v397;
            if (g64 < v414) {
                goto lab_0xb368;
            } else {
                goto lab_0xabd1;
            }
        } else {
            int64_t * v415 = (int64_t *)(v70 + 64); // 0xae83
            uint64_t v416 = *v415; // 0xae83
            int64_t v417 = &v413; // 0xae87
            int64_t v418 = v416 / 256 & (int64_t)(int32_t)&g95; // 0xaea1
            int64_t v419 = function_10fc0(v416 / 0x100000000 & 0xfffff000 | v418, &v413, v418, v407); // 0xaeaf
            int32_t v420 = function_48c0(v419, v417, v418); // 0xaec2
            if (g66 < v420) {
                // 0xaec4
                g66 = v420;
            }
            uint64_t v421 = *v415; // 0xaeca
            uint64_t v422 = v421 % 256; // 0xaed1
            int64_t v423 = function_10fc0(v421 / 0x1000 & 0xffffff00 | v422, &v413, v422, v407); // 0xaee0
            int64_t v424 = function_48c0(v423, v417, v422); // 0xaee8
            int64_t v425 = g65; // 0xaeed
            int64_t v426 = v425; // 0xaef5
            if (v424 > v425) {
                // 0xaef7
                g65 = v424;
                v426 = v424 & 0xffffffff;
            }
            int32_t v427 = (int32_t)v426 + 2 + g66; // 0xaf05
            v371 = v400;
            v372 = v426;
            v373 = v417;
            v374 = v398;
            v375 = v417;
            v376 = v396;
            v401 = v427;
            v404 = v400;
            v405 = v426;
            v406 = v417;
            v403 = v398;
            v402 = v417;
            if (v427 > g64) {
                goto lab_0xb368;
            } else {
                goto lab_0xabd1;
            }
        }
    }
  lab_0xb5c1:
    // 0xb5c1
    function_4d90(v428, 1, 21, "%lu", (int64_t *)v429, v346);
    int64_t v430 = v428;
    int32_t v431 = *(int32_t *)v430; // 0xb5e2
    int64_t v432 = v430 + 4; // 0xb5e4
    int32_t v433 = v431 - 0x1010101 & (v431 ^ -0x7f7f7f80); // 0xb5f0
    uint32_t v434 = v433 & -0x7f7f7f80; // 0xb5f2
    while (v434 == 0) {
        // 0xb5e2
        v430 = v432;
        v431 = *(int32_t *)v430;
        v432 = v430 + 4;
        v433 = v431 - 0x1010101 & (v431 ^ -0x7f7f7f80);
        v434 = v433 & -0x7f7f7f80;
    }
    uint32_t v435 = (v433 & 0x8080) == 0 ? v434 / 0x10000 : v434; // 0xb605
    int64_t v436 = v430 + 6; // 0xb608
    int64_t v437 = (char)v435 == 0 ? 0xfffffffd : 0xfffffffc; // 0xb615
    v438 = v436;
    v439 = v435;
    v440 = v435 & -0x7f7f8000;
    v441 = v429;
    v442 = ((v433 & 0x8080) == 0 ? v436 : v432) - v428 + v437 & 0xffffffff;
    goto lab_0xb61c;
  lab_0xb61c:;
    int64_t v443 = v442;
    int64_t v444 = v441;
    int64_t v445 = v440;
    int64_t v446 = v439;
    int64_t v447 = v438;
    v448 = v447;
    v449 = v446;
    v450 = v445;
    v451 = v444;
    v452 = v429;
    if (v443 > (int64_t)g68) {
        // 0xb628
        g68 = v443;
        v448 = v447;
        v449 = v446;
        v450 = v445;
        v451 = v444;
        v452 = v429;
    }
    goto lab_0xae0e;
  lab_0xb4d0:
    // 0xb4d0
    v341 = v458;
    v342 = v364;
    v339 = v370;
    v340 = v364;
    goto lab_0xb0d3;
  lab_0xb368:
    // 0xb368
    g64 = v401;
    v371 = v404;
    v372 = v405;
    v373 = v406;
    v374 = v403;
    v375 = v402;
    v376 = v396;
    goto lab_0xabd1;
}

