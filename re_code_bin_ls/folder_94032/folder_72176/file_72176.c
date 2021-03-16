// Address range: 0x119f0 - 0x13276
int64_t function_119f0(int32_t a1, int64_t a2, int32_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int32_t v3 = *(int32_t *)(a4 + 8); // 0x11a0e
    int64_t v4 = __readfsqword(40); // 0x11a2d
    int64_t v5 = v3 < 13 ? v3 == 0 ? 12 : v3 : v3 - 12;
    int64_t v6; // 0x119f0
    char v7 = v6;
    int64_t v8 = a4; // 0x11a64
    char v9 = v7; // 0x11a64
    int64_t v10 = v1; // 0x11a64
    int64_t v11 = 0; // 0x11a64
    int64_t v12 = v2; // 0x11a64
    int64_t v13 = a6; // 0x11a64
    int64_t v14 = v2; // 0x11a64
    int64_t v15 = v2; // 0x11a64
    int64_t v16 = v5; // 0x11a64
    int64_t v17 = a4; // 0x11a64
    int64_t v18 = v1; // 0x11a64
    int64_t v19 = v2; // 0x11a64
    int64_t v20 = a6; // 0x11a64
    int64_t v21 = v2; // 0x11a64
    int64_t v22 = 0; // 0x11a64
    int64_t v23 = v5; // 0x11a64
    int64_t v24 = a4; // 0x11a64
    if (v7 == 0) {
        goto lab_0x11ab7;
    } else {
        goto lab_0x11a7b;
    }
  lab_0x11b28:;
    // 0x11b28
    int64_t v25; // 0x11b28
    int64_t v26 = v25; // 0x119f0
    int64_t v27; // 0x119f0
    int64_t v28 = v27; // 0x119f0
    goto lab_0x11b28_2;
  lab_0x11d0e:;
    // 0x11d0e
    int64_t v41; // 0x11cd9
    int64_t v42 = v41; // 0x11d11
    int64_t v43; // 0x11cd0
    int64_t v44 = v43; // 0x11d11
    int64_t v45; // 0x119f0
    int64_t v46 = v45; // 0x11d11
    int64_t v47 = 0x7fffffff; // 0x11d11
    int64_t v48; // 0x11cdc
    if ((int32_t)v48 >= 10) {
        // break -> 0x11bb8
        goto lab_0x11bb8_2;
    }
    // 0x11d13
    int64_t v49; // 0x119f0
    int64_t v50 = v49 + 2; // 0x11d13
    int64_t v51 = (int64_t)*(char *)v50; // 0x11d13
    int64_t v52 = v51 + 0xffffffd0; // 0x11d29
    int64_t v53 = v51 & 0xffffffff; // 0x11d29
    int64_t v54 = v50; // 0x11d29
    int64_t v55 = v45; // 0x11d29
    int64_t v56 = 0x7fffffff; // 0x11d29
    goto lab_0x11cfb;
  lab_0x11cfb:
    // 0x11cfb
    v42 = v53;
    v44 = v54;
    v46 = v55;
    v47 = v56;
    int64_t v57 = v54; // 0x11cfe
    int64_t v58 = v55; // 0x11cfe
    int64_t v59 = v56; // 0x11cfe
    if ((int32_t)v52 >= 10) {
        // break -> 0x11bb8
        goto lab_0x11bb8_2;
    }
    goto lab_0x11cd0;
  lab_0x11ab7:;
    int64_t v65 = v24;
    int64_t v66 = v23;
    int64_t v67; // 0x119f0
    int64_t v68 = v67;
    int64_t v69 = v22;
    int64_t v70 = v21;
    int64_t v71 = v20;
    int64_t v72 = v19;
    int64_t v73; // 0x119f0
    int64_t v74 = v73;
    int64_t v75 = v18;
    int64_t v76; // 0x119f0
    int64_t v77 = v76;
    int64_t v78 = v77; // 0x11aba
    int64_t v79 = v75; // 0x11aba
    int64_t v80 = v74; // 0x11aba
    int64_t v81 = v72; // 0x11aba
    int64_t v82 = v71; // 0x11aba
    int64_t v83 = v70; // 0x11aba
    int64_t v84 = v69; // 0x11aba
    int64_t v85 = v68; // 0x11aba
    int64_t v86 = v66; // 0x11aba
    int64_t v87 = v65; // 0x11aba
    if (a2 != 0 && v70 != 0) {
        // 0x11ac3
        *(char *)v70 = 0;
        v78 = v77;
        v79 = v75;
        v80 = v74;
        v81 = v72;
        v82 = v71;
        v83 = v70;
        v84 = v69;
        v85 = v68;
        v86 = v66;
        v87 = v65;
    }
    goto lab_0x11ad3;
  lab_0x11a7b:;
    int64_t v169 = v15;
    int64_t v37 = v12;
    int64_t v168 = v11;
    int64_t v183 = v10;
    char v184 = v9;
    int64_t v167 = v8;
    int64_t v31 = v183; // 0x11a7d
    int64_t v32 = a5 % 256; // 0x11a7d
    int64_t v33 = 0; // 0x11a7d
    int64_t v137; // 0x119f0
    int64_t v113; // 0x119f0
    int64_t v138; // 0x119f0
    int64_t v114; // 0x119f0
    int64_t v139; // 0x119f0
    int64_t v115; // 0x119f0
    int64_t v140; // 0x119f0
    int64_t v116; // 0x119f0
    int64_t v135; // 0x119f0
    int64_t v136; // 0x119f0
    int64_t v112; // 0x119f0
    int64_t v133; // 0x119f0
    int64_t v110; // 0x119f0
    int64_t v109; // 0x119f0
    int64_t v134; // 0x119f0
    int64_t v111; // 0x119f0
    int64_t v132; // 0x119f0
    int64_t v108; // 0x119f0
    if (v184 == 37) {
        goto lab_0x11b28_3;
    } else {
        int64_t v185 = v17;
        int64_t v186 = v16;
        int64_t v187 = v14;
        int64_t v188 = v13;
        v108 = v167;
        v109 = v183;
        v110 = v168;
        v111 = v37;
        v112 = v188;
        v113 = v187;
        v114 = v169;
        v115 = v186;
        v116 = v185;
        if (a2 - v168 < 2) {
            goto lab_0x11ad0;
        } else {
            int64_t v189 = 0; // 0x11a93
            if (v169 != 0) {
                // 0x11a95
                *(char *)v169 = v184;
                v189 = v169 + 1;
            }
            // 0x11a9d
            v132 = v167;
            v133 = v168 + 1;
            v134 = v37;
            v135 = v183;
            v136 = v188;
            v137 = v187;
            v138 = v189;
            v139 = v186;
            v140 = v185;
            goto lab_0x11aa4;
        }
    }
  lab_0x11ad3:;
    int64_t result = v84; // 0x11ae4
    if (v4 == __readfsqword(40)) {
        // 0x11aea
        return result;
    }
    // 0x13256
    function_48e0(v81);
    int64_t v88 = a9 & 0xffffffff; // 0x1325b
    int64_t v89 = v88; // 0x1325b
    int64_t v90; // 0x119f0
    if ((int32_t)v82 != 79) {
        // 0x120b0
        v90 = v88;
        if ((int32_t)a9 > -1) {
            goto lab_0x120b9;
        } else {
            goto lab_0x120b7;
        }
    } else {
        if ((int32_t)a9 <= -1) {
            goto lab_0x120b7;
        } else {
            int64_t v91 = v87;
            int64_t v92 = v86;
            int64_t v93 = v85;
            int64_t v94 = v83;
            int64_t v95 = v80;
            int64_t v96 = v78;
            int64_t v97 = v92 & 0xffffffff; // 0x130cd
            char ** v98 = (char **)(int64_t)(int16_t)&g27; // bp-1101, 0x1200b
            int64_t v99; // bp-1096, 0x119f0
            int64_t v100 = &v99; // 0x11d7b
            int64_t v101 = function_4c30(&v99, &g28, (int64_t *)&v98, v96, v79); // 0x11d9b
            int64_t v102 = 0x100000000000000 * v79 / 0x100000000000000; // 0x11da0
            if (v101 == 0) {
                goto lab_0x11aa4;
            } else {
                int32_t v103 = v92; // 0x11d91
                uint64_t v104 = v101 - 1; // 0x11dae
                int64_t v105 = 0x100000000 * v92 / 0x100000000;
                uint64_t v106 = v103 >= 0 ? v105 : 0; // 0x11dc2
                int64_t v107 = v104 >= v106 ? v104 : v106; // 0x11dca
                v108 = v96;
                v109 = v107;
                v110 = v95;
                v111 = v100;
                v112 = v97;
                v113 = v94;
                v114 = v93;
                v115 = v92;
                v116 = v91;
                if (a2 - v95 > v107) {
                    int64_t v117 = v100; // 0x11ddd
                    int64_t v118 = v94; // 0x11ddd
                    int64_t v119 = 0; // 0x11ddd
                    int64_t v120 = v92; // 0x11ddd
                    if (v93 != 0) {
                        int64_t v121 = v104; // 0x11df1
                        int64_t v122 = v94 % 256; // 0x11df1
                        int64_t v123 = v93; // 0x11df1
                        int64_t v124 = v92; // 0x11df1
                        if (v103 == 0 == v104 < v106) {
                            int64_t v125 = v105 - v104; // 0x11e00
                            uint32_t v126 = 0x1000000 * (int32_t)v94 / 0x1000000; // 0x11e08
                            int64_t v127 = v125 + v93; // 0x11e0d
                            if ((int32_t)v91 == 48) {
                                // 0x12d48
                                function_49e0(v93, 48, v125, v104, v102, v97);
                                v121 = 0x100000000 * v104 / 0x100000000;
                                v122 = v126 % 256;
                                v123 = v127;
                                v124 = v127;
                            } else {
                                // 0x11e1b
                                function_49e0(v93, 32, v125, v104, v102, v97);
                                v121 = 0x100000000 * v104 / 0x100000000;
                                v122 = v126 % 256;
                                v123 = v127;
                                v124 = v127;
                            }
                        }
                        int64_t v128 = v123;
                        v118 = v122;
                        int64_t v129 = v121;
                        int64_t v130; // bp-1095, 0x119f0
                        int64_t v131 = &v130; // 0x11e40
                        if ((char)v118 == 0) {
                            // 0x12d20
                            function_4ae0(v128, v131, v129, v129, v102, v97);
                        } else {
                            // 0x11e65
                            function_119a0(v128, v131, v129);
                        }
                        // 0x11e74
                        v117 = v128;
                        v119 = v128 + 0x100000000000000 * v129 / 0x100000000000000;
                        v120 = v124;
                    }
                    // 0x11e77
                    v132 = v96;
                    v133 = v107 + v95;
                    v134 = v117;
                    v135 = v102;
                    v136 = v97;
                    v137 = v118;
                    v138 = v119;
                    v139 = v120;
                    v140 = v91;
                    goto lab_0x11aa4;
                } else {
                    goto lab_0x11ad0;
                }
            }
        }
    }
  lab_0x11b28_3:;
    char v40; // 0x119f0
    int64_t v141; // 0x119f0
    int64_t v35; // 0x119f0
    int64_t v29; // 0x119f0
    int64_t v38; // 0x119f0
    int64_t v39; // 0x119f0
    int64_t v36; // 0x119f0
    char v30; // 0x11b28
    while (true) {
        // 0x11b28
        v141 = v32;
        v26 = v31;
        v28 = v33;
        while (true) {
          lab_0x11b28_2:
            // 0x11b28
            v29 = v28;
            v25 = v26 + 1;
            v30 = *(char *)v25;
            v27 = 48;
            while (v30 != 48) {
                if (v30 > 48) {
                    // 0x11b50
                    v31 = v25;
                    v32 = 1;
                    v33 = v29;
                    if (v30 != 94) {
                        // 0x11b70
                        v27 = 95;
                        if (v30 != 95) {
                            goto lab_0x11cc0;
                        } else {
                            goto lab_0x11b28;
                        }
                    } else {
                        goto lab_0x11b28_3;
                    }
                }
                int64_t v34 = v25; // 0x11b44
                if (v30 != 35) {
                    // 0x11b60
                    v27 = 45;
                    if (v30 != 45) {
                        // 0x11b8e
                        v35 = 0xffffffff;
                        v36 = v37;
                        v38 = v25;
                        v39 = (int64_t)v30 & 0xffffffff;
                        v40 = v30;
                        goto lab_0x11b93;
                    } else {
                        goto lab_0x11b28;
                    }
                }
                v25 = v34 + 1;
                v30 = *(char *)v25;
                v27 = 48;
            }
            goto lab_0x11b28;
        }
    }
    goto lab_0x11cc0;
  lab_0x11cc0:
    // 0x11cc0
    v42 = (int64_t)v30 & 0xffffffff;
    v44 = v25;
    v46 = v37;
    v47 = 0xffffffff;
    v57 = v25;
    v58 = v37;
    v59 = 0;
    if ((int32_t)v30 < 58) {
        while (true) {
          lab_0x11cd0:;
            int64_t v60 = v59;
            v45 = v58;
            v49 = v57;
            v43 = v49 + 1;
            int64_t v61 = (int64_t)*(char *)v43; // 0x11cd0
            v41 = v61 & 0xffffffff;
            v48 = v61 + 0xffffffd0;
            int32_t v62 = v60; // 0x11ce0
            if (v62 > 0xccccccc) {
                goto lab_0x11d0e;
            } else {
                char v63 = *(char *)v49; // 0x11ce9
                if (v62 != 0xccccccc || v63 < 56) {
                    int64_t v64 = 5 * v60 & 0xffffffff; // 0x11cee
                    v52 = v48;
                    v53 = v41;
                    v54 = v43;
                    v55 = v64;
                    v56 = 2 * v64 + 0xffffffd0 + (int64_t)v63 & 0xffffffff;
                    goto lab_0x11cfb;
                } else {
                    goto lab_0x11d0e;
                }
            }
        }
    }
  lab_0x11bb8_2:;
    int64_t v142 = v47;
    int64_t v143 = v46;
    int64_t v144 = v44;
    char v145 = v42;
    v35 = v142;
    v36 = v143;
    v38 = v144;
    v39 = v42;
    v40 = v145;
    switch (v145) {
        case 79: {
            goto lab_0x11bbd;
        }
        case 69: {
            goto lab_0x11bbd;
        }
        default: {
            goto lab_0x11b93;
        }
    }
  lab_0x11ad0:
    // 0x11ad0
    v78 = v108;
    v79 = v109;
    v80 = v110;
    v81 = v111;
    v82 = v112;
    v83 = v113;
    v84 = 0;
    v85 = v114;
    v86 = v115;
    v87 = v116;
    goto lab_0x11ad3;
  lab_0x120b9:;
    int64_t result2 = 0xcccccccd * v90 / 0x800000000; // 0x120f3
    int64_t v146; // bp-1073, 0x119f0
    *(char *)((int64_t)&v146 - 1) = (char)v90 + 48 + -10 * (char)result2;
    if ((int32_t)v89 < 10) {
        // 0x11aea
        return result2;
    }
    int64_t v147 = result2;
    int64_t v148; // bp-1074, 0x119f0
    int64_t v149 = (int64_t)&v148 - 1;
    int64_t result3 = 0xcccccccd * v147 / 0x800000000; // 0x120f3
    *(char *)v149 = (char)v147 + 48 + -10 * (char)result3;
    int64_t v150 = v149; // 0x1210a
    while ((int32_t)v147 >= 10) {
        // 0x1211c
        v147 = result3;
        v149 = v150 - 1;
        result3 = 0xcccccccd * v147 / 0x800000000;
        *(char *)v149 = (char)v147 + 48 + -10 * (char)result3;
        v150 = v149;
    }
    // 0x11aea
    return result3;
  lab_0x120b7:;
    int64_t v151 = -a9 & 0xffffffff; // 0x120b7
    v89 = v151;
    v90 = v151;
    goto lab_0x120b9;
  lab_0x11bbd:;
    int64_t v152 = v144 + 1; // 0x11bbd
    unsigned char v153 = *(char *)v152; // 0x11bbd
    int64_t v154 = v153; // 0x11bc8
    int64_t v155 = v152; // 0x11bc8
    int64_t v156 = v143; // 0x11bc8
    int64_t v157 = v142; // 0x11bc8
    uint32_t v158; // 0x11ba5
    if (v153 < 123) {
        // 0x11b9b
        v158 = *(int32_t *)((4 * v154 & 1020) + (int64_t)&g1);
        return (int64_t)v158 + (int64_t)&g1;
    }
    goto lab_0x11bd0;
  lab_0x11b93:
    // 0x11b93
    v154 = v39;
    v155 = v38;
    v156 = v36;
    v157 = v35;
    if (v40 < 123) {
        // 0x11b9b
        v158 = *(int32_t *)((4 * v154 & 1020) + (int64_t)&g1);
        return (int64_t)v158 + (int64_t)&g1;
    }
    goto lab_0x11bd0;
  lab_0x11aa4:;
    int64_t v181 = v135 + 1; // 0x11aa4
    char v182 = *(char *)v181; // 0x11aa4
    v8 = v132;
    v9 = v182;
    v10 = v181;
    v11 = v133;
    v12 = v134;
    v13 = v136;
    v14 = v137;
    v15 = v138;
    v16 = v139;
    v17 = v140;
    v76 = v132;
    v18 = v181;
    v73 = v133;
    v19 = v134;
    v20 = v136;
    v21 = v138;
    v22 = v133;
    v67 = v138;
    v23 = v139;
    v24 = v140;
    if (v182 != 0) {
        goto lab_0x11a7b;
    } else {
        goto lab_0x11ab7;
    }
  lab_0x11bd0:;
    int64_t v159 = v157;
    int64_t v160 = v156;
    int64_t v161 = v155;
    int64_t v162 = v161 - 1;
    int64_t v163 = v162; // 0x11be6
    while (*(char *)v162 != 37) {
        // 0x11bd7
        v162 = v163 - 1;
        v163 = v162;
    }
    int64_t v164 = 0x100000000 * ((v161 + 1 & 0xffffffff) - v162) / 0x100000000; // 0x11bf1
    uint64_t v165 = (int32_t)v159 >= 0 ? 0x100000000 * v159 / 0x100000000 : 0; // 0x11c04
    uint64_t v166 = v165 >= v164 ? v165 : v164; // 0x11c09
    v108 = v167;
    v109 = v161;
    v110 = v168;
    v111 = v160;
    v112 = v162;
    v113 = v141;
    v114 = v169;
    v115 = v159;
    v116 = v29;
    if (v166 >= a2 - v168) {
        goto lab_0x11ad0;
    } else {
        int64_t v170 = v160; // 0x11c19
        int64_t v171 = v161; // 0x11c19
        int64_t v172 = v162; // 0x11c19
        int64_t v173 = v141; // 0x11c19
        int64_t v174 = 0; // 0x11c19
        if (v169 != 0) {
            // 0x11c1f
            if (v164 < v165) {
                // 0x11c24
                int64_t v175; // 0x119f0
                int64_t v176 = v175 - v164; // 0x11c2c
                v89 = v176;
                if (v29 == 48) {
                    // 0x12f0f
                    function_49e0(v169, 48, v176, v164, v161, v162);
                } else {
                    // 0x11c4c
                    function_49e0(v169, 32, v176, v164, v161, v162);
                }
            }
            int64_t v177 = v169;
            v173 = v141;
            int64_t v178 = v162;
            int64_t v179 = v161;
            int64_t v180 = v164;
            if ((char)v173 == 0) {
                // 0x12d0c
                function_4ae0(v177, v178, v180, v180, v179, v178);
            } else {
                // 0x11c8d
                function_119a0(v177, v178, v180);
            }
            // 0x11c9c
            v170 = v177;
            v171 = 0x100000000 * v179 / 0x100000000;
            v172 = v178;
            v174 = v177 + 0x100000000000000 * v180 / 0x100000000000000;
        }
        // 0x11c9f
        v132 = v167;
        v133 = v166 + v168;
        v134 = v170;
        v135 = v171;
        v136 = v172;
        v137 = v173;
        v138 = v174;
        v139 = v159;
        v140 = v29;
        goto lab_0x11aa4;
    }
}

