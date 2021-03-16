// Address range: 0x81e0 - 0x8ad0
int64_t function_81e0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t * a6) {
    int64_t v1 = a5;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = __readfsqword(40); // 0x8206
    unsigned char v4 = g79 & (char)((int32_t)function_148a0((int32_t)a3) < 3); // 0x822c
    int64_t v5; // 0x81e0
    int32_t v6; // 0x81e0
    int64_t v7; // 0x81e0
    int64_t v8; // 0x81e0
    int64_t v9; // 0x81e0
    int64_t v10; // 0x81e0
    int64_t v11; // 0x81e0
    int64_t v12; // 0x81e0
    int64_t v13; // 0x81e0
    int64_t v14; // 0x81e0
    int32_t v15; // 0x81e0
    int32_t v16; // 0x81e0
    int64_t v17; // 0x81e0
    int64_t v18; // 0x81e0
    if (v4 != 0) {
        // 0x8350
        v6 = 1;
        if ((int32_t)a4 != 0) {
            goto lab_0x8244;
        } else {
            int64_t v19 = function_48c0(a2); // 0x835c
            int64_t v20 = v19 + 1; // 0x8364
            int64_t v21 = v2; // 0x836e
            if (v19 > (int64_t)&g17) {
                // 0x85e0
                v21 = function_158c0(v20);
            }
            // 0x8374
            function_4ae0(v21, a2, v20);
            v18 = v21;
            v16 = 0;
            v11 = a4;
            v14 = v20;
            v9 = v19;
            v8 = v1;
            goto lab_0x8389;
        }
    } else {
        // 0x823c
        v6 = 0;
        if ((int32_t)a4 == 0) {
            int64_t v22 = function_48c0(a2); // 0x82a3
            v17 = a2;
            v15 = v4;
            v10 = a4;
            v13 = a3;
            v12 = a2;
            v7 = v1;
            v5 = v22;
            goto lab_0x82b0;
        } else {
            goto lab_0x8244;
        }
    }
  lab_0x855c:;
    // 0x855c
    int64_t v23; // 0x81e0
    int64_t v24 = v23;
    int64_t v25; // 0x81e0
    int64_t v26 = v25;
    int64_t v27; // 0x81e0
    int64_t v28 = v27;
    int64_t v29; // 0x81e0
    int64_t v30 = v29;
    int64_t v31; // 0x81e0
    int64_t v32 = v31;
    int64_t v33; // 0x81e0
    int64_t v34 = v33;
    int64_t v35 = v34; // 0x8561
    int64_t v36 = v32; // 0x8561
    int64_t v37 = v30; // 0x8561
    int64_t v38 = v28; // 0x8561
    int64_t v39 = v26; // 0x8561
    int64_t v40 = v24; // 0x8561
    int64_t v41; // 0x81e0
    int64_t v42 = v41; // 0x8561
    int64_t v43; // 0x8393
    if (v43 <= v41) {
        // break -> 0x8567
        goto lab_0x8567;
    }
    goto lab_0x8460;
  lab_0x854c:;
    // 0x854c
    int64_t v45; // 0x81e0
    char v50; // 0x8460
    *(char *)v45 = v50;
    int64_t v49; // 0x81e0
    v33 = v49;
    int64_t v48; // 0x81e0
    v31 = v48;
    int64_t v53; // 0x81e0
    v29 = v53;
    int64_t v47; // 0x81e0
    v27 = v47 + 1;
    int64_t v46; // 0x81e0
    v25 = v46;
    v23 = v45 + 1;
    int64_t v44; // 0x81e0
    v41 = v44 + 1;
    goto lab_0x855c;
  lab_0x8485:;
    int64_t v55 = 0; // bp-72, 0x8485
    int64_t v56 = v47; // 0x8491
    int64_t v57 = v45; // 0x8491
    int64_t v58 = v44; // 0x8491
    int64_t v59; // 0x81e0
    int64_t v60; // 0x81e0
    int64_t v61; // 0x81e0
    int64_t v62; // 0x81e0
    int32_t v63; // bp-76, 0x81e0
    int64_t v64; // 0x844e
    int64_t v65; // 0x84c3
    int64_t v66; // 0x84cb
    while (true) {
      lab_0x84b5:
        // 0x84b5
        v61 = v58;
        v59 = v57;
        v62 = v56;
        v65 = v43 - v61;
        int64_t v67 = function_168d0((int64_t *)&v63, v61, v65, &v55); // 0x84c6
        v66 = v59 + 1;
        switch (v67) {
            case -1: {
                goto lab_0x85b0;
            }
            case -2: {
                // 0x85d0
                *(char *)v59 = 63;
                v60 = v43;
                goto lab_0x85c0;
            }
            default: {
                int64_t v68 = v67 != 0 ? v67 : 1; // 0x84f6
                int64_t v69 = function_4b60((int64_t)v63); // 0x84fa
                int64_t v70 = 0; // 0x8501
                int64_t v71; // 0x81e0
                int64_t v72; // 0x81e0
                int64_t v73; // 0x81e0
                if ((int32_t)v69 < 0) {
                    // 0x8498
                    *(char *)v59 = 63;
                    int64_t v74 = v68 + v61; // 0x84a0
                    int64_t v75 = v62 + 1; // 0x84a3
                    int64_t v76 = function_4d40(&v55); // 0x84ac
                    v73 = v75;
                    v71 = v66;
                    v72 = v74;
                    v33 = v66;
                    v31 = v64;
                    v29 = v65;
                    v27 = v75;
                    v25 = v64;
                    v23 = v66;
                    v41 = v74;
                    if ((int32_t)v76 != 0) {
                        goto lab_0x855c;
                    }
                } else {
                    unsigned char v77 = *(char *)(v70 + v61); // 0x8508
                    *(char *)(v70 + v59) = v77;
                    int64_t v78 = v70 + 1; // 0x8511
                    v70 = v78;
                    while (v68 != v78) {
                        // 0x8508
                        v77 = *(char *)(v70 + v61);
                        *(char *)(v70 + v59) = v77;
                        v78 = v70 + 1;
                        v70 = v78;
                    }
                    int64_t v79 = v68 + v61; // 0x851f
                    int64_t v80 = v68 + v59; // 0x8522
                    int64_t v81 = 0x100000000 * v69 / 0x100000000 + v62; // 0x8525
                    int64_t v82 = function_4d40(&v55); // 0x8528
                    v73 = v81;
                    v71 = v80;
                    v72 = v79;
                    if ((int32_t)v82 != 0) {
                        // 0x855c
                        v33 = v66;
                        v31 = v77;
                        v29 = v78;
                        v27 = v81;
                        v25 = v64;
                        v23 = v80;
                        v41 = v79;
                        goto lab_0x855c;
                    }
                }
                // 0x84b5
                v56 = v73;
                v57 = v71;
                v58 = v72;
                goto lab_0x84b5;
            }
        }
    }
  lab_0x85b0:
    // 0x85b0
    *(char *)v59 = 63;
    v60 = v61 + 1;
    goto lab_0x85c0;
  lab_0x85c0:
    // 0x85c0
    v33 = v66;
    v31 = v64;
    v29 = v65;
    v27 = v62 + 1;
    v25 = &v63;
    v23 = v66;
    v41 = v60;
    goto lab_0x855c;
  lab_0x8244:;
    int64_t v83 = function_14980(a1, (int64_t)&g18, a2, -1, a3); // 0x825b
    int64_t v84 = v2; // 0x8269
    if (v83 > (int64_t)&g17) {
        int64_t v85 = v83 + 1; // 0x85f2
        int64_t v86 = function_158c0(v85); // 0x85f9
        function_14980((int64_t *)v86, v85, a2, -1, a3);
        v84 = v86;
    }
    int32_t v87 = 1; // 0x827f
    int64_t v88 = v84; // 0x827f
    int64_t v89; // 0x81e0
    if (*(char *)v84 == (char)v89) {
        // 0x8281
        v87 = v83 != function_48c0(a2);
        v88 = a2;
    }
    // 0x8291
    v17 = v84;
    v15 = v87;
    v10 = -1;
    v13 = a2;
    v12 = v88;
    v7 = a3;
    v5 = v83;
    v18 = v84;
    v16 = v87;
    v11 = -1;
    v14 = a2;
    v9 = v83;
    v8 = a3;
    if (v6 == 0) {
        goto lab_0x82b0;
    } else {
        goto lab_0x8389;
    }
  lab_0x82b0:;
    // 0x82b0
    int64_t v90; // 0x81e0
    int64_t v91; // 0x81e0
    int64_t v92; // 0x81e0
    int64_t result; // 0x81e0
    int64_t v93; // 0x81e0
    int64_t v94; // 0x81e0
    int64_t v95; // 0x81e0
    int64_t v96; // 0x81e0
    int64_t v97; // 0x81e0
    int64_t v98; // 0x81e0
    int64_t v99; // 0x81e0
    int64_t v100; // 0x81e0
    int64_t v101; // 0x81e0
    int64_t v102; // 0x81e0
    int64_t v103; // 0x81e0
    int64_t v104; // 0x81e0
    int64_t v105; // 0x81e0
    int64_t v106; // 0x81e0
    int32_t v107; // 0x81e0
    int64_t v108; // 0x81e0
    int64_t v109; // 0x81e0
    if (a5 == 0) {
        // 0x8330
        v108 = v17;
        v107 = v15;
        v98 = v10;
        v105 = v13;
        v101 = v12;
        v93 = v7;
        v91 = v5;
        if (g124 != 0) {
            goto lab_0x83e7;
        } else {
            // 0x833d
            *(char *)a6 = 0;
            v90 = v17;
            v100 = v10;
            v104 = v13;
            v103 = v12;
            v95 = v7;
            result = v5;
            goto lab_0x840c;
        }
    } else {
        // 0x82b8
        int64_t v110; // 0x81e0
        int64_t v111; // 0x81e0
        int64_t v112; // 0x81e0
        int64_t v113; // 0x81e0
        if (function_48b0() < 2) {
            uint64_t v114 = v5 + v17; // 0x82cc
            v111 = v10;
            v113 = v13;
            v110 = 0;
            v112 = v12;
            if (v5 != 0 && v114 >= v17) {
                int64_t v115 = *(int64_t *)function_4d80(); // 0x82de
                int64_t v116 = v17; // 0x82e6
                uint16_t v117 = *(int16_t *)(2 * (int64_t)*(char *)v116 + v115) & 0x4000; // 0x82f7
                int64_t v118 = v117 != 0; // 0x8300
                v116++;
                int64_t v119 = v118; // 0x830b
                while (v114 != v116) {
                    // 0x82f0
                    v117 = *(int16_t *)(2 * (int64_t)*(char *)v116 + v115) & 0x4000;
                    v118 = v119 + (int64_t)(v117 != 0);
                    v116++;
                    v119 = v118;
                }
                // 0x830d
                v111 = v115;
                v113 = v117;
                v110 = v118;
                v112 = v12;
            }
        } else {
            // 0x8590
            v111 = v10;
            v113 = 0;
            v110 = 0x100000000 * function_114b0(v17, v5, 0) / 0x100000000;
            v112 = v17;
        }
        // 0x830d
        v108 = v17;
        v107 = v15;
        v98 = v111;
        v105 = v113;
        v96 = v110;
        v101 = v112;
        v93 = v7;
        v91 = v5;
        if (g124 != 0) {
            goto lab_0x83e7;
        } else {
            // 0x831a
            *(char *)a6 = 0;
            v109 = v17;
            v99 = v111;
            v106 = v113;
            v97 = v110;
            v102 = v112;
            v94 = v7;
            v92 = v5;
            goto lab_0x8404;
        }
    }
  lab_0x8389:;
    int64_t v120 = v8;
    int64_t v121 = v9;
    int64_t v122 = v14;
    int64_t v123 = v11;
    int32_t v124 = v16;
    int64_t v125 = v18;
    v43 = v121 + v125;
    int64_t v126; // 0x81e0
    int64_t v127; // 0x81e0
    int64_t v128; // 0x81e0
    int64_t v129; // 0x81e0
    int64_t v130; // 0x81e0
    int64_t v131; // 0x81e0
    if (function_48b0() < 2) {
        // 0x83a6
        v128 = v123;
        v130 = v122;
        v127 = v121;
        v129 = v43;
        v126 = v121;
        if (v43 > v125) {
            int64_t * v132 = (int64_t *)function_4d80(); // 0x83c3
            int64_t v133 = v125; // 0x83bd
            char * v134 = (char *)v133; // 0x83c0
            int64_t v135 = *v132; // 0x83c3
            if ((*(char *)(v135 + 1 + 2 * (int64_t)*v134) & 64) == 0) {
                // 0x83cd
                *v134 = 63;
            }
            // 0x83d0
            v133++;
            v128 = v135;
            v130 = v133;
            v127 = v121;
            v129 = v43;
            v126 = v121;
            while (v133 != v43) {
                // 0x83c0
                v134 = (char *)v133;
                v135 = *v132;
                if ((*(char *)(v135 + 1 + 2 * (int64_t)*v134) & 64) == 0) {
                    // 0x83cd
                    *v134 = 63;
                }
                // 0x83d0
                v133++;
                v128 = v135;
                v130 = v133;
                v127 = v121;
                v129 = v43;
                v126 = v121;
            }
        }
    } else {
        // 0x8440
        v128 = v123;
        v130 = v122;
        v127 = 0;
        v129 = v43;
        v126 = 0;
        if (v43 > v125) {
            // 0x8449
            v64 = &v55;
            v36 = v123;
            v37 = v122;
            v38 = 0;
            v39 = v43;
            v40 = v125;
            v42 = v125;
            while (true) {
              lab_0x8460:
                // 0x8460
                v44 = v42;
                v45 = v40;
                v46 = v39;
                v47 = v38;
                v48 = v36;
                v49 = v35;
                v50 = *(char *)v44;
                int64_t v51 = v50; // 0x8460
                if (v50 > 95) {
                    int64_t v52 = v51 + 0xffffff9f; // 0x8580
                    v53 = v52 & 0xffffffff;
                    if ((char)v52 < 30) {
                        goto lab_0x854c;
                    } else {
                        goto lab_0x8485;
                    }
                } else {
                    int64_t v54 = v37;
                    v53 = v54;
                    if (v50 > 64) {
                        goto lab_0x854c;
                    } else {
                        if (v50 > 35) {
                            // 0x8540
                            if ((char)(v51 + 0xffffffdb) < 27) {
                                goto lab_0x854c;
                            } else {
                                goto lab_0x8485;
                            }
                        } else {
                            // 0x847d
                            v53 = v54;
                            if (v50 > 31) {
                                goto lab_0x854c;
                            } else {
                                goto lab_0x8485;
                            }
                        }
                    }
                }
            }
          lab_0x8567:
            // 0x8567
            v131 = v34;
            v128 = v32;
            v130 = v30;
            v127 = v28;
            v129 = v26;
            v126 = v24 - v125;
        }
    }
    // 0x83dc
    v108 = v125;
    v107 = v124;
    int64_t v136 = v131; // 0x83e5
    v98 = v128;
    v105 = v130;
    v96 = v127;
    v101 = v129;
    v93 = v120;
    v91 = v126;
    int64_t v137 = v125; // 0x83e5
    int64_t v138 = v131; // 0x83e5
    char v139 = 0; // 0x83e5
    int64_t v140 = v128; // 0x83e5
    int64_t v141 = v130; // 0x83e5
    int64_t v142 = v127; // 0x83e5
    int64_t v143 = v129; // 0x83e5
    int64_t v144 = v120; // 0x83e5
    int64_t v145 = v126; // 0x83e5
    if (g124 == 0) {
        goto lab_0x83f5;
    } else {
        goto lab_0x83e7;
    }
  lab_0x83f5:
    // 0x83f5
    *(char *)a6 = v139;
    v109 = v137;
    int64_t v146 = v138; // 0x8402
    v99 = v140;
    v106 = v141;
    v97 = v142;
    v102 = v143;
    v94 = v144;
    v92 = v145;
    v90 = v137;
    int64_t v147 = v138; // 0x8402
    v100 = v140;
    v104 = v141;
    v103 = v143;
    v95 = v144;
    result = v145;
    if (a5 == 0) {
        goto lab_0x840c;
    } else {
        goto lab_0x8404;
    }
  lab_0x83e7:
    // 0x83e7
    v137 = v108;
    v138 = v136;
    v139 = *(char *)&g125 & ((char)v107 ^ 1);
    v140 = v98;
    v141 = v105;
    v142 = v96;
    v143 = v101;
    v144 = v93;
    v145 = v91;
    goto lab_0x83f5;
  lab_0x840c:
    // 0x840c
    *a1 = v90;
    if (v3 == __readfsqword(40)) {
        // 0x842d
        return result;
    }
    int64_t v148 = v100;
    function_48e0();
    int64_t v149 = v104 & 0xffffffff; // 0x8687
    int64_t v150 = __readfsqword(40); // 0x8689
    char v151; // bp-8425, 0x81e0
    int64_t v152 = &v151; // 0x86af
    int64_t v153; // bp-8416, 0x81e0
    char * v154 = (char *)&v153; // bp-8424, 0x86bb
    int64_t v155 = function_81e0((int64_t *)&v154, v103, v90, v149, 0, (int64_t *)&v151); // 0x86c0
    int64_t v156 = v103; // 0x86cd
    int64_t v157 = v155; // 0x86cd
    int64_t v158 = v90; // 0x86cd
    if (v151 != 0) {
        // 0x86cf
        v156 = v103;
        v157 = v155;
        v158 = v90;
        if ((char)v95 != 0) {
            int64_t v159 = g43; // 0x8930
            int64_t * v160 = (int64_t *)(v159 + 40); // 0x8937
            uint64_t v161 = *v160; // 0x8937
            int64_t v162; // 0x81e0
            int64_t v163; // 0x81e0
            int64_t v164; // 0x81e0
            if (v161 >= *(int64_t *)(v159 + 48)) {
                // 0x8a20
                v164 = 32;
                v162 = function_4950(v159, 32, v90, v149, 0, v152);
                v163 = v90;
            } else {
                int64_t v165 = v161 + 1; // 0x8945
                *v160 = v165;
                *(char *)v161 = 32;
                v164 = v103;
                v162 = v161;
                v163 = v165;
            }
            // 0x8950
            g57++;
            v156 = v164;
            v157 = v162;
            v158 = v163;
        }
    }
    int64_t v166 = v157; // 0x86db
    if (v148 != 0) {
        // 0x86dd
        if ((char)function_6b40(4, v156, v158, v149, 0) != 0) {
            // 0x89a0
            function_8060();
        }
        // 0x86ef
        function_7ff0(&g29, (int64_t *)&g30);
        function_7ff0((int64_t *)v148, (int64_t *)(v148 + 8));
        v166 = function_7ff0(&g31, (int64_t *)&g32);
    }
    int64_t v167 = v149; // 0x871f
    int64_t v168 = 0; // 0x871f
    int64_t v169 = 0; // 0x871f
    int64_t v170 = v155; // 0x871f
    char v171 = 0; // 0x871f
    if (v147 != 0) {
        int64_t v172 = v166; // 0x8730
        int64_t v173 = 0; // 0x8730
        int64_t v174 = v155; // 0x8730
        char v175 = g124; // 0x8730
        if (g124 != 0) {
            char v176 = *(char *)&g125; // 0x88d8
            v172 = v166;
            v173 = 0;
            v174 = v155;
            v175 = 0;
            if (v176 != 0) {
                // 0x88e9
                v172 = v166;
                v173 = 0;
                v174 = v155;
                v175 = 0;
                if (v151 == 0) {
                    int64_t v177 = g43; // 0x88f9
                    int64_t v178 = v155 - 2; // 0x8900
                    unsigned char v179 = *v154; // 0x8904
                    int64_t * v180 = (int64_t *)(v177 + 40); // 0x8907
                    uint64_t v181 = *v180; // 0x8907
                    if (v181 >= *(int64_t *)(v177 + 48)) {
                        int64_t v182 = v179; // 0x8904
                        v172 = function_4950(v177, v182, v182, v149, 0, v152);
                        v173 = 1;
                        v174 = v178;
                        v175 = v176;
                    } else {
                        // 0x8915
                        *v180 = v181 + 1;
                        *(char *)v181 = v179;
                        v172 = v181;
                        v173 = 1;
                        v174 = v178;
                        v175 = v176;
                    }
                }
            }
        }
        char v183 = *(char *)v172; // 0x8775
        int64_t v184 = v183 != 47 ? (int64_t)&g12 : (int64_t)&g9; // 0x8787
        function_4c10(1, (char *)&g7, v172, v184);
        function_46d0(v172);
        function_46d0(v172);
        v167 = v184;
        v168 = v172;
        v169 = v173;
        v170 = v174;
        v171 = v175;
    }
    int64_t v185 = (int64_t)a6;
    if (g95 != 0) {
        int64_t * v186 = (int64_t *)(v185 + 24); // 0x87c8
        int64_t v187 = *v186; // 0x87c8
        int64_t v188 = v187; // 0x87d7
        if (*(int64_t *)(v185 + 32) - v187 < 8) {
            // 0x89b0
            _obstack_newchunk(v185, 8, v187, v167);
            v188 = *v186;
        }
        // 0x87dd
        *(int64_t *)v188 = g57;
        *v186 = *v186 + 8;
    }
    // 0x87ec
    function_4bd0(v169 + (int64_t)v154, 1, v170, (int64_t)g43);
    int64_t v189 = g57 + v155; // 0x880f
    g57 = v189;
    int64_t v190 = 1; // 0x8820
    int64_t v191 = v170; // 0x8820
    if (g95 != 0) {
        int64_t * v192 = (int64_t *)(v185 + 24); // 0x8822
        int64_t v193 = *v192; // 0x8822
        int64_t v194 = *(int64_t *)(v185 + 32) - v193; // 0x882a
        int64_t v195 = 1; // 0x8831
        int64_t v196 = v189; // 0x8831
        int64_t v197 = v193; // 0x8831
        if (v194 < 8) {
            // 0x89e0
            _obstack_newchunk(v185, 8, v194, v193);
            v197 = *v192;
            v196 = g57;
            v195 = 8;
        }
        // 0x8837
        *(int64_t *)v197 = v196;
        *v192 = *v192 + 8;
        v190 = v195;
        v191 = v194;
    }
    int64_t v198 = v190; // 0x8842
    int64_t v199 = v191; // 0x8842
    if (v147 != 0) {
        int64_t v200 = g43; // 0x8844
        function_4bd0((int64_t)&g8, 1, 6, v200);
        v198 = 1;
        v199 = 6;
        if (v171 != 0) {
            int64_t v201 = g43; // 0x886b
            unsigned char v202 = *(char *)(v155 - 1 + (int64_t)v154); // 0x8872
            int64_t v203 = v202; // 0x8872
            int64_t * v204 = (int64_t *)(v201 + 40); // 0x8877
            uint64_t v205 = *v204; // 0x8877
            if (v205 >= *(int64_t *)(v201 + 48)) {
                // 0x8a10
                function_4950(v201, v203, v203, v200, v168, v169);
                v198 = v203;
                v199 = v203;
            } else {
                // 0x8885
                *v204 = v205 + 1;
                *(char *)v205 = v202;
                v198 = 1;
                v199 = v203;
            }
        }
    }
    int64_t v206 = (int64_t)v154; // 0x888f
    if (v154 != (char *)&v153 && v103 != v206) {
        // 0x889f
        function_46d0(v206);
    }
    // 0x88a4
    if (v150 == __readfsqword(40)) {
        // 0x88c3
        return v155 + (int64_t)v151;
    }
    // 0x8a4c
    function_48e0();
    int64_t result2 = g93; // 0x8a7a
    if ((char)v198 == 0 || g93 != 0) {
        // 0x842d
        return result2;
    }
    int64_t v207 = *(int64_t *)(v206 + 8); // 0x8a8a
    int32_t v208 = *(int32_t *)(v206 + 196); // 0x8aa2
    int64_t v209 = *(int64_t *)(v206 + 16); // 0x8aaa
    function_8090(v207, (int64_t)g78, v208, 0, v198 % 256 ^ 1, v199, v209);
    return result2;
  lab_0x8404:
    // 0x8404
    *(int64_t *)v1 = v97;
    v90 = v109;
    v147 = v146;
    v100 = v99;
    v104 = v106;
    v103 = v102;
    v95 = v94;
    result = v92;
    goto lab_0x840c;
}

