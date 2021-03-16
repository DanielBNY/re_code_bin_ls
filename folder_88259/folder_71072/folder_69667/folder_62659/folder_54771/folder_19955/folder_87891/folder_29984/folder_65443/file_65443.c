// Address range: 0xffa3 - 0x109d9
int64_t function_ffa3(uint64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5) {
    // 0xffa3
    int64_t v1; // bp-200, 0xffa3
    int64_t v2 = &v1; // 0xffb7
    int64_t v3 = 0x100000000 * a3 / 0x100000000; // 0xffc3
    __readfsqword(40);
    uint32_t v4 = (int32_t)a3 % 4; // 0xffe9
    int128_t v5 = (a3 & 32) == 0 ? (int128_t)((int32_t)&g25 - 24) : (int128_t)(int32_t)&g25; // 0xfff7
    int64_t v6 = function_4800(); // 0xfffb
    int64_t v7 = *(int64_t *)v6; // 0x10000
    int64_t v8 = function_48c0(v7); // 0x10009
    int64_t v9 = v8 >= 17 ? (int64_t)&g3 : v7; // 0x10025
    int64_t v10 = *(int64_t *)(v6 + 8); // 0x1002e
    int64_t v11 = v8 >= 17 ? 1 : v8; // 0x10033
    int64_t v12 = function_48c0(v10) < 17 ? v10 : (int64_t)&g2; // 0x10054
    int64_t v13 = a2 + 647; // 0x10058
    int64_t v14; // 0xffa3
    int64_t v15; // 0xffa3
    int64_t v16; // 0xffa3
    int64_t v17; // 0xffa3
    int64_t v18; // 0xffa3
    int64_t v19; // 0xffa3
    int64_t v20; // 0xffa3
    int64_t v21; // 0xffa3
    int64_t v22; // 0xffa3
    if (a5 > a4) {
        if (a4 == 0) {
            goto lab_0x10095;
        } else {
            if (a5 % a4 != 0) {
                goto lab_0x10095;
            } else {
                uint64_t v23 = a5 / a4; // 0x10208
                int64_t v24 = a1 / v23; // 0x1021c
                uint64_t v25 = 10 * (a1 % v23); // 0x10228
                uint64_t v26 = 2 * (v25 % v23); // 0x1022e
                int64_t v27 = v25 / v23 & 0xffffffff; // 0x10231
                int64_t v28 = v23 > v26 ? (int64_t)(v26 != 0) : v23 < v26 ? 3 : 2;
                uint32_t v29 = (int32_t)v3 & 16; // 0x10249
                v17 = v28;
                v21 = v27;
                v19 = v24;
                v14 = v29;
                v18 = v28;
                v16 = 0xffffffff;
                v22 = v27;
                v20 = v24;
                v15 = 0;
                if (v29 == 0) {
                    goto lab_0x10266;
                } else {
                    goto lab_0x10253;
                }
            }
        }
    } else {
        if (a4 % a5 != 0) {
            goto lab_0x10095;
        } else {
            uint64_t v30 = a4 / a5; // 0x10072
            int64_t v31 = v30 * a1; // 0x10082
            if (v31 / v30 == a1) {
                uint32_t v32 = (int32_t)v3 & 16; // 0x105a1
                int64_t v33 = v32; // 0x105a1
                v17 = 0;
                v21 = 0;
                v19 = v31;
                v14 = v33;
                v18 = 0;
                v16 = 0xffffffff;
                v22 = 0;
                v20 = v31;
                v15 = v33;
                if (v32 != 0) {
                    goto lab_0x10253;
                } else {
                    goto lab_0x10266;
                }
            } else {
                goto lab_0x10095;
            }
        }
    }
  lab_0x10266:;
    int64_t v34 = v18; // 0x10270
    int64_t v35 = v16; // 0x10270
    int64_t v36 = v22; // 0x10270
    int64_t v37 = v20; // 0x10270
    int64_t v38 = v13; // 0x10270
    int64_t v39 = v15; // 0x10270
    int64_t v40; // 0xffa3
    int64_t v41; // 0xffa3
    int64_t v42; // 0xffa3
    int64_t v43; // 0xffa3
    int64_t v44; // 0xffa3
    int64_t v45; // 0xffa3
    int64_t v46; // 0xffa3
    if (v4 == 1) {
        // 0x10700
        v43 = v16;
        v45 = v20;
        v41 = v13;
        v40 = v15;
        v44 = v16;
        v46 = v20;
        v42 = v13;
        if ((int32_t)(v20 % 2 != -v18) + (int32_t)v22 < 6) {
            goto lab_0x102a0;
        } else {
            goto lab_0x10286;
        }
    } else {
        goto lab_0x10276;
    }
  lab_0x10095:
    if (a5 < 0) {
        if (a1 >= 0) {
            goto lab_0x100d2;
        } else {
            goto lab_0x10490;
        }
    } else {
        if (a1 < 0) {
            goto lab_0x10490;
        } else {
            goto lab_0x100d2;
        }
    }
  lab_0x100d2:
    if ((a3 & 16) == 0) {
        goto lab_0x103c0;
    } else {
        goto lab_0x100df;
    }
  lab_0x10490:
    if ((a3 & 16) != 0) {
        goto lab_0x100df;
    } else {
        goto lab_0x103c0;
    }
  lab_0x10253:;
    int64_t v47 = v14;
    uint64_t v48 = (int64_t)v5 & 0xffffffff; // 0x10253
    v18 = v17;
    v16 = 0;
    v22 = v21;
    v20 = v19;
    v15 = v47;
    int64_t v49; // 0xffa3
    int64_t v50; // 0xffa3
    int64_t v51; // 0xffa3
    int64_t v52; // 0xffa3
    int64_t v53; // 0xffa3
    int64_t v54; // 0xffa3
    int64_t v55; // 0xffa3
    int64_t v56; // 0x10510
    if (v48 > v19) {
        goto lab_0x10266;
    } else {
        uint32_t v57 = (int32_t)v5; // 0x10549
        int64_t v58 = v19 / v48; // 0x1052a
        int32_t v59 = v17; // 0x10538
        uint64_t v60 = 10 * (v19 % v48) + v21 & 0xffffffff; // 0x1053d
        int64_t v61 = v60 / v48; // 0x1053d
        uint32_t v62 = 2 * (int32_t)(v60 % v48) + v59 / 2; // 0x10542
        uint32_t v63 = v62 + v59; // 0x10547
        int64_t v64 = v62 < v57 ? (int64_t)(v63 != 0) : v63 > v57 ? 3 : 2;
        int64_t v65 = 1; // 0x10510
        v56 = v65 & 0xffffffff;
        while (v48 <= v58) {
            // 0x1051c
            v18 = v64;
            v16 = v56;
            v22 = v61;
            v20 = v58;
            v15 = v47;
            int64_t v66 = v58; // 0x1051f
            if ((int32_t)v65 == 8) {
                goto lab_0x10266;
            }
            v58 = v66 / v48;
            v59 = v64;
            v60 = 10 * (v66 % v48) + v61 & 0xffffffff;
            v61 = v60 / v48;
            v62 = 2 * (int32_t)(v60 % v48) + v59 / 2;
            v63 = v62 + v59;
            v64 = v62 < v57 ? (int64_t)(v63 != 0) : v63 > v57 ? 3 : 2;
            v65 = v56 + 1;
            v56 = v65 & 0xffffffff;
        }
        // 0x107a0
        v18 = v64;
        v16 = v56;
        v22 = v61;
        v20 = v58;
        v15 = v47;
        if (v58 < 10) {
            bool v67; // 0xffa3
            if (v4 == 1) {
                int32_t v68 = (int32_t)(v64 + v61 % 2) - 2; // 0x1086c
                v67 = v68 >= 0 == (v68 != 0);
            } else {
                // 0x107b5
                v67 = v4 == 0 == (v64 != 0);
            }
            // 0x107c8
            if (v67) {
                if (v61 == 9) {
                    // 0x108d3
                    v51 = 0;
                    v54 = v58 + 1;
                    v52 = 0;
                    v53 = 10;
                    v49 = v13;
                    if (v58 == 9) {
                        goto lab_0x10820;
                    } else {
                        goto lab_0x107d8;
                    }
                } else {
                    // 0x10860
                    v50 = v61 + 49 & 0xffffffff;
                    v55 = v58;
                    goto lab_0x107e9;
                }
            } else {
                // 0x107d0
                v51 = v64;
                v54 = v58;
                if (v48 <= v60) {
                    // 0x109bf
                    v50 = v61 + 48 & 0xffffffff;
                    v55 = v58;
                    goto lab_0x107e9;
                } else {
                    goto lab_0x107d8;
                }
            }
        } else {
            goto lab_0x10266;
        }
    }
  lab_0x103c0:
    // 0x103c0
    function_4d90(a2, 1, -1, "%.0Lf");
    int64_t v69 = function_48c0(a2); // 0x10403
    int64_t v70 = v69; // 0x1040f
    int64_t v71 = 0xffffffff; // 0x1040f
    int64_t v72 = v69; // 0x1040f
    goto lab_0x10412;
  lab_0x100df:;
    float80_t v201 = (int32_t)v5; // 0x100df
    float80_t v202 = v201; // 0x100e7
    int64_t v203 = 1; // 0x100f6
    int64_t v90 = v203 & 0xffffffff; // 0x100f6
    while (v202 * v201 == v202 * v201 && 0.0L == 0.0L) {
        // 0x10101
        v202 *= v201;
        if ((int32_t)v203 == 8) {
            // break -> 0x10114
            break;
        }
        v203 = v90 + 1;
        v90 = v203 & 0xffffffff;
    }
    int64_t v204 = (a3 & 32) == 0 ? 3 : 2; // 0x10129
    function_4d90(a2, 1, -1, "%.1Lf");
    uint64_t v91 = function_48c0(a2);
    if (v4 == 1) {
        if (v91 > v11 + v204) {
            goto lab_0x101b5;
        } else {
            goto lab_0x105b8;
        }
    } else {
        if (v91 > v11 + v204) {
            // 0x1019b
            function_fee0(v4, 100.0L);
            goto lab_0x101b5;
        } else {
            goto lab_0x105b8;
        }
    }
  lab_0x10276:;
    int64_t v205 = v38;
    int64_t v206 = v37;
    int64_t v207 = v35;
    v44 = v207;
    v46 = v206;
    v42 = v205;
    if (v4 != 0) {
        goto lab_0x102a0;
    } else {
        // 0x10280
        v43 = v207;
        v45 = v206;
        v41 = v205;
        v40 = v39;
        v44 = v207;
        v46 = v206;
        v42 = v205;
        if ((int32_t)(v36 + v34) < 1) {
            goto lab_0x102a0;
        } else {
            goto lab_0x10286;
        }
    }
  lab_0x10412:;
    int64_t v73 = *(int64_t *)(v2 + 8) - v70; // 0x1041a
    function_4c50(v73, a2, v70);
    int64_t v74 = v71; // 0x10425
    int64_t v75 = a2; // 0x10425
    int64_t v76 = v73 + v72; // 0x10425
    int64_t v77 = v12; // 0x10425
    int64_t v78 = v73; // 0x10425
    goto lab_0x10429;
  lab_0x102a0:;
    int64_t v187 = v42 - 1; // 0x102b6
    *(char *)v187 = (char)v46 + 48;
    int64_t v188 = v187; // 0x102de
    while (v46 >= 10) {
        // 0x102b0
        v187 = v188 - 1;
        *(char *)v187 = (char)v46 + 48;
        v188 = v187;
    }
    int64_t v79 = v44; // 0x102e5
    int64_t v80 = a2; // 0x102e5
    int64_t v81 = v42; // 0x102e5
    int64_t v82 = v12; // 0x102e5
    int64_t v83 = v187; // 0x102e5
    int64_t v84 = v44; // 0x102e5
    int64_t v85 = a2; // 0x102e5
    int64_t v86 = v42; // 0x102e5
    int64_t v87 = v12; // 0x102e5
    int64_t v88 = v187; // 0x102e5
    if ((a3 & 4) == 0) {
        goto lab_0x10434;
    } else {
        goto lab_0x102eb;
    }
  lab_0x10286:;
    int64_t v189 = v41;
    int64_t v190 = v43;
    int64_t v191 = v45 + 1; // 0x10286
    v44 = v190;
    v46 = v191;
    v42 = v189;
    int64_t v147; // 0xffa3
    int64_t v141; // 0xffa3
    int64_t v142; // 0xffa3
    int64_t v140; // 0xffa3
    int64_t v146; // 0xffa3
    int64_t v137; // 0xffa3
    int64_t v145; // 0xffa3
    int64_t v139; // 0xffa3
    int64_t v144; // 0xffa3
    int64_t v138; // 0xffa3
    if ((int32_t)v40 == 0) {
        goto lab_0x102a0;
    } else {
        // 0x1028f
        v44 = v190;
        v46 = v191;
        v42 = v189;
        if ((int32_t)v190 == 8 || ((int64_t)v5 & 0xffffffff) != v191) {
            goto lab_0x102a0;
        } else {
            int64_t v192 = v190 + 1 & 0xffffffff; // 0x10756
            v144 = v192;
            v145 = a2;
            v146 = v189;
            v147 = v12;
            if ((a3 & 8) == 0) {
                // 0x108e8
                *(char *)(v189 - 1) = 48;
                int64_t v193 = v189 + -1 - v11; // 0x108f3
                int64_t v194 = v11 & 0xffffffff; // 0x108f6
                uint32_t v195 = (int32_t)v11; // 0x108f9
                if (v195 >= 8) {
                    int64_t v196 = v193 + 8 & -8; // 0x1093f
                    *(int64_t *)v193 = *(int64_t *)v9;
                    *(int64_t *)(v194 - 8 + v193) = *(int64_t *)(v9 - 8 + v194);
                    int64_t v197 = v193 - v196; // 0x10956
                    uint32_t v198 = (int32_t)(v197 + v11); // 0x10962
                    v144 = v192;
                    v145 = a2;
                    v146 = v193;
                    v147 = v12;
                    if (v198 >= 8) {
                        int64_t v199 = 0;
                        int64_t v200 = v199 + 8; // 0x10972
                        *(int64_t *)(v199 + v196) = *(int64_t *)(v9 - v197 + v199);
                        v144 = v192;
                        v145 = a2;
                        v146 = v193;
                        v147 = v12;
                        while ((v198 & -8) > (int32_t)v200) {
                            // 0x10970
                            v199 = v200 & 0xffffffff;
                            v200 = v199 + 8;
                            *(int64_t *)(v199 + v196) = *(int64_t *)(v9 - v197 + v199);
                            v144 = v192;
                            v145 = a2;
                            v146 = v193;
                            v147 = v12;
                        }
                    }
                    goto lab_0x10764;
                } else {
                    // 0x108ff
                    v137 = v194;
                    v138 = v192;
                    v139 = a2;
                    v140 = v193;
                    v141 = v12;
                    v142 = v9;
                    if ((v11 & 4) != 0) {
                        goto lab_0x109aa;
                    } else {
                        // 0x10909
                        v144 = v192;
                        v145 = a2;
                        v146 = v193;
                        v147 = v12;
                        if (v195 != 0) {
                            // 0x10911
                            *(char *)v193 = *(char *)v9;
                            v144 = v192;
                            v145 = a2;
                            v146 = v193;
                            v147 = v12;
                            if ((v11 & 2) != 0) {
                                // 0x10920
                                *(int16_t *)(v194 - 2 + v193) = *(int16_t *)(v9 - 2 + v194);
                                v144 = v192;
                                v145 = a2;
                                v146 = v193;
                                v147 = v12;
                            }
                        }
                        goto lab_0x10764;
                    }
                }
            } else {
                goto lab_0x10764;
            }
        }
    }
  lab_0x10429:
    // 0x10429
    v79 = v74;
    v80 = v75;
    v81 = v76;
    v82 = v77;
    v83 = v78;
    v84 = v74;
    v85 = v75;
    v86 = v76;
    v87 = v77;
    v88 = v78;
    if ((*(char *)(v2 + 64) & 4) != 0) {
        goto lab_0x102eb;
    } else {
        goto lab_0x10434;
    }
  lab_0x101b5:
    // 0x101b5
    function_4d90(a2, 1, -1, "%.0Lf");
    int64_t v89 = function_48c0(a2); // 0x101de
    v70 = v89;
    v71 = v90;
    v72 = v89;
    goto lab_0x10412;
  lab_0x105b8:
    if ((a3 & 8) == 0) {
        goto lab_0x105d2;
    } else {
        // 0x105bf
        if (*(char *)(a2 - 1 + v91) == 48) {
            if (v4 == 1) {
                goto lab_0x101b5;
            } else {
                // 0x1019b
                function_fee0(v4, 100.0L);
                goto lab_0x101b5;
            }
        } else {
            goto lab_0x105d2;
        }
    }
  lab_0x10434:;
    int64_t result = v88;
    int64_t v92 = v87;
    int64_t v93 = v86;
    int64_t v94 = v85;
    int64_t v95 = v84;
    int64_t v96 = v2 + 64; // 0x10434
    char v97 = *(char *)v96; // 0x10434
    int64_t v98 = v95; // 0x10439
    int64_t v99 = v93; // 0x10439
    int64_t v100; // 0xffa3
    int64_t v101; // 0xffa3
    if (v97 > -1) {
        goto lab_0x10457;
    } else {
        // 0x1043b
        if ((int32_t)v95 == -1) {
            uint64_t v102 = *(int64_t *)(v2 + 16); // 0x105e0
            if (v102 < 2) {
                goto lab_0x10444;
            } else {
                uint32_t v103 = *(int32_t *)(v2 + 48); // 0x105ef
                int64_t v104 = v103; // 0x105ef
                int64_t v105 = 1; // 0x105fd
                int64_t v106 = 1; // 0x105fd
                int64_t v107 = v106;
                int64_t v108 = v105;
                int64_t v109 = v108 * v104; // 0x10600
                int64_t v110 = v107; // 0x10607
                while (v102 > v109) {
                    int64_t v111 = v107 + 1; // 0x10609
                    int64_t v112 = v111 & 0xffffffff; // 0x10609
                    v105 = v109;
                    v106 = v112;
                    v110 = v112;
                    if ((int32_t)v111 == 8) {
                        // break -> 0x10611
                        break;
                    }
                    v107 = v106;
                    v108 = v105;
                    v109 = v108 * v104;
                    v110 = v107;
                }
                int64_t v113 = v110;
                int32_t v114 = *(int32_t *)v96; // 0x10611
                int64_t v115 = v114 & 256; // 0x10617
                v100 = v115;
                v101 = v113;
                if ((v114 & 64) == 0) {
                    // 0x10611
                    goto lab_0x1063c;
                } else {
                    goto lab_0x10621;
                }
            }
        } else {
            goto lab_0x10444;
        }
    }
  lab_0x102eb:;
    int64_t v116 = v82;
    int64_t * v117 = (int64_t *)(v2 + 72); // 0x102f1
    *v117 = v81;
    int64_t v118 = function_48c0(v116); // 0x102fd
    int64_t * v119 = (int64_t *)(v2 + 24); // 0x10315
    *v119 = v118;
    int64_t * v120 = (int64_t *)(v2 + 32); // 0x1031d
    *v120 = v2 + 80;
    function_4ac0();
    int32_t * v121 = (int32_t *)(v2 + 68); // 0x10327
    *v121 = (int32_t)v79;
    int64_t * v122 = (int64_t *)(v2 + 56); // 0x1032b
    int64_t v123 = *v120; // 0x10338
    *v122 = v80;
    int64_t v124 = *v119; // 0x10345
    int64_t v125 = *v122; // 0x1034a
    uint64_t v126 = v81 - v83;
    unsigned char v127 = *(char *)v125; // 0x1038c
    int64_t v128; // 0xffa3
    uint64_t v129; // 0x1038c
    int64_t v130; // 0x103a4
    int64_t v131; // 0x103a8
    if (v127 == 0) {
        // branch -> 0x1035e
    } else {
        // 0x10395
        v131 = 0;
        v130 = v126;
        v128 = v123;
        if (v127 < 127) {
            // 0x1039d
            v129 = (int64_t)v127;
            v130 = v126 < v129 ? v126 : v129;
            v131 = v126 - v130;
            v128 = v131 + v123;
        }
    }
    int64_t v132 = v125 + 1;
    int64_t v133 = v130;
    int64_t v134 = v131;
    int64_t v135 = function_4ae0(*v117 - v133, v128, v133); // 0x10367
    while (v134 != 0) {
        int64_t v136 = function_4ae0(v135 - v124, v116, v124); // 0x10389
        v126 = v134;
        v127 = *(char *)v132;
        if (v127 == 0) {
            // branch -> 0x1035e
        } else {
            // 0x10395
            v131 = 0;
            v130 = v126;
            v128 = v123;
            if (v127 < 127) {
                // 0x1039d
                v129 = (int64_t)v127;
                v130 = v126 < v129 ? v126 : v129;
                v131 = v126 - v130;
                v128 = v131 + v123;
            }
        }
        // 0x1035e
        v132++;
        v133 = v130;
        v134 = v131;
        v135 = function_4ae0(v136 - v133, v128, v133);
    }
    // 0x104f0
    v84 = (int64_t)*v121;
    v85 = *v122;
    v86 = v135;
    v87 = v132;
    v88 = v135;
    goto lab_0x10434;
  lab_0x105d2:
    // 0x105d2
    v70 = v91;
    v71 = v90;
    v72 = v91 + -1 - v11;
    goto lab_0x10412;
  lab_0x10457:
    // 0x10457
    *(char *)*(int64_t *)(v2 + 8) = 0;
    if (*(int64_t *)(v2 + 136) == __readfsqword(40)) {
        // 0x10476
        return result;
    }
    // 0x109a5
    v137 = function_48e0();
    v138 = v98;
    v139 = v94;
    v140 = v99;
    v141 = v92;
    v142 = result;
    goto lab_0x109aa;
  lab_0x107d8:
    // 0x107d8
    v50 = 48;
    v55 = v54;
    v52 = v51;
    v53 = v54;
    v49 = v13;
    if ((a3 & 8) != 0) {
        goto lab_0x10820;
    } else {
        goto lab_0x107e9;
    }
  lab_0x109aa:
    // 0x109aa
    *(int32_t *)v140 = *(int32_t *)v142;
    int64_t v143 = v137 - 4;
    *(int32_t *)(v140 + v143) = *(int32_t *)(v142 + v143);
    v144 = v138;
    v145 = v139;
    v146 = v140;
    v147 = v141;
    goto lab_0x10764;
  lab_0x10444:;
    int64_t v184 = v95;
    uint32_t v185 = *(int32_t *)v96 & 256; // 0x10448
    v98 = v184;
    v99 = v93;
    int64_t v159; // 0xffa3
    int64_t v160; // 0xffa3
    if ((v185 || (int32_t)v184) != 0) {
        int64_t v186 = v185; // 0x10448
        v100 = v186;
        v101 = v184;
        v159 = v186;
        v160 = v184;
        if ((v97 & 64) == 0) {
            goto lab_0x10634;
        } else {
            goto lab_0x10621;
        }
    } else {
        goto lab_0x10457;
    }
  lab_0x10764:;
    int64_t v148 = v146 - 1; // 0x10764
    *(char *)v148 = 49;
    v74 = v144;
    v75 = v145;
    v76 = v146;
    v77 = v147;
    v78 = v148;
    goto lab_0x10429;
  lab_0x10820:
    // 0x10820
    v34 = v52;
    v35 = v56;
    v36 = 0;
    v37 = v53;
    v38 = v49;
    v39 = v47;
    v44 = v56;
    v46 = v53;
    v42 = v49;
    if (v4 == 1) {
        goto lab_0x102a0;
    } else {
        goto lab_0x10276;
    }
  lab_0x107e9:;
    int64_t v149 = v55;
    int64_t v150 = a2 + 646; // 0x107e9
    *(char *)v150 = (char)v50;
    int64_t v151 = v11 & 0xffffffff; // 0x107f6
    int64_t v152 = v150 - v11; // 0x107f9
    uint32_t v153 = (int32_t)v11; // 0x107fc
    if (v153 >= 8) {
        int64_t v154 = v152 + 8 & -8; // 0x1088b
        *(int64_t *)v152 = *(int64_t *)v9;
        int64_t v155 = v152 - v154; // 0x10892
        *(int64_t *)(v151 + v152 - 8) = *(int64_t *)(v151 + v9 - 8);
        uint32_t v156 = (int32_t)(v155 + v11); // 0x108ac
        v52 = 0;
        v53 = v149;
        v49 = v152;
        if (v156 >= 8) {
            int64_t v157 = 0;
            int64_t v158 = v157 + 8; // 0x108be
            *(int64_t *)(v157 + v154) = *(int64_t *)(v9 - v155 + v157);
            v52 = 0;
            v53 = v149;
            v49 = v152;
            while ((v156 & -8) > (int32_t)v158) {
                // 0x108bc
                v157 = v158 & 0xffffffff;
                v158 = v157 + 8;
                *(int64_t *)(v157 + v154) = *(int64_t *)(v9 - v155 + v157);
                v52 = 0;
                v53 = v149;
                v49 = v152;
            }
        }
    } else {
        if ((v11 & 4) != 0) {
            // 0x10990
            *(int32_t *)v152 = *(int32_t *)v9;
            *(int32_t *)(v151 + v152 - 4) = *(int32_t *)(v151 + v9 - 4);
            v52 = 0;
            v53 = v149;
            v49 = v152;
        } else {
            // 0x1080c
            v52 = 0;
            v53 = v149;
            v49 = v152;
            if (v153 != 0) {
                // 0x10811
                *(char *)v152 = *(char *)v9;
                v52 = 0;
                v53 = v149;
                v49 = v152;
                if ((v11 & 2) != 0) {
                    // 0x10832
                    *(int16_t *)(v151 + v152 - 2) = *(int16_t *)(v151 + v9 - 2);
                    v52 = 0;
                    v53 = v149;
                    v49 = v152;
                }
            }
        }
    }
    goto lab_0x10820;
  lab_0x10621:
    // 0x10621
    *(char *)(v94 + 647) = 32;
    *(int64_t *)(v2 + 8) = v94 + 648;
    v159 = v100;
    v160 = v101;
    goto lab_0x10634;
  lab_0x10634:;
    int32_t v161 = v160;
    int64_t * v162; // 0xffa3
    int64_t v163; // 0xffa3
    int64_t v164; // 0xffa3
    int64_t v165; // 0xffa3
    if (v161 == 0) {
        int64_t * v166 = (int64_t *)(v2 + 8);
        int64_t v167 = *v166; // 0x109c7
        int64_t v168; // 0xffa3
        v98 = v168;
        v99 = v93;
        v162 = v166;
        v165 = v167;
        v164 = v168;
        v163 = v93;
        int64_t v169; // 0xffa3
        if ((int32_t)v169 != 0) {
            goto lab_0x1067e;
        } else {
            goto lab_0x10457;
        }
    } else {
        goto lab_0x1063c;
    }
  lab_0x1063c:;
    int64_t v170 = v160;
    int64_t v171 = v159;
    int64_t * v172; // 0xffa3
    int64_t v173; // 0xffa3
    int64_t v174; // 0xffa3
    if (v161 != 1) {
        goto lab_0x1064f;
    } else {
        // 0x10641
        if (*(int32_t *)(v2 + 52) == 0) {
            int64_t * v175 = (int64_t *)(v2 + 8);
            int64_t v176 = *v175; // 0x10778
            *(char *)v176 = 107;
            int64_t v177 = v176 + 1; // 0x10780
            v162 = v175;
            v165 = v177;
            v164 = v170;
            v163 = v93;
            v172 = v175;
            v174 = v177;
            v173 = v170;
            if ((int32_t)v171 != 0) {
                goto lab_0x1067e;
            } else {
                goto lab_0x1078c;
            }
        } else {
            goto lab_0x1064f;
        }
    }
  lab_0x1064f:;
    int64_t v178 = 0x100000000 * v170 / 0x100000000; // 0x1064f
    int64_t * v179 = (int64_t *)(v2 + 8);
    int64_t v180 = *v179; // 0x10659
    int64_t v181 = v180 + 1; // 0x10662
    *(char *)v180 = *(char *)(v178 + (int64_t)&g11);
    v172 = v179;
    v174 = v181;
    v173 = v178;
    if ((int32_t)v171 == 0) {
        goto lab_0x1078c;
    } else {
        uint32_t v182 = *(int32_t *)(v2 + 52); // 0x10670
        int64_t v183 = v182; // 0x10670
        v162 = v179;
        v165 = v181;
        v164 = v178;
        v163 = v183;
        if (v182 != 0) {
            // 0x10740
            *(char *)v181 = 105;
            v162 = v179;
            v165 = v180 + 2;
            v164 = v178;
            v163 = v183;
        }
        goto lab_0x1067e;
    }
  lab_0x1067e:
    // 0x1067e
    *(char *)v165 = 66;
    *v162 = v165 + 1;
    v98 = v164;
    v99 = v163;
    goto lab_0x10457;
  lab_0x1078c:
    // 0x1078c
    *v172 = v174;
    v98 = v173;
    v99 = v93;
    goto lab_0x10457;
}

