/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056623c; name: FUN_0056623c
 */


undefined8 FUN_0056623c(long *param_1,uint param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 uVar15;
  ulong uVar16;
  uint uVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  char *pcVar21;
  ulong uVar22;
  byte *pbVar23;
  undefined8 *puVar24;
  byte *local_e0;
  ulong uStack_d8;
  byte *local_d0;
  ulong uStack_c8;
  undefined4 local_b8;
  long local_b0;
  long lStack_a8;
  undefined4 *local_a0;
  char *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 auStack_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  byte *local_70;
  uint local_64;
  
  local_80 = 0;
  uStack_78 = 0;
  puVar2 = auStack_88;
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = param_3;
  }
  local_70 = (byte *)0x0;
  lStack_a8 = param_1[1];
  local_b0 = *param_1;
  local_8c = 0x10ffff;
  if ((param_2 & 0x20) != 0) {
    local_8c = 0xff;
  }
  auStack_88[0] = 0;
  local_90 = 0;
  local_98 = (char *)0x0;
  uStack_c8 = param_1[1];
  local_d0 = (byte *)*param_1;
  puVar4 = PTR_FUN_04373078;
  local_b8 = param_2;
  local_a0 = puVar2;
  if ((param_2 >> 5 & 1) != 0) {
    pbVar23 = (byte *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (pbVar23 != (byte *)0x0) {
      pbVar23[0] = 0;
      pbVar23[1] = 0;
      pbVar23[2] = 0;
      pbVar23[3] = 0;
      pbVar23[4] = 0;
      pbVar23[5] = 0;
      pbVar23[6] = 0;
      pbVar23[7] = 0;
      pbVar23[8] = 0;
      pbVar23[9] = 0;
      pbVar23[10] = 0;
      pbVar23[0xb] = 0;
      pbVar23[0xc] = 0;
      pbVar23[0xd] = 0;
      pbVar23[0xe] = 0;
      pbVar23[0xf] = 0;
      pbVar23[0x10] = 0;
      pbVar23[0x11] = 0;
      pbVar23[0x12] = 0;
      pbVar23[0x13] = 0;
      pbVar23[0x14] = 0;
      pbVar23[0x15] = 0;
      pbVar23[0x16] = 0;
      pbVar23[0x17] = 0;
    }
    pbVar23[0] = 0;
    pbVar23[1] = 0;
    if (uStack_c8 != 0) {
      uVar22 = 0;
      do {
        local_64 = (uint)local_d0[uVar22];
                    /* try { // try from 00566328 to 00566343 has its CatchHandler @ 00566e44 */
        iVar6 = FUN_00550a10(&local_e0,&local_64);
        FUN_002e4094(pbVar23,&local_e0,(long)iVar6);
        uVar22 = uVar22 + 1;
      } while (uVar22 < uStack_c8);
    }
    pbVar20 = *(byte **)(puVar2 + 6);
    if (pbVar20 != (byte *)0x0) {
      if ((*pbVar20 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar20 + 0x10));
      }
      FUN_002e2ea0(PTR_LAB_04373088,pbVar20);
    }
    *(byte **)(puVar2 + 6) = pbVar23;
    uStack_c8 = *(ulong *)(pbVar23 + 8);
    local_d0 = *(byte **)(pbVar23 + 0x10);
    puVar4 = PTR_FUN_04373078;
    if ((*pbVar23 & 1) == 0) {
      local_d0 = pbVar23 + 1;
      uStack_c8 = (ulong)(*pbVar23 >> 1);
    }
  }
  PTR_FUN_04373078 = puVar4;
  if ((param_2 >> 1 & 1) != 0) {
    while (uStack_c8 != 0) {
      uVar15 = (undefined4)uStack_c8;
      if (3 < uStack_c8) {
        uVar15 = 4;
      }
                    /* try { // try from 005663c0 to 00566413 has its CatchHandler @ 00566e40 */
      iVar6 = FUN_00550ad0(local_d0,uVar15);
      if (iVar6 == 0) goto LAB_00566d08;
      iVar6 = FUN_00550920(&local_e0,local_d0);
      if (0x10ffff < (int)local_e0) {
        local_e0 = (byte *)CONCAT44(local_e0._4_4_,0xfffd);
        goto LAB_00566d08;
      }
      if ((iVar6 == 1) && ((int)local_e0 == 0xfffd)) goto LAB_00566d08;
      local_d0 = local_d0 + iVar6;
      uStack_c8 = uStack_c8 - (long)iVar6;
      if (iVar6 < 0) goto LAB_00566d14;
      FUN_005622d8(&local_b8,(ulong)local_e0 & 0xffffffff);
    }
                    /* try { // try from 0056641c to 00566423 has its CatchHandler @ 00566e20 */
    uVar13 = FUN_00562fd0(&local_b8);
    pcVar5 = local_98;
    pbVar23 = local_70;
    puVar4 = PTR_LAB_04373088;
joined_r0x00566d24:
    while (local_70 = pbVar23, pcVar5 != (char *)0x0) {
      pcVar21 = *(char **)(pcVar5 + 0x10);
      pcVar5[0x10] = '\0';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x14] = '\0';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      if ((*pcVar5 == '\x16') && (pbVar23 = *(byte **)(pcVar5 + 0x20), pbVar23 != (byte *)0x0)) {
        if ((*pbVar23 & 1) != 0) {
          FUN_002e2ea0(puVar4,*(undefined8 *)(pbVar23 + 0x10));
        }
        FUN_002e2ea0(puVar4,pbVar23);
      }
                    /* try { // try from 00566d38 to 00566d3f has its CatchHandler @ 00566ee4 */
      FUN_0055de34(pcVar5);
      pbVar23 = local_70;
      pcVar5 = pcVar21;
    }
    if (pbVar23 != (byte *)0x0) {
      if ((*pbVar23 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar23 + 0x10));
      }
      FUN_002e2ea0(PTR_LAB_04373088,pbVar23);
    }
    return uVar13;
  }
  if (uStack_c8 == 0) {
LAB_00566ce4:
                    /* try { // try from 00566ce4 to 00566ceb has its CatchHandler @ 00566e24 */
    uVar13 = FUN_00562fd0(&local_b8);
    pcVar5 = local_98;
    pbVar23 = local_70;
    puVar4 = PTR_LAB_04373088;
    goto joined_r0x00566d24;
  }
  pbVar23 = (byte *)0x0;
  uVar22 = 0;
  uVar3 = *(uint *)PTR_DAT_04374d68;
