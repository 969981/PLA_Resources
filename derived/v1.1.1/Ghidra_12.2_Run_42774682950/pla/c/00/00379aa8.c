/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00379aa8; name: FUN_00379aa8
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_00379aa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined8 *****__src;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  int ****ppppiVar13;
  ulong uVar14;
  byte *pbVar15;
  char *pcVar16;
  char *pcVar17;
  ulong uVar18;
  uint uVar19;
  bool bVar20;
  undefined8 *****pppppuVar21;
  undefined8 ****ppppuVar22;
  undefined8 **ppuVar23;
  undefined1 *__dest;
  undefined8 *****local_150;
  undefined8 **ppuStack_148;
  undefined8 ****local_140 [5];
  byte local_118 [16];
  undefined8 ****local_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  int *****local_e0;
  undefined8 **ppuStack_d8;
  undefined1 *local_d0;
  int *****local_c0;
  undefined8 **ppuStack_b8;
  undefined1 *local_b0;
  int ****local_a0;
  ulong uStack_98;
  undefined8 ****local_90;
  int ****local_80;
  ulong uStack_78;
  undefined8 ****local_70;
  
  puVar6 = (ulong *)param_4[6];
  if (puVar6 != (ulong *)0x0) {
    local_e0 = (int *****)PTR_LAB_04373a98;
    local_100 = param_4;
    if (*puVar6 != 0xffffffffffffffff) {
      local_150 = &local_e0;
      ppuStack_148 = &local_100;
      local_c0 = (int *****)&local_150;
      std::__call_once(puVar6,&local_c0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_4 + 7) * 4)) {
  case 1:
    ppuStack_148 = (undefined8 **)0x0;
    local_140[0] = (undefined8 ****)0x0;
    local_150 = (undefined8 *****)0x2d02;
    bVar3 = *(byte *)(param_1 + 0x30);
    uVar14 = (ulong)(bVar3 >> 1);
    uVar9 = uVar14;
    if ((bVar3 & 1) != 0) {
      uVar9 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar9 == 1) {
      if ((bVar3 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) != '-') goto LAB_00379f94;
        pcVar16 = (char *)(param_1 + 0x32);
        pcVar17 = (char *)((ulong)&local_150 | 2);
        do {
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_00379f70;
          cVar4 = *pcVar17;
          cVar5 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar17 = pcVar17 + 1;
        } while (cVar5 == cVar4);
        bVar20 = false;
        uVar9 = FUN_0037b52c(param_1,&local_150,0x7fffffff);
      }
      else {
        if (**(char **)(param_1 + 0x40) != '-') goto LAB_00379f94;
LAB_00379f70:
                    /* try { // try from 00379f74 to 00379f77 has its CatchHandler @ 0037ab58 */
        FUN_003a0640(param_1 + 0x28);
        bVar20 = true;
        uVar9 = FUN_0037b52c(param_1,&local_150,0x80000000);
      }
    }
    else {
LAB_00379f94:
      bVar20 = false;
      uVar9 = FUN_0037b52c(param_1,&local_150,0x7fffffff);
    }
    if ((uVar9 & 1) == 0) {
LAB_0037a5b8:
      uVar19 = 0;
      goto LAB_0037a834;
    }
    ppppiVar13 = (int ****)local_150;
    if ((bVar20) &&
       (ppppiVar13 = (int ****)-(long)local_150, local_150 == (undefined8 *****)0x8000000000000000))
    {
      ppppiVar13 = (int ****)local_150;
    }
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      FUN_00387c60();
    }
    else {
      FUN_003878f4(param_3,param_2,param_4,ppppiVar13);
    }
    break;
  case 2:
    ppuStack_148 = (undefined8 **)0x0;
    local_140[0] = (undefined8 ****)0x0;
    local_150 = (undefined8 *****)0x2d02;
    bVar3 = *(byte *)(param_1 + 0x30);
    uVar14 = (ulong)(bVar3 >> 1);
    uVar9 = uVar14;
    if ((bVar3 & 1) != 0) {
      uVar9 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar9 == 1) {
      if ((bVar3 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '-') {
          pcVar16 = (char *)(param_1 + 0x32);
          pcVar17 = (char *)((ulong)&local_150 | 2);
          do {
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_00379ff0;
            cVar4 = *pcVar17;
            cVar5 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar17 = pcVar17 + 1;
          } while (cVar5 == cVar4);
        }
        goto LAB_0037a014;
      }
      if (**(char **)(param_1 + 0x40) != '-') goto LAB_0037a014;
LAB_00379ff0:
                    /* try { // try from 00379ff4 to 00379ff7 has its CatchHandler @ 0037ab4c */
      FUN_003a0640(param_1 + 0x28);
      bVar20 = true;
      uVar9 = FUN_0037b52c(param_1,&local_150,0x8000000000000000);
    }
    else {
LAB_0037a014:
      bVar20 = false;
      uVar9 = FUN_0037b52c(param_1,&local_150,0x7fffffffffffffff);
    }
    if ((uVar9 & 1) == 0) goto LAB_0037a5b8;
    ppppiVar13 = (int ****)local_150;
    if ((bVar20) &&
       (ppppiVar13 = (int ****)-(long)local_150, local_150 == (undefined8 *****)0x8000000000000000))
    {
      ppppiVar13 = (int ****)local_150;
    }
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      FUN_003883f8();
    }
    else {
      FUN_0038808c(param_3,param_2,param_4,ppppiVar13);
    }
    break;
  case 3:
    uVar9 = FUN_0037b52c(param_1,&local_150,0xffffffff);
    if ((uVar9 & 1) == 0) goto LAB_0037a5b8;
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      FUN_00388b90();
    }
    else {
      FUN_00388824(param_3,param_2,param_4,(ulong)local_150 & 0xffffffff);
    }
    break;
  case 4:
    uVar9 = FUN_0037b52c(param_1,&local_150,0xffffffffffffffff);
    if ((uVar9 & 1) == 0) goto LAB_0037a5b8;
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      FUN_00389328();
    }
    else {
      FUN_00388fbc(param_3,param_2,param_4,local_150);
    }
    break;
  case 5:
    uVar9 = FUN_0037b6ac(param_1,&local_150);
    if ((uVar9 & 1) == 0) goto LAB_0037a5b8;
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      FUN_0038a258();
    }
    else {
      FUN_00389eec(local_150,param_3,param_2,param_4);
    }
    break;
  case 6:
    uVar9 = FUN_0037b6ac(param_1,&local_150);
    if ((uVar9 & 1) == 0) goto LAB_0037a5b8;
    iVar2 = *(int *)((long)param_4 + 0x3c);
    FUN_003a1670(local_150);
    if (iVar2 == 3) {
      FUN_00389ac0();
    }
    else {
      FUN_00389754(param_3,param_2,param_4);
    }
    break;
  case 7:
    if (*(int *)(param_1 + 0x28) != 3) {
      ppuStack_148 = (undefined8 **)0x0;
      local_140[0] = (undefined8 ****)0x0;
      local_150 = (undefined8 *****)0x0;
                    /* try { // try from 00379e60 to 00379e6b has its CatchHandler @ 0037abcc */
      uVar9 = FUN_00378994(param_1,&local_150);
      if ((uVar9 & 1) != 0) {
        ppuVar23 = (undefined8 **)((ulong)local_150 >> 1 & 0x7f);
        if (((ulong)local_150 & 1) != 0) {
          ppuVar23 = ppuStack_148;
        }
        if (ppuVar23 == (undefined8 **)0x1) {
          ppppuVar11 = (undefined8 ****)((ulong)&local_150 | 1);
          if (((ulong)local_150 & 1) != 0) {
            ppppuVar11 = local_140[0];
          }
          if (*(char *)ppppuVar11 == 't') {
LAB_0037a62c:
            if (*(int *)((long)param_4 + 0x3c) == 3) {
                    /* try { // try from 0037a638 to 0037a64b has its CatchHandler @ 0037abcc */
              FUN_0038aa00(param_3,param_2,param_4,1);
            }
            else {
                    /* try { // try from 0037a8c4 to 0037a91f has its CatchHandler @ 0037abcc */
              FUN_0038a684(param_3,param_2,param_4,1);
            }
            goto LAB_0037a718;
          }
          if (*(char *)ppppuVar11 == 'f') goto LAB_0037a8e8;
        }
        else if (ppuVar23 == (undefined8 **)0x5) {
          ppppuVar11 = (undefined8 ****)((ulong)&local_150 | 1);
          if (((ulong)local_150 & 1) != 0) {
            ppppuVar11 = local_140[0];
          }
          if ((*(int *)ppppuVar11 == 0x736c6166 && *(char *)((long)ppppuVar11 + 4) == 'e') ||
             (*(int *)ppppuVar11 == 0x736c6146 && *(char *)((long)ppppuVar11 + 4) == 'e')) {
LAB_0037a8e8:
            if (*(int *)((long)param_4 + 0x3c) == 3) {
              FUN_0038aa00(param_3,param_2,param_4,0);
            }
            else {
              FUN_0038a684(param_3,param_2,param_4,0);
            }
            goto LAB_0037a718;
          }
        }
        else if (ppuVar23 == (undefined8 **)0x4) {
          ppppuVar11 = (undefined8 ****)((ulong)&local_150 | 1);
          if (((ulong)local_150 & 1) != 0) {
            ppppuVar11 = local_140[0];
          }
          if ((*(int *)ppppuVar11 == 0x65757274) || (*(int *)ppppuVar11 == 0x65757254))
          goto LAB_0037a62c;
        }
                    /* try { // try from 0037a4b8 to 0037a4c7 has its CatchHandler @ 0037ab44 */
        FUN_0034b2f0(local_118,"Invalid value for boolean field \"",*param_4);
                    /* try { // try from 0037a4c8 to 0037a4db has its CatchHandler @ 0037ab30 */
        puVar10 = (undefined8 *)FUN_002e4094(local_118,"\". Value: \"",0xb);
        uStack_f8 = puVar10[1];
        local_100 = (undefined8 *)*puVar10;
        local_f0 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        ppuVar23 = (undefined8 **)((ulong)local_150 >> 1 & 0x7f);
        ppppuVar11 = (undefined8 ****)((ulong)&local_150 | 1);
        if (((ulong)local_150 & 1) != 0) {
          ppuVar23 = ppuStack_148;
          ppppuVar11 = local_140[0];
        }
                    /* try { // try from 0037a514 to 0037a51b has its CatchHandler @ 0037ab08 */
        puVar10 = (undefined8 *)FUN_002e4094(&local_100,ppppuVar11,ppuVar23);
        ppuStack_d8 = (undefined8 **)puVar10[1];
        local_e0 = (int *****)*puVar10;
        local_d0 = (undefined1 *)puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
                    /* try { // try from 0037a534 to 0037a547 has its CatchHandler @ 0037aae0 */
        puVar10 = (undefined8 *)FUN_002e4094(&local_e0,&DAT_038c838e,2);
        ppuStack_b8 = (undefined8 **)puVar10[1];
        local_c0 = (int *****)*puVar10;
        local_b0 = (undefined1 *)puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
                    /* try { // try from 0037a564 to 0037a56f has its CatchHandler @ 0037aa9c */
        FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_c0);
        if (((ulong)local_c0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_b0);
        }
        if (((ulong)local_e0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_d0);
        }
        if (((ulong)local_100 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_f0);
        }
        if ((local_118[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_108);
        }
        goto LAB_0037a5a0;
      }
      if (((ulong)local_150 & 1) == 0) goto LAB_0037a5b8;
LAB_0037a5a8:
      FUN_002e2ea0(PTR_LAB_04373088,local_140[0]);
      goto LAB_0037a5b8;
    }
    uVar9 = FUN_0037b52c(param_1,&local_150,1);
    if ((uVar9 & 1) == 0) goto LAB_0037a5b8;
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      FUN_0038aa00(param_3,param_2,param_4,local_150 != (undefined8 *****)0x0);
    }
    else {
      FUN_0038a684(param_3,param_2,param_4,local_150 != (undefined8 *****)0x0);
    }
    break;
  case 8:
    ppuStack_b8 = (undefined8 **)0x0;
    local_b0 = (undefined1 *)0x0;
    local_c0 = (int *****)0x0;
                    /* try { // try from 00379cc0 to 00379cc7 has its CatchHandler @ 0037abe4 */
    uVar7 = FUN_00346ae8(param_4);
    if (*(int *)(param_1 + 0x28) == 2) {
                    /* try { // try from 00379cd8 to 00379d1b has its CatchHandler @ 0037ac00 */
      uVar9 = FUN_00378994(param_1,&local_c0);
      if ((uVar9 & 1) == 0) {
LAB_0037a80c:
        uVar19 = 0;
      }
      else {
        lVar8 = FUN_00343164(uVar7,&local_c0);
        pppppuVar21 = (undefined8 *****)0x7fffffffffffffff;
        if (lVar8 != 0) goto LAB_00379d00;
LAB_0037a340:
        if ((pppppuVar21 != (undefined8 *****)0x7fffffffffffffff) &&
           (uVar9 = FUN_0038e410(param_3), (uVar9 & 1) != 0)) {
          if (*(int *)((long)param_4 + 0x3c) == 3) {
            FUN_0038bff0(param_3,param_2,param_4,(ulong)pppppuVar21 & 0xffffffff);
          }
          else {
                    /* try { // try from 0037a974 to 0037a987 has its CatchHandler @ 0037ac00 */
            FUN_0038bb40(param_3,param_2,param_4,(ulong)pppppuVar21 & 0xffffffff);
          }
LAB_0037a988:
          bVar20 = true;
          param_4 = (undefined8 *)0x1;
          goto joined_r0x0037a1fc;
        }
        if (*(char *)(param_1 + 0xe7) == '\0') {
                    /* try { // try from 0037a734 to 0037a747 has its CatchHandler @ 0037a9f4 */
          FUN_0034b2f0(local_118,"Unknown enumeration value of \"",&local_c0);
                    /* try { // try from 0037a748 to 0037a75b has its CatchHandler @ 0037a9e4 */
          puVar10 = (undefined8 *)FUN_002e4094(local_118,"\" for field \"",0xd);
          uStack_f8 = puVar10[1];
          local_100 = (undefined8 *)*puVar10;
          local_f0 = puVar10[2];
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0;
          pbVar15 = (byte *)*param_4;
          uVar9 = *(ulong *)(pbVar15 + 8);
          pbVar1 = *(byte **)(pbVar15 + 0x10);
          if ((*pbVar15 & 1) == 0) {
            pbVar1 = pbVar15 + 1;
            uVar9 = (ulong)(*pbVar15 >> 1);
          }
                    /* try { // try from 0037a790 to 0037a797 has its CatchHandler @ 0037a9d4 */
          puVar10 = (undefined8 *)FUN_002e4094(&local_100,pbVar1,uVar9);
          ppuStack_d8 = (undefined8 **)puVar10[1];
          local_e0 = (int *****)*puVar10;
          local_d0 = (undefined1 *)puVar10[2];
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0;
                    /* try { // try from 0037a7b0 to 0037a7c3 has its CatchHandler @ 0037a9c4 */
          puVar10 = (undefined8 *)FUN_002e4094(&local_e0,&DAT_038c838e,2);
          ppuStack_148 = (undefined8 **)puVar10[1];
          local_150 = (undefined8 *****)*puVar10;
          local_140[0] = (undefined8 ****)puVar10[2];
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0;
                    /* try { // try from 0037a7e0 to 0037a7eb has its CatchHandler @ 0037a9b4 */
          FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                       &local_150);
          if (((ulong)local_150 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_140[0]);
          }
          if (((ulong)local_e0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_d0);
          }
          if (((ulong)local_100 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_f0);
          }
          if ((local_118[0] & 1) != 0) {
            goto LAB_0037a164;
          }
          goto LAB_0037a80c;
        }
                    /* try { // try from 0037a384 to 0037a397 has its CatchHandler @ 0037aa98 */
        FUN_0034b2f0(local_118,"Unknown enumeration value of \"",&local_c0);
                    /* try { // try from 0037a398 to 0037a3ab has its CatchHandler @ 0037aa88 */
        puVar10 = (undefined8 *)FUN_002e4094(local_118,"\" for field \"",0xd);
        uStack_f8 = puVar10[1];
        local_100 = (undefined8 *)*puVar10;
        local_f0 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        pbVar15 = (byte *)*param_4;
        uVar9 = *(ulong *)(pbVar15 + 8);
        pbVar1 = *(byte **)(pbVar15 + 0x10);
        if ((*pbVar15 & 1) == 0) {
          pbVar1 = pbVar15 + 1;
          uVar9 = (ulong)(*pbVar15 >> 1);
        }
                    /* try { // try from 0037a3e0 to 0037a3e7 has its CatchHandler @ 0037aa78 */
        puVar10 = (undefined8 *)FUN_002e4094(&local_100,pbVar1,uVar9);
        ppuStack_d8 = (undefined8 **)puVar10[1];
        local_e0 = (int *****)*puVar10;
        local_d0 = (undefined1 *)puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
                    /* try { // try from 0037a400 to 0037a413 has its CatchHandler @ 0037aa54 */
        puVar10 = (undefined8 *)FUN_002e4094(&local_e0,&DAT_038c838e,2);
        ppuStack_148 = (undefined8 **)puVar10[1];
        local_150 = (undefined8 *****)*puVar10;
        local_140[0] = (undefined8 ****)puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
                    /* try { // try from 0037a430 to 0037a43b has its CatchHandler @ 0037a9fc */
        FUN_003758fc(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_150);
        if (((ulong)local_150 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_140[0]);
        }
        if (((ulong)local_e0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_d0);
        }
        if (((ulong)local_100 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_f0);
        }
        if ((local_118[0] & 1) == 0) goto LAB_0037a988;
        FUN_002e2ea0(PTR_LAB_04373088,local_108);
        uVar19 = 1;
      }
      bVar20 = true;
    }
    else {
      ppuStack_148 = (undefined8 **)0x0;
      local_140[0] = (undefined8 ****)0x0;
      local_150 = (undefined8 *****)0x2d02;
      bVar3 = *(byte *)(param_1 + 0x30);
      uVar14 = (ulong)(bVar3 >> 1);
      uVar9 = uVar14;
      if ((bVar3 & 1) != 0) {
        uVar9 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar9 == 1) {
        if ((bVar3 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '-') {
            pcVar16 = (char *)(param_1 + 0x32);
            pcVar17 = (char *)((ulong)&local_150 | 2);
            uVar18 = uVar14;
            do {
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) goto LAB_0037a0dc;
              cVar4 = *pcVar17;
              cVar5 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              pcVar17 = pcVar17 + 1;
            } while (cVar5 == cVar4);
          }
          goto LAB_0037a0d4;
        }
        if (**(char **)(param_1 + 0x40) != '-') goto LAB_0037a0d4;
LAB_0037a0dc:
        ppuStack_148 = (undefined8 **)0x0;
        local_140[0] = (undefined8 ****)0x0;
        local_150 = (undefined8 *****)0x2d02;
        if (uVar9 == 1) {
          if ((bVar3 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) != '-') goto LAB_0037a228;
            uVar12 = 0x7fffffff;
            pcVar16 = (char *)(param_1 + 0x32);
            pcVar17 = (char *)((ulong)&local_150 | 2);
            do {
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) goto LAB_0037a214;
              cVar4 = *pcVar17;
              cVar5 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              pcVar17 = pcVar17 + 1;
            } while (cVar5 == cVar4);
            bVar20 = false;
          }
          else {
            if (**(char **)(param_1 + 0x40) != '-') goto LAB_0037a228;
LAB_0037a214:
                    /* try { // try from 0037a218 to 0037a21b has its CatchHandler @ 0037a9f8 */
            FUN_003a0640(param_1 + 0x28);
            bVar20 = true;
            uVar12 = 0x80000000;
          }
        }
        else {
LAB_0037a228:
          bVar20 = false;
          uVar12 = 0x7fffffff;
        }
                    /* try { // try from 0037a230 to 0037a23b has its CatchHandler @ 0037ac00 */
        uVar9 = FUN_0037b52c(param_1,&local_150,uVar12);
        if ((uVar9 & 1) == 0) goto LAB_0037a80c;
        pppppuVar21 = local_150;
        if ((bVar20) &&
           (pppppuVar21 = (undefined8 *****)-(long)local_150,
           local_150 == (undefined8 *****)0x8000000000000000)) {
          pppppuVar21 = local_150;
        }
        local_150 = local_140;
                    /* try { // try from 0037a260 to 0037a26b has its CatchHandler @ 0037ab48 */
        lVar8 = FUN_00320710(pppppuVar21,local_140);
        __src = local_150;
        ppuVar23 = (undefined8 **)(lVar8 - (long)local_140);
        local_e0 = (int *****)0x0;
        ppuStack_d8 = (undefined8 **)0x0;
        local_d0 = (undefined1 *)0x0;
        ppuStack_148 = ppuVar23;
        if ((undefined8 **)0xffffffffffffffef < ppuVar23) {
                    /* try { // try from 0037a99c to 0037a9a3 has its CatchHandler @ 0037ab48 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (&DAT_00000016 < ppuVar23) {
          __dest = (undefined1 *)
                   FUN_002e2e80(PTR_FUN_04373078,(ulong)(ppuVar23 + 2) & 0xfffffffffffffff0);
          local_e0 = (int *****)((ulong)(ppuVar23 + 2) & 0xfffffffffffffff0 | 1);
          ppuStack_d8 = ppuVar23;
          local_d0 = __dest;
LAB_0037a2d0:
          memcpy(__dest,__src,(size_t)ppuVar23);
        }
        else {
          local_e0 = (int *****)(ulong)(byte)((int)ppuVar23 << 1);
          __dest = (undefined1 *)((ulong)&local_e0 | 1);
          if (ppuVar23 != (undefined8 **)0x0) goto LAB_0037a2d0;
        }
        __dest[(long)ppuVar23] = 0;
        if (((ulong)local_c0 & 1) != 0) {
          *local_b0 = 0;
          ppuStack_b8 = (undefined8 **)0x0;
          if (((ulong)local_c0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_b0);
          }
        }
        local_b0 = local_d0;
        ppuStack_b8 = ppuStack_d8;
        local_c0 = local_e0;
                    /* try { // try from 0037a32c to 0037a377 has its CatchHandler @ 0037ac00 */
        lVar8 = FUN_00343194(uVar7,(ulong)pppppuVar21 & 0xffffffff);
        if (lVar8 == 0) goto LAB_0037a340;
LAB_00379d00:
        if (*(int *)((long)param_4 + 0x3c) == 3) {
          FUN_0038be60(param_3,param_2,param_4);
        }
        else {
                    /* try { // try from 0037a1e4 to 0037a1f3 has its CatchHandler @ 0037ac00 */
          FUN_0038b8c0(param_3,param_2,param_4);
        }
        bVar20 = false;
joined_r0x0037a1fc:
        uVar19 = (uint)param_4;
      }
      else {
LAB_0037a0d4:
        if (*(int *)(param_1 + 0x28) == 3) goto LAB_0037a0dc;
                    /* try { // try from 0037a138 to 0037a147 has its CatchHandler @ 0037ab8c */
        FUN_0034b2f0(&local_150,"Expected integer or identifier, got: ");
                    /* try { // try from 0037a14c to 0037a157 has its CatchHandler @ 0037ab64 */
        FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_150);
        if (((ulong)local_150 & 1) == 0) goto LAB_0037a80c;
        local_108 = local_140[0];
