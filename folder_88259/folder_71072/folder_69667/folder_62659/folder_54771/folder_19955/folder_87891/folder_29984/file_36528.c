// Address range: 0x8eb0 - 0x9aa1
int64_t function_8eb0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x8ec0
    function_8170();
    int64_t v2; // bp-696, 0x8eb0
    if (g48 != 0) {
        int64_t v3 = (int64_t)&g5; // 0x8eef
        if (*(char *)(a1 + 184) != 0) {
            int64_t v4 = *(int64_t *)(a1 + 32); // 0x8ef1
            v3 = (int64_t)&g5;
            if (v4 != 0) {
                // 0x9030
                v3 = function_10fc0(v4, &v2, a3, (int64_t *)&g5);
            }
        }
        int32_t v5 = *(int32_t *)&g75;
        function_4c10(1, "%*s ", *(int32_t *)&g63 == 4 ? 0 : v5, v3);
    }
    // 0x8f22
    int64_t v6; // 0x8eb0
    int64_t v7; // 0x8eb0
    int32_t v8; // 0x8eb0
    if (g58 == 0) {
        goto lab_0x8f63;
    } else {
        // 0x8f2b
        if (*(char *)(a1 + 184) != 0) {
            // 0x8ff8
            int64_t v9; // 0x8eb0
            int64_t v10 = function_ffa0(*(int64_t *)(a1 + 88), &v2, g57, 512, g56, v9); // 0x9011
            v6 = v10;
            v7 = v10;
            v8 = 0;
            if (*(int32_t *)&g63 != 4) {
                goto lab_0x8f4a;
            } else {
                goto lab_0x8f50;
            }
        } else {
            // 0x8f3f
            v6 = (int64_t)&g5;
            v7 = (int64_t)&g5;
            v8 = 0;
            if (*(int32_t *)&g63 == 4) {
                goto lab_0x8f50;
            } else {
                goto lab_0x8f4a;
            }
        }
    }
  lab_0x8f63:
    // 0x8f63
    if (g78 != 0) {
        int64_t v11 = *(int64_t *)(a1 + 176); // 0x8f75
        function_4c10(1, "%*s ", *(int32_t *)&g63 == 4 ? 0 : g70, v11);
    }
    int64_t v12 = function_8a60(a1, 0, 0, a2); // 0x8fa1
    int64_t v13 = a1; // 0x8fb1
    int64_t result = v12; // 0x8fb1
    if (g53 != 0) {
        unsigned char v14 = *(char *)(a1 + 184); // 0x8fe1
        uint64_t v15 = function_7b30(v14, *(int32_t *)(a1 + 48), *(int32_t *)(a1 + 168)); // 0x8fe8
        v13 = v14;
        result = v15 % 256 + v12;
    }
    // 0x8fb3
    if (v1 == __readfsqword(40)) {
        // 0x8fc6
        return result;
    }
    // 0x9040
    function_48e0();
    int64_t v16 = __readfsqword(40); // 0x906d
    char * v17 = (char *)(v13 + 184); // 0x9080
    int64_t v18; // bp-5468, 0x8eb0
    if (*v17 == 0) {
        uint32_t v19 = *(int32_t *)(v13 + 168); // 0x9490
        char v20 = *(char *)((int64_t)v19 + (int64_t)"?pcdb-lswd"); // 0x94b3
        v18 = v20;
        if (g77 == 0) {
            goto lab_0x90b6;
        } else {
            goto lab_0x94de;
        }
    } else {
        // 0x9090
        function_e500(v13 + 24, &v18);
        if (g77 != 0) {
            goto lab_0x94de;
        } else {
            goto lab_0x90b6;
        }
    }
  lab_0x90b6:;
    int32_t v21 = g62; // 0x90bf
    if (g62 == 1) {
        goto lab_0x9510;
    } else {
        goto lab_0x90c5;
    }
  lab_0x94de:;
    int32_t v22 = *(int32_t *)(v13 + 188); // 0x94de
    if (v22 == 1 || v22 != 2) {
        goto lab_0x90b6;
    } else {
        // 0x94f8
        v21 = g62;
        if (g62 != 1) {
            goto lab_0x90c5;
        } else {
            goto lab_0x9510;
        }
    }
  lab_0x8f4a:
    // 0x8f4a
    v7 = v6;
    v8 = g73;
    goto lab_0x8f50;
  lab_0x8f50:
    // 0x8f50
    function_4c10(1, "%*s ", v8, v7);
    goto lab_0x8f63;
  lab_0x9510:;
    int64_t v23 = *(int64_t *)(v13 + 128); // bp-5616, 0x9525
    int64_t v24 = *(int64_t *)(v13 + 136); // 0x952a
    goto lab_0x90e2;
  lab_0x90c5:
    // 0x90c5
    if (v21 != 2) {
        if (v21 != 0) {
            // 0x9530
            return function_4da0();
        }
        // 0x93d0
        v23 = *(int64_t *)(v13 + 112);
        v24 = *(int64_t *)(v13 + 120);
    } else {
        // 0x90ce
        v23 = *(int64_t *)(v13 + 96);
        v24 = *(int64_t *)(v13 + 104);
    }
    goto lab_0x90e2;
  lab_0x90e2:;
    unsigned char v25 = *v17; // 0x90e2
    int64_t v26 = v25; // 0x90e2
    int64_t v27; // 0x8eb0
    int64_t v28; // 0x8eb0
    int64_t v29; // 0x8eb0
    int64_t v30; // 0x8eb0
    int64_t v31; // bp-4416, 0x8eb0
    int64_t v32; // bp-5424, 0x8eb0
    int64_t v33; // 0x8eb0
    if (g48 != 0) {
        int64_t v34 = (int64_t)&g5; // 0x93f9
        if (v25 != 0) {
            int64_t v35 = *(int64_t *)(v13 + 32); // 0x93fb
            v34 = (int64_t)&g5;
            if (v35 != 0) {
                // 0x97e0
                v34 = function_10fc0(v35, &v32, v26, (int64_t *)a2);
            }
        }
        int64_t v36 = &v31; // 0x9409
        uint32_t v37 = *(int32_t *)&g75; // 0x9411
        function_4d90(v36, 1, (int64_t)&g94, "%*s ", (int64_t *)(int64_t)v37, (int32_t)v34);
        int64_t v38 = v36;
        int32_t v39 = *(int32_t *)v38; // 0x9436
        int64_t v40 = v38 + 4; // 0x9438
        int32_t v41 = v39 - 0x1010101 & (v39 ^ -0x7f7f7f80); // 0x9444
        uint32_t v42 = v41 & -0x7f7f7f80; // 0x9446
        while (v42 == 0) {
            // 0x9436
            v38 = v40;
            v39 = *(int32_t *)v38;
            v40 = v38 + 4;
            v41 = v39 - 0x1010101 & (v39 ^ -0x7f7f7f80);
            v42 = v41 & -0x7f7f7f80;
        }
        unsigned char v43 = (char)((v41 & 0x8080) == 0 ? v42 / 0x10000 : v42); // 0x9466
        v29 = (int64_t)"%*s ";
        v30 = (int64_t)*v17;
        v28 = v36;
        v27 = v34;
        v33 = ((v41 & 0x8080) == 0 ? v38 + 6 : v40) - (-1 - v43 < v43 ? 4 : 3);
    } else {
        int64_t v44 = &v31; // 0x90f8
        v29 = a2;
        v30 = v26;
        v28 = v44;
        v33 = v44;
    }
    int64_t v45 = v29; // 0x910a
    int64_t v46 = v30; // 0x910a
    int64_t v47 = v33; // 0x910a
    if (g58 != 0) {
        int64_t v48 = v29; // 0x9115
        int64_t v49 = (int64_t)&g5; // 0x9115
        if (v30 != 0) {
            int64_t v50 = *(int64_t *)(v13 + 88); // 0x9910
            v49 = function_ffa0(v50, &v32, g57, 512, g56, v27);
            v48 = 512;
        }
        uint32_t v51 = g73 - (int32_t)function_116d0(v49, 0); // 0x912c
        int64_t v52 = v48; // 0x9135
        int64_t v53 = v33; // 0x9135
        if (v51 >= 1) {
            int32_t v54 = v51 - 1;
            int64_t v55 = v33 + 1; // 0x913d
            v52 = v55 + (int64_t)v54;
            int64_t v56 = v33 + 1; // 0x9148
            *(char *)v33 = 32;
            while (v56 != v52) {
                int64_t v57 = v56;
                v56 = v57 + 1;
                *(char *)v57 = 32;
            }
            // 0x9155
            v53 = v55 + (int64_t)v54;
        }
        int64_t v58 = v49; // 0x8eb0
        char v59 = *(char *)v58; // 0x915d
        int64_t v60 = v53 + 1; // 0x9165
        char * v61 = (char *)v53;
        *v61 = v59;
        int64_t v62 = v60; // 0x916e
        v58++;
        while (v59 != 0) {
            // 0x915d
            v59 = *(char *)v58;
            v60 = v62 + 1;
            v61 = (char *)v62;
            *v61 = v59;
            v62 = v60;
            v58++;
        }
        // 0x9170
        *v61 = 32;
        v45 = v52;
        v46 = (int64_t)*v17;
        v47 = v60;
    }
    int64_t v63 = (int64_t)&g5; // 0x9186
    if ((char)v46 != 0) {
        int64_t v64 = *(int64_t *)(v13 + 40); // 0x9680
        v63 = function_10fc0(v64, &v32, v46, (int64_t *)v45);
    }
    // 0x918c
    function_4d90(v47, 1, -1, "%s %*s ", &v18, g72);
    int64_t v65 = function_48c0(v47, 1, -1); // 0x91c0
    int64_t v66 = (int64_t)"%s %*s "; // 0x91d3
    int64_t v67; // 0x8eb0
    if (g54 != 0) {
        int64_t v68 = g19; // 0x96a0
        function_4bd0("  ", 1, 2, v68, v63, v67);
        g31 += 2;
        v66 = v68;
    }
    int64_t v69 = v65 + v47; // 0x91c9
    int64_t v70; // 0x8eb0
    if (g12 != 0) {
        goto lab_0x9200;
    } else {
        // 0x91e2
        v70 = v69;
        if ((g60 || g11 || g78) == 0) {
            goto lab_0x9250;
        } else {
            goto lab_0x9200;
        }
    }
  lab_0x9200:
    // 0x9200
    function_4a50(&v31, (int64_t)g19);
    g31 += v69 - v28;
    if (g12 != 0) {
        // 0x96d0
        function_7780(*(int32_t *)(v13 + 52), g69, *v17);
        if (g11 == 0) {
            goto lab_0x9233;
        } else {
            goto lab_0x96f6;
        }
    } else {
        // 0x9226
        if (g11 != 0) {
            goto lab_0x96f6;
        } else {
            goto lab_0x9233;
        }
    }
  lab_0x9250:;
    int64_t v71 = v63; // 0x9259
    int64_t v72 = (int64_t)&g5; // 0x9259
    int64_t v73; // 0x8eb0
    int64_t v74; // 0x8eb0
    int64_t v75; // 0x8eb0
    int64_t v76; // bp-5456, 0x8eb0
    if (*v17 == 0) {
        goto lab_0x929b;
    } else {
        // 0x925f
        if ((*(int32_t *)(v13 + 48) & 0xb000) == 0x2000) {
            int32_t v77 = -2 - g66 - g65 + g64; // 0x986f
            int64_t * v78 = (int64_t *)(v13 + 64); // 0x9872
            uint64_t v79 = *v78; // 0x9872
            uint64_t v80 = v79 % 256; // 0x9877
            int64_t * v81 = (int64_t *)v66; // 0x9886
            function_10fc0(v79 / 0x1000 & 0xffffff00 | v80, &v32, v80, v81);
            uint64_t v82 = *v78; // 0x989d
            int64_t v83 = v82 / 256 & (int64_t)(int32_t)&g95; // 0x98b2
            int64_t v84 = function_10fc0(v82 / 0x100000000 & 0xfffff000 | v83, &v76, v83, v81); // 0x98c0
            int64_t v85 = g66 + (v77 >= 0 ? v77 : 0); // 0x98e1
            function_4d90(v70, 1, -1, "%*s, %*s ", (int64_t *)v85, (int32_t)v84);
            v75 = v70 + 1 + (int64_t)g64;
            v73 = v85;
            v74 = v84;
            goto lab_0x92f4;
        } else {
            int64_t v86 = function_ffa0(*(int64_t *)(v13 + 72), &v32, g55, 1, g10, v67); // 0x9293
            v71 = g10;
            v72 = v86;
            goto lab_0x929b;
        }
    }
  lab_0x9233:
    // 0x9233
    if (g60 != 0) {
        goto lab_0x9729;
    } else {
        goto lab_0x9240;
    }
  lab_0x96f6:;
    uint32_t v87 = *(int32_t *)(v13 + 56); // 0x970c
    int64_t v88 = v87; // 0x970c
    int64_t v89 = (int64_t)&g5; // 0x9711
    if (*v17 != 0) {
        // 0x97a8
        v89 = 0;
        if (g59 == 0) {
            // 0x97b7
            v89 = function_10d70(v88, v87, g68);
        }
    }
    // 0x9717
    function_76c0(v89, v88, g68);
    if (g60 == 0) {
        goto lab_0x9240;
    } else {
        goto lab_0x9729;
    }
  lab_0x929b:;
    uint32_t v90 = g64 - (int32_t)function_116d0(v72, 0); // 0x92ac
    int64_t v91 = v70; // 0x92b5
    if (v90 >= 1) {
        int32_t v92 = v90 - 1;
        int64_t v93 = v70 + 1; // 0x92bd
        int64_t v94 = v70 + 1; // 0x92c8
        *(char *)v70 = 32;
        while (v94 != v93 + (int64_t)v92) {
            int64_t v95 = v94;
            v94 = v95 + 1;
            *(char *)v95 = 32;
        }
        // 0x92d5
        v91 = v93 + (int64_t)v92;
    }
    int64_t v96 = v72; // 0x8eb0
    char v97 = *(char *)v96; // 0x92dd
    int64_t v98 = v91 + 1; // 0x92e5
    char * v99 = (char *)v91;
    *v99 = v97;
    int64_t v100 = v98; // 0x92ee
    v96++;
    while (v97 != 0) {
        // 0x92dd
        v97 = *(char *)v96;
        v98 = v100 + 1;
        v99 = (char *)v100;
        *v99 = v97;
        v100 = v98;
        v96++;
    }
    // 0x92f0
    *v99 = 32;
    v75 = v98;
    v73 = v71;
    goto lab_0x92f4;
  lab_0x9729:;
    int64_t v158 = &v31; // 0x9734
    function_7780(*(int32_t *)(v13 + 52), g67, *v17);
    v70 = v158;
    int64_t v114 = v158; // 0x974c
    if (g78 == 0) {
        goto lab_0x9250;
    } else {
        goto lab_0x9752;
    }
  lab_0x9240:;
    int64_t v159 = &v31; // 0x9247
    v70 = v159;
    v114 = v159;
    if (g78 != 0) {
        goto lab_0x9752;
    } else {
        goto lab_0x9250;
    }
  lab_0x92f4:;
    char * v101 = (char *)v75; // 0x92f4
    *v101 = 1;
    int64_t v102 = v75; // 0x9307
    int64_t v103 = v28; // 0x9307
    int64_t v104; // 0x8eb0
    int64_t v105; // 0x8eb0
    int64_t v106; // 0x8eb0
    int64_t v107; // 0x8eb0
    int64_t v108; // 0x8eb0
    int64_t v109; // bp-5600, 0x8eb0
    int64_t v110; // 0x95d6
    int64_t v111; // 0x95dd
    if (*v17 != 0) {
        int64_t v112 = function_17030(g37, &v23, &v109); // 0x95bc
        v104 = v73;
        v105 = v74;
        if (v112 == 0) {
            goto lab_0x9660;
        } else {
            // 0x95ca
            v110 = g80;
            v111 = 0x100000000 * v24 / 0x100000000;
            if (g79 < v23) {
                goto lab_0x9a10;
            } else {
                if (g79 > v23) {
                    int64_t v113 = g79 - 0xf0c2ac; // 0x97f8
                    v106 = 1;
                    v108 = v110;
                    v107 = v113;
                    if (v113 < v23) {
                        goto lab_0x9611;
                    } else {
                        goto lab_0x9808;
                    }
                } else {
                    if (g80 - (int32_t)v111 < 0) {
                        goto lab_0x9a10;
                    } else {
                        // 0x95ff
                        v106 = 0;
                        if (v23 > g79 - 0xf0c2ac) {
                            // 0x9835
                            v106 = v111 < v110;
                            goto lab_0x9611;
                        } else {
                            goto lab_0x9611;
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x930d;
    }
  lab_0x9752:
    // 0x9752
    function_76c0(*(int64_t *)(v13 + 176), 0, g70);
    v70 = v114;
    goto lab_0x9250;
  lab_0x930d:;
    uint32_t v115 = *(int32_t *)&g9; // 0x930d
    int64_t v116 = v102; // 0x9317
    int64_t v117 = v103; // 0x9317
    int64_t v118 = v115; // 0x9317
    int64_t v119 = (int64_t)&g5; // 0x9317
    int64_t v120 = v102; // 0x9317
    int64_t v121 = v103; // 0x9317
    int64_t v122 = (int64_t)&g5; // 0x9317
    if (v115 < 0) {
        goto lab_0x9970;
    } else {
        goto lab_0x931d;
    }
  lab_0x9660:;
    int64_t v123 = v75; // 0x9663
    int64_t v124 = v104; // 0x9663
    int64_t v125 = v105; // 0x9663
    int64_t v126; // 0x8eb0
    int64_t v127; // 0x8eb0
    if (*v101 != 0) {
        // 0x993c
        v127 = v75;
        v126 = v28;
        if (*v17 == 0) {
            goto lab_0x9a95;
        } else {
            int64_t v128 = function_10f20(v23, &v76); // 0x9958
            uint32_t v129 = *(int32_t *)&g9; // 0x995d
            v116 = v75;
            v117 = v28;
            v118 = v129;
            v119 = v128;
            v120 = v75;
            v121 = v28;
            v122 = v128;
            if (v129 >= 0) {
                goto lab_0x931d;
            } else {
                goto lab_0x9970;
            }
        }
    } else {
        goto lab_0x9669;
    }
  lab_0x9970:;
    int64_t v130 = v122;
    int64_t v131 = v121;
    int64_t v132 = v120;
    int64_t v133 = 0; // bp-5624, 0x9981
    int64_t v134; // bp-5536, 0x8eb0
    int64_t v135; // 0x8eb0
    if (function_17030(g37, &v133, &v134) == 0) {
        // 0x99d6
        v135 = (int64_t)*(int32_t *)&g9;
        goto lab_0x99dd;
    } else {
        int64_t v136 = *(int64_t *)&g14; // 0x99ac
        if (g24 != 0) {
            // 0x9a50
            int32_t v137; // 0x8eb0
            v136 = 128 * (int64_t)v137 + (int64_t)&g25;
        }
        int64_t v138 = function_13280((int64_t)&v32, &g91, v136, &v134, g37, 0); // 0x99c8
        if (v138 != 0) {
            int64_t v139 = function_114b0(&v32, v138, 0); // 0x9a73
            *(int32_t *)&g9 = (int32_t)v139;
            v135 = v139 & 0xffffffff;
            goto lab_0x99dd;
        } else {
            // 0x99d6
            v135 = (int64_t)*(int32_t *)&g9;
            goto lab_0x99dd;
        }
    }
  lab_0x931d:
    // 0x931d
    function_4d90(v116, 1, -1, "%*s ", (int64_t *)v118, (int32_t)v119);
    int64_t v140 = function_48c0(v116, 1, -1); // 0x9340
    int64_t v141 = v116; // 0x9345
    int64_t v142 = v117; // 0x9345
    int64_t v143 = v118; // 0x9345
    int64_t v144 = v119; // 0x9345
    int64_t v145 = v140 + v116; // 0x9345
    goto lab_0x9349;
  lab_0x9669:
    // 0x9669
    *(int16_t *)v123 = 32;
    v141 = v123;
    v142 = v28;
    v143 = v124;
    v144 = v125;
    v145 = v123 + 1;
    goto lab_0x9349;
  lab_0x9a10:
    // 0x9a10
    function_eae0(&g79, v110);
    int64_t v156 = g80; // 0x9a2d
    int64_t v157 = g79 - 0xf0c2ac; // 0x9a34
    v108 = v156;
    v107 = v157;
    int64_t v151 = v156; // 0x9a3e
    if (v157 < v23) {
        goto lab_0x981c;
    } else {
        goto lab_0x9808;
    }
  lab_0x9349:;
    int64_t v146 = v145 - v142; // 0x9353
    function_4a50((int64_t *)v142, (int64_t)g19);
    g31 += v146;
    int64_t v147 = function_8a60(v13, 0, (int32_t)&g30, v146); // 0x9371
    int32_t v148 = *(int32_t *)(v13 + 168); // 0x9376
    if (v148 == 6) {
        // 0x9538
        if (*(int64_t *)(v13 + 8) != 0) {
            // 0x9544
            function_4bd0(" -> ", 1, 4, (int64_t)g19, v143, v144);
            g31 += 4;
            function_8a60(v13, 1, 0, v146 + 4 + v147);
            if (g53 != 0) {
                // 0x958b
                function_7b30(1, *(int32_t *)(v13 + 172), 0);
            }
        }
    } else {
        // 0x938a
        if (g53 != 0) {
            // 0x9770
            function_7b30(*v17, *(int32_t *)(v13 + 48), v148);
        }
    }
    int64_t v149 = __readfsqword(40) ^ v16; // 0x93a0
    int64_t result2 = v149; // 0x93a9
    if (v149 == 0) {
        // 0x8fc6
        return result2;
    }
    // 0x9a90
    function_48e0();
    v127 = v141;
    v126 = v147;
    goto lab_0x9a95;
  lab_0x9a95:
    // 0x9a95
    v102 = v127;
    v103 = v126;
    goto lab_0x930d;
  lab_0x981c:
    // 0x981c
    v106 = 1;
    if (v23 < g79) {
        goto lab_0x9611;
    } else {
        // 0x9825
        v106 = 0;
        int64_t v150 = v151; // 0x982a
        if (v23 > g79) {
            goto lab_0x9611;
        } else {
            // 0x9835
            v106 = v111 < v150;
            goto lab_0x9611;
        }
    }
  lab_0x9808:
    // 0x9808
    v106 = 0;
    if (v107 > v23) {
        goto lab_0x9611;
    } else {
        // 0x9813
        v106 = 0;
        v151 = v108;
        if ((int32_t)v108 - (int32_t)v111 >= 0) {
            goto lab_0x9611;
        } else {
            goto lab_0x981c;
        }
    }
  lab_0x99dd:
    // 0x99dd
    v116 = v132;
    v117 = v131;
    v118 = v135;
    v119 = v130;
    if ((int32_t)v135 < 0) {
        // 0x99e6
        *(int32_t *)&g9 = 0;
        v116 = v132;
        v117 = v131;
        v118 = 0;
        v119 = v130;
    }
    goto lab_0x931d;
  lab_0x9611:;
    int64_t v152 = v106;
    int64_t v153; // 0x8eb0
    if (g24 == 0) {
        // 0x9a00
        v153 = *(int64_t *)(8 * v152 + (int64_t)&g14);
    } else {
        // 0x9625
        int32_t v154; // 0x8eb0
        v153 = 128 * (12 * v152 + (int64_t)v154) + (int64_t)&g25;
    }
    int64_t v155 = function_13280(v75, &g91, v153, &v109, g37, v111); // 0x964e
    v104 = g37;
    v105 = v111;
    if (v155 == 0) {
        goto lab_0x9660;
    } else {
        // 0x9658
        v123 = v155 + v75;
        v124 = g37;
        v125 = v111;
        goto lab_0x9669;
    }
}

