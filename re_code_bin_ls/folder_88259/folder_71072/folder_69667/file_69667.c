// Address range: 0x11023 - 0x113fc
int64_t function_11023(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, uint64_t a6) {
    int64_t v1 = 0x100000000 * a5 / 0x100000000; // 0x1103b
    int64_t v2 = function_48c0(a1); // 0x1104a
    int64_t v3 = v2; // 0x11056
    int64_t v4 = v2; // 0x11056
    int64_t v5 = a1; // 0x11056
    int64_t v6 = 0; // 0x11056
    int64_t v7 = 0; // 0x11056
    int64_t result; // 0x11023
    int64_t v8; // 0x11023
    int64_t v9; // 0x11023
    int64_t v10; // 0x11023
    int64_t v11; // 0x11023
    int64_t v12; // 0x11023
    int32_t * v13; // 0x11023
    int64_t v14; // 0x11219
    if ((a6 & 2) == 0) {
        // 0x111a8
        v3 = v2;
        v4 = v2;
        v5 = a1;
        v6 = 0;
        v7 = 0;
        if (function_48b0() < 2) {
            goto lab_0x11065;
        } else {
            int64_t v15 = function_4810(0, a1, 0); // 0x111cb
            if (v15 != -1) {
                int64_t v16 = v15 + 1; // 0x11200
                v14 = function_46e0(4 * v16);
                if (v14 == 0) {
                    // 0x11393
                    v3 = v2;
                    v4 = v2;
                    v5 = a1;
                    v6 = 0;
                    v7 = 0;
                    result = -1;
                    v10 = 0;
                    v11 = 0;
                    if (a6 % 2 == 0) {
                        goto lab_0x1114e;
                    } else {
                        goto lab_0x11065;
                    }
                } else {
                    int64_t v17 = function_4810((int32_t)v14, a1, (int32_t)v16); // 0x1123d
                    v3 = v2;
                    v4 = v2;
                    v5 = a1;
                    v6 = 0;
                    v7 = v14;
                    if (v17 == 0) {
                        goto lab_0x11065;
                    } else {
                        // 0x11250
                        *(int32_t *)(0x400000000 * v16 / 0x100000000 - 4 + v14) = 0;
                        v13 = (int32_t *)v14;
                        int32_t v18 = *v13; // 0x1125e
                        if (v18 == 0) {
                            // 0x113a8
                            v9 = 0x100000000 * function_47f0(v14, v16, v16) / 0x100000000;
                            goto lab_0x113c0;
                        } else {
                            char v19 = 0; // 0x11293
                            if ((int32_t)function_4d50(v18) == 0) {
                                // 0x11295
                                *(int32_t *)v14 = 0xfffd;
                                v19 = 1;
                            }
                            char v20 = v19;
                            int64_t v21 = v14 + 4; // 0x112a0
                            int32_t v22 = *(int32_t *)v21; // 0x112a0
                            int32_t v23 = v22; // 0x112a9
                            while (v22 != 0) {
                                int64_t v24 = v21;
                                v19 = v20;
                                if ((int32_t)function_4d50(v23) == 0) {
                                    // 0x11295
                                    *(int32_t *)v24 = 0xfffd;
                                    v19 = 1;
                                }
                                // 0x112a0
                                v20 = v19;
                                v21 = v24 + 4;
                                v22 = *(int32_t *)v21;
                                v23 = v22;
                            }
                            int64_t v25 = 0x100000000 * function_47f0(v14, v16, v21) / 0x100000000; // 0x112c5
                            v9 = v25;
                            if (v20 == 0) {
                                goto lab_0x113c0;
                            } else {
                                // 0x112ce
                                v8 = v25;
                                v12 = function_4cb0(0, v14, 0);
                                goto lab_0x112ed;
                            }
                        }
                    }
                }
            } else {
                // 0x111db
                v3 = v2;
                v4 = v2;
                v5 = a1;
                v6 = 0;
                v7 = 0;
                result = -1;
                v10 = 0;
                v11 = 0;
                if (a6 % 2 != 0) {
                    goto lab_0x11065;
                } else {
                    goto lab_0x1114e;
                }
            }
        }
    } else {
        goto lab_0x11065;
    }
  lab_0x11065:;
    int64_t v26 = a4; // 0x11070
    int64_t v27 = a4; // 0x11070
    int64_t v28 = v5; // 0x11070
    int64_t v29 = v6; // 0x11070
    int64_t v30 = v7; // 0x11070
    int64_t v31 = v3; // 0x11070
    int64_t v32 = v4; // 0x11070
    int64_t v33 = v5; // 0x11070
    int64_t v34 = v6; // 0x11070
    int64_t v35 = v7; // 0x11070
    if (v4 <= a4) {
        goto lab_0x11173;
    } else {
        goto lab_0x1107b;
    }
  lab_0x11173:
    // 0x11173
    v26 = v32;
    v27 = v31;
    v28 = v33;
    v29 = v34;
    v30 = v35;
    int32_t v36; // 0x11023
    int64_t v37; // 0x11023
    int64_t v38; // 0x11023
    int64_t v39; // 0x11023
    int64_t v40; // 0x11023
    int64_t v41; // 0x11023
    int64_t v42; // 0x11023
    int64_t v43; // 0x11023
    int64_t v44; // 0x11023
    int64_t v45; // 0x11023
    int64_t v46; // 0x11023
    int64_t v47; // 0x11023
    if (v32 >= a4) {
        goto lab_0x1107b;
    } else {
        int64_t v48 = a4 - v32; // 0x11187
        *(int64_t *)a4 = v32;
        int32_t v49 = v1;
        v36 = v49;
        v46 = v48;
        v44 = v31;
        v38 = v33;
        v40 = v34;
        v42 = v35;
        v47 = 0;
        v45 = v31;
        v37 = v48;
        v39 = v33;
        v41 = v34;
        v43 = v35;
        if (v49 != 0) {
            goto lab_0x1108f;
        } else {
            goto lab_0x110a3;
        }
    }
  lab_0x1107b:
    // 0x1107b
    *(int64_t *)a4 = v26;
    int32_t v50 = v1;
    v36 = v50;
    v46 = 0;
    v44 = v27;
    v38 = v28;
    v40 = v29;
    v42 = v30;
    v47 = 0;
    v45 = v27;
    v37 = 0;
    v39 = v28;
    v41 = v29;
    v43 = v30;
    if (v50 == 0) {
        goto lab_0x110a3;
    } else {
        goto lab_0x1108f;
    }
  lab_0x110a3:;
    uint64_t v51 = v45;
    int64_t v52 = (a6 & 4) == 0 ? v47 : 0;
    int64_t v53 = v51 + v52;
    int64_t v54 = (a6 & 8) != 0 ? 0 : v37; // 0x110bf
    if (a3 != 0) {
        uint64_t v55 = a2 - 1 + a3; // 0x110cc
        if (v55 > a2 == (v52 != 0)) {
            int64_t v56 = -v52; // 0x110f3
            int64_t v57 = a2; // 0x11023
            int64_t v58 = v57;
            int64_t v59 = v58 + 1; // 0x110e5
            *(char *)v58 = 32;
            v57 = v59;
            while (v55 > v59 == (a2 - v59 != v56)) {
                // 0x110e5
                v58 = v57;
                v59 = v58 + 1;
                *(char *)v58 = 32;
                v57 = v59;
            }
        }
        // 0x110f8
        *(char *)a2 = 0;
        uint64_t v60 = v55 - a2; // 0x11101
        int64_t v61 = function_4c40(a2, v39, v60 > v51 ? v51 : v60, v53); // 0x11110
        int64_t v62 = v61; // 0x11120
        if (v54 != 0 == v55 > v61) {
            int64_t v63 = v61 + 1; // 0x11135
            *(char *)v61 = 32;
            v62 = v63;
            while (v55 > v63 == (v54 - v63 != -v61)) {
                int64_t v64 = v63;
                v63 = v64 + 1;
                *(char *)v64 = 32;
                v62 = v63;
            }
        }
        // 0x11148
        *(char *)v62 = 0;
    }
    // 0x1114b
    result = v54 + v53;
    v10 = v41;
    v11 = v43;
    goto lab_0x1114e;
  lab_0x1108f:
    // 0x1108f
    v47 = v46;
    v45 = v44;
    v37 = 0;
    v39 = v38;
    v41 = v40;
    v43 = v42;
    if (v36 != 1) {
        int64_t v83 = v46 / 2; // 0x1109d
        v47 = v46 % 2 + v83;
        v45 = v44;
        v37 = v83;
        v39 = v38;
        v41 = v40;
        v43 = v42;
    }
    goto lab_0x110a3;
  lab_0x1114e:
    // 0x1114e
    function_46d0(v11);
    function_46d0(v10);
    return result;
  lab_0x113c0:
    // 0x113c0
    v31 = v2;
    v32 = v9;
    v33 = a1;
    v34 = 0;
    v35 = v14;
    v8 = v9;
    v12 = v2;
    if (v9 <= a4) {
        goto lab_0x11173;
    } else {
        goto lab_0x112ed;
    }
  lab_0x112ed:;
    int32_t v65 = (int32_t)v12 + 1;
    int64_t v66 = function_46e0((int64_t)v65); // 0x112f7
    if (v66 == 0) {
        // 0x113e9
        v3 = v2;
        v4 = v8;
        v5 = a1;
        v6 = 0;
        v7 = v14;
        result = -1;
        v10 = 0;
        v11 = v14;
        if (a6 % 2 != 0) {
            goto lab_0x11065;
        } else {
            goto lab_0x1114e;
        }
    } else {
        int32_t v67 = *v13; // 0x11312
        int32_t v68 = v67; // 0x11325
        int64_t v69 = 0; // 0x11325
        int64_t v70 = v14; // 0x11325
        int32_t * v71 = v13; // 0x11325
        int64_t v72 = 0; // 0x11325
        if (v67 != 0) {
            int64_t v73; // 0x11023
            int64_t v74; // 0x11023
            while (true) {
                // 0x1134b
                v74 = v70;
                v73 = v69;
                int64_t v75 = function_4b60(v68); // 0x1134b
                int64_t v76; // 0x11023
                if ((int32_t)v75 != -1) {
                    int64_t v77 = 0x100000000 * v75 / 0x100000000 + v73; // 0x11332
                    v76 = v77;
                    if (v77 > a4) {
                        // break -> 0x11330
                        break;
                    }
                } else {
                    int32_t * v78 = (int32_t *)v74;
                    *v78 = 0xfffd;
                    int64_t v79 = v73 + 1; // 0x11362
                    v76 = v79;
                    v71 = v78;
                    v72 = v73;
                    if (v79 > a4) {
                        goto lab_0x11370_2;
                    }
                }
                int64_t v80 = v74 + 4; // 0x1133c
                int32_t * v81 = (int32_t *)v80;
                int32_t v82 = *v81; // 0x1133c
                v68 = v82;
                v69 = v76;
                v70 = v80;
                v71 = v81;
                v72 = v76;
                if (v82 == 0) {
                    goto lab_0x11370_2;
                }
            }
            // 0x11330
            v71 = (int32_t *)v74;
            v72 = v73;
        }
      lab_0x11370_2:
        // 0x11370
        *v71 = 0;
        v3 = function_4cb0((int32_t)v66, v14, v65);
        v4 = v72;
        v5 = v66;
        v6 = v66;
        v7 = v14;
        goto lab_0x11065;
    }
}