LAB_0037a164:
        FUN_002e2ea0(PTR_LAB_04373088,local_108);
        uVar19 = 0;
        bVar20 = true;
      }
    }
    if (((ulong)local_c0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_b0);
    }
    if (bVar20) goto LAB_0037a834;
    break;
  case 9:
    ppuStack_148 = (undefined8 **)0x0;
    local_140[0] = (undefined8 ****)0x0;
    local_150 = (undefined8 *****)0x0;
                    /* try { // try from 00379e18 to 00379e23 has its CatchHandler @ 0037abd0 */
    uVar9 = FUN_00379638(param_1,&local_150);
    ppppuVar11 = local_140[0];
    ppuVar23 = ppuStack_148;
    if ((uVar9 & 1) == 0) {
LAB_0037a5a0:
      if (((ulong)local_150 & 1) != 0) goto LAB_0037a5a8;
      goto LAB_0037a5b8;
    }
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      uStack_78 = 0;
      local_70 = (undefined8 ****)0x0;
      local_80 = (int ****)0x0;
      if (((ulong)local_150 & 1) == 0) {
        local_70 = local_140[0];
        uStack_78 = (ulong)ppuStack_148;
        local_80 = (int ****)local_150;
      }
      else {
        if (0xffffffffffffffef < ppuStack_148) {
                    /* try { // try from 0037a9a4 to 0037a9b3 has its CatchHandler @ 0037abd0 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (ppuStack_148 < 0x17) {
          local_80 = (int ****)(ulong)(byte)((int)ppuStack_148 << 1);
          ppppuVar22 = (undefined8 ****)((ulong)&local_80 | 1);
          if (ppuStack_148 != (undefined8 **)0x0) goto LAB_0037a678;
        }
        else {
          uVar9 = (long)ppuStack_148 + 0x10U & 0xfffffffffffffff0;
          ppppuVar22 = (undefined8 ****)FUN_002e2e80(PTR_FUN_04373078,uVar9);
          local_80 = (int ****)(uVar9 | 1);
          uStack_78 = (ulong)ppuVar23;
          local_70 = ppppuVar22;
LAB_0037a678:
          memcpy(ppppuVar22,ppppuVar11,(size_t)ppuVar23);
        }
        *(undefined1 *)((long)ppppuVar22 + (long)ppuVar23) = 0;
      }
                    /* try { // try from 0037a68c to 0037a69f has its CatchHandler @ 0037aba4 */
      FUN_0038b32c(param_3,param_2,param_4,&local_80);
      if (((ulong)local_80 & 1) != 0) {
        ppppuVar11 = local_70;
        goto LAB_0037a70c;
      }
    }
    else {
      uStack_98 = 0;
      local_90 = (undefined8 ****)0x0;
      local_a0 = (int ****)0x0;
      if (((ulong)local_150 & 1) == 0) {
        local_90 = local_140[0];
        uStack_98 = (ulong)ppuStack_148;
        local_a0 = (int ****)local_150;
      }
      else {
        if (0xffffffffffffffef < ppuStack_148) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (ppuStack_148 < 0x17) {
          local_a0 = (int ****)(ulong)(byte)((int)ppuStack_148 << 1);
          ppppuVar22 = (undefined8 ****)((ulong)&local_a0 | 1);
          if (ppuStack_148 != (undefined8 **)0x0) goto LAB_0037a6d8;
        }
        else {
          uVar9 = (long)ppuStack_148 + 0x10U & 0xfffffffffffffff0;
          ppppuVar22 = (undefined8 ****)FUN_002e2e80(PTR_FUN_04373078,uVar9);
          local_a0 = (int ****)(uVar9 | 1);
          uStack_98 = (ulong)ppuVar23;
          local_90 = ppppuVar22;
LAB_0037a6d8:
          memcpy(ppppuVar22,ppppuVar11,(size_t)ppuVar23);
        }
        *(undefined1 *)((long)ppppuVar22 + (long)ppuVar23) = 0;
      }
                    /* try { // try from 0037a6ec to 0037a6ff has its CatchHandler @ 0037ab90 */
      FUN_00385d54(param_3,param_2,param_4,&local_a0);
      if (((ulong)local_a0 & 1) != 0) {
        ppppuVar11 = local_90;
LAB_0037a70c:
        FUN_002e2ea0(PTR_LAB_04373088,ppppuVar11);
      }
    }
LAB_0037a718:
    if (((ulong)local_150 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_140[0]);
    }
    break;
  case 10:
    FUN_0030f640(&local_150,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/text_format.cc"
                 ,0x32c);
                    /* try { // try from 00379c20 to 00379c33 has its CatchHandler @ 0037abec */
    uVar7 = FUN_0030f3ac(&local_150,"Reached an unintended state: CPPTYPE_MESSAGE");
                    /* try { // try from 00379c34 to 00379c3b has its CatchHandler @ 0037abe8 */
    FUN_0030f41c(&local_c0,uVar7);
    FUN_0030f658(&local_150);
  }
  uVar19 = 1;
LAB_0037a834:
  return uVar19 & 1;
}


