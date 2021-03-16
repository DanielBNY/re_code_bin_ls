// Address range: 0x15db3 - 0x16265
int64_t function_15db3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2 = __readfsqword(40); // 0x15dc2
    int64_t v3; // 0x15db3
    int64_t v4; // 0x15db3
    int64_t v5; // 0x15db3
    char v6; // 0x15db3
    int64_t v7; // 0x15db3
    int64_t v8; // 0x15db3
    int64_t v9; // 0x15db3
    int64_t v10; // 0x15db3
    int64_t v11; // 0x15db3
    int64_t v12; // 0x15db3
    int64_t v13; // 0x15ded
    int64_t v14; // 0x15e40
    int64_t v15; // 0x15e45
    if ((int32_t)a3 < 37) {
        int32_t * v16 = (int32_t *)function_4760(); // 0x15dfc
        *v16 = 0;
        unsigned char v17 = *(char *)&v1; // 0x15e05
        int64_t v18 = *(int64_t *)function_4d80(); // 0x15e13
        int64_t v19 = v17;
        int64_t v20 = v18 + 1; // 0x15e2d
        char v21 = v17; // 0x15e32
        v7 = v19;
        if ((*(char *)(v20 + 2 * v19) & 32) != 0) {
            int64_t v22 = a1 + 1; // 0x15e20
            unsigned char v23 = *(char *)v22; // 0x15e20
            int64_t v24 = v23;
            int64_t v25 = v22; // 0x15e32
            v21 = v23;
            v7 = v24;
            while ((*(char *)(2 * v24 + v20) & 32) != 0) {
                // 0x15e20
                v22 = v25 + 1;
                v23 = *(char *)v22;
                v24 = v23;
                v25 = v22;
                v21 = v23;
                v7 = v24;
            }
        }
        // 0x15e34
        int64_t v26; // bp-72, 0x15db3
        v13 = a2 == 0 ? (int64_t)&v26 : a2;
        v11 = v18;
        v8 = 45;
        if (v21 == 45) {
            goto lab_0x15eab;
        } else {
            // 0x15e3a
            v1 = a1;
            v14 = function_4c90(a1, v13);
            v15 = *(int64_t *)v13;
            if (v15 == a1) {
                char v27 = a1;
                v11 = v13;
                v8 = a1;
                if (v27 == 0 || a5 == 0) {
                    goto lab_0x15eab;
                } else {
                    int64_t v28 = 0x100000000000000 * a1 / 0x100000000000000; // 0x15ec7
                    v1 = a5;
                    int64_t v29 = function_4910(a5, v28, v14); // 0x15ed1
                    v11 = v28;
                    v8 = a1;
                    v10 = 1;
                    v5 = 0;
                    v6 = v27;
                    if (v29 == 0) {
                        goto lab_0x15eab;
                    } else {
                        goto lab_0x15ee0;
                    }
                }
            } else {
                int32_t v30 = *v16; // 0x15e51
                v4 = 0;
                if (v30 != 0) {
                    // 0x15ea0
                    v4 = 1;
                    v11 = v13;
                    v8 = v15;
                    if (v30 == 34) {
                        goto lab_0x15e5c;
                    } else {
                        goto lab_0x15eab;
                    }
                } else {
                    goto lab_0x15e5c;
                }
            }
        }
    } else {
        // 0x161e8
        v1 = (int64_t)"0 <= strtol_base && strtol_base <= 36";
        function_49b0("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoul");
        v3 = (int64_t)"0 <= strtol_base && strtol_base <= 36";
        v9 = (int64_t)"xstrtoul";
        v12 = (int64_t)"lib/xstrtol.c";
        goto lab_0x16207;
    }
  lab_0x15eab:;
    int64_t v31 = v7; // 0x15eb1
    int64_t v32 = a4; // 0x15eb1
    int64_t v33 = v13; // 0x15eb1
    int64_t v34 = v11; // 0x15eb1
    int64_t v35 = 4; // 0x15eb1
    int64_t v36 = v8; // 0x15eb1
    goto lab_0x15e71;
  lab_0x16207:;
    // 0x16207
    int64_t v41; // 0x15db3
    int64_t v42 = v41;
    int64_t v40; // 0x15db3
    int64_t v43 = v40;
    int64_t v44 = v12;
    int64_t v39; // 0x15db3
    int64_t v45 = v39;
    int64_t v38; // 0x15db3
    int64_t v46 = v38;
    int64_t v47 = v9;
    function_48e0();
    int32_t v48 = (int32_t)v3 - 1; // 0x15fef
    v1 = v48;
    int64_t v49 = -1; // 0x15ff2
    if (v48 != 0) {
        int32_t v50 = v48; // 0x15db3
        int32_t v51; // 0x15db3
        int64_t v52; // 0x15db3
        while (true) {
            uint128_t v53 = (int128_t)-1 * (int128_t)v44; // 0x15fe3
            v51 = v50 - 1;
            while (v53 < 0x10000000000000000) {
                // 0x15fef
                v52 = v53;
                int32_t v54 = v51; // 0x15ff2
                int64_t v55 = v52; // 0x15ff2
                if (v51 == 0) {
                    // break (via goto) -> 0x15fef
                    goto lab_0x15fef;
                }
                v53 = (int128_t)v55 * (int128_t)v44;
                v51 = v54 - 1;
            }
            // 0x1620c
            v50 = v51;
            if (v51 == 0) {
                // 0x1620c
                v1 = v51;
                v49 = -1;
                goto lab_0x15ff4;
            }
        }
      lab_0x15fef:
        // 0x15fef
        v1 = v51;
        v49 = v52;
    }
    goto lab_0x15ff4;
  lab_0x15e71:
    // 0x15e71
    if (v2 == __readfsqword(40)) {
        // 0x15e85
        int64_t v37; // 0x15db3
        return v37 & 0xffffffff;
    }
    // 0x15e71
    v3 = v1;
    v9 = v31;
    v38 = v32;
    v39 = v33;
    v12 = v34;
    v40 = v35;
    v41 = v36;
    goto lab_0x16207;
  lab_0x15ff4:;
    int64_t v56 = v42 + v47; // 0x160b0
    *(int64_t *)v45 = v56;
    int64_t v57 = v56; // 0x160c4
    int64_t v58 = v49; // 0x160c4
    int64_t v59 = v46; // 0x160c4
    int64_t v60 = v45; // 0x160c4
    int64_t v61 = v44; // 0x160c4
    int64_t v62 = (*(char *)v56 != 0 ? 3 : 1) | v43 & 0xfffffffe; // 0x160c4
    int64_t v63 = v42; // 0x160c4
    goto lab_0x15e6e;
  lab_0x15e5c:
    // 0x15e5c
    v57 = v7;
    v58 = v14;
    v59 = a4;
    v60 = v13;
    v61 = v13;
    v62 = v4;
    v63 = v15;
    int64_t v71; // 0x15db3
    int64_t v68; // 0x15db3
    int64_t v69; // 0x15db3
    int64_t v70; // 0x15db3
    if (a5 == 0) {
        goto lab_0x15e6e;
    } else {
        char v73 = *(char *)v15; // 0x15e61
        v57 = v7;
        v58 = v14;
        v59 = a4;
        v60 = v13;
        v61 = v13;
        v62 = v4;
        v63 = v15;
        if (v73 != 0) {
            int64_t v74 = v73; // 0x15f80
            v1 = a5;
            int64_t v75 = function_4910(a5, v74, v14); // 0x15f8c
            int64_t v76 = 0x100000000 * v14 / 0x100000000; // 0x15f91
            v10 = v76;
            v5 = v4;
            v6 = v73;
            v68 = v7;
            v69 = v76;
            v70 = v74;
            v71 = v4;
            if (v75 != 0) {
                goto lab_0x15ee0;
            } else {
                goto lab_0x15f9f;
            }
        } else {
            goto lab_0x15e6e;
        }
    }
  lab_0x15e6e:
    // 0x15e6e
    *(int64_t *)v59 = v58;
    v31 = v57;
    v32 = v59;
    v33 = v60;
    v34 = v61;
    v35 = v62;
    v36 = v63;
    goto lab_0x15e71;
  lab_0x15ee0:;
    int64_t v64 = v6;
    int64_t v65 = v64 + 0xffffffbb; // 0x15ee0
    if ((char)v65 < 48) {
        int32_t v66 = *(int32_t *)((4 * v65 & 1020) + (int64_t)&g2); // 0x15ef2
        return (int64_t)v66 + (int64_t)&g2;
    }
    int64_t v67 = v64 + 0xffffffbe; // 0x15f06
    v68 = 1;
    v69 = v10;
    v70 = &g12;
    v71 = v5;
    if ((char)v67 < 54) {
        int32_t v72 = *(int32_t *)((4 * v67 & 1020) + (int64_t)&g3); // 0x15f1c
        return (int64_t)v72 + (int64_t)&g3;
    }
    goto lab_0x15f9f;
  lab_0x15f9f:
    // 0x15f9f
    *(int64_t *)a4 = v69;
    v31 = v68;
    v32 = a4;
    v33 = v13;
    v34 = v70;
    v35 = v71 & 0xfffffffd | 2;
    v36 = v15;
    goto lab_0x15e71;
}

