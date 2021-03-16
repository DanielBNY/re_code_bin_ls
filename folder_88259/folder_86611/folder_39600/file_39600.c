// Address range: 0x9ab0 - 0xa198
int64_t function_9ab0(int64_t a1, int64_t a2, uint32_t a3) {
    int64_t v1 = __readfsqword(40); // 0x9add
    function_81e0();
    char v2; // bp-8249, 0x9ab0
    if (v1 == __readfsqword(40)) {
        // 0x9b3b
        int64_t v3; // 0x9ab0
        return v3 + (int64_t)v2;
    }
    // 0x9b45
    int64_t v4; // bp-8232, 0x9ab0
    int64_t v5 = &v4; // 0x9b00
    __stack_chk_fail();
    int64_t v6 = __readfsqword(40); // 0x9b5c
    int64_t v7 = a1; // 0x9b76
    int64_t v8 = 0; // 0x9b76
    int64_t v9; // 0x9ab0
    int64_t v10; // 0x9ab0
    int64_t v11; // 0x9ab0
    int64_t v12; // 0x9ab0
    int64_t v13; // 0x9ab0
    int64_t v14; // 0x9ab0
    int64_t v15; // bp-8960, 0x9ab0
    int64_t v16; // 0x9ab0
    if (g48 == 0) {
        goto lab_0x9c2a;
    } else {
        // 0x9b7c
        if (*(int32_t *)&g63 == 4) {
            int64_t v17 = *(int64_t *)(v5 + 32); // 0x9cc0
            v7 = &v15;
            int64_t v18 = function_10fc0(v17, &v15, a2, (int64_t *)(int64_t)a3); // 0x9cc7
            v8 = function_48c0(v18, v7, a2) + 1;
            goto lab_0x9c2a;
        } else {
            // 0x9b89
            v9 = &g74;
            v13 = a2;
            v10 = &g76;
            v14 = a1;
            if (g58 == 0) {
                // 0x9ca8
                v11 = &g76;
                v12 = &g76;
                v16 = &g71;
                if (g78 != 0) {
                    goto lab_0x9c9c;
                } else {
                    goto lab_0x9bbc;
                }
            } else {
                goto lab_0x9bac;
            }
        }
    }
  lab_0xa01c:;
    // 0xa01c
    int64_t v19; // 0x9ab0
    int64_t v20 = v19 + 1; // 0xa022
    int64_t v21; // 0x9ab0
    int64_t v22; // 0x9ab0
    int64_t v23; // 0xa047
    function_8eb0(v23, v21, v22);
    int64_t v24 = v22; // 0xa032
    int64_t v25 = v20; // 0xa032
    int64_t v26; // 0x9ab0
    int64_t v27 = v26; // 0xa032
    int64_t v28 = v22; // 0xa032
    if (v20 >= (int64_t)g85) {
        // break -> 0xa108
        goto lab_0xa108;
    }
    goto lab_0xa038;
  lab_0xa09b:;
    // 0xa09b
    int64_t v35; // 0x9ab0
    int64_t v39 = v35;
    int64_t v34; // 0x9ab0
    int64_t v40 = v34;
    int64_t v33; // 0x9ab0
    int64_t v41 = v33;
    int64_t v42 = g19; // 0xa09b
    int64_t * v43 = (int64_t *)(v42 + 40); // 0xa0a2
    uint64_t v44 = *v43; // 0xa0a2
    char v45; // 0x9ab0
    int64_t v46; // 0x9ab0
    if (v44 >= *(int64_t *)(v42 + 48)) {
        // 0xa148
        function_4950(v42, v46, v41);
    } else {
        // 0xa0b0
        *v43 = v44 + 1;
        *(char *)v44 = v45;
    }
    int64_t v47 = g19; // 0xa0bb
    int64_t * v48 = (int64_t *)(v47 + 40); // 0xa0c2
    uint64_t v49 = *v48; // 0xa0c2
    if (v49 >= *(int64_t *)(v47 + 48)) {
        // 0xa170
        function_4950(v47, v41, v41);
        v22 = v41;
        v21 = v40;
        v26 = v39;
    } else {
        // 0xa0d0
        *v48 = v49 + 1;
        *(char *)v49 = (char)v41;
        v22 = v41;
        v21 = v40;
        v26 = v39;
    }
    goto lab_0xa01c;
  lab_0x9c2a:;
    int64_t v50 = a2; // 0x9c31
    int64_t v51 = v8; // 0x9c31
    int64_t v52 = v7; // 0x9c31
    if (g58 == 0) {
        goto lab_0x9baf;
    } else {
        // 0x9c37
        v9 = &g74;
        v13 = a2;
        v10 = v8;
        v14 = v7;
        if (*(int32_t *)&g63 == 4) {
            // 0x9c44
            v9 = 2;
            v13 = a2;
            v10 = v8;
            v14 = v7;
            if (*(char *)(v5 + 184) != 0) {
                int64_t v53 = *(int64_t *)(v5 + 88); // 0x9c56
                int64_t v54 = &v15; // 0x9c61
                int64_t v55 = g57; // 0x9c69
                int64_t v56 = function_ffa0(v53, &v15, g57, 512, g56, (int64_t)&v2); // 0x9c6f
                v9 = function_48c0(v56, v54, v55) + 1;
                v13 = v55;
                v10 = v8;
                v14 = v54;
            }
        }
        goto lab_0x9bac;
    }
  lab_0x9baf:;
    int64_t v57 = v51;
    v11 = v57;
    if (g78 != 0) {
        // 0x9c88
        v12 = v57;
        v16 = &g71;
        if (*(int32_t *)&g63 == 4) {
            // 0x9ce0
            v12 = v57;
            v16 = function_48c0(*(int64_t *)(v5 + 176), v52, v50) + 1;
        }
        goto lab_0x9c9c;
    } else {
        goto lab_0x9bbc;
    }
  lab_0x9bbc:;
    int64_t v58 = function_9ab0(v4, (int64_t)g41, *(int32_t *)(v5 + 196)) + v11; // 0x9bd2
    int64_t v59 = v4; // 0x9bde
    int64_t v60 = v58; // 0x9bde
    if (g53 != 0) {
        unsigned char v61 = *(char *)(v5 + 184); // 0x9be9
        int64_t v62 = function_7a40(v61, *(int32_t *)(v5 + 48), *(int32_t *)(v5 + 168)); // 0x9bf0
        v59 = v61;
        v60 = v58 + (int64_t)((char)v62 != 0);
    }
    int64_t result = v60; // 0x9c11
    if (v6 == __readfsqword(40)) {
        // 0x9c17
        return result;
    }
    int64_t v63 = v59;
    __stack_chk_fail();
    int64_t v64 = g85; // 0x9d0c
    uint64_t v65 = (int64_t)g32; // 0x9d13
    uint64_t result2 = v64 > v65 ? v65 : v64; // 0x9d20
    int64_t v66 = v64; // 0x9d2b
    int64_t v67; // 0x9ab0
    int64_t v68; // 0x9ab0
    int64_t v69; // 0x9ab0
    int64_t v70; // 0x9ab0
    int64_t v71; // 0x9ab0
    if (result2 > (int64_t)g20) {
        int64_t v72 = (int64_t)g33; // 0x9d34
        if (result2 < v65 / 2) {
            uint128_t v73 = 48 * (int128_t)result2; // 0x9fa1
            int64_t v74 = v73 % 0x3f0000000000000001 != 0; // 0x9fa7
            v70 = v74;
            v68 = v72;
            if ((int64_t)v73 < 0 || v73 % 0x3f0000000000000001 != 0) {
                goto lab_0x9fd1;
            } else {
                int64_t v75 = function_15920(v72, 48 * result2, v74); // 0x9fc0
                v69 = v74;
                v67 = 2 * result2;
                v71 = v75;
                goto lab_0x9d85;
            }
        } else {
            uint128_t v76 = 24 * (g32 & 0xffffffffffffffff); // 0x9d4f
            int64_t v77 = v76 % 0x1f0000000000000001 != 0; // 0x9d55
            v70 = v77;
            v68 = v72;
            if ((int64_t)v76 < 0 || v76 % 0x1f0000000000000001 != 0) {
                goto lab_0x9fd1;
            } else {
                int64_t v78 = function_15920(v72, 24 * v65, v77); // 0x9d72
                v69 = v77;
                v67 = g32;
                v71 = v78;
                goto lab_0x9d85;
            }
        }
    } else {
        goto lab_0x9e33;
    }
  lab_0x9bac:
    // 0x9bac
    v50 = v13;
    v51 = v10 + v9;
    v52 = v14;
    goto lab_0x9baf;
  lab_0x9c9c:
    // 0x9c9c
    v11 = v16 + v12;
    goto lab_0x9bbc;
  lab_0x9e33:
    // 0x9e33
    if (result2 != 0) {
        int64_t v79 = 3; // 0x9e4b
        int64_t v80 = 0; // 0x9e4b
        int64_t v81 = 8 * v79 + (int64_t)g33;
        int64_t v82 = *(int64_t *)(v81 - 8); // 0x9e50
        *(char *)(v81 - 24) = 1;
        v80 += 8;
        *(int64_t *)(v81 - 16) = v79;
        int64_t v83 = v82; // 0x9e67
        *(int64_t *)v83 = 3;
        v83 += 8;
        while (v82 + v80 != v83) {
            // 0x9e70
            *(int64_t *)v83 = 3;
            v83 += 8;
        }
        // 0x9e80
        v79 += 3;
        while (result2 + 3 + 2 * result2 != v79) {
            // 0x9e50
            v81 = 8 * v79 + (int64_t)g33;
            v82 = *(int64_t *)(v81 - 8);
            *(char *)(v81 - 24) = 1;
            v80 += 8;
            *(int64_t *)(v81 - 16) = v79;
            v83 = v82;
            *(int64_t *)v83 = 3;
            v83 += 8;
            while (v82 + v80 != v83) {
                // 0x9e70
                *(int64_t *)v83 = 3;
                v83 += 8;
            }
            // 0x9e80
            v79 += 3;
        }
    }
    if (v66 != 0) {
        uint64_t v84 = 0;
        uint64_t v85 = (int64_t)g85; // 0x9ea8
        int64_t v86; // 0x9ab0
        int64_t v87; // 0x9ab0
        int64_t v88; // 0x9ab0
        int64_t v89; // 0x9ab0
        uint64_t v90; // 0x9efa
        int64_t * v91; // 0x9f02
        uint64_t v92; // 0x9f02
        int64_t * v93; // 0x9f0a
        uint64_t v94; // 0x9f31
        char * v95; // 0x9f35
        if (result2 != 0) {
            // 0x9ebb
            v88 = (int64_t)g33;
            v86 = 0;
            v94 = v86 + 1;
            v95 = (char *)v88;
            if (*v95 != 0) {
                if ((char)v63 != 0) {
                    // 0x9ed8
                    v89 = v84 / ((v86 + v85) / v94);
                } else {
                    // 0x9f3f
                    v89 = v84 % v94;
                }
                // 0x9ef0
                v90 = v89 != v86 ? g82 + 2 : g82;
                v91 = (int64_t *)(*(int64_t *)(v88 + 16) + 8 * v89);
                v92 = *v91;
                if (v90 > v92) {
                    // 0x9f0a
                    v93 = (int64_t *)(v88 + 8);
                    *v93 = v90 - v92 + *v93;
                    *v91 = v90;
                    *v95 = (char)(*v93 < (int64_t)g38);
                }
            }
            // 0x9f25
            v87 = v88 + 24;
            while (result2 != v94) {
                // 0x9f2e
                v88 = v87;
                v86 = v94;
                v94 = v86 + 1;
                v95 = (char *)v88;
                if (*v95 != 0) {
                    if ((char)v63 != 0) {
                        // 0x9ed8
                        v89 = v84 / ((v86 + v85) / v94);
                    } else {
                        // 0x9f3f
                        v89 = v84 % v94;
                    }
                    // 0x9ef0
                    v90 = v89 != v86 ? g82 + 2 : g82;
                    v91 = (int64_t *)(*(int64_t *)(v88 + 16) + 8 * v89);
                    v92 = *v91;
                    if (v90 > v92) {
                        // 0x9f0a
                        v93 = (int64_t *)(v88 + 8);
                        *v93 = v90 - v92 + *v93;
                        *v91 = v90;
                        *v95 = (char)(*v93 < (int64_t)g38);
                    }
                }
                // 0x9f25
                v87 = v88 + 24;
            }
        }
        int64_t v96 = v84 + 1; // 0x9f50
        while (v96 < v85) {
            // 0x9e98
            v84 = v96;
            v85 = (int64_t)g85;
            if (result2 != 0) {
                // 0x9ebb
                v88 = (int64_t)g33;
                v86 = 0;
                v94 = v86 + 1;
                v95 = (char *)v88;
                if (*v95 != 0) {
                    if ((char)v63 != 0) {
                        // 0x9ed8
                        v89 = v84 / ((v86 + v85) / v94);
                    } else {
                        // 0x9f3f
                        v89 = v84 % v94;
                    }
                    // 0x9ef0
                    v90 = v89 != v86 ? g82 + 2 : g82;
                    v91 = (int64_t *)(*(int64_t *)(v88 + 16) + 8 * v89);
                    v92 = *v91;
                    if (v90 > v92) {
                        // 0x9f0a
                        v93 = (int64_t *)(v88 + 8);
                        *v93 = v90 - v92 + *v93;
                        *v91 = v90;
                        *v95 = (char)(*v93 < (int64_t)g38);
                    }
                }
                // 0x9f25
                v87 = v88 + 24;
                while (result2 != v94) {
                    // 0x9f2e
                    v88 = v87;
                    v86 = v94;
                    v94 = v86 + 1;
                    v95 = (char *)v88;
                    if (*v95 != 0) {
                        if ((char)v63 != 0) {
                            // 0x9ed8
                            v89 = v84 / ((v86 + v85) / v94);
                        } else {
                            // 0x9f3f
                            v89 = v84 % v94;
                        }
                        // 0x9ef0
                        v90 = v89 != v86 ? g82 + 2 : g82;
                        v91 = (int64_t *)(*(int64_t *)(v88 + 16) + 8 * v89);
                        v92 = *v91;
                        if (v90 > v92) {
                            // 0x9f0a
                            v93 = (int64_t *)(v88 + 8);
                            *v93 = v90 - v92 + *v93;
                            *v91 = v90;
                            *v95 = (char)(*v93 < (int64_t)g38);
                        }
                    }
                    // 0x9f25
                    v87 = v88 + 24;
                }
            }
            // 0x9f50
            v96 = v84 + 1;
        }
    }
    // 0x9f5d
    if (result2 < 2) {
        // 0x9c17
        return result2;
    }
    int64_t v97 = 24 * result2 - 24 + (int64_t)g33; // 0x9f73
    int64_t v98 = result2;
    result = v98;
    while (*(char *)v97 == 0) {
        // 0x9f78
        result = 1;
        v97 -= 24;
        if (v98 == 2) {
            // break -> 0x9c17
            break;
        }
        v98--;
        result = v98;
    }
    // 0x9c17
    return result;
  lab_0x9fd1:
    // 0x9fd1
    function_15b30();
    v28 = v70;
    if ((int64_t)g85 != 0) {
        int64_t v99 = 0x100000000000000 * v68 / 0x100000000000000; // 0x9ffc
        v45 = v99;
        v46 = v99 & 0xffffffff;
        v24 = v70;
        v25 = 0;
        v27 = 0;
        while (true) {
          lab_0xa038:;
            int64_t v29 = v27;
            v19 = v25;
            int64_t v30 = v24;
            uint64_t v31 = (int64_t)g38; // 0xa03f
            v23 = *(int64_t *)(g82 + 8 * v19);
            if (v31 == 0) {
                // 0xa010
                v22 = v30;
                v21 = v29;
                v26 = v29;
                if (v19 != 0) {
                    int64_t v32 = v29 + 2; // 0xa0e0
                    v33 = 32;
                    v34 = v32;
                    v35 = v32;
                    goto lab_0xa09b;
                } else {
                    goto lab_0xa01c;
                }
            } else {
                if (v19 == 0) {
                    // 0xa138
                    v22 = v30;
                    v21 = v29;
                    v26 = g82 + v29;
                    goto lab_0xa01c;
                } else {
                    int64_t v36 = v29 + 2; // 0xa065
                    uint64_t v37 = g82 + v36; // 0xa069
                    bool v38 = -3 - g82 < v29 | v37 >= v31;
                    v33 = v38 ? 10 : 32;
                    v34 = v38 ? 0 : v36;
                    v35 = v38 ? g82 : v37;
                    goto lab_0xa09b;
                }
            }
        }
    }
  lab_0xa108:;
    int64_t v100 = g19; // 0xa108
    int64_t * v101 = (int64_t *)(v100 + 40); // 0xa10f
    uint64_t result3 = *v101; // 0xa10f
    if (result3 >= *(int64_t *)(v100 + 48)) {
        // 0xa180
        return function_4950(v100, 10, v28);
    }
    // 0xa119
    *v101 = result3 + 1;
    *(char *)result3 = 10;
    return result3;
  lab_0x9d85:;
    int64_t v102 = v67;
    g33 = (char *)v71;
    int64_t v103 = g20; // 0x9d85
    int64_t v104 = v102 - v103; // 0x9d91
    uint64_t v105 = v103 + 1; // 0x9d94
    uint64_t v106 = v105 + v102; // 0x9d98
    v70 = v69;
    v68 = v104;
    if (v106 < v105) {
        goto lab_0x9fd1;
    } else {
        uint64_t v107 = v106 * v104; // 0x9da1
        int64_t v108 = v107 % v104;
        v70 = v108;
        v68 = v104;
        if (v106 != v107 / v104) {
            goto lab_0x9fd1;
        } else {
            int64_t v109 = 8 * v107 / 2; // 0x9dce
            v70 = v108;
            v68 = v109;
            if (v109 < 0) {
                goto lab_0x9fd1;
            } else {
                // 0x9dd8
                v70 = v108;
                v68 = v109;
                if (v107 >= 0x4000000000000000) {
                    goto lab_0x9fd1;
                } else {
                    int64_t v110 = function_158c0(v109, v107 / 0x4000000000000000, (int128_t)v108, v106); // 0x9de1
                    uint64_t v111 = (int64_t)g20; // 0x9de9
                    if (v102 > v111) {
                        int64_t v112 = 8 * v111; // 0x9e0c
                        int64_t v113 = v110; // 0x9e0c
                        v112 += 8;
                        *(int64_t *)((int64_t)g33 - 8 + 3 * v112) = v113;
                        v113 += v112;
                        while (v112 != 8 * v102) {
                            // 0x9e10
                            v112 += 8;
                            *(int64_t *)((int64_t)g33 - 8 + 3 * v112) = v113;
                            v113 += v112;
                        }
                    }
                    // 0x9e25
                    g20 = v102;
                    v66 = g85;
                    goto lab_0x9e33;
                }
            }
        }
    }
}

