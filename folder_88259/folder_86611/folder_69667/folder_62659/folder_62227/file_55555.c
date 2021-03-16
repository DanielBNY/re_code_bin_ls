// Address range: 0xd903 - 0xdfc0
int64_t function_d903(int64_t a1, int64_t a2) {
    int64_t v1 = a1;
    int64_t v2 = __readfsqword(40); // 0xd91a
    uint32_t v3 = (int32_t)a2;
    uint32_t v4 = v3 % 4; // 0xd930
    int64_t v5; // 0xd903
    int64_t v6; // 0xd903
    int64_t v7; // 0xd903
    int64_t v8; // 0xd903
    int64_t result; // 0xd903
    int64_t v9; // 0xd903
    int64_t v10; // 0xd903
    char v11; // 0xd903
    int64_t v12; // 0xd903
    int64_t v13; // 0xd903
    int64_t v14; // 0xd903
    int64_t v15; // 0xd903
    int64_t v16; // 0xd903
    int64_t v17; // 0xd903
    int64_t v18; // 0xd903
    if (a1 == 0 || (v3 + 3 & v4) != 0) {
        // 0xde10
        *(int32_t *)__errno_location() = 22;
        result = 0;
        goto lab_0xdb50;
    } else {
        char v19 = a1;
        switch (v19) {
            case 0: {
                // 0xdec8
                *(int32_t *)__errno_location() = 2;
                result = 0;
                goto lab_0xdb50;
            }
            case 47: {
                int64_t v20 = function_158c0(&g1); // 0xdb81
                *(char *)v20 = 47;
                int64_t v21 = v20 + (int64_t)&g1; // 0xdb8c
                int64_t v22 = v20 + 1; // 0xdb93
                char v23 = *(char *)&v1; // 0xdb97
                v11 = v23;
                v18 = v21;
                v5 = v22;
                v8 = v20;
                v17 = 0;
                v15 = 0;
                v13 = v21;
                v7 = v22;
                v10 = v20;
                if (v23 != 0) {
                    goto lab_0xd995;
                } else {
                    goto lab_0xdb07;
                }
            }
            default: {
                int64_t v24 = function_15ca0(); // 0xd95b
                result = 0;
                if (v24 == 0) {
                    goto lab_0xdb50;
                } else {
                    uint64_t v25 = strlen(v24); // 0xd96f
                    int64_t v26; // 0xd903
                    int64_t v27; // 0xd903
                    int64_t v28; // 0xd903
                    if (v25 > (int64_t)&g28) {
                        int64_t v29 = v25 + v24; // 0xd983
                        v26 = v29;
                        v27 = v24;
                        v28 = v29;
                    } else {
                        // 0xdedb
                        int64_t v30; // 0xd903
                        int64_t v31; // 0xd903
                        int64_t v32 = function_15920(v24, (int64_t)&g1, v30, v31); // 0xdee3
                        v26 = v32 + v25;
                        v27 = v32;
                        v28 = v32 + (int64_t)&g1;
                    }
                    // 0xd989
                    v18 = v28;
                    v8 = v27;
                    v5 = v26;
                    v11 = v19;
                    v16 = 0;
                    v14 = 0;
                    v12 = v18;
                    v6 = v5;
                    v9 = v8;
                    if (v19 == 0) {
                        goto lab_0xdaf3_2;
                    } else {
                        goto lab_0xd995;
                    }
                }
            }
        }
    }
  lab_0xde63_2:;
    // 0xde63
    int64_t v33; // 0xd903
    free(v33);
    int64_t v34; // 0xd903
    free(v34);
    int64_t v35; // 0xd903
    int64_t v36 = v35; // 0xde83
    int64_t v37; // 0xd903
    int64_t v38 = v37; // 0xde83
    int64_t v39; // 0xd903
    int64_t v40 = v39; // 0xde83
    int64_t v41 = v37; // 0xde83
    int64_t v42 = v39; // 0xde83
    if (v35 == 0) {
        goto lab_0xddb9;
    } else {
        goto lab_0xdda7;
    }
  lab_0xdd8d:
    // 0xdd8d
    free(v33);
    free(v34);
    int64_t v43; // 0xd903
    v36 = v43;
    int64_t v44; // 0xd903
    v38 = v44;
    int64_t v45; // 0xd903
    v40 = v45;
    goto lab_0xdda7;
  lab_0xdaf3_2:
    // 0xdaf3
    v17 = v16;
    v15 = v14;
    int64_t v46; // 0xd903
    int64_t v47 = v46; // 0xdafa
    int64_t v48; // 0xd903
    int64_t v49 = v48; // 0xdafa
    v13 = v12;
    v7 = v6;
    v10 = v9;
    char * v50; // 0xd903
    int64_t v51; // 0xd903
    int64_t v52; // 0xd903
    int64_t v53; // 0xd903
    int64_t v54; // 0xd903
    int64_t v55; // 0xd903
    int64_t v56; // 0xd903
    int64_t v57; // 0xd903
    int64_t v58; // 0xd903
    if (v6 > v9 + 1) {
        int64_t v59 = v6 - 1; // 0xdafc
        char * v60 = (char *)v59;
        v17 = v16;
        v15 = v14;
        v47 = v46;
        v49 = v48;
        v13 = v12;
        v7 = v6;
        v10 = v9;
        v50 = v60;
        v58 = v16;
        v57 = v14;
        v53 = v6;
        v55 = v46;
        v56 = v48;
        v54 = v12;
        v51 = v59;
        v52 = v9;
        if (*v60 == 47) {
            goto lab_0xdb0b;
        } else {
            goto lab_0xdb07;
        }
    } else {
        goto lab_0xdb07;
    }
  lab_0xda3c:;
    // 0xda3c
    int64_t v61; // 0xd903
    int64_t v62 = v61; // 0xda40
    if (*(char *)(v61 - 1) != 47) {
        // 0xda42
        *(char *)v61 = 47;
        v62 = v61 + 1;
    }
    int64_t v63 = v62;
    int64_t v64; // 0xda20
    int64_t v65 = v63 + v64;
    int64_t v66 = v65; // 0xda52
    int64_t v67; // 0xd903
    int64_t v68 = v67; // 0xda52
    int64_t v69 = v63; // 0xda52
    int64_t v70; // 0xd903
    int64_t v71 = v70; // 0xda52
    int64_t v72; // 0xd903
    if (v67 <= v65) {
        int64_t v73 = v64 - (int64_t)&g1; // 0xda6e
        int64_t v74 = v73 < 0 == ((v73 ^ v64) & (v64 ^ (int64_t)&g1)) < 0 ? v64 + 1 : (int64_t)&g1;
        int64_t v75 = v74 + v67 - v70; // 0xda75
        int64_t v76 = function_15920(v70, v75, v64, v72); // 0xda7c
        int64_t v77 = v76 + v63 - v70; // 0xda8c
        v66 = v77 + v64;
        v68 = v76 + v75;
        v69 = v77;
        v71 = v76;
    }
    // 0xda8f
    v34 = v71;
    int64_t v78 = v68;
    int64_t v79 = v66;
    int64_t v80; // 0xd903
    memcpy(v69, v80, v64);
    *(char *)v79 = 0;
    int32_t v81 = 0; // 0xdab2
    int64_t v82 = v64; // 0xdab2
    char * v83; // 0xd903
    int64_t v84; // 0xd903
    int64_t v85; // 0xd903
    int64_t v86; // 0xd903
    int64_t v87; // 0xd903
    int64_t v88; // 0xd903
    int64_t v89; // 0xd903
    int32_t v90; // 0xd903
    int32_t v91; // 0xd903
    int64_t v92; // bp-216, 0xd903
    int64_t ** v93; // 0xd903
    int64_t ** v94; // 0xd903
    int64_t v95; // 0xd903
    int64_t v96; // 0xd903
    int64_t v97; // 0xd903
    int64_t v98; // 0xd903
    int64_t v99; // 0xd903
    int64_t v100; // 0xd903
    int64_t v101; // 0xd903
    int64_t v102; // 0xda03
    char * v103; // 0xd903
    if (v4 == 2 == ((v3 & 4) != 0)) {
        goto lab_0xdacb;
    } else {
        // 0xdbc0
        v1 = 1;
        int64_t v104; // 0xd903
        if ((v3 & 4) == 0) {
            // 0xdc88
            v104 = __lxstat(1, v34, &v92);
        } else {
            // 0xdbdc
            v104 = __xstat(1, v34, &v92);
        }
        // 0xdbe6
        if ((int32_t)v104 == 0) {
            // 0xdc48
            v81 = v90;
            v82 = v101;
            v83 = v103;
            v97 = v96;
            v99 = v98;
            v94 = v93;
            v95 = v33;
            v91 = v90;
            v86 = v72;
            v89 = v101;
            v85 = v79;
            v84 = v102;
            switch ((int16_t)v90 & -0x1000) {
                case -0x6000: {
                    int64_t v105 = v98; // 0xdca6
                    int64_t v106 = v72; // 0xdca6
                    if (v98 == 0) {
                        int64_t v107 = function_f4c0(7, 0, 0xfe00, 0xfe80, 0xfec0); // 0xde3f
                        v105 = v107;
                        v106 = 0xfe80;
                        if (v107 == 0) {
                            // 0xde52
                            function_15b30();
                            v35 = v107;
                            v37 = 0xfe00;
                            v39 = v101;
                            goto lab_0xde63_2;
                        }
                    }
                    int64_t v108 = v106;
                    v43 = v105;
                    int64_t v109 = function_e320(v43, v96, &v92); // 0xdcb9
                    if ((char)v109 != 0) {
                        // 0xdd75
                        v100 = v43;
                        v87 = v108;
                        v88 = v101;
                        if (v4 != 2) {
                            // 0xdd80
                            v44 = 40;
                            v45 = __errno_location();
                            goto lab_0xdd8d;
                        }
                        goto lab_0xdc34;
                    } else {
                        // 0xdcc6
                        function_e290(v43, v96, &v92);
                        int64_t v110; // 0xd903
                        int64_t v111 = function_d3e0(v34, v110); // 0xdce0
                        if (v111 == 0) {
                            int64_t v112 = __errno_location(); // 0xdefa
                            uint32_t v113 = *(int32_t *)v112; // 0xdf04
                            int64_t v114 = v113; // 0xdf04
                            v100 = v43;
                            v87 = v108;
                            v88 = v114;
                            v44 = v114;
                            v45 = v112;
                            if (v4 == 2 != v113 != 12) {
                                goto lab_0xdd8d;
                            }
                            goto lab_0xdc34;
                        } else {
                            int64_t v115 = strlen(v111); // 0xdcf4
                            int64_t v116 = strlen(v102); // 0xdcff
                            int64_t v117 = v116 + 1;
                            int64_t v118 = v117 + v115;
                            int64_t v119; // 0xd903
                            int64_t ** v120; // 0xd903
                            int64_t v121; // 0xd903
                            if (v93 == NULL) {
                                int64_t ** v122 = v118 >= (int64_t)&g1 ? (int64_t **)v118 : &g1; // 0xdeaf
                                int64_t v123 = function_158c0(v122); // 0xdeb4
                                v120 = v122;
                                v121 = v123;
                                v119 = v108;
                            } else {
                                // 0xdd13
                                v120 = v93;
                                v121 = v33;
                                v119 = v118;
                                if (v118 > (int64_t)v93) {
                                    int64_t v124 = function_15920(v33, v118, v116, v118); // 0xdf3a
                                    v120 = (int64_t **)v118;
                                    v121 = v124;
                                    v119 = v118;
                                }
                            }
                            // 0xdd23
                            memmove(v121 + v115, v102, v117);
                            int64_t v125 = memcpy(v121, v111, v115); // 0xdd43
                            int64_t v126 = v34 + 1; // 0xdd55
                            int64_t v127; // 0xd903
                            if (*(char *)v111 == 47) {
                                // 0xdf1c
                                *(char *)v34 = 47;
                                v127 = v126;
                            } else {
                                // 0xdd5f
                                v127 = v79;
                                if (v79 > v126) {
                                    int64_t v128 = v79 - 1; // 0xdf64
                                    v127 = v128;
                                    int64_t v129 = v128; // 0xdf6b
                                    if (v34 < v128) {
                                        int64_t v130 = v129 - 1; // 0xdf71
                                        v127 = v129;
                                        while (*(char *)v130 != 47) {
                                            // 0xdf7b
                                            v127 = v130;
                                            v129 = v130;
                                            if (v34 == v130) {
                                                // break -> 0xdd68
                                                break;
                                            }
                                            v130 = v129 - 1;
                                            v127 = v129;
                                        }
                                    }
                                }
                            }
                            // 0xdd68
                            free(v111);
                            v83 = (char *)v125;
                            v97 = v125;
                            v99 = v43;
                            v94 = v120;
                            v95 = v121;
                            v91 = v90;
                            v86 = v119;
                            v89 = v115;
                            v85 = v127;
                            v84 = v125;
                            goto lab_0xdadc;
                        }
                    }
                }
                case 0x4000: {
                    goto lab_0xdadc;
                }
                default: {
                    goto lab_0xdacb;
                }
            }
        } else {
            int64_t v131 = __errno_location(); // 0xdbea
            uint32_t v132 = *(int32_t *)v131; // 0xdbef
            int64_t v133 = v132; // 0xdbef
            v35 = v98;
            v37 = v133;
            v39 = v131;
            if (v4 == 0) {
                goto lab_0xde63_2;
            }
            // 0xdc00
            v81 = 0;
            v82 = v133;
            if (v4 != 1) {
                goto lab_0xdacb;
            } else {
                char v134 = *(char *)(strspn(v102, &g4, v132) + v102); // 0xdc20
                v100 = v98;
                v87 = v72;
                v88 = 2;
                v35 = v98;
                v37 = v133;
                v39 = v131;
                if (v132 == 2 != (v134 == 0)) {
                    goto lab_0xde63_2;
                }
                goto lab_0xdc34;
            }
        }
    }
  lab_0xdae3:;
    // 0xdae3
    int64_t v135; // 0xd903
    int64_t v136 = v135; // 0xdae5
    int64_t v137; // 0xd903
    int64_t v138 = v137; // 0xdae5
    int64_t ** v139; // 0xd903
    int64_t ** v140 = v139; // 0xdae5
    int64_t v141; // 0xd903
    int64_t v142 = v141; // 0xdae5
    int32_t v143; // 0xd903
    int32_t v144 = v143; // 0xdae5
    int64_t v145; // 0xd903
    int64_t v146 = v145; // 0xdae5
    int64_t v147; // 0xd903
    int64_t v148 = v147; // 0xdae5
    int64_t v149; // 0xd903
    int64_t v150 = v149; // 0xdae5
    int64_t v151; // 0xd903
    int64_t v152 = v151; // 0xdae5
    int64_t v153; // 0xd903
    int64_t v154 = v153; // 0xdae5
    int64_t v155; // 0xd903
    int64_t v156 = v155; // 0xdae5
    v16 = v137;
    v14 = v141;
    int64_t v157; // 0xd903
    v46 = v157;
    v48 = v147;
    v12 = v149;
    v6 = v151;
    v9 = v155;
    if (v145 == 0) {
        // break -> 0xdaf3
        goto lab_0xdaf3_2;
    }
    goto lab_0xd9d0;
  lab_0xdacb:
    // 0xdacb
    v83 = v103;
    v97 = v96;
    v99 = v98;
    v94 = v93;
    v95 = v33;
    v91 = v81;
    v86 = v72;
    v89 = v82;
    v85 = v79;
    v84 = v102;
    if (v4 != 2 == (*v103 != 0)) {
        // 0xdf90
        v35 = v98;
        v37 = 20;
        v39 = __errno_location();
        goto lab_0xde63_2;
    }
    goto lab_0xdadc;
  lab_0xdadc:
    // 0xdadc
    v135 = v97;
    v137 = v99;
    v139 = v94;
    v141 = v95;
    v143 = v91;
    v145 = (int64_t)*v83;
    v157 = v86;
    v147 = v89;
    v149 = v78;
    v151 = v85;
    v153 = v84;
    v155 = v34;
    goto lab_0xdae3;
  lab_0xdc34:
    // 0xdc34
    v135 = v96;
    v137 = v100;
    v139 = v93;
    v141 = v33;
    v143 = v90;
    v145 = (int64_t)*v103;
    v157 = v87;
    v147 = v88;
    v149 = v78;
    v151 = v79;
    v153 = v102;
    v155 = v34;
    goto lab_0xdae3;
  lab_0xdb50:
    // 0xdb50
    if (v2 != __readfsqword(40)) {
        // 0xdfb9
        return __stack_chk_fail();
    }
    // 0xdb67
    return result;
  lab_0xd995:
    // 0xd995
    v101 = &v92;
    v136 = a1;
    v138 = 0;
    v140 = NULL;
    v142 = 0;
    v146 = v11;
    v150 = v18;
    v152 = v5;
    v154 = a1;
    v156 = v8;
    while (true) {
      lab_0xd9d0:
        // 0xd9d0
        v70 = v156;
        v61 = v152;
        v67 = v150;
        v90 = v144;
        v33 = v142;
        v93 = v140;
        v98 = v138;
        v96 = v136;
        if (v146 == 47) {
            while (true) {
              lab_0xd9e0:;
                // 0xd9e0
                int64_t v158; // 0xd903
                int64_t v159 = v158;
                int64_t v160 = v159 + 1; // 0xd9e0
                unsigned char v161 = *(char *)v160; // 0xd9e0
                v158 = v160;
                v16 = v98;
                v14 = v33;
                v46 = 0;
                int64_t v162; // 0xd903
                v48 = v162;
                v12 = v67;
                v6 = v61;
                v9 = v70;
                switch (v161) {
                    case 47: {
                        goto lab_0xd9e0;
                    }
                    case 0: {
                        goto lab_0xdaf3_2;
                    }
                    default: {
                        goto lab_0xd9f6;
                    }
                }
            }
          lab_0xd9f6:;
        }
        // 0xd9f6
        v80 = v154;
        v72 = v146;
        v102 = v80 + 1;
        v103 = (char *)v102;
        unsigned char v163 = *v103; // 0xda03
        int64_t v164 = v102; // 0xda0e
        while (v163 != 0 == (v163 != 47)) {
            // 0xda00
            v102 = v164 + 1;
            v103 = (char *)v102;
            v163 = *v103;
            v164 = v102;
        }
        // 0xda14
        v16 = v98;
        v14 = v33;
        v46 = v72;
        v48 = v148;
        v12 = v67;
        v6 = v61;
        v9 = v70;
        if (v102 == v80) {
            // break -> 0xdaf3
            break;
        }
        int64_t v165 = v163; // 0xda03
        v64 = v102 - v80;
        if (v64 == 1) {
            // 0xdc70
            v135 = v96;
            v137 = v98;
            v139 = v93;
            v141 = v33;
            v143 = v90;
            v145 = v165;
            v157 = v72;
            v147 = 1;
            v149 = v67;
            v151 = v61;
            v153 = v102;
            v155 = v70;
            if ((char)v72 != 46) {
                goto lab_0xda3c;
            } else {
                goto lab_0xdae3;
            }
        } else {
            if ((char)v72 == 46 == v64 == 2) {
                // 0xddc8
                if (*(char *)(v80 + 1) != 46) {
                    goto lab_0xda3c;
                } else {
                    int64_t v166 = v70 + 1; // 0xddd3
                    v135 = v96;
                    v137 = v98;
                    v139 = v93;
                    v141 = v33;
                    v143 = v90;
                    v145 = v165;
                    v157 = v72;
                    v147 = v166;
                    v149 = v67;
                    v151 = v61;
                    v153 = v102;
                    v155 = v70;
                    if (v61 > v166) {
                        int64_t v167 = v61 - 1; // 0xdde3
                        v135 = v96;
                        v137 = v98;
                        v139 = v93;
                        v141 = v33;
                        v143 = v90;
                        v145 = v165;
                        v157 = v72;
                        v147 = v166;
                        v149 = v67;
                        v151 = v167;
                        v153 = v102;
                        v155 = v70;
                        if (v167 > v70) {
                            int64_t v168; // 0xd903
                            int64_t v169 = v168;
                            int64_t v170 = v169 - 1; // 0xddf0
                            char v171 = *(char *)v170; // 0xddf0
                            v135 = v96;
                            v137 = v98;
                            v139 = v93;
                            v141 = v33;
                            v143 = v90;
                            v145 = v165;
                            v157 = v72;
                            v147 = v166;
                            v149 = v67;
                            v151 = v169;
                            v153 = v102;
                            v155 = v70;
                            while (v171 != 47) {
                                // 0xddfa
                                v135 = v96;
                                v137 = v98;
                                v139 = v93;
                                v141 = v33;
                                v143 = v90;
                                v145 = v165;
                                v157 = v72;
                                v147 = v166;
                                v149 = v67;
                                v151 = v170;
                                v153 = v102;
                                v155 = v70;
                                v168 = v170;
                                if (v170 == v70) {
                                    // break -> 0xdae3
                                    break;
                                }
                                v169 = v168;
                                v170 = v169 - 1;
                                v171 = *(char *)v170;
                                v135 = v96;
                                v137 = v98;
                                v139 = v93;
                                v141 = v33;
                                v143 = v90;
                                v145 = v165;
                                v157 = v72;
                                v147 = v166;
                                v149 = v67;
                                v151 = v169;
                                v153 = v102;
                                v155 = v70;
                            }
                        }
                    }
                    goto lab_0xdae3;
                }
            } else {
                goto lab_0xda3c;
            }
        }
    }
    goto lab_0xdaf3_2;
  lab_0xdb07:
    // 0xdb07
    v50 = (char *)v7;
    v58 = v17;
    v57 = v15;
    v53 = v7 + 1;
    v55 = v47;
    v56 = v49;
    v54 = v13;
    v51 = v7;
    v52 = v10;
    goto lab_0xdb0b;
  lab_0xdb0b:;
    int64_t v172 = v52;
    *v50 = 0;
    int64_t v173 = v172; // 0xdb13
    if (v53 != v54) {
        // 0xdb15
        v173 = function_15920(v172, v51 + 1 - v172, v56, v55);
    }
    // 0xdb2a
    free(v57);
    result = v173;
    if (v58 != 0) {
        // 0xdb3e
        function_f680(v58);
        result = v173;
    }
    goto lab_0xdb50;
  lab_0xddb9:
    // 0xddb9
    *(int32_t *)v42 = (int32_t)v41;
    result = 0;
    goto lab_0xdb50;
  lab_0xdda7:
    // 0xdda7
    function_f680(v36);
    v41 = v38;
    v42 = v40;
    goto lab_0xddb9;
}

