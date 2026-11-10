/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00583594; name: FUN_00583594
 */


undefined8 FUN_00583594(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long *plVar11;
  size_t sVar12;
  uint uVar13;
  ulong *puVar14;
  ulong uVar15;
  long *plVar16;
  byte *pbVar17;
  long *plVar18;
  ulong uVar19;
  byte bVar20;
  void *pvVar21;
  long lVar22;
  int *piVar23;
  byte bVar24;
  long *plVar25;
  ulong uVar26;
  byte *pbVar27;
  uint *puVar28;
  undefined8 uVar29;
  ulong uVar30;
  int *piVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined1 auVar35 [16];
  byte local_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e8;
  undefined8 local_e0;
  uint *local_d8;
  uint *local_d0;
  undefined1 *puStack_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  int local_90;
  char local_8c;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  byte local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  byte local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  byte local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  byte local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  byte local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  byte local_65;
  
  lVar7 = (**(code **)(*param_3 + 0x10))(param_3,&local_90,0x2c);
  if (lVar7 != 0x2c) {
    return 0;
  }
  if (local_90 != 0x66695a54) {
    return 0;
  }
  local_c0 = (long)(int)((uint)CONCAT21(CONCAT11(local_70,local_6f),local_6e) << 8) |
             (ulong)local_6d;
  if ((int)local_c0 < 0) {
    return 0;
  }
  local_b8 = (long)(int)((uint)CONCAT21(CONCAT11(local_6c,local_6b),local_6a) << 8) |
             (ulong)local_69;
  if ((int)local_b8 < 0) {
    return 0;
  }
  local_b0 = (long)(int)((uint)CONCAT21(CONCAT11(local_68,local_67),local_66) << 8) |
             (ulong)local_65;
  if ((int)local_b0 < 0) {
    return 0;
  }
  local_a8 = (long)(int)((uint)CONCAT21(CONCAT11(local_74,local_73),local_72) << 8) |
             (ulong)local_71;
  if ((int)local_a8 < 0) {
    return 0;
  }
  local_a0 = (long)(int)((uint)CONCAT21(CONCAT11(local_78,local_77),local_76) << 8) |
             (ulong)local_75;
  if ((int)local_a0 < 0) {
    return 0;
  }
  local_98 = (long)(int)((uint)CONCAT21(CONCAT11(local_7c,local_7b),local_7a) << 8) |
             (ulong)local_79;
  if ((int)local_98 < 0) {
    return 0;
  }
  if (local_8c == '\0') {
    uVar15 = 4;
    uVar32 = local_c0;
    uVar33 = local_b8;
    uVar26 = local_b0;
    uVar34 = local_a0;
    uVar30 = local_98;
  }
  else {
    iVar6 = (**(code **)(*param_3 + 0x18))
                      (param_3,local_c0 * 5 + local_b8 * 6 + local_b0 + local_a8 * 8 + local_a0 +
                               local_98);
    if (iVar6 != 0) {
      return 0;
    }
    lVar7 = (**(code **)(*param_3 + 0x10))(param_3,&local_90,0x2c);
    if (lVar7 != 0x2c) {
      return 0;
    }
    if (local_90 != 0x66695a54) {
      return 0;
    }
    if (local_8c == '\0') {
      return 0;
    }
    uVar32 = (long)(int)((uint)CONCAT21(CONCAT11(local_70,local_6f),local_6e) << 8) |
             (ulong)local_6d;
    if ((int)uVar32 < 0) {
      return 0;
    }
    uVar33 = (long)(int)((uint)CONCAT21(CONCAT11(local_6c,local_6b),local_6a) << 8) |
             (ulong)local_69;
    if ((int)uVar33 < 0) {
      return 0;
    }
    uVar26 = (long)(int)((uint)CONCAT21(CONCAT11(local_68,local_67),local_66) << 8) |
             (ulong)local_65;
    if ((int)uVar26 < 0) {
      return 0;
    }
    local_a8 = (long)(int)((uint)CONCAT21(CONCAT11(local_74,local_73),local_72) << 8) |
               (ulong)local_71;
    if ((int)local_a8 < 0) {
      return 0;
    }
    uVar34 = (long)(int)((uint)CONCAT21(CONCAT11(local_78,local_77),local_76) << 8) |
             (ulong)local_75;
    if ((int)uVar34 < 0) {
      return 0;
    }
    uVar30 = (long)(int)((uint)CONCAT21(CONCAT11(local_7c,local_7b),local_7a) << 8) |
             (ulong)local_79;
    if ((int)uVar30 < 0) {
      return 0;
    }
    uVar15 = 8;
  }
  if (uVar33 == 0) {
    return 0;
  }
  if (local_a8 != 0) {
    return 0;
  }
  if (((uVar34 != 0) && (uVar34 != uVar33)) || ((uVar30 != 0 && (uVar30 != uVar33)))) {
    return 0;
  }
  local_d8 = (uint *)0x0;
  local_d0 = (uint *)0x0;
  puStack_c8 = (undefined1 *)0x0;
  lVar7 = uVar33 * 6 + uVar34 + uVar30 + uVar32 * (uVar15 | 1) + uVar26;
  local_c0 = uVar32;
  local_b8 = uVar33;
  local_b0 = uVar26;
  local_a0 = uVar34;
  local_98 = uVar30;
  if (lVar7 != 0) {
    if (lVar7 < 0) {
                    /* try { // try from 00584384 to 0058438b has its CatchHandler @ 005843ac */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_d8 = (uint *)FUN_002e2e80(PTR_FUN_04373078,lVar7);
    puStack_c8 = (undefined1 *)((long)local_d8 + lVar7);
    uVar19 = uVar34 + uVar30 + uVar26 + uVar32 * (uVar15 | 1) + uVar33 * 6;
    local_d0 = local_d8;
    lVar8 = lVar7;
    if ((uVar19 & 1) != 0) {
      *(undefined1 *)local_d8 = 0;
      local_d0 = (uint *)((long)local_d8 + 1);
      lVar8 = lVar7 + -1;
    }
    if (uVar19 != 1) {
      do {
        *(undefined1 *)local_d0 = 0;
        *(undefined1 *)((long)local_d0 + 1) = 0;
        local_d0 = (uint *)((long)local_d0 + 2);
        lVar8 = lVar8 + -2;
      } while (lVar8 != 0);
    }
  }
                    /* try { // try from 0058397c to 00583987 has its CatchHandler @ 0058441c */
  lVar8 = (**(code **)(*param_3 + 0x10))(param_3,local_d8,lVar7);
  puVar28 = local_d8;
  if (lVar8 != lVar7) {
LAB_005841c0:
    uVar29 = 0;
    goto joined_r0x005841c4;
  }
  plVar25 = (long *)(param_1 + 8);
  pvVar21 = (void *)*plVar25;
  if ((ulong)((*(long *)(param_1 + 0x18) - (long)pvVar21 >> 4) * -0x5555555555555555) < uVar32 + 2)
  {
    lVar7 = *(long *)(param_1 + 0x10);
    lVar22 = (uVar32 + 2) * 0x30;
    lVar8 = FUN_002e2e80(PTR_FUN_04373078,lVar22);
    lVar7 = lVar8 + (lVar7 - (long)pvVar21);
    pvVar10 = *(void **)(param_1 + 8);
    sVar12 = *(long *)(param_1 + 0x10) - (long)pvVar10;
    pvVar21 = (void *)(lVar7 - sVar12);
    if (0 < (long)sVar12) {
      memcpy(pvVar21,pvVar10,sVar12);
      pvVar10 = (void *)*plVar25;
    }
    *(void **)(param_1 + 8) = pvVar21;
    *(long *)(param_1 + 0x10) = lVar7;
    *(long *)(param_1 + 0x18) = lVar8 + lVar22;
    if (pvVar10 != (void *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088);
      pvVar21 = (void *)*plVar25;
    }
  }
  lVar7 = *(long *)(param_1 + 0x10) - (long)pvVar21 >> 4;
  bVar5 = uVar32 < (ulong)(lVar7 * -0x5555555555555555);
  lVar7 = uVar32 + lVar7 * 0x5555555555555555;
  if (bVar5 || lVar7 == 0) {
    if (bVar5) {
      *(void **)(param_1 + 0x10) = (void *)((long)pvVar21 + uVar32 * 0x30);
    }
    if (uVar32 != 0) goto LAB_00583aa0;
    bVar20 = 0;
    bVar24 = 1;
  }
  else {
                    /* try { // try from 00583a80 to 00583a87 has its CatchHandler @ 005843fc */
    FUN_00586d70(plVar25,lVar7);
LAB_00583aa0:
    puVar14 = (ulong *)*plVar25;
    if (uVar15 == 4) {
      uVar15 = 0;
      do {
        uVar19 = (long)(int)((uint)CONCAT21(CONCAT11((char)*puVar28,
                                                     *(undefined1 *)((long)puVar28 + 1)),
                                            *(undefined1 *)((long)puVar28 + 2)) << 8) |
                 (ulong)*(byte *)((long)puVar28 + 3);
        *puVar14 = uVar19;
        if ((uVar15 != 0) && ((long)uVar19 <= (long)puVar14[-6])) goto LAB_005841c0;
        uVar15 = uVar15 + 1;
        puVar28 = puVar28 + 1;
        puVar14 = puVar14 + 6;
      } while (uVar32 != uVar15);
    }
    else {
      uVar19 = 0;
      do {
        uVar1 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)*puVar28,
                                                                               *(undefined1 *)
                                                                                ((long)puVar28 + 1))
                                                                      ,*(undefined1 *)
                                                                        ((long)puVar28 + 2)),
                                                             *(undefined1 *)((long)puVar28 + 3)),
                                                    (char)puVar28[1]),
                                           *(undefined1 *)((long)puVar28 + 5)),
                                  *(undefined1 *)((long)puVar28 + 6)),
                         *(undefined1 *)((long)puVar28 + 7));
        *puVar14 = uVar1;
        if ((uVar19 != 0) && ((long)uVar1 <= (long)puVar14[-6])) goto LAB_005841c0;
        uVar19 = uVar19 + 1;
        puVar28 = (uint *)((long)puVar28 + uVar15);
        puVar14 = puVar14 + 6;
      } while (uVar32 != uVar19);
    }
    if (uVar32 == 0) {
      bVar24 = 0;
      bVar20 = 0;
    }
    else {
      bVar20 = 0;
      pbVar27 = (byte *)(*plVar25 + 8);
      uVar15 = uVar32;
      do {
        bVar24 = (byte)*puVar28;
        *pbVar27 = bVar24;
        if (uVar33 <= bVar24) goto LAB_005841c0;
        puVar28 = (uint *)((long)puVar28 + 1);
        bVar20 = bVar20 | bVar24 == 0;
        uVar15 = uVar15 - 1;
        pbVar27 = pbVar27 + 0x30;
      } while (uVar15 != 0);
      bVar24 = 0;
    }
  }
  plVar16 = (long *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x28) - *plVar16 >> 4;
  bVar5 = uVar33 < (ulong)(lVar7 * -0x5555555555555555);
  lVar7 = uVar33 + lVar7 * 0x5555555555555555;
  if (bVar5 || lVar7 == 0) {
    if (bVar5) {
      *(ulong *)(param_1 + 0x28) = *plVar16 + uVar33 * 0x30;
    }
  }
  else {
                    /* try { // try from 00583c04 to 00583d1b has its CatchHandler @ 0058440c */
    FUN_00586a88(plVar16,lVar7);
  }
  pbVar27 = (byte *)(*plVar16 + 0x29);
  uVar15 = uVar33;
  do {
    uVar13 = (*puVar28 & 0xff00ff00) >> 8 | (*puVar28 & 0xff00ff) << 8;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
    *(uint *)(pbVar27 + -0x29) = uVar13;
    if (0x2a2fe < uVar13 + 0x1517f) goto LAB_005841c0;
    pbVar27[-1] = (char)puVar28[1] != '\0';
    bVar2 = *(byte *)((long)puVar28 + 5);
    *pbVar27 = bVar2;
    if (uVar26 <= bVar2) goto LAB_005841c0;
    puVar28 = (uint *)((long)puVar28 + 6);
    uVar15 = uVar15 - 1;
    pbVar27 = pbVar27 + 0x30;
  } while (uVar15 != 0);
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (!(bool)(bVar24 | bVar20 ^ 1)) {
    lVar7 = *plVar16;
    bVar20 = 0;
    if ((*(char *)(lVar7 + 0x28) != '\0') && (bVar20 = *(byte *)(*plVar25 + 8), bVar20 != 0)) {
      do {
        if (*(char *)(lVar7 + (ulong)bVar20 * 0x30 + 0x28) == '\0') goto LAB_00583cd8;
        bVar20 = bVar20 - 1;
      } while (bVar20 != 0);
      bVar20 = 0;
    }
LAB_00583cd8:
    for (uVar15 = (ulong)bVar20; uVar33 != uVar15; uVar15 = (ulong)((int)uVar15 + 1) & 0xff) {
      if (*(char *)(lVar7 + uVar15 * 0x30 + 0x28) == '\0') {
        *(char *)(param_1 + 0x38) = (char)uVar15;
        break;
      }
    }
  }
  FUN_00291910(param_1 + 0x40,puVar28,uVar26);
  if ((uint *)((long)local_d0 - (uVar26 + uVar34 + uVar30)) != puVar28) {
                    /* try { // try from 0058438c to 005843ab has its CatchHandler @ 0058440c */
                    /* WARNING: Subroutine does not return */
    __assert_fail("bp == tbuf.data() + tbuf.size()",
                  "external/com_google_absl/absl/time/internal/cctz/src/time_zone_info.cc",0x1e8,
                  "Load");
  }
  pbVar27 = (byte *)(param_1 + 0x70);
  if ((*pbVar27 & 1) == 0) {
    pbVar27[0] = 0;
    pbVar27[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (local_8c != '\0') {
                    /* try { // try from 00583d6c to 00583d7b has its CatchHandler @ 005843ec */
    lVar7 = (**(code **)(*param_3 + 0x10))(param_3,&local_f0,1);
    if ((lVar7 != 1) || (local_f0 != 10)) goto LAB_005841c0;
                    /* try { // try from 00583d9c to 00583dab has its CatchHandler @ 005843cc */
    lVar7 = (**(code **)(*param_3 + 0x10))(param_3,&local_f0,1);
    while( true ) {
      uVar13 = (uint)local_f0;
      if (lVar7 != 1) {
        uVar13 = 0xffffffff;
      }
      if (uVar13 == 0xffffffff) goto LAB_005841c0;
      if (uVar13 == 10) break;
                    /* try { // try from 00583dcc to 00583def has its CatchHandler @ 0058442c */
      FUN_002e6a9c(pbVar27);
      lVar7 = (**(code **)(*param_3 + 0x10))(param_3,&local_f0,1);
    }
  }
  pbVar27 = (byte *)(param_1 + 0x58);
  if ((*pbVar27 & 1) == 0) {
    if (*pbVar27 >> 1 == 0) {
LAB_00583e14:
                    /* try { // try from 00583e1c to 00583e27 has its CatchHandler @ 005843bc */
      (**(code **)(*param_3 + 0x20))(&local_f0,param_3);
      if ((*pbVar27 & 1) == 0) {
        pbVar27[0] = 0;
        pbVar27[1] = 0;
      }
      else {
        **(undefined1 **)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x68));
          *(undefined8 *)(param_1 + 0x58) = 0;
        }
      }
      *(undefined8 *)(param_1 + 0x68) = local_e0;
      *(undefined8 *)(param_1 + 0x60) = uStack_e8;
      *(ulong *)pbVar27 = CONCAT71(uStack_ef,local_f0);
    }
  }
  else if (*(long *)(param_1 + 0x60) == 0) goto LAB_00583e14;
  if (uVar32 < 2) {
    plVar11 = (long *)*plVar25;
  }
  else {
    plVar11 = *(long **)(param_1 + 8);
    pbVar27 = (byte *)(plVar11 + uVar32 * 6 + -5);
    bVar20 = *pbVar27;
    bVar24 = *(byte *)(plVar11 + uVar32 * 6 + -0xb);
    if (bVar20 != bVar24) goto LAB_00583eb4;
    while( true ) {
      uVar32 = uVar32 - 1;
      pbVar17 = pbVar27 + -0x30;
      if (uVar32 < 2) break;
      bVar20 = *pbVar17;
      bVar24 = pbVar27[-0x60];
      pbVar27 = pbVar17;
      if (bVar20 != bVar24) {
LAB_00583eb4:
        uVar26 = (ulong)bVar20;
        uVar33 = (ulong)bVar24;
        lVar7 = *(long *)(param_1 + 0x20);
        if (((*(char *)(lVar7 + uVar26 * 0x30 + 0x28) != *(char *)(lVar7 + uVar33 * 0x30 + 0x28)) ||
            (*(int *)(lVar7 + uVar26 * 0x30) != *(int *)(lVar7 + uVar33 * 0x30))) ||
           (*(char *)(lVar7 + uVar26 * 0x30 + 0x29) != *(char *)(lVar7 + uVar33 * 0x30 + 0x29)))
        break;
      }
    }
    local_c0 = uVar32;
  }
  plVar18 = *(long **)(param_1 + 0x10);
  lVar7 = (long)plVar18 - (long)plVar11 >> 4;
  bVar5 = uVar32 < (ulong)(lVar7 * -0x5555555555555555);
  lVar7 = uVar32 + lVar7 * 0x5555555555555555;
  if (bVar5 || lVar7 == 0) {
    if (bVar5) {
      plVar18 = plVar11 + uVar32 * 6;
      *(long **)(param_1 + 0x10) = plVar18;
    }
    if (plVar11 != plVar18) goto LAB_00583f64;
LAB_00583f6c:
                    /* try { // try from 00583f6c to 00583f73 has its CatchHandler @ 005843dc */
    puVar9 = (undefined8 *)FUN_0058256c(plVar25);
    *puVar9 = 0xf800000000000000;
    *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(param_1 + 0x38);
    local_c0 = uVar32 + 1;
  }
  else {
                    /* try { // try from 00583f30 to 00583f3b has its CatchHandler @ 0058440c */
    FUN_00586d70(plVar25,lVar7);
    plVar11 = *(long **)(param_1 + 8);
    if (plVar11 == *(long **)(param_1 + 0x10)) goto LAB_00583f6c;
LAB_00583f64:
    if (-1 < *plVar11) goto LAB_00583f6c;
  }
                    /* try { // try from 00583f8c to 00583f9b has its CatchHandler @ 0058440c */
  FUN_00582a40(param_1,param_2,&local_c0);
  pvVar21 = *(void **)(param_1 + 0x10);
  piVar31 = *(int **)(param_1 + 0x20);
  if (pvVar21 == *(void **)(param_1 + 8)) {
    piVar23 = *(int **)(param_1 + 0x28);
    pvVar10 = pvVar21;
    if (piVar31 != piVar23) {
LAB_00584214:
      do {
        auVar35 = FUN_00586060(0x7b2,1,1,0,0x222222222222222,7);
        lVar7 = auVar35._8_8_;
        auVar35 = FUN_00586060(auVar35._0_8_,(long)auVar35[8],(lVar7 << 0x30) >> 0x38,
                               (lVar7 << 0x28) >> 0x38,
                               (long)*piVar31 / 0x3c + ((lVar7 << 0x20) >> 0x38),
                               (long)*piVar31 % 0x3c + ((lVar7 << 0x18) >> 0x38));
        *(long *)(piVar31 + 2) = auVar35._0_8_;
        *(ulong *)(piVar31 + 4) = auVar35._8_8_ & 0xffffffffff;
        auVar35 = FUN_00586060(0x7b2,1,1,0,0xfdddddddddddddde,0xfffffffffffffff8);
        lVar7 = auVar35._8_8_;
        auVar35 = FUN_00586060(auVar35._0_8_,(long)auVar35[8],(lVar7 << 0x30) >> 0x38,
                               (lVar7 << 0x28) >> 0x38,
                               (long)*piVar31 / 0x3c + ((lVar7 << 0x20) >> 0x38),
                               (long)*piVar31 % 0x3c + ((lVar7 << 0x18) >> 0x38));
        *(long *)(piVar31 + 6) = auVar35._0_8_;
        *(ulong *)(piVar31 + 8) = auVar35._8_8_ & 0xffffffffff;
        piVar31 = piVar31 + 0xc;
      } while (piVar31 != piVar23);
      pvVar21 = *(void **)(param_1 + 8);
      pvVar10 = *(void **)(param_1 + 0x10);
    }
  }
  else {
    piVar31 = piVar31 + (ulong)*(byte *)(param_1 + 0x38) * 0xc;
    lVar7 = 0;
    lVar8 = -0x20;
    pvVar10 = *(void **)(param_1 + 8);
    do {
      lVar22 = *(long *)((long)pvVar10 + lVar8 + 0x20);
      auVar35 = FUN_00586060(0x7b2,1,1,0,lVar22 / 0x3c,lVar22 % 0x3c);
      lVar22 = auVar35._8_8_;
      auVar35 = FUN_00586060(auVar35._0_8_,(long)auVar35[8],(lVar22 << 0x30) >> 0x38,
                             (lVar22 << 0x28) >> 0x38,
                             (long)*piVar31 / 0x3c + ((lVar22 << 0x20) >> 0x38),
                             (long)*piVar31 % 0x3c + ((lVar22 << 0x18) >> 0x38));
      lVar22 = auVar35._8_8_;
      auVar35 = FUN_00586060(auVar35._0_8_,(long)auVar35[8],(lVar22 << 0x30) >> 0x38,
                             (lVar22 << 0x28) >> 0x38,(lVar22 << 0x20) >> 0x38,
                             ((lVar22 << 0x18) >> 0x38) + -1);
      *(long *)((long)pvVar10 + lVar8 + 0x40) = auVar35._0_8_;
      *(ulong *)((long)pvVar10 + lVar8 + 0x48) = auVar35._8_8_ & 0xffffffffff;
      piVar31 = (int *)(*plVar16 + (ulong)*(byte *)((long)pvVar10 + lVar8 + 0x28) * 0x30);
      lVar22 = *(long *)((long)pvVar10 + lVar8 + 0x20);
      auVar35 = FUN_00586060(0x7b2,1,1,0,lVar22 / 0x3c,lVar22 % 0x3c);
      lVar22 = auVar35._8_8_;
      auVar35 = FUN_00586060(auVar35._0_8_,(long)auVar35[8],(lVar22 << 0x30) >> 0x38,
                             (lVar22 << 0x28) >> 0x38,
                             (long)*piVar31 / 0x3c + ((lVar22 << 0x20) >> 0x38),
                             (long)*piVar31 % 0x3c + ((lVar22 << 0x18) >> 0x38));
      lVar22 = auVar35._0_8_;
      *(long *)((long)pvVar10 + lVar8 + 0x30) = lVar22;
      *(ulong *)((long)pvVar10 + lVar8 + 0x38) = auVar35._8_8_ & 0xffffffffff;
      if (lVar7 == 0) {
        pvVar21 = (void *)*plVar25;
      }
      else {
        pvVar21 = (void *)*plVar25;
        if ((lVar22 <= *(long *)((long)pvVar21 + lVar8)) &&
           ((*(long *)((long)pvVar21 + lVar8) != lVar22 ||
            ((cVar3 = *(char *)((long)pvVar21 + lVar8 + 8), auVar35[8] <= cVar3 &&
             ((cVar3 != auVar35[8] ||
              ((cVar3 = *(char *)((long)pvVar21 + lVar8 + 9),
               cVar4 = *(char *)((long)pvVar10 + lVar8 + 0x39), cVar4 <= cVar3 &&
               ((cVar3 != cVar4 ||
                ((cVar3 = *(char *)((long)pvVar21 + lVar8 + 10),
                 cVar4 = *(char *)((long)pvVar10 + lVar8 + 0x3a), cVar4 <= cVar3 &&
                 ((cVar3 != cVar4 ||
                  ((cVar3 = *(char *)((long)pvVar21 + lVar8 + 0xb),
                   cVar4 = *(char *)((long)pvVar10 + lVar8 + 0x3b), cVar4 <= cVar3 &&
                   ((cVar3 != cVar4 ||
                    (*(char *)((long)pvVar10 + lVar8 + 0x3c) <=
                     *(char *)((long)pvVar21 + lVar8 + 0xc))))))))))))))))))))) goto LAB_005841c0;
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x30;
      pvVar10 = pvVar21;
    } while (lVar7 != ((long)*(void **)(param_1 + 0x10) - (long)pvVar21 >> 4) * -0x5555555555555555)
    ;
    piVar31 = (int *)*plVar16;
    piVar23 = *(int **)(param_1 + 0x28);
    pvVar10 = *(void **)(param_1 + 0x10);
    if (piVar31 != piVar23) goto LAB_00584214;
  }
  lVar7 = (long)pvVar10 - (long)pvVar21;
  if ((ulong)((lVar7 >> 4) * -0x5555555555555555) <
      (ulong)((*(long *)(param_1 + 0x18) - (long)pvVar21 >> 4) * -0x5555555555555555)) {
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_002e2e80(PTR_FUN_04373078,lVar7);
      pvVar21 = *(void **)(param_1 + 8);
      pvVar10 = *(void **)(param_1 + 0x10);
    }
    lVar8 = lVar8 + (lVar7 >> 4) * 0x10;
    sVar12 = (long)pvVar10 - (long)pvVar21;
    if (0 < (long)sVar12) {
      memcpy((void *)(lVar8 - sVar12),pvVar21,sVar12);
      pvVar21 = (void *)*plVar25;
    }
    *(void **)(param_1 + 8) = (void *)(lVar8 - sVar12);
    *(long *)(param_1 + 0x10) = lVar8;
    *(long *)(param_1 + 0x18) = lVar8;
    if (pvVar21 != (void *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
  uVar29 = 1;
joined_r0x005841c4:
  if (local_d8 == (uint *)0x0) {
    return uVar29;
  }
  local_d0 = local_d8;
  FUN_002e2ea0(PTR_LAB_04373088);
  return uVar29;
}


