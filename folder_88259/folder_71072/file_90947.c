// Address range: 0x16343 - 0x167f5
int64_t function_16343(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2 = __readfsqword(40); // 0x16352
    int64_t v3; // 0x16343
    int64_t v4; // 0x16343
    int64_t v5; // 0x16343
    char v6; // 0x16343
    int64_t v7; // 0x16343
    int64_t v8; // 0x16343
    int64_t v9; // 0x16343
    int64_t v10; // 0x16343
    int64_t v11; // 0x16343
    int64_t v12; // 0x16343
    int64_t v13; // 0x1637d
    int64_t v14; // 0x163d2
    int64_t v15; // 0x163d7
    if ((int32_t)a3 < 37) {
        int32_t * v16 = (int32_t *)function_4760(); // 0x1638c
        *v16 = 0;
        unsigned char v17 = *(char *)&v1; // 0x16395
        int64_t v18 = *(int64_t *)function_4d80(); // 0x163a3
        int64_t v19 = v18 + 1; // 0x163bd
        char v20 = v17; // 0x163c2
        if ((*(char *)(v19 + 2 * (int64_t)v17) & 32) != 0) {
            int64_t v21 = a1 + 1; // 0x163b0
            unsigned char v22 = *(char *)v21; // 0x163b0
            int64_t v23 = v21; // 0x163c2
            v20 = v22;
            while ((*(char *)(2 * (int64_t)v22 + v19) & 32) != 0) {
                // 0x163b0
                v21 = v23 + 1;
                v22 = *(char *)v21;
                v23 = v21;
                v20 = v22;
            }
        }
        // 0x163c4
        int64_t v24; // bp-72, 0x16343
        v13 = a2 == 0 ? (int64_t)&v24 : a2;
        v8 = 45;
        v11 = v18;
        v7 = 45;
        if (v20 == 45) {
            goto lab_0x1643b;
        } else {
            // 0x163ca
            v1 = a1;
            v14 = function_49c0(a1, v13);
            v15 = *(int64_t *)v13;
            if (v15 == a1) {
                char v25 = a1;
                v8 = 0;
                v11 = v13;
                v7 = a1;
                if (v25 == 0 || a5 == 0) {
                    goto lab_0x1643b;
                } else {
                    int64_t v26 = 0x100000000000000 * a1 / 0x100000000000000; // 0x16457
                    v1 = a5;
                    int64_t v27 = function_4910(a5, v26, v14); // 0x16461
                    v8 = 0;
                    v11 = v26;
                    v7 = a1;
                    v10 = 1;
                    v5 = 0;
                    v6 = v25;
                    if (v27 == 0) {
                        goto lab_0x1643b;
                    } else {
                        goto lab_0x16470;
                    }
                }
            } else {
                int32_t v28 = *v16; // 0x163e3
                v4 = 0;
                if (v28 != 0) {
                    // 0x16430
                    v4 = 1;
                    v8 = 0;
                    v11 = v13;
                    v7 = v15;
                    if (v28 == 34) {
                        goto lab_0x163ee;
                    } else {
                        goto lab_0x1643b;
                    }
                } else {
                    goto lab_0x163ee;
                }
            }
        }
    } else {
        // 0x16778
        v1 = (int64_t)"0 <= strtol_base && strtol_base <= 36";
        function_49b0("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        v3 = (int64_t)"0 <= strtol_base && strtol_base <= 36";
        v9 = (int64_t)"xstrtoumax";
        v12 = (int64_t)"lib/xstrtol.c";
        goto lab_0x16797;
    }
  lab_0x1643b:;
    int64_t v29 = v8; // 0x16441
    int64_t v30 = a4; // 0x16441
    int64_t v31 = v13; // 0x16441
    int64_t v32 = v11; // 0x16441
    int64_t v33 = 4; // 0x16441
    int64_t v34 = v7; // 0x16441
    goto lab_0x16403;
  lab_0x16797:;
    // 0x16797
    int64_t v39; // 0x16343
    int64_t v40 = v39;
    int64_t v38; // 0x16343
    int64_t v41 = v38;
    int64_t v42 = v12;
    int64_t v37; // 0x16343
    int64_t v43 = v37;
    int64_t v36; // 0x16343
    int64_t v44 = v36;
    int64_t v45 = v9;
    function_48e0();
    int32_t v46 = (int32_t)v3 - 1; // 0x1657f
    v1 = v46;
    int64_t v47 = -1; // 0x16582
    if (v46 != 0) {
        int32_t v48 = v46; // 0x16343
        int32_t v49; // 0x16343
        int64_t v50; // 0x16343
        while (true) {
            uint128_t v51 = (int128_t)-1 * (int128_t)v42; // 0x16573
            v49 = v48 - 1;
            while (v51 < 0x10000000000000000) {
                // 0x1657f
                v50 = v51;
                int32_t v52 = v49; // 0x16582
                int64_t v53 = v50; // 0x16582
                if (v49 == 0) {
                    // break (via goto) -> 0x1657f
                    goto lab_0x1657f;
                }
                v51 = (int128_t)v53 * (int128_t)v42;
                v49 = v52 - 1;
            }
            // 0x1679c
            v48 = v49;
            if (v49 == 0) {
                // 0x1679c
                v1 = v49;
                v47 = -1;
                goto lab_0x16584;
            }
        }
      lab_0x1657f:
        // 0x1657f
        v1 = v49;
        v47 = v50;
    }
    goto lab_0x16584;
  lab_0x16403:
    // 0x16403
    if (v2 == __readfsqword(40)) {
        // 0x16417
        int64_t v35; // 0x16343
        return v35 & 0xffffffff;
    }
    // 0x16403
    v3 = v1;
    v9 = v29;
    v36 = v30;
    v37 = v31;
    v12 = v32;
    v38 = v33;
    v39 = v34;
    goto lab_0x16797;
  lab_0x16584:;
    int64_t v54 = v40 + v45; // 0x16640
    *(int64_t *)v43 = v54;
    int64_t v55 = v54; // 0x16654
    int64_t v56 = v47; // 0x16654
    int64_t v57 = v44; // 0x16654
    int64_t v58 = v43; // 0x16654
    int64_t v59 = v42; // 0x16654
    int64_t v60 = (*(char *)v54 != 0 ? 3 : 1) | v41 & 0xfffffffe; // 0x16654
    int64_t v61 = v40; // 0x16654
    goto lab_0x16400;
  lab_0x163ee:
    // 0x163ee
    v55 = 0;
    v56 = v14;
    v57 = a4;
    v58 = v13;
    v59 = v13;
    v60 = v4;
    v61 = v15;
    int64_t v69; // 0x16343
    int64_t v66; // 0x16343
    int64_t v67; // 0x16343
    int64_t v68; // 0x16343
    if (a5 == 0) {
        goto lab_0x16400;
    } else {
        char v71 = *(char *)v15; // 0x163f3
        v55 = 0;
        v56 = v14;
        v57 = a4;
        v58 = v13;
        v59 = v13;
        v60 = v4;
        v61 = v15;
        if (v71 != 0) {
            int64_t v72 = v71; // 0x16510
            v1 = a5;
            int64_t v73 = function_4910(a5, v72, v14); // 0x1651c
            int64_t v74 = 0x100000000 * v14 / 0x100000000; // 0x16521
            v10 = v74;
            v5 = v4;
            v6 = v71;
            v66 = 0;
            v67 = v74;
            v68 = v72;
            v69 = v4;
            if (v73 != 0) {
                goto lab_0x16470;
            } else {
                goto lab_0x1652f;
            }
        } else {
            goto lab_0x16400;
        }
    }
  lab_0x16400:
    // 0x16400
    *(int64_t *)v57 = v56;
    v29 = v55;
    v30 = v57;
    v31 = v58;
    v32 = v59;
    v33 = v60;
    v34 = v61;
    goto lab_0x16403;
  lab_0x16470:;
    int64_t v62 = v6;
    int64_t v63 = v62 + 0xffffffbb; // 0x16470
    if ((char)v63 < 48) {
        int32_t v64 = *(int32_t *)((4 * v63 & 1020) + (int64_t)&g4); // 0x16482
        return (int64_t)v64 + (int64_t)&g4;
    }
    int64_t v65 = v62 + 0xffffffbe; // 0x16496
    v66 = 1;
    v67 = v10;
    v68 = &g12;
    v69 = v5;
    if ((char)v65 < 54) {
        int32_t v70 = *(int32_t *)((4 * v65 & 1020) + (int64_t)&g5); // 0x164ac
        return (int64_t)v70 + (int64_t)&g5;
    }
    goto lab_0x1652f;
  lab_0x1652f:
    // 0x1652f
    *(int64_t *)a4 = v67;
    v29 = v66;
    v30 = a4;
    v31 = v13;
    v32 = v68;
    v33 = v69 & 0xfffffffd | 2;
    v34 = v15;
    goto lab_0x16403;
}