LAB_00566450:
  uVar17 = local_b8;
  uVar9 = uStack_c8;
  pbVar20 = local_d0;
  uVar13 = 7;
  switch(*local_d0) {
  case 0x24:
    FUN_00562624(&local_b8);
    break;
  default:
    uVar15 = (undefined4)uStack_c8;
    if (3 < uStack_c8) {
      uVar15 = 4;
    }
                    /* try { // try from 00566700 to 00566753 has its CatchHandler @ 00566e34 */
    iVar6 = FUN_00550ad0(local_d0,uVar15);
    if (iVar6 != 0) {
      iVar6 = FUN_00550920(&local_e0,local_d0);
      if ((int)local_e0 < 0x110000) {
        if ((iVar6 != 1) || ((int)local_e0 != 0xfffd)) {
          local_d0 = local_d0 + iVar6;
          uStack_c8 = uStack_c8 - (long)iVar6;
          if (-1 < iVar6) {
            FUN_005622d8(&local_b8,(ulong)local_e0 & 0xffffffff);
            goto LAB_00566ac8;
          }
          goto LAB_00566d14;
        }
      }
      else {
LAB_00566de0:
        local_e0 = (byte *)CONCAT44(local_e0._4_4_,0xfffd);
      }
    }
LAB_00566d08:
    *puVar2 = 0xc;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
LAB_00566d14:
    uVar13 = 0;
    pcVar5 = local_98;
    pbVar23 = local_70;
    puVar4 = PTR_LAB_04373088;
    goto joined_r0x00566d24;
  case 0x28:
    if (((1 < uStack_c8) && ((local_b8 >> 9 & 1) != 0)) && (local_d0[1] == 0x3f)) {
      uVar22 = FUN_00565d2c(&local_b8,&local_d0);
      if ((uVar22 & 1) != 0) goto LAB_00566ac8;
      goto LAB_00566d14;
    }
    if ((local_b8 >> 0xc & 1) == 0) {
      local_e0 = (byte *)0x0;
      uStack_d8 = 0;
                    /* try { // try from 00566760 to 0056676b has its CatchHandler @ 00566e18 */
      FUN_00562c10(&local_b8,&local_e0);
    }
    else {
      lVar14 = FUN_002e2e80(puVar4,0x28);
      if (lVar14 != 0) {
        FUN_0055da3c(lVar14,0x16,local_b8);
      }
      *(undefined4 *)(lVar14 + 0x18) = 0xffffffff;
      FUN_00562088(&local_b8,lVar14);
    }
    break;
  case 0x29:
    uVar22 = FUN_00562e8c(&local_b8);
    if ((uVar22 & 1) == 0) goto LAB_00566d14;
    break;
  case 0x2a:
    goto switchD_0056647c_caseD_2a;
  case 0x2b:
    uVar13 = 8;
    goto switchD_0056647c_caseD_2a;
  case 0x2e:
    FUN_005626cc(&local_b8);
    break;
  case 0x3f:
    uVar13 = 9;
switchD_0056647c_caseD_2a:
    pbVar18 = local_d0 + 1;
    uVar16 = uStack_c8 - 1;
    local_e0 = local_d0;
    if ((local_b8._1_1_ >> 1 & 1) == 0) {
      uVar11 = 0;
      local_d0 = pbVar18;
      uStack_c8 = uVar16;
    }
    else {
      if ((uVar16 == 0) || (*pbVar18 != 0x3f)) {
        uVar11 = 0;
        local_d0 = pbVar18;
        uStack_c8 = uVar16;
      }
      else {
        local_d0 = local_d0 + 2;
        uStack_c8 = uStack_c8 - 2;
        uVar11 = 1;
      }
      if (uVar22 != 0) {
        lVar14 = (long)local_d0 - (long)pbVar23;
        *puVar2 = 10;
LAB_00566dd8:
        uStack_d8 = uVar9;
        local_e0 = pbVar20;
        *(byte **)(puVar2 + 2) = pbVar23;
        *(long *)(puVar2 + 4) = lVar14;
        goto LAB_00566d14;
      }
    }
    uVar22 = (long)local_d0 - (long)pbVar20;
                    /* try { // try from 0056662c to 0056663b has its CatchHandler @ 00566e38 */
    uStack_d8 = uVar22;
    uVar9 = FUN_00562794(&local_b8,uVar13,&local_e0,uVar11);
LAB_0056663c:
    pbVar23 = pbVar20;
    if ((uVar9 & 1) != 0) goto joined_r0x00566ce0;
    goto LAB_00566d14;
  case 0x5b:
                    /* try { // try from 005665a0 to 005665c3 has its CatchHandler @ 00566e30 */
    uVar22 = FUN_00565840(&local_b8,&local_d0,&local_e0,puVar2);
    if ((uVar22 & 1) != 0) {
      FUN_00562088(&local_b8,local_e0);
LAB_00566ac8:
      uVar22 = 0;
      pbVar23 = (byte *)0x0;
      goto joined_r0x00566ce0;
    }
    goto LAB_00566d14;
  case 0x5c:
    if ((1 < uStack_c8) && ((local_b8 >> 8 & 1) != 0)) {
      if (local_d0[1] == 0x42) {
        lVar14 = FUN_002e2e80(puVar4,0x28);
        if (lVar14 != 0) {
          FUN_0055da3c(lVar14,0x11,local_b8);
        }
        FUN_00562088(&local_b8,lVar14);
      }
      else {
        if (local_d0[1] != 0x62) goto LAB_00566770;
        lVar14 = FUN_002e2e80(puVar4,0x28);
        if (lVar14 != 0) {
          FUN_0055da3c(lVar14,0x10,local_b8);
        }
        FUN_00562088(&local_b8,lVar14);
      }
      goto LAB_005668f0;
    }
LAB_00566770:
    if ((local_b8 >> 9 & 1) == 0) {
      if (1 < uStack_c8) {
        bVar12 = local_d0[1];
        goto LAB_00566780;
      }
    }
    else {
      if (uStack_c8 < 2) goto LAB_00566970;
      bVar12 = local_d0[1];
      if (bVar12 < 0x51) {
        if (bVar12 == 0x41) {
          lVar14 = FUN_002e2e80(puVar4,0x28);
          if (lVar14 != 0) {
                    /* try { // try from 00566b24 to 00566b3b has its CatchHandler @ 00566e3c */
            FUN_0055da3c(lVar14,0x12,local_b8);
          }
          FUN_00562088(&local_b8,lVar14);
        }
        else {
          if (bVar12 != 0x43) goto LAB_00566780;
          lVar14 = FUN_002e2e80(puVar4,0x28);
          if (lVar14 != 0) {
            FUN_0055da3c(lVar14,0xd,local_b8);
          }
          FUN_00562088(&local_b8,lVar14);
        }
LAB_005668f0:
        local_d0 = local_d0 + 2;
        uStack_c8 = uStack_c8 - 2;
        goto joined_r0x0056690c;
      }
      if (bVar12 == 0x51) {
        local_d0 = local_d0 + 2;
        uStack_c8 = uStack_c8 - 2;
        do {
          if (uStack_c8 != 1) {
            if (uStack_c8 == 0) goto LAB_00566ac8;
            if ((*local_d0 == 0x5c) && (local_d0[1] == 0x45)) goto LAB_00566ccc;
          }
          uVar15 = (undefined4)uStack_c8;
          if (3 < uStack_c8) {
            uVar15 = 4;
          }
                    /* try { // try from 00566b80 to 00566bd3 has its CatchHandler @ 00566e1c */
          iVar6 = FUN_00550ad0(local_d0,uVar15);
          if (iVar6 == 0) goto LAB_00566d08;
          iVar6 = FUN_00550920(&local_e0,local_d0);
          if (0x10ffff < (int)local_e0) goto LAB_00566de0;
          if ((iVar6 == 1) && ((int)local_e0 == 0xfffd)) goto LAB_00566d08;
          local_d0 = local_d0 + iVar6;
          uStack_c8 = uStack_c8 - (long)iVar6;
          if (iVar6 < 0) goto LAB_00566d14;
          FUN_005622d8(&local_b8,(ulong)local_e0 & 0xffffffff);
        } while( true );
      }
      if (bVar12 == 0x7a) {
        lVar14 = FUN_002e2e80(puVar4,0x28);
        if (lVar14 != 0) {
          FUN_0055da3c(lVar14,0x13,local_b8);
        }
        FUN_00562088(&local_b8,lVar14);
        goto LAB_005668f0;
      }
LAB_00566780:
      if ((bVar12 | 0x20) == 0x70) {
        lVar14 = FUN_002e2e80(puVar4,0x28);
        if (lVar14 != 0) {
                    /* try { // try from 005667a4 to 005667af has its CatchHandler @ 00566e10 */
          FUN_0055da3c(lVar14,0x14,uVar17 & 0x3ffe);
        }
        lVar7 = FUN_002e2e80(puVar4,0x28);
        if (lVar7 != 0) {
                    /* try { // try from 005667c4 to 005667e3 has its CatchHandler @ 00566e14 */
          FUN_0055fb3c(lVar7);
        }
        *(long *)(lVar14 + 0x20) = lVar7;
        iVar6 = FUN_005649b0(&local_d0,local_b8,lVar7,puVar2);
        if (iVar6 == 0) {
                    /* try { // try from 00566958 to 0056696f has its CatchHandler @ 00566e14 */
          FUN_00562088(&local_b8,lVar14);
          goto LAB_00566ac8;
        }
        if (iVar6 != 2) {
          if (iVar6 != 1) goto LAB_00566970;
                    /* try { // try from 00566de8 to 00566def has its CatchHandler @ 00566e00 */
          FUN_0055de34(lVar14);
          goto LAB_00566d14;
        }
        FUN_0055de34(lVar14);
      }
    }
LAB_00566970:
    uVar17 = local_b8;
    pbVar23 = local_d0;
    if (((((local_b8 >> 7 & 1) == 0) || (uVar22 = uStack_c8 - 2, uStack_c8 < 2)) ||
        (*local_d0 != 0x5c)) || ((int)uVar3 < 1)) {
LAB_00566a90:
                    /* try { // try from 00566a94 to 00566ac3 has its CatchHandler @ 00566e28 */
      uVar22 = FUN_00565040(&local_d0,&local_e0,puVar2,local_8c);
      if ((uVar22 & 1) != 0) {
        FUN_005622d8(&local_b8,(ulong)local_e0 & 0xffffffff);
        goto LAB_00566ac8;
      }
      goto LAB_00566d14;
    }
    pbVar20 = *(byte **)PTR_PTR_04374d78;
    uVar9 = (ulong)uVar3;
    puVar24 = (undefined8 *)PTR_PTR_04374d78;
    if (pbVar20 != (byte *)0x0) goto LAB_005669d4;
    do {
      do {
        puVar24 = puVar24 + 6;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_00566a90;
        pbVar20 = (byte *)*puVar24;
      } while (pbVar20 == (byte *)0x0);
LAB_005669d4:
      sVar8 = strlen((char *)pbVar20);
    } while ((sVar8 != 2) || ((pbVar20 != pbVar23 && (*(short *)pbVar20 != *(short *)pbVar23))));
    local_d0 = pbVar23 + 2;
    uStack_c8 = uVar22;
    lVar14 = FUN_002e2e80(puVar4,0x28);
    if (lVar14 != 0) {
                    /* try { // try from 00566a20 to 00566a2b has its CatchHandler @ 00566e04 */
      FUN_0055da3c(lVar14,0x14,uVar17 & 0x3ffe);
    }
    lVar7 = FUN_002e2e80(puVar4,0x28);
    if (lVar7 != 0) {
                    /* try { // try from 00566a48 to 00566a73 has its CatchHandler @ 00566e0c */
      FUN_0055fb3c(lVar7);
    }
    *(long *)(lVar14 + 0x20) = lVar7;
    FUN_00564d80(lVar7,puVar24,*(undefined4 *)(puVar24 + 1),local_b8);
    FUN_00562088(&local_b8,lVar14);
    goto joined_r0x0056690c;
  case 0x5e:
    lVar14 = FUN_002e2e80(puVar4,0x28);
    if ((uVar17 >> 4 & 1) == 0) {
      if (lVar14 != 0) {
                    /* try { // try from 00566684 to 005666f3 has its CatchHandler @ 00566e3c */
        FUN_0055da3c(lVar14,0xe,local_b8);
      }
      FUN_00562088(&local_b8,lVar14);
    }
    else {
      if (lVar14 != 0) {
                    /* try { // try from 00566810 to 00566953 has its CatchHandler @ 00566e3c */
        FUN_0055da3c(lVar14,0x12,local_b8);
      }
      FUN_00562088(&local_b8,lVar14);
    }
    break;
  case 0x7b:
    uStack_d8 = uStack_c8;
    local_e0 = local_d0;
    if (uStack_c8 == 1) {
LAB_00566c9c:
                    /* try { // try from 00566c9c to 00566ca7 has its CatchHandler @ 00566e2c */
      FUN_005622d8(&local_b8,0x7b);
      break;
    }
    uVar17 = local_d0[1] - 0x30;
    if ((9 < uVar17) ||
       (((1 < uStack_c8 - 1 && (local_d0[1] == 0x30)) && (local_d0[2] - 0x30 < 10))))
    goto LAB_00566c9c;
    iVar6 = 0;
    uVar16 = 0;
    lVar14 = 3 - uStack_c8;
    do {
      lVar7 = lVar14;
      uVar19 = uVar16;
      if ((99999999 < iVar6) || (uStack_c8 - 2 == uVar19)) goto LAB_00566c9c;
      iVar6 = uVar17 + iVar6 * 10;
      uVar16 = uVar19 + 1;
      bVar12 = local_d0[uVar19 + 2];
      uVar17 = bVar12 - 0x30;
      lVar14 = lVar7 + 1;
    } while (uVar17 < 10);
    if (bVar12 != 0x2c) {
      uVar16 = ~uVar16 + uStack_c8;
      pbVar18 = local_d0 + uVar19 + 2;
      iVar10 = iVar6;
      if (bVar12 == 0x7d) goto LAB_00566af0;
      goto LAB_00566c9c;
    }
    if (uStack_c8 - 2 == uVar16) goto LAB_00566c9c;
    bVar12 = local_d0[uVar19 + 3];
    pbVar18 = local_d0 + uVar19 + 3;
    uVar16 = (uStack_c8 - uVar16) - 2;
    if (bVar12 != 0x7d) {
      uVar17 = bVar12 - 0x30;
      if ((uVar17 < 10) && (((uVar16 < 2 || (bVar12 != 0x30)) || (9 < local_d0[uVar19 + 4] - 0x30)))
         ) {
        iVar10 = 0;
        do {
          if ((99999999 < iVar10) || (lVar7 == -1)) goto LAB_00566c9c;
          pbVar1 = pbVar18 + 1;
          iVar10 = uVar17 + iVar10 * 10;
          pbVar18 = pbVar18 + 1;
          uVar17 = *pbVar1 - 0x30;
          lVar7 = lVar7 + 1;
        } while (uVar17 < 10);
        uVar16 = -lVar7;
        if (*pbVar1 == 0x7d) goto LAB_00566af0;
      }
      goto LAB_00566c9c;
    }
    iVar10 = -1;
LAB_00566af0:
    local_d0 = pbVar18 + 1;
    uStack_c8 = uVar16 - 1;
    if ((local_b8._1_1_ >> 1 & 1) != 0) {
      if ((uStack_c8 == 0) || (*local_d0 != 0x3f)) {
        uVar13 = 0;
        if (uVar22 != 0) goto LAB_00566df4;
        goto LAB_00566c14;
      }
      local_d0 = pbVar18 + 2;
      uStack_c8 = uVar16 - 2;
      uVar13 = 1;
      if (uVar22 == 0) goto LAB_00566c14;
LAB_00566df4:
      *puVar2 = 10;
      lVar14 = (long)local_d0 - (long)pbVar23;
      goto LAB_00566dd8;
    }
    uVar13 = 0;
LAB_00566c14:
    uVar22 = (long)local_d0 - (long)pbVar20;
                    /* try { // try from 00566c20 to 00566c2b has its CatchHandler @ 00566e08 */
    uStack_d8 = uVar22;
    uVar9 = FUN_00562a0c(&local_b8,iVar6,iVar10,&local_e0,uVar13);
    goto LAB_0056663c;
  case 0x7c:
                    /* try { // try from 00566428 to 0056658f has its CatchHandler @ 00566e3c */
    FUN_00562d30(&local_b8);
  }
  uStack_c8 = uStack_c8 - 1;
  local_d0 = local_d0 + 1;
joined_r0x0056690c:
  uVar22 = 0;
  pbVar23 = (byte *)0x0;
  goto joined_r0x00566ce0;
LAB_00566ccc:
  local_d0 = local_d0 + 2;
  uStack_c8 = uStack_c8 - 2;
  uVar22 = 0;
  pbVar23 = (byte *)0x0;
joined_r0x00566ce0:
  if (uStack_c8 == 0) goto LAB_00566ce4;
  goto LAB_00566450;
}


