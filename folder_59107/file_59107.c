// Address range: 0xe6e3 - 0xead8
int64_t function_e6e3(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0xe6f6
    int64_t v2; // 0xe6e3
    int64_t v3; // 0xe6e3
    int64_t v4 = strcmp(a1, a2, v2, v3); // 0xe706
    int64_t v5 = v4 & 0xffffffff; // 0xe70b
    int64_t result = v5; // 0xe710
    char v6; // 0xe6e3
    char v7; // 0xe6e3
    if ((int32_t)v4 == 0) {
        goto lab_0xe746_2;
    } else {
        // 0xe712
        int64_t v8; // 0xe6e3
        v7 = v8;
        if (v7 == 0) {
            goto lab_0xe94c_2;
        } else {
            // 0xe71d
            v6 = a2;
            if (v6 == 0) {
                goto lab_0xe740;
            } else {
                if (v7 != 46) {
                    goto lab_0xe734;
                } else {
                    // 0xe72a
                    if (*(char *)(a1 + 1) == 0) {
                        goto lab_0xe94c_2;
                    } else {
                        goto lab_0xe734;
                    }
                }
            }
        }
    }
  lab_0xe94c_2:;
    // 0xe94c
    int64_t v9; // 0xe6e3
    int64_t v10 = v9; // 0xe952
    result = 0xffffffff;
    goto lab_0xe746_2;
  lab_0xe740:;
    // 0xe740
    int64_t v44; // 0xe6e3
    v10 = v44;
    result = 1;
    goto lab_0xe746_2;
  lab_0xe746:;
    // 0xe746
    int64_t v45; // 0xe6e3
    v10 = v45;
    result = v5;
    goto lab_0xe746_2;
  lab_0xe81c:;
    // 0xe81c
    int64_t v39; // 0xe6e3
    int64_t v46 = v39;
    int64_t v38; // 0xe6e3
    int64_t v47 = v38;
    int64_t v19; // 0xe6e3
    char v48 = *(char *)(v46 + v19); // 0xe81c
    int64_t v40 = v47; // 0xe82a
    int64_t v41 = v46; // 0xe82a
    char v49; // 0xe6e3
    char v50; // 0xe6e3
    int64_t v51; // 0xe6e3
    int64_t v31; // 0xe6e3
    int64_t v20; // 0xe6e3
    int64_t v52; // 0xe6e3
    int64_t v53; // 0xe6e3
    int64_t v54; // 0xe6e3
    int64_t v55; // 0xe6e3
    int64_t v56; // 0xe6e3
    int64_t v57; // 0xe6e3
    if (v48 == 57 || (int32_t)v48 < 57) {
        goto lab_0xe88f;
    } else {
        // 0xe82c
        v49 = v48;
        v52 = v47;
        v57 = v46;
        if ((int32_t)v48 < 58) {
            // 0xe83c
            v54 = v31;
            v56 = v46;
            if (v31 == v47) {
                goto lab_0xe882;
            } else {
                unsigned char v58 = *(char *)(v47 + v20); // 0xe841
                v50 = v58;
                v51 = v58;
                v53 = v47;
                v55 = v46;
                goto lab_0xe848;
            }
        } else {
            goto lab_0xe8c6;
        }
    }
  lab_0xe88f:;
    int64_t v59 = v41;
    int64_t v60 = v40;
    char v61 = *(char *)(v60 + v20); // 0xe88f
    int64_t v32; // 0xe6e3
    if (v31 > v60) {
        if (v61 == 57 || (int32_t)v61 < 57) {
            goto lab_0xe964;
        } else {
            int64_t v62 = v61; // 0xe88f
            v50 = v61;
            v51 = v62;
            v53 = v60;
            v55 = v32;
            if (v32 == v59) {
                goto lab_0xe848;
            } else {
                unsigned char v63 = *(char *)(v59 + v19); // 0xe8b6
                v50 = v61;
                v51 = v62;
                v53 = v60;
                v55 = v59;
                v49 = v63;
                v52 = v60;
                v57 = v59;
                if ((int32_t)v63 < 58) {
                    goto lab_0xe848;
                } else {
                    goto lab_0xe8c6;
                }
            }
        }
    } else {
        goto lab_0xe964;
    }
  lab_0xe964:;
    int64_t v64 = v59;
    char v65 = *(char *)(v64 + v19); // 0xe964
    int64_t v66 = v64 + 1; // 0xe96a
    while (v65 == 48) {
        // 0xe964
        v64 = v66;
        v65 = *(char *)(v64 + v19);
        v66 = v64 + 1;
    }
    int64_t v67 = v60; // 0xe970
    char v68 = v61; // 0xe970
    int64_t v69 = v60; // 0xe970
    if (v61 == 48) {
        int64_t v70 = v67 + 1; // 0xe978
        char v71 = *(char *)(v70 + v20); // 0xe97c
        v67 = v70;
        v68 = v71;
        v69 = v70;
        while (v71 == 48) {
            // 0xe978
            v70 = v67 + 1;
            v71 = *(char *)(v70 + v20);
            v67 = v70;
            v68 = v71;
            v69 = v70;
        }
    }
    int64_t v72 = v69;
    char v73 = v68;
    int64_t v74; // 0xe6e3
    int64_t v11; // 0xe6e3
    int64_t v75; // 0xe6e3
    int64_t v76; // 0xe6e3
    int64_t v37; // 0xe814
    if ((int32_t)v65 < 58) {
        int64_t v77 = 0;
        v44 = v77;
        if ((int32_t)v73 >= 58) {
            goto lab_0xe740;
        }
        int64_t v78 = v77 == 0 ? (int64_t)v65 - (int64_t)v73 : v77; // 0xe9b3
        int64_t v79 = v78 & 0xffffffff; // 0xe9b3
        int64_t v80 = v64 + 1; // 0xe9b7
        char v81 = *(char *)(v80 + v19); // 0xe9bb
        char v82 = *(char *)(v20 - v64 + v72 + v80); // 0xe9c2
        int64_t v83 = v80; // 0xe9d5
        char v84 = v82; // 0xe9d5
        while (v81 == 57 || (int32_t)v81 < 57) {
            // 0xe9a0
            v77 = v79;
            v44 = v77;
            if ((int32_t)v84 >= 58) {
                goto lab_0xe740;
            }
            // 0xe9ae
            v78 = v77 == 0 ? (int64_t)v81 - (int64_t)v84 : v77;
            v79 = v78 & 0xffffffff;
            v80 = v83 + 1;
            v81 = *(char *)(v80 + v19);
            v82 = *(char *)(v20 - v64 + v72 + v80);
            v83 = v80;
            v84 = v82;
        }
        // 0xe9d7
        v9 = v79;
        if (v82 == 57 || (int32_t)v82 < 57) {
            goto lab_0xe94c_2;
        }
        // 0xe9e7
        v75 = v72 - v64 + v80;
        v76 = v80;
        v74 = v79;
        v11 = v79;
        if ((int32_t)v78 != 0) {
            goto lab_0xeac6;
        }
    } else {
        // 0xe940
        v9 = v37;
        v75 = v72;
        v76 = v64;
        v74 = v37;
        if ((int32_t)v73 < 58) {
            goto lab_0xe94c_2;
        }
    }
    // 0xe803
    v45 = v74;
    bool v34 = v32 > v76; // 0xe806
    int64_t v35 = v76; // 0xe806
    int64_t v36 = v75; // 0xe806
    if (v31 <= v75 && v32 <= v76) {
        goto lab_0xe746;
    }
    goto lab_0xe811;
  lab_0xe8c6:;
    int64_t v85 = v57;
    int64_t v86 = v52;
    char v87 = v49;
    int64_t v88 = v87; // 0xe8dd
    if (v87 > 90) {
        if (v87 < 123) {
            goto lab_0xea0d;
        } else {
            goto lab_0xe8dd;
        }
    } else {
        if (v87 > 64) {
            goto lab_0xea0d;
        } else {
            goto lab_0xe8dd;
        }
    }
  lab_0xe882:;
    int64_t v89 = v56 + 1; // 0xe882
    int64_t v90 = v54 + 1; // 0xe886
    v38 = v90;
    v39 = v89;
    v40 = v90;
    v41 = v89;
    if (v32 > v89) {
        goto lab_0xe81c;
    } else {
        goto lab_0xe88f;
    }
  lab_0xe848:;
    char v91 = v50; // 0xe855
    int64_t v92 = v51; // 0xe855
    int64_t v93 = v53; // 0xe855
    int64_t v94 = v55; // 0xe855
    int64_t v95 = 0; // 0xe855
    v54 = v53;
    v56 = v55;
    if ((int32_t)v51 < 58) {
        goto lab_0xe882;
    } else {
        goto lab_0xe857;
    }
  lab_0xea0d:;
    int64_t v96 = 0; // 0xea16
    int64_t v97 = v86; // 0xea16
    int64_t v98 = v85; // 0xea16
    int64_t v99 = v88; // 0xea16
    int64_t v100 = v88; // 0xea16
    if (v31 != v85 + v37) {
        goto lab_0xe8fb;
    } else {
        goto lab_0xe879;
    }
  lab_0xe8dd:;
    int64_t v101 = v87 == 126 ? 0xffffffff : v88 | 256;
    v100 = v101;
    int64_t v43 = v101; // 0xe8f5
    if (v31 == v85 + v37) {
        // break -> 0xea60
        goto lab_0xea60_2;
    }
    goto lab_0xe8fb;
  lab_0xe857:;
    int64_t v108 = v95;
    int64_t v107 = v94;
    int64_t v106 = v93;
    int64_t v105 = v92; // 0xe873
    char v109 = v91; // 0xe869
    if (v109 > 90) {
        // 0xea28
        v96 = v105;
        v97 = v106;
        v98 = v107;
        v99 = v108;
        if (v109 < 123) {
            goto lab_0xe879;
        } else {
            // 0xe869
            v96 = 0xffffffff;
            v97 = v106;
            v98 = v107;
            v99 = v108;
            if (v109 == 126) {
                goto lab_0xe879;
            } else {
                goto lab_0xe873;
            }
        }
    } else {
        // 0xe863
        v96 = v105;
        v97 = v106;
        v98 = v107;
        v99 = v108;
        if (v109 > 64) {
            goto lab_0xe879;
        } else {
            goto lab_0xe873;
        }
    }
  lab_0xe8fb:;
    unsigned char v102 = *(char *)(v86 + v20); // 0xe8fb
    v91 = v102;
    v92 = v102;
    v93 = v86;
    v94 = v85;
    v95 = v100;
    v96 = 0;
    v97 = v86;
    v98 = v85;
    v99 = v100;
    if (v102 == 57 || (int32_t)v102 < 57) {
        goto lab_0xe879;
    } else {
        goto lab_0xe857;
    }
  lab_0xe879:;
    int64_t v103 = v99;
    int64_t v104 = v96;
    v54 = v97;
    v56 = v98;
    if ((int32_t)v104 != (int32_t)v103) {
        // 0xea5d
        v43 = v103 - v104 & 0xffffffff;
        goto lab_0xea60_2;
    }
    goto lab_0xe882;
  lab_0xe873:
    // 0xe873
    v96 = v105 | 256;
    v97 = v106;
    v98 = v107;
    v99 = v108;
    goto lab_0xe879;
  lab_0xe746_2:
    while (true) {
        // 0xe746
        if (v1 == __readfsqword(40)) {
            // 0xe75a
            return result;
        }
        // 0xeac1
        __stack_chk_fail();
        v11 = v10;
      lab_0xeac6:
        // 0xeac6
        v10 = v11;
        result = v11 & 0xffffffff;
    }
  lab_0xe734:
    if (v6 != 46) {
        goto lab_0xe770;
    } else {
        // 0xe73a
        if (*(char *)(a2 + 1) != 0) {
            goto lab_0xe770;
        } else {
            goto lab_0xe740;
        }
    }
  lab_0xe770:;
    int64_t v12; // 0xe6e3
    int64_t v13; // 0xe6e3
    if (v7 != 46) {
        if (v6 == 46) {
            goto lab_0xe920;
        } else {
            // 0xe7a8
            v12 = a2;
            v13 = v3 & -256;
            goto lab_0xe7b6;
        }
    } else {
        // 0xe775
        if (*(char *)(a1 + 1) != 46) {
            goto lab_0xe920;
        } else {
            // 0xe782
            if (*(char *)(a1 + 2) == 0) {
                goto lab_0xe94c_2;
            } else {
                goto lab_0xe920;
            }
        }
    }
  lab_0xe920:;
    int64_t v14 = a2 + 1; // 0xe920
    if (*(char *)v14 != 46) {
        goto lab_0xe796;
    } else {
        // 0xe931
        if (*(char *)(a2 + 2) == 0) {
            goto lab_0xe740;
        } else {
            goto lab_0xe796;
        }
    }
  lab_0xe796:;
    int64_t v15; // 0xe6e3
    int64_t v16; // 0xe6e3
    int64_t v17; // 0xe6e3
    if (v6 != 46 == v7 == 46) {
        goto lab_0xe94c_2;
    } else {
        // 0xe7a8
        v12 = 46;
        v13 = 0;
        if (v7 == 46) {
            int64_t v18 = v6 == 46;
            v15 = v18;
            v16 = 46;
            v17 = 1;
            v19 = v18 + a1;
            v20 = v6 != 46 ? a2 : v14;
            goto lab_0xe7ba;
        } else {
            goto lab_0xe7b6;
        }
    }
  lab_0xe7b6:
    if (v6 == 46) {
        goto lab_0xe740;
    } else {
        // 0xe7b6
        v15 = v6 == 46;
        v16 = v12;
        v17 = v13;
        v19 = a1;
        v20 = a2;
        goto lab_0xe7ba;
    }
  lab_0xe7ba:;
    int64_t v21 = v19; // bp-64, 0xe7bf
    int64_t v22 = v20; // bp-56, 0xe7c4
    int64_t v23; // 0xe6e3
    int64_t v24 = function_e630(&v21, v16, v15, v17, v23); // 0xe7c9
    int64_t v25 = function_e630(&v22, v16, v15, v17, v23); // 0xe7d6
    int64_t v26; // 0xe6e3
    int64_t v27; // 0xe6e3
    int64_t v28; // 0xe6e3
    if (v24 == 0) {
        int64_t v29 = v21 - v19; // 0xea75
        v26 = v25;
        v27 = v29;
        v28 = v29;
        if (v25 != 0) {
            goto lab_0xe7f3;
        } else {
            goto lab_0xea81;
        }
    } else {
        // 0xe7e7
        v26 = v25 == 0 ? v22 : v25;
        v27 = v24 - v19;
        goto lab_0xe7f3;
    }
  lab_0xe7f3:;
    int64_t v30 = v26 - v20; // 0xe7f3
    v31 = v30;
    v32 = v27;
    if (v27 == v30) {
        int64_t v33 = strncmp(v19, (char *)v20, v27); // 0xea99
        v31 = v27;
        v32 = v27;
        if ((int32_t)v33 != 0) {
            goto lab_0xe7ff;
        } else {
            // 0xeaa6
            v28 = v21 - v19;
            goto lab_0xea81;
        }
    } else {
        goto lab_0xe7ff;
    }
  lab_0xea81:
    // 0xea81
    v31 = v22 - v20;
    v32 = v28;
    goto lab_0xe7ff;
  lab_0xe7ff:
    // 0xe7ff
    if ((v32 || v31) == 0) {
        goto lab_0xe746;
    } else {
        // 0xe811
        v34 = v32 != 0;
        v35 = 0;
        v36 = 0;
        while (true) {
          lab_0xe811:
            // 0xe811
            v37 = v36 - v35;
            v38 = v36;
            v39 = v35;
            v40 = v36;
            v41 = v35;
            if (v34) {
                goto lab_0xe81c;
            } else {
                goto lab_0xe88f;
            }
        }
        goto lab_0xea60_2;
    }
  lab_0xea60_2:;
    int64_t v42 = v43;
    v10 = v37;
    result = ((int32_t)v42 != 0 ? v42 : v4) & 0xffffffff;
    goto lab_0xe746_2;
}

