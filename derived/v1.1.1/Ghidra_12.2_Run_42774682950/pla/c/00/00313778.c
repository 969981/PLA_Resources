/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00313778; name: FUN_00313778
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00313778(undefined *param_1,long *param_2,byte *param_3,long *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  int *piVar13;
  void *pvVar14;
  void *pvVar15;
  undefined8 uVar16;
  undefined8 extraout_x1;
  uint uVar17;
  ulong uVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined **ppuVar23;
  ulong *puVar24;
  ulong *puVar25;
  byte *pbVar26;
  uint uVar27;
  size_t sVar28;
  undefined **ppuVar29;
  long *plVar30;
  undefined ***local_f0;
  ulong *local_e8;
  byte local_e0;
  undefined8 local_d0;
  int local_c8;
  undefined **local_b0;
  undefined **local_a8;
  ulong local_a0 [2];
  undefined **local_90;
  int local_88;
  undefined1 auStack_80 [16];
  undefined *local_70;
  undefined *puStack_68;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  if ((param_1[0x43] != '\0') &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x48) != '\0')) {
    puVar8 = *(ulong **)(param_1 + 0x30);
    if (puVar8 != (ulong *)0x0) {
      puStack_68 = PTR_LAB_04373a98;
      local_70 = param_1;
      if (*puVar8 != 0xffffffffffffffff) {
        local_b0 = &puStack_68;
        local_a8 = &local_70;
        local_f0 = &local_b0;
        std::__call_once(puVar8,&local_f0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    if ((*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_1 + 0x38) * 4) == 10) &&
       (*(int *)(param_1 + 0x3c) != 3)) {
      pbVar12 = (byte *)FUN_0031716c(param_1,param_2,param_3,param_4);
      return pbVar12;
    }
  }
  puVar8 = *(ulong **)(param_1 + 0x30);
  if (puVar8 != (ulong *)0x0) {
    puStack_68 = PTR_LAB_04373a98;
    local_70 = param_1;
    if (*puVar8 != 0xffffffffffffffff) {
      local_b0 = &puStack_68;
      local_a8 = &local_70;
      local_f0 = &local_b0;
      std::__call_once(puVar8,&local_f0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if ((*(int *)(param_1 + 0x38) == 0xb) && (uVar9 = FUN_00344344(param_1), (uVar9 & 1) != 0)) {
    FUN_0038e920(extraout_x1,param_2,param_1);
    uVar9 = FUN_00395ca8();
    if ((uVar9 & 1) == 0) goto LAB_00313990;
    if (*(char *)((long)param_4 + 0x3a) == '\0') {
      FUN_0038e180(&local_b0,extraout_x1,param_2,param_1);
      puVar3 = PTR_LAB_04373088;
      while( true ) {
                    /* try { // try from 00315014 to 00315027 has its CatchHandler @ 0031701c */
        FUN_0038e2b4(&local_f0,extraout_x1,param_2,param_1);
                    /* try { // try from 00315034 to 0031503f has its CatchHandler @ 00317020 */
        uVar9 = (**(code **)(*local_a8 + 0x28))(local_a8,&local_b0,&local_f0);
                    /* try { // try from 00315050 to 00315057 has its CatchHandler @ 00317064 */
        (**(code **)(*local_e8 + 0x80))(local_e8,&local_f0);
        if ((local_c8 == 9) && ((local_e0 & 1) != 0)) {
          FUN_002e2ea0(puVar3,local_d0);
        }
        if ((uVar9 & 1) != 0) break;
                    /* try { // try from 0031507c to 003150ab has its CatchHandler @ 00317078 */
        param_3 = (byte *)FUN_00317760(param_1,local_a0,auStack_80,param_3,param_4);
        (**(code **)(*local_a8 + 0x90))(local_a8,&local_b0);
      }
                    /* try { // try from 003150bc to 003150c3 has its CatchHandler @ 00316f58 */
      (**(code **)(*local_a8 + 0x80))(local_a8,&local_b0);
      if (local_88 != 9) {
        return param_3;
      }
      if ((local_a0[0] & 1) == 0) {
        return param_3;
      }
      ppuVar23 = local_90;
    }
    else {
      FUN_003172fc(&local_b0,param_2,extraout_x1,param_1);
      ppuVar23 = local_b0;
      puVar3 = PTR_LAB_04373088;
      ppuVar29 = local_b0;
      if (local_b0 != local_a8) {
        do {
          local_f0 = (undefined ***)0x0;
          local_e8 = (ulong *)((ulong)local_e8 & 0xffffffff00000000);
                    /* try { // try from 003138dc to 0031390b has its CatchHandler @ 003170b0 */
          FUN_0038dfdc(extraout_x1,param_2,param_1,ppuVar23,&local_f0);
          param_3 = (byte *)FUN_00317760(param_1,ppuVar23,&local_f0,param_3,param_4);
          ppuVar23 = ppuVar23 + 4;
          puVar3 = PTR_LAB_04373088;
          ppuVar29 = local_b0;
        } while (ppuVar23 != local_a8);
      }
      if (ppuVar29 == (undefined **)0x0) {
        PTR_LAB_04373088 = puVar3;
        return param_3;
      }
      PTR_LAB_04373088 = puVar3;
      local_b0 = ppuVar29;
      if (ppuVar23 == ppuVar29) {
        ppuVar23 = ppuVar29;
        local_a8 = ppuVar29;
      }
      else {
        iVar6 = *(int *)(ppuVar23 + -1);
        while( true ) {
          if ((iVar6 == 9) && (((ulong)ppuVar23[-4] & 1) != 0)) {
            FUN_002e2ea0(puVar3,ppuVar23[-2]);
          }
          if (ppuVar29 == ppuVar23 + -4) break;
          iVar6 = *(int *)(ppuVar23 + -5);
          ppuVar23 = ppuVar23 + -4;
        }
        ppuVar23 = local_b0;
        local_a8 = ppuVar29;
      }
    }
    goto LAB_00316afc;
  }
LAB_00313990:
  if (*(int *)(param_1 + 0x3c) == 3) {
    uVar5 = FUN_00386cec(extraout_x1,param_2,param_1);
    uVar9 = (ulong)uVar5;
    if (1 < (int)uVar5) {
      puVar8 = *(ulong **)(param_1 + 0x30);
      if (puVar8 != (ulong *)0x0) {
        puStack_68 = PTR_LAB_04373a98;
        local_70 = param_1;
        if (*puVar8 != 0xffffffffffffffff) {
          local_b0 = &puStack_68;
          local_a8 = &local_70;
          local_f0 = &local_b0;
                    /* try { // try from 003139ec to 00313a17 has its CatchHandler @ 00317014 */
          std::__call_once(puVar8,&local_f0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
      }
      if (((*(int *)(param_1 + 0x38) == 0xb) && (uVar10 = FUN_00344344(param_1), (uVar10 & 1) != 0))
         && (*(char *)((long)param_4 + 0x3a) != '\0')) {
                    /* try { // try from 00313a24 to 00313a3b has its CatchHandler @ 00316f4c */
        FUN_003182d8(&local_b0,param_2,uVar9,extraout_x1,param_1);
        ppuVar23 = local_b0;
        ppuVar29 = local_a8;
        goto LAB_00313a8c;
      }
    }
    ppuVar23 = (undefined **)0x0;
    ppuVar29 = (undefined **)0x0;
  }
  else if (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x4b) == '\0') {
    uVar5 = FUN_00386684(extraout_x1,param_2,param_1);
    ppuVar23 = (undefined **)0x0;
    ppuVar29 = (undefined **)0x0;
    uVar9 = (ulong)(uVar5 & 1);
  }
  else {
    ppuVar23 = (undefined **)0x0;
    ppuVar29 = (undefined **)0x0;
    uVar9 = 1;
  }
LAB_00313a8c:
                    /* try { // try from 00313a8c to 00313aef has its CatchHandler @ 00317014 */
  uVar10 = FUN_0034c24c(param_1);
  puVar3 = PTR_LAB_04373a98;
  if ((uVar10 & 1) == 0) {
    if (0 < (int)uVar9) {
      uVar10 = 0;
      if (param_3 < (byte *)*param_4) goto LAB_00313c50;
LAB_00314ef8:
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      puVar8 = *(ulong **)(param_1 + 0x30);
      do {
        if (puVar8 != (ulong *)0x0) {
          puStack_68 = puVar3;
          local_70 = param_1;
          if (*puVar8 != 0xffffffffffffffff) {
            local_a8 = &local_70;
            local_b0 = &puStack_68;
            local_f0 = &local_b0;
                    /* try { // try from 00313c80 to 00313c8f has its CatchHandler @ 00317140 */
            std::__call_once(puVar8,&local_f0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
          }
        }
        switch(*(undefined4 *)(param_1 + 0x38)) {
        case 1:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00313cbc to 00313ccf has its CatchHandler @ 00316fa4 */
            uVar16 = FUN_0038a0c4(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 0031425c to 0031426b has its CatchHandler @ 00316fa4 */
            uVar16 = FUN_00389d60(extraout_x1,param_2,param_1);
          }
          uVar27 = *(uint *)(param_1 + 0x44);
          uVar5 = uVar27 << 3 | 1;
          if (uVar5 < 0x80) {
            *param_3 = (byte)uVar5;
            *(undefined8 *)(param_3 + 1) = uVar16;
          }
          else {
            *param_3 = (byte)(uVar27 << 3) | 0x81;
            if ((uVar27 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar27 >> 4);
              pbVar12 = param_3 + 2;
              param_3 = param_3 + 10;
              *(undefined8 *)pbVar12 = uVar16;
              break;
            }
            pbVar12 = param_3 + 2;
            uVar5 = uVar27 >> 4 & 0x1ffffff;
            do {
              param_3 = pbVar12;
              uVar27 = uVar5 >> 7;
              param_3[-1] = (byte)uVar5 | 0x80;
              uVar17 = uVar5 >> 0xe;
              pbVar12 = param_3 + 1;
              uVar5 = uVar27;
            } while (uVar17 != 0);
            *param_3 = (byte)uVar27;
            *(undefined8 *)(param_3 + 1) = uVar16;
          }
          param_3 = param_3 + 9;
          break;
        case 2:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00313fa8 to 00313fbb has its CatchHandler @ 00316fa8 */
            uVar7 = FUN_0038992c(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 00314298 to 003142a7 has its CatchHandler @ 00316fa8 */
            uVar7 = FUN_003895c8(extraout_x1,param_2,param_1);
          }
          uVar27 = *(uint *)(param_1 + 0x44);
          uVar5 = uVar27 << 3 | 5;
          if (uVar5 < 0x80) {
            pbVar12 = param_3 + 1;
            *param_3 = (byte)uVar5;
            param_3 = param_3 + 5;
            *(undefined4 *)pbVar12 = uVar7;
          }
          else {
            *param_3 = (byte)(uVar27 << 3) | 0x85;
            if ((uVar27 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar27 >> 4);
              pbVar12 = param_3 + 2;
              param_3 = param_3 + 6;
              *(undefined4 *)pbVar12 = uVar7;
            }
            else {
              pbVar12 = param_3 + 2;
              uVar5 = uVar27 >> 4 & 0x1ffffff;
              do {
                pbVar26 = pbVar12;
                uVar27 = uVar5 >> 7;
                pbVar26[-1] = (byte)uVar5 | 0x80;
                uVar17 = uVar5 >> 0xe;
                pbVar12 = pbVar26 + 1;
                uVar5 = uVar27;
              } while (uVar17 != 0);
              *pbVar26 = (byte)uVar27;
              param_3 = pbVar26 + 5;
              *(undefined4 *)(pbVar26 + 1) = uVar7;
            }
          }
          break;
        case 3:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00313eac to 00313ebf has its CatchHandler @ 00316fac */
            uVar18 = FUN_00388264(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 003141e4 to 003141f3 has its CatchHandler @ 00316fac */
            uVar18 = FUN_00387f00(extraout_x1,param_2,param_1);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          bVar4 = (byte)(uVar5 * 8);
          if (uVar5 * 8 < 0x80) {
            pbVar12 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar12 = param_3 + 2;
            }
            else {
              pbVar12 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar26 = pbVar12;
                uVar27 = uVar5 >> 7;
                pbVar26[-1] = (byte)uVar5 | 0x80;
                pbVar12 = pbVar26 + 1;
                uVar17 = uVar5 >> 0xe;
                uVar5 = uVar27;
              } while (uVar17 != 0);
              *pbVar26 = (byte)uVar27;
            }
          }
          if (uVar18 < 0x80) {
            param_3 = pbVar12 + 1;
            *pbVar12 = (byte)uVar18;
          }
          else {
            *pbVar12 = (byte)uVar18 | 0x80;
            uVar22 = uVar18 >> 7;
            if (uVar18 >> 0xe == 0) {
LAB_00313c30:
              pbVar12[1] = (byte)uVar22;
              param_3 = pbVar12 + 2;
              goto switchD_00313cac_default;
            }
            param_3 = pbVar12 + 2;
            do {
              pbVar12 = param_3;
              uVar18 = uVar22 >> 7;
              pbVar12[-1] = (byte)uVar22 | 0x80;
              param_3 = pbVar12 + 1;
              uVar21 = uVar22 >> 0xe;
              uVar22 = uVar18;
            } while (uVar21 != 0);
            *pbVar12 = (byte)uVar18;
          }
          break;
        case 4:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00313f20 to 00313f33 has its CatchHandler @ 00316fb0 */
            uVar18 = FUN_00389194(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 00314234 to 00314243 has its CatchHandler @ 00316fb0 */
            uVar18 = FUN_00388e30(extraout_x1,param_2,param_1);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          bVar4 = (byte)(uVar5 * 8);
          if (uVar5 * 8 < 0x80) {
            pbVar12 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar12 = param_3 + 2;
            }
            else {
              pbVar12 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar26 = pbVar12;
                uVar27 = uVar5 >> 7;
                pbVar26[-1] = (byte)uVar5 | 0x80;
                pbVar12 = pbVar26 + 1;
                uVar17 = uVar5 >> 0xe;
                uVar5 = uVar27;
              } while (uVar17 != 0);
              *pbVar26 = (byte)uVar27;
            }
          }
          if (uVar18 < 0x80) {
            *pbVar12 = (byte)uVar18;
joined_r0x00313df8:
            param_3 = pbVar12 + 1;
          }
          else {
            *pbVar12 = (byte)uVar18 | 0x80;
            uVar22 = uVar18 >> 7;
            if (uVar18 >> 0xe == 0) goto LAB_00313c30;
            param_3 = pbVar12 + 2;
            do {
              pbVar12 = param_3;
              uVar18 = uVar22 >> 7;
              pbVar12[-1] = (byte)uVar22 | 0x80;
              param_3 = pbVar12 + 1;
              uVar21 = uVar22 >> 0xe;
              uVar22 = uVar18;
            } while (uVar21 != 0);
            *pbVar12 = (byte)uVar18;
          }
          break;
        case 5:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00313dbc to 00313dcf has its CatchHandler @ 00316fb4 */
            uVar5 = FUN_00387acc(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 00314190 to 0031419f has its CatchHandler @ 00316fb4 */
            uVar5 = FUN_00387768(extraout_x1,param_2,param_1);
          }
          uVar27 = *(uint *)(param_1 + 0x44);
          bVar4 = (byte)(uVar27 * 8);
          if (uVar27 * 8 < 0x80) {
            pbVar12 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar27 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar27 >> 4);
              pbVar12 = param_3 + 2;
            }
            else {
              pbVar12 = param_3 + 2;
              uVar27 = uVar27 >> 4 & 0x1ffffff;
              do {
                pbVar26 = pbVar12;
                uVar17 = uVar27 >> 7;
                pbVar26[-1] = (byte)uVar27 | 0x80;
                pbVar12 = pbVar26 + 1;
                uVar1 = uVar27 >> 0xe;
                uVar27 = uVar17;
              } while (uVar1 != 0);
              *pbVar26 = (byte)uVar17;
            }
          }
          if (uVar5 < 0x80) {
            *pbVar12 = (byte)uVar5;
            goto joined_r0x00313df8;
          }
          *pbVar12 = (byte)uVar5 | 0x80;
          uVar22 = (ulong)(long)(int)uVar5 >> 7;
          if (uVar5 >> 0xe == 0) goto LAB_00313c30;
          param_3 = pbVar12 + 2;
          do {
            pbVar12 = param_3;
            uVar18 = uVar22 >> 7;
            pbVar12[-1] = (byte)uVar22 | 0x80;
            param_3 = pbVar12 + 1;
            uVar21 = uVar22 >> 0xe;
            uVar22 = uVar18;
          } while (uVar21 != 0);
          *pbVar12 = (byte)uVar18;
          break;
        case 6:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00314024 to 00314037 has its CatchHandler @ 00316fb8 */
            uVar16 = FUN_00389194(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 003142e8 to 003142f7 has its CatchHandler @ 00316fb8 */
            uVar16 = FUN_00388e30(extraout_x1,param_2,param_1);
          }
          uVar27 = *(uint *)(param_1 + 0x44);
          uVar5 = uVar27 << 3 | 1;
          if (uVar5 < 0x80) {
            pbVar12 = param_3 + 1;
            *param_3 = (byte)uVar5;
            param_3 = param_3 + 9;
            *(undefined8 *)pbVar12 = uVar16;
          }
          else {
            *param_3 = (byte)(uVar27 << 3) | 0x81;
            if ((uVar27 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar27 >> 4);
              pbVar12 = param_3 + 2;
              param_3 = param_3 + 10;
              *(undefined8 *)pbVar12 = uVar16;
            }
            else {
              pbVar12 = param_3 + 2;
              uVar5 = uVar27 >> 4 & 0x1ffffff;
              do {
                pbVar26 = pbVar12;
                uVar27 = uVar5 >> 7;
                pbVar26[-1] = (byte)uVar5 | 0x80;
                uVar17 = uVar5 >> 0xe;
                pbVar12 = pbVar26 + 1;
                uVar5 = uVar27;
              } while (uVar17 != 0);
              *pbVar26 = (byte)uVar27;
              param_3 = pbVar26 + 9;
              *(undefined8 *)(pbVar26 + 1) = uVar16;
            }
          }
          break;
        case 7:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 0031406c to 0031407f has its CatchHandler @ 00316fbc */
            uVar7 = FUN_003889fc(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 00314368 to 00314377 has its CatchHandler @ 00316fbc */
            uVar7 = FUN_00388698(extraout_x1,param_2,param_1);
          }
          uVar27 = *(uint *)(param_1 + 0x44);
          uVar5 = uVar27 << 3 | 5;
          if (uVar5 < 0x80) {
            *param_3 = (byte)uVar5;
            *(undefined4 *)(param_3 + 1) = uVar7;
          }
          else {
            *param_3 = (byte)(uVar27 << 3) | 0x85;
            if ((uVar27 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar27 >> 4);
              pbVar12 = param_3 + 2;
              param_3 = param_3 + 6;
              *(undefined4 *)pbVar12 = uVar7;
              break;
            }
            pbVar12 = param_3 + 2;
            uVar5 = uVar27 >> 4 & 0x1ffffff;
            do {
              param_3 = pbVar12;
              uVar27 = uVar5 >> 7;
              param_3[-1] = (byte)uVar5 | 0x80;
              uVar17 = uVar5 >> 0xe;
              pbVar12 = param_3 + 1;
              uVar5 = uVar27;
            } while (uVar17 != 0);
            *param_3 = (byte)uVar27;
            *(undefined4 *)(param_3 + 1) = uVar7;
          }
          param_3 = param_3 + 5;
          break;
        case 8:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00313f70 to 00313f83 has its CatchHandler @ 00316fc0 */
            bVar4 = FUN_0038a860(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 00314248 to 00314257 has its CatchHandler @ 00316fc0 */
            bVar4 = FUN_0038a4f8(extraout_x1,param_2,param_1);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          bVar2 = (byte)(uVar5 * 8);
          if (uVar5 * 8 < 0x80) {
            pbVar12 = param_3 + 1;
            *param_3 = bVar2;
          }
          else {
            *param_3 = bVar2 | 0x80;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar12 = param_3 + 2;
            }
            else {
              pbVar12 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar26 = pbVar12;
                uVar27 = uVar5 >> 7;
                pbVar26[-1] = (byte)uVar5 | 0x80;
                pbVar12 = pbVar26 + 1;
                uVar17 = uVar5 >> 0xe;
                uVar5 = uVar27;
              } while (uVar17 != 0);
              *pbVar26 = (byte)uVar27;
            }
          }
          param_3 = pbVar12 + 1;
          *pbVar12 = bVar4 & 1;
          break;
        case 9:
          local_a8 = (undefined **)0x0;
          local_a0[0] = 0;
          local_b0 = (undefined **)0x0;
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 003140e8 to 003140ff has its CatchHandler @ 00316fec */
            pbVar12 = (byte *)FUN_0038b19c(extraout_x1,param_2,param_1,uVar10 & 0xffffffff,&local_b0
                                          );
          }
          else {
                    /* try { // try from 003143bc to 0031469f has its CatchHandler @ 00316fec */
            pbVar12 = (byte *)FUN_0038aca4(extraout_x1,param_2,param_1,&local_b0);
          }
          if ((*pbVar12 & 1) == 0) {
            pbVar26 = pbVar12 + 1;
            uVar22 = (ulong)(*pbVar12 >> 1);
            pbVar19 = *(byte **)(param_1 + 8);
            if ((*pbVar19 & 1) != 0) goto LAB_00314120;
LAB_00314694:
            pbVar19 = pbVar19 + 1;
          }
          else {
            uVar22 = *(ulong *)(pbVar12 + 8);
            pbVar26 = *(byte **)(pbVar12 + 0x10);
            pbVar19 = *(byte **)(param_1 + 8);
            if ((*pbVar19 & 1) == 0) goto LAB_00314694;
LAB_00314120:
            pbVar19 = *(byte **)(pbVar19 + 0x10);
          }
          FUN_0033b628(pbVar26,uVar22,1,pbVar19);
          uVar5 = *(uint *)(param_1 + 0x44);
          if ((*pbVar12 & 1) == 0) {
            sVar28 = (size_t)(*pbVar12 >> 1);
            lVar11 = *param_4;
joined_r0x003146e8:
            if (uVar5 << 3 < 0x80) {
              lVar20 = -2;
            }
            else if (uVar5 << 3 < 0x4000) {
              lVar20 = -3;
            }
            else if (uVar5 << 3 < 0x200000) {
              lVar20 = -4;
            }
            else {
              lVar20 = -6;
              if ((uVar5 & 0x1fffffff) >> 0x19 == 0) {
                lVar20 = -5;
              }
            }
            if ((long)sVar28 <= (lVar11 - (long)param_3) + lVar20 + 0x10) {
              uVar27 = uVar5 << 3 | 2;
              if (uVar27 < 0x80) {
                pbVar26 = param_3 + 1;
                *param_3 = (byte)uVar27;
              }
              else {
                *param_3 = (byte)(uVar5 << 3) | 0x82;
                if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
                  param_3[1] = (byte)(uVar5 >> 4);
                  pbVar26 = param_3 + 2;
                }
                else {
                  pbVar26 = param_3 + 2;
                  uVar5 = uVar5 >> 4 & 0x1ffffff;
                  do {
                    pbVar19 = pbVar26;
                    uVar27 = uVar5 >> 7;
                    pbVar19[-1] = (byte)uVar5 | 0x80;
                    pbVar26 = pbVar19 + 1;
                    uVar17 = uVar5 >> 0xe;
                    uVar5 = uVar27;
                  } while (uVar17 != 0);
                  *pbVar19 = (byte)uVar27;
                }
              }
              *pbVar26 = (byte)sVar28;
              pbVar19 = *(byte **)(pbVar12 + 0x10);
              if ((*pbVar12 & 1) == 0) {
                pbVar19 = pbVar12 + 1;
              }
              memcpy(pbVar26 + 1,pbVar19,sVar28);
              param_3 = pbVar26 + 1 + sVar28;
              goto joined_r0x00314dd8;
            }
          }
          else {
            sVar28 = *(size_t *)(pbVar12 + 8);
            if ((long)sVar28 < 0x80) {
              lVar11 = *param_4;
              goto joined_r0x003146e8;
            }
          }
                    /* try { // try from 00314f24 to 00314f33 has its CatchHandler @ 00316fec */
          param_3 = (byte *)FUN_00311488(param_4,uVar5,pbVar12,param_3);
joined_r0x00314dd8:
          if (((ulong)local_b0 & 1) != 0) goto LAB_00314ddc;
        default:
switchD_00313cac_default:
joined_r0x00314c00:
          if (uVar10 + 1 != uVar9) goto LAB_00313c44;
          goto LAB_00316af4;
        case 10:
          uVar27 = *(uint *)(param_1 + 0x44);
          if (*(int *)(param_1 + 0x3c) == 3) {
            if (ppuVar29 == ppuVar23) {
                    /* try { // try from 00314dfc to 00314f03 has its CatchHandler @ 00317140 */
              plVar30 = (long *)FUN_0038cfc0(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
              goto LAB_003141cc;
            }
            plVar30 = (long *)ppuVar23[uVar10];
            uVar5 = uVar27 << 3 | 3;
            if (0x7f < uVar5) goto LAB_00313e80;
LAB_003141dc:
            pbVar12 = param_3 + 1;
            *param_3 = (byte)uVar5;
          }
          else {
                    /* try { // try from 003141b8 to 003141cb has its CatchHandler @ 00317140 */
            plVar30 = (long *)FUN_0038c150(extraout_x1,param_2,param_1,0);
LAB_003141cc:
            uVar5 = uVar27 << 3 | 3;
            if (uVar5 < 0x80) goto LAB_003141dc;
LAB_00313e80:
            *param_3 = (byte)uVar5 | 0x80;
            if (uVar5 >> 0xe == 0) {
              param_3[1] = (byte)(uVar27 >> 4);
              pbVar12 = param_3 + 2;
            }
            else {
              pbVar12 = param_3 + 2;
              uVar5 = uVar27 >> 4 & 0x1ffffff;
              do {
                pbVar26 = pbVar12;
                uVar17 = uVar5 >> 7;
                pbVar26[-1] = (byte)uVar5 | 0x80;
                pbVar12 = pbVar26 + 1;
                uVar1 = uVar5 >> 0xe;
                uVar5 = uVar17;
              } while (uVar1 != 0);
              *pbVar26 = (byte)uVar17;
            }
          }
                    /* try { // try from 00314788 to 00314793 has its CatchHandler @ 00317140 */
          pbVar12 = (byte *)(**(code **)(*plVar30 + 0x60))(plVar30,pbVar12,param_4);
          if ((byte *)*param_4 <= pbVar12) {
                    /* try { // try from 00314f44 to 00314f4f has its CatchHandler @ 00317140 */
            pbVar12 = (byte *)FUN_00310ec4(param_4,pbVar12);
          }
          uVar5 = uVar27 << 3 | 4;
          bVar4 = (byte)uVar5;
          if (uVar5 < 0x80) {
            param_3 = pbVar12 + 1;
            *pbVar12 = bVar4;
          }
          else {
            *pbVar12 = bVar4 | 0x80;
            if ((uVar27 & 0x1fffffff) >> 0xb == 0) {
              uVar27 = uVar27 >> 4;
LAB_00314f78:
              pbVar12[1] = (byte)uVar27;
              param_3 = pbVar12 + 2;
            }
            else {
              param_3 = pbVar12 + 2;
              uVar5 = uVar27 >> 4 & 0x1ffffff;
              do {
                pbVar12 = param_3;
                uVar27 = uVar5 >> 7;
                pbVar12[-1] = (byte)uVar5 | 0x80;
                param_3 = pbVar12 + 1;
                uVar17 = uVar5 >> 0xe;
                uVar5 = uVar27;
              } while (uVar17 != 0);
              *pbVar12 = (byte)uVar27;
            }
          }
          break;
        case 0xb:
          uVar5 = *(uint *)(param_1 + 0x44);
          if (*(int *)(param_1 + 0x3c) == 3) {
            if (ppuVar29 == ppuVar23) {
              plVar30 = (long *)FUN_0038cfc0(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
              goto LAB_00314e28;
            }
            plVar30 = (long *)ppuVar23[uVar10];
            uVar27 = uVar5 << 3 | 2;
            if (0x7f < uVar27) goto LAB_003140b4;
LAB_00314e3c:
            pbVar12 = param_3 + 1;
            *param_3 = (byte)uVar27;
          }
          else {
                    /* try { // try from 003143a4 to 003143b7 has its CatchHandler @ 00317140 */
            plVar30 = (long *)FUN_0038c150(extraout_x1,param_2,param_1,0);
LAB_00314e28:
            uVar27 = uVar5 << 3 | 2;
            if (uVar27 < 0x80) goto LAB_00314e3c;
LAB_003140b4:
            *param_3 = (byte)uVar27 | 0x80;
            if (uVar27 >> 0xe == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar12 = param_3 + 2;
            }
            else {
              pbVar12 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar26 = pbVar12;
                uVar27 = uVar5 >> 7;
                pbVar26[-1] = (byte)uVar5 | 0x80;
                pbVar12 = pbVar26 + 1;
                uVar17 = uVar5 >> 0xe;
                uVar5 = uVar27;
              } while (uVar17 != 0);
              *pbVar26 = (byte)uVar27;
            }
          }
          uVar5 = (**(code **)(*plVar30 + 0x50))(plVar30);
          if (uVar5 < 0x80) {
            pbVar26 = pbVar12 + 1;
            *pbVar12 = (byte)uVar5;
          }
          else {
            *pbVar12 = (byte)uVar5 | 0x80;
            if (uVar5 >> 0xe == 0) {
              pbVar12[1] = (byte)(uVar5 >> 7);
              pbVar26 = pbVar12 + 2;
            }
            else {
              pbVar26 = pbVar12 + 2;
              uVar5 = uVar5 >> 7;
              do {
                pbVar12 = pbVar26;
                uVar27 = uVar5 >> 7;
                pbVar12[-1] = (byte)uVar5 | 0x80;
                pbVar26 = pbVar12 + 1;
                uVar17 = uVar5 >> 0xe;
                uVar5 = uVar27;
              } while (uVar17 != 0);
              *pbVar12 = (byte)uVar27;
            }
          }
          param_3 = (byte *)(**(code **)(*plVar30 + 0x60))(plVar30,pbVar26,param_4);
          break;
        case 0xc:
          local_a8 = (undefined **)0x0;
          local_a0[0] = 0;
          local_b0 = (undefined **)0x0;
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00313d64 to 00313d7b has its CatchHandler @ 00316fdc */
            pbVar12 = (byte *)FUN_0038b19c(extraout_x1,param_2,param_1,uVar10 & 0xffffffff,&local_b0
                                          );
          }
          else {
                    /* try { // try from 00314178 to 0031418b has its CatchHandler @ 00316fdc */
            pbVar12 = (byte *)FUN_0038aca4(extraout_x1,param_2,param_1,&local_b0);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          if ((*pbVar12 & 1) != 0) {
            sVar28 = *(size_t *)(pbVar12 + 8);
            if ((long)sVar28 < 0x80) {
              lVar11 = *param_4;
              goto joined_r0x0031444c;
            }
LAB_00314f14:
                    /* try { // try from 00314f14 to 00314f1f has its CatchHandler @ 00316fdc */
            param_3 = (byte *)FUN_00311488(param_4,uVar5,pbVar12,param_3);
            goto joined_r0x00314dd8;
          }
          sVar28 = (size_t)(*pbVar12 >> 1);
          lVar11 = *param_4;
joined_r0x0031444c:
          if (uVar5 << 3 < 0x80) {
            lVar20 = -2;
          }
          else if (uVar5 << 3 < 0x4000) {
            lVar20 = -3;
          }
          else if (uVar5 << 3 < 0x200000) {
            lVar20 = -4;
          }
          else {
            lVar20 = -6;
            if ((uVar5 & 0x1fffffff) >> 0x19 == 0) {
              lVar20 = -5;
            }
          }
          if ((lVar11 - (long)param_3) + lVar20 + 0x10 < (long)sVar28) goto LAB_00314f14;
          uVar27 = uVar5 << 3 | 2;
          if (uVar27 < 0x80) {
            pbVar26 = param_3 + 1;
            *param_3 = (byte)uVar27;
          }
          else {
            *param_3 = (byte)(uVar5 << 3) | 0x82;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar26 = param_3 + 2;
            }
            else {
              pbVar26 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar19 = pbVar26;
                uVar27 = uVar5 >> 7;
                pbVar19[-1] = (byte)uVar5 | 0x80;
                pbVar26 = pbVar19 + 1;
                uVar17 = uVar5 >> 0xe;
                uVar5 = uVar27;
              } while (uVar17 != 0);
              *pbVar19 = (byte)uVar27;
            }
          }
          *pbVar26 = (byte)sVar28;
          pbVar19 = *(byte **)(pbVar12 + 0x10);
          if ((*pbVar12 & 1) == 0) {
            pbVar19 = pbVar12 + 1;
          }
          memcpy(pbVar26 + 1,pbVar19,sVar28);
          param_3 = pbVar26 + 1 + sVar28;
          if (((ulong)local_b0 & 1) == 0) goto switchD_00313cac_default;
LAB_00314ddc:
          FUN_002e2ea0(PTR_LAB_04373088,local_a0[0]);
          break;
        case 0xd:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00313e0c to 00313e1f has its CatchHandler @ 00316fc4 */
            uVar5 = FUN_003889fc(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 003141a4 to 003141b3 has its CatchHandler @ 00316fc4 */
            uVar5 = FUN_00388698(extraout_x1,param_2,param_1);
          }
          uVar27 = *(uint *)(param_1 + 0x44);
          bVar4 = (byte)(uVar27 * 8);
          if (uVar27 * 8 < 0x80) {
            pbVar12 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar27 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar27 >> 4);
              pbVar12 = param_3 + 2;
            }
            else {
              pbVar12 = param_3 + 2;
              uVar27 = uVar27 >> 4 & 0x1ffffff;
              do {
                pbVar26 = pbVar12;
                uVar17 = uVar27 >> 7;
                pbVar26[-1] = (byte)uVar27 | 0x80;
                pbVar12 = pbVar26 + 1;
                uVar1 = uVar27 >> 0xe;
                uVar27 = uVar17;
              } while (uVar1 != 0);
              *pbVar26 = (byte)uVar17;
            }
          }
          if (uVar5 < 0x80) {
            param_3 = pbVar12 + 1;
            *pbVar12 = (byte)uVar5;
          }
          else {
            *pbVar12 = (byte)uVar5 | 0x80;
            uVar27 = uVar5 >> 7;
            if (uVar5 >> 0xe == 0) goto LAB_00314f78;
            param_3 = pbVar12 + 2;
            do {
              pbVar12 = param_3;
              uVar5 = uVar27 >> 7;
              pbVar12[-1] = (byte)uVar27 | 0x80;
              param_3 = pbVar12 + 1;
              uVar17 = uVar27 >> 0xe;
              uVar27 = uVar5;
            } while (uVar17 != 0);
            *pbVar12 = (byte)uVar5;
          }
          break;
        case 0xe:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00314048 to 0031405b has its CatchHandler @ 00316fc8 */
            lVar11 = FUN_0038bca0(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 00314324 to 00314333 has its CatchHandler @ 00316fc8 */
            lVar11 = FUN_0038b6f8(extraout_x1,param_2,param_1);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          uVar27 = *(uint *)(lVar11 + 0x10);
          bVar4 = (byte)(uVar5 * 8);
          if (uVar5 * 8 < 0x80) {
            pbVar12 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar12 = param_3 + 2;
            }
            else {
              pbVar12 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar26 = pbVar12;
                uVar17 = uVar5 >> 7;
                pbVar26[-1] = (byte)uVar5 | 0x80;
                pbVar12 = pbVar26 + 1;
                uVar1 = uVar5 >> 0xe;
                uVar5 = uVar17;
              } while (uVar1 != 0);
              *pbVar26 = (byte)uVar17;
            }
          }
          if (uVar27 < 0x80) {
            param_3 = pbVar12 + 1;
            *pbVar12 = (byte)uVar27;
          }
          else {
            *pbVar12 = (byte)uVar27 | 0x80;
            uVar22 = (ulong)(long)(int)uVar27 >> 7;
            if (((ulong)(long)(int)uVar27 >> 0xe & 0x3ffff) == 0) {
              pbVar12[1] = (byte)uVar22;
              param_3 = pbVar12 + 2;
            }
            else {
              param_3 = pbVar12 + 2;
              do {
                pbVar12 = param_3;
                uVar18 = uVar22 >> 7;
                pbVar12[-1] = (byte)uVar22 | 0x80;
                param_3 = pbVar12 + 1;
                uVar21 = uVar22 >> 0xe;
                uVar22 = uVar18;
              } while (uVar21 != 0);
              *pbVar12 = (byte)uVar18;
            }
          }
          break;
        case 0xf:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00313d38 to 00313d4b has its CatchHandler @ 00316fcc */
            uVar7 = FUN_00387acc(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 0031413c to 0031414b has its CatchHandler @ 00316fcc */
            uVar7 = FUN_00387768(extraout_x1,param_2,param_1);
          }
          uVar27 = *(uint *)(param_1 + 0x44);
          uVar5 = uVar27 << 3 | 5;
          if (uVar5 < 0x80) {
            *param_3 = (byte)uVar5;
            *(undefined4 *)(param_3 + 1) = uVar7;
          }
          else {
            *param_3 = (byte)(uVar27 << 3) | 0x85;
            if ((uVar27 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar27 >> 4);
              pbVar12 = param_3 + 2;
              param_3 = param_3 + 6;
              *(undefined4 *)pbVar12 = uVar7;
              break;
            }
            pbVar12 = param_3 + 2;
            uVar5 = uVar27 >> 4 & 0x1ffffff;
            do {
              param_3 = pbVar12;
              uVar27 = uVar5 >> 7;
              param_3[-1] = (byte)uVar5 | 0x80;
              uVar17 = uVar5 >> 0xe;
              pbVar12 = param_3 + 1;
              uVar5 = uVar27;
            } while (uVar17 != 0);
            *param_3 = (byte)uVar27;
            *(undefined4 *)(param_3 + 1) = uVar7;
          }
          param_3 = param_3 + 5;
          break;
        case 0x10:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00313efc to 00313f0f has its CatchHandler @ 00316fd0 */
            uVar16 = FUN_00388264(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 003141f8 to 00314207 has its CatchHandler @ 00316fd0 */
            uVar16 = FUN_00387f00(extraout_x1,param_2,param_1);
          }
          uVar27 = *(uint *)(param_1 + 0x44);
          uVar5 = uVar27 << 3 | 1;
          if (uVar5 < 0x80) {
            pbVar12 = param_3 + 1;
            *param_3 = (byte)uVar5;
            param_3 = param_3 + 9;
            *(undefined8 *)pbVar12 = uVar16;
          }
          else {
            *param_3 = (byte)(uVar27 << 3) | 0x81;
            if ((uVar27 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar27 >> 4);
              pbVar12 = param_3 + 2;
              param_3 = param_3 + 10;
              *(undefined8 *)pbVar12 = uVar16;
            }
            else {
              pbVar12 = param_3 + 2;
              uVar5 = uVar27 >> 4 & 0x1ffffff;
              do {
                pbVar26 = pbVar12;
                uVar27 = uVar5 >> 7;
                pbVar26[-1] = (byte)uVar5 | 0x80;
                uVar17 = uVar5 >> 0xe;
                pbVar12 = pbVar26 + 1;
                uVar5 = uVar27;
              } while (uVar17 != 0);
              *pbVar26 = (byte)uVar27;
              param_3 = pbVar26 + 9;
              *(undefined8 *)(pbVar26 + 1) = uVar16;
            }
          }
          break;
        case 0x11:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00313ce0 to 00313cf3 has its CatchHandler @ 00316fd4 */
            iVar6 = FUN_00387acc(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 00314128 to 00314137 has its CatchHandler @ 00316fd4 */
            iVar6 = FUN_00387768(extraout_x1,param_2,param_1);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          bVar4 = (byte)(uVar5 * 8);
          if (uVar5 * 8 < 0x80) {
            pbVar12 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar12 = param_3 + 2;
            }
            else {
              pbVar12 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar26 = pbVar12;
                uVar27 = uVar5 >> 7;
                pbVar26[-1] = (byte)uVar5 | 0x80;
                pbVar12 = pbVar26 + 1;
                uVar17 = uVar5 >> 0xe;
                uVar5 = uVar27;
              } while (uVar17 != 0);
              *pbVar26 = (byte)uVar27;
            }
          }
          uVar5 = iVar6 << 1 ^ iVar6 >> 0x1f;
          if (uVar5 < 0x80) {
            param_3 = pbVar12 + 1;
            *pbVar12 = (byte)uVar5;
          }
          else {
            *pbVar12 = (byte)uVar5 | 0x80;
            uVar27 = uVar5 >> 7;
            if (uVar5 >> 0xe == 0) goto LAB_00314f78;
            param_3 = pbVar12 + 2;
            do {
              pbVar12 = param_3;
              uVar5 = uVar27 >> 7;
              pbVar12[-1] = (byte)uVar27 | 0x80;
              param_3 = pbVar12 + 1;
              uVar17 = uVar27 >> 0xe;
              uVar27 = uVar5;
            } while (uVar17 != 0);
            *pbVar12 = (byte)uVar5;
          }
          goto joined_r0x00314c00;
        case 0x12:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00313fcc to 00313fdf has its CatchHandler @ 00316fd8 */
            lVar11 = FUN_00388264(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 003142d4 to 003142e3 has its CatchHandler @ 00316fd8 */
            lVar11 = FUN_00387f00(extraout_x1,param_2,param_1);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          bVar4 = (byte)(uVar5 * 8);
          if (uVar5 * 8 < 0x80) {
            pbVar12 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar12 = param_3 + 2;
            }
            else {
              pbVar12 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar26 = pbVar12;
                uVar27 = uVar5 >> 7;
                pbVar26[-1] = (byte)uVar5 | 0x80;
                pbVar12 = pbVar26 + 1;
                uVar17 = uVar5 >> 0xe;
                uVar5 = uVar27;
              } while (uVar17 != 0);
              *pbVar26 = (byte)uVar27;
            }
          }
          uVar16 = lVar11 << 1 ^ lVar11 >> 0x3f;
          if ((ulong)uVar16 < 0x80) {
            param_3 = (byte *)((long)pbVar12 + 1);
            *pbVar12 = (char)uVar16;
          }
          else {
            *pbVar12 = (char)uVar16 | 0x80;
            uVar22 = (ulong)uVar16 >> 7;
            if ((ulong)uVar16 >> 0xe == 0) goto LAB_00313c30;
            param_3 = (byte *)((long)pbVar12 + 2);
            do {
              pbVar12 = param_3;
              uVar18 = uVar22 >> 7;
              pbVar12[-1] = (byte)uVar22 | 0x80;
              param_3 = pbVar12 + 1;
              uVar21 = uVar22 >> 0xe;
              uVar22 = uVar18;
            } while (uVar21 != 0);
            *pbVar12 = (byte)uVar18;
          }
          goto joined_r0x00314c00;
        }
        if (uVar10 + 1 == uVar9) break;
LAB_00313c44:
        uVar10 = uVar10 + 1;
        if ((byte *)*param_4 <= param_3) goto LAB_00314ef8;
LAB_00313c50:
        puVar8 = *(ulong **)(param_1 + 0x30);
      } while( true );
    }
    goto LAB_00316af4;
  }
  if ((int)uVar9 == 0) goto LAB_00316af4;
  if (param_3 < (byte *)*param_4) {
    puVar8 = *(ulong **)(param_1 + 0x30);
  }
  else {
                    /* try { // try from 003168c4 to 003168cf has its CatchHandler @ 00317014 */
    param_3 = (byte *)FUN_00310ec4(param_4,param_3);
    puVar8 = *(ulong **)(param_1 + 0x30);
  }
  if (puVar8 != (ulong *)0x0) {
    local_70 = param_1;
    puStack_68 = PTR_LAB_04373a98;
    if (*puVar8 != 0xffffffffffffffff) {
      local_b0 = &puStack_68;
      local_a8 = &local_70;
      local_f0 = &local_b0;
      std::__call_once(puVar8,&local_f0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
                    /* try { // try from 00313b18 to 00313b6b has its CatchHandler @ 00316f98 */
    piVar13 = (int *)FUN_0038e530(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_0032a964(&local_f0);
      FUN_0032ac58(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_0032ad10(&local_f0,0);
      pvVar15 = (void *)FUN_0032ae50(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13 << 3);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if (param_3 < (byte *)*param_4) {
      iVar6 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) goto LAB_00313b98;
    }
    else {
                    /* try { // try from 0031694c to 00316957 has its CatchHandler @ 00316e9c */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      iVar6 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) {
LAB_00313b98:
                    /* try { // try from 00313b98 to 00313baf has its CatchHandler @ 00316e9c */
        FUN_0030f640(&local_b0,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                     ,0x35a);
                    /* try { // try from 00313bb0 to 00313bc3 has its CatchHandler @ 00316e58 */
        uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 00313bc4 to 00313bcb has its CatchHandler @ 00316de4 */
        FUN_0030f41c(&puStack_68,uVar16);
        FUN_0030f658(&local_b0);
      }
    }
    uVar27 = uVar5 << 3 | 2;
    uVar17 = iVar6 << 3;
    if (uVar27 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar27;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar27 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar27;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar27;
      }
    }
    uVar5 = uVar17;
    if (0x7f < uVar17) {
      uVar9 = (ulong)uVar17;
      pbVar26 = pbVar12;
      do {
        uVar10 = uVar9 >> 0xe;
        uVar5 = (uint)(uVar9 >> 7);
        pbVar12 = pbVar26 + 1;
        *pbVar26 = (byte)uVar9 | 0x80;
        uVar9 = uVar9 >> 7;
        pbVar26 = pbVar12;
      } while (uVar10 != 0);
    }
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar5;
    sVar28 = (size_t)(int)uVar17;
    if (*param_4 - (long)param_3 < (long)sVar28) {
                    /* try { // try from 00316bd4 to 00316bdf has its CatchHandler @ 00316e9c */
      param_3 = (byte *)FUN_00310fe4(param_4,local_e8,(ulong)uVar17,param_3);
    }
    else {
      memcpy(param_3,local_e8,sVar28);
      param_3 = param_3 + sVar28;
    }
    FUN_0032af90(&local_f0);
    break;
  case 2:
                    /* try { // try from 0031582c to 0031587f has its CatchHandler @ 00316f7c */
    piVar13 = (int *)FUN_0038e50c(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_00329be4(&local_f0);
      FUN_00329ed8(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_00329f90(&local_f0,0);
      pvVar15 = (void *)FUN_0032a0d0(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if (param_3 < (byte *)*param_4) {
      iVar6 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) goto LAB_003158ac;
    }
    else {
                    /* try { // try from 00316970 to 0031697b has its CatchHandler @ 00316e84 */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      iVar6 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) {
LAB_003158ac:
                    /* try { // try from 003158ac to 003158c3 has its CatchHandler @ 00316e84 */
        FUN_0030f640(&local_b0,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                     ,0x35a);
                    /* try { // try from 003158c4 to 003158d7 has its CatchHandler @ 00316e08 */
        uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 003158d8 to 003158df has its CatchHandler @ 00316dc0 */
        FUN_0030f41c(&puStack_68,uVar16);
        FUN_0030f658(&local_b0);
      }
    }
    uVar27 = uVar5 << 3 | 2;
    uVar17 = iVar6 << 2;
    if (uVar27 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar27;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar27 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar27;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar27;
      }
    }
    uVar5 = uVar17;
    if (0x7f < uVar17) {
      uVar9 = (ulong)uVar17;
      pbVar26 = pbVar12;
      do {
        uVar10 = uVar9 >> 0xe;
        uVar5 = (uint)(uVar9 >> 7);
        pbVar12 = pbVar26 + 1;
        *pbVar26 = (byte)uVar9 | 0x80;
        uVar9 = uVar9 >> 7;
        pbVar26 = pbVar12;
      } while (uVar10 != 0);
    }
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar5;
    sVar28 = (size_t)(int)uVar17;
    if (*param_4 - (long)param_3 < (long)sVar28) {
                    /* try { // try from 00316c08 to 00316c13 has its CatchHandler @ 00316e84 */
      param_3 = (byte *)FUN_00310fe4(param_4,local_e8,(ulong)uVar17,param_3);
    }
    else {
      memcpy(param_3,local_e8,sVar28);
      param_3 = param_3 + sVar28;
    }
    FUN_0032a210(&local_f0);
    break;
  case 3:
                    /* try { // try from 00315744 to 00315797 has its CatchHandler @ 00316f80 */
    piVar13 = (int *)FUN_0038e4a0(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_003280e4(&local_f0);
      FUN_003283d8(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_00328490(&local_f0,0);
      pvVar15 = (void *)FUN_003285d0(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13 << 3);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 003157ac to 003157e7 has its CatchHandler @ 00316efc */
    uVar9 = FUN_00318848(param_1,param_2);
    uVar27 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      if ((byte *)*param_4 <= param_3) goto LAB_003157d0;
    }
    else {
                    /* try { // try from 00316a5c to 00316a67 has its CatchHandler @ 00316efc */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      if ((byte *)*param_4 <= param_3) {
LAB_003157d0:
        FUN_0030f640(&local_b0,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                     ,0x35a);
                    /* try { // try from 003157e8 to 003157fb has its CatchHandler @ 00316dc4 */
        uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 003157fc to 00315803 has its CatchHandler @ 00316d9c */
        FUN_0030f41c(&puStack_68,uVar16);
        FUN_0030f658(&local_b0);
      }
    }
    uVar17 = uVar5 << 3 | 2;
    if (uVar17 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar17;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar17 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar17;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar17;
      }
    }
    if (0x7f < uVar27) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar26 = pbVar12;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar22 = uVar10 >> 0xe;
        uVar27 = (uint)uVar9;
        pbVar12 = pbVar26 + 1;
        *pbVar26 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar26 = pbVar12;
      } while (uVar22 != 0);
    }
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar27;
    puVar8 = local_e8 + (int)(uint)local_f0;
    puVar25 = local_e8;
    if (param_3 < (byte *)*param_4) goto LAB_00316668;
LAB_003166cc:
                    /* try { // try from 003166cc to 003166d7 has its CatchHandler @ 00316d80 */
    param_3 = (byte *)FUN_00310ec4(param_4,param_3);
    puVar24 = puVar25 + 1;
    uVar9 = *puVar25;
    if (0x7f < uVar9) goto LAB_00316674;
LAB_00316650:
    *param_3 = (byte)uVar9;
    param_3 = param_3 + 1;
    while (puVar24 < puVar8) {
      while( true ) {
        puVar25 = puVar24;
        if ((byte *)*param_4 <= param_3) goto LAB_003166cc;
LAB_00316668:
        puVar24 = puVar25 + 1;
        uVar9 = *puVar25;
        if (uVar9 < 0x80) goto LAB_00316650;
LAB_00316674:
        *param_3 = (byte)uVar9 | 0x80;
        if (uVar9 >> 0xe == 0) break;
        uVar9 = uVar9 >> 7;
        param_3 = param_3 + 2;
        do {
          pbVar12 = param_3;
          uVar10 = uVar9 >> 7;
          pbVar12[-1] = (byte)uVar9 | 0x80;
          param_3 = pbVar12 + 1;
          uVar22 = uVar9 >> 0xe;
          uVar9 = uVar10;
        } while (uVar22 != 0);
        *pbVar12 = (byte)uVar10;
        if (puVar8 <= puVar24) goto LAB_00316ba0;
      }
      param_3[1] = (byte)(uVar9 >> 7);
      param_3 = param_3 + 2;
    }
LAB_00316ba0:
    FUN_00328710(&local_f0);
    break;
  case 4:
                    /* try { // try from 0031565c to 003156af has its CatchHandler @ 00316f84 */
    piVar13 = (int *)FUN_0038e4e8(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_00328e64(&local_f0);
      FUN_00329158(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_00329210(&local_f0,0);
      pvVar15 = (void *)FUN_00329350(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13 << 3);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 003156c4 to 003156ff has its CatchHandler @ 00316f00 */
    uVar9 = FUN_00318848(param_1,param_2);
    uVar27 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      if ((byte *)*param_4 <= param_3) goto LAB_003156e8;
    }
    else {
                    /* try { // try from 00316a3c to 00316a47 has its CatchHandler @ 00316f00 */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      if ((byte *)*param_4 <= param_3) {
LAB_003156e8:
        FUN_0030f640(&local_b0,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                     ,0x35a);
                    /* try { // try from 00315700 to 00315713 has its CatchHandler @ 00316dc8 */
        uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 00315714 to 0031571b has its CatchHandler @ 00316da0 */
        FUN_0030f41c(&puStack_68,uVar16);
        FUN_0030f658(&local_b0);
      }
    }
    uVar17 = uVar5 << 3 | 2;
    if (uVar17 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar17;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar17 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar17;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar17;
      }
    }
    if (0x7f < uVar27) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar26 = pbVar12;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar22 = uVar10 >> 0xe;
        uVar27 = (uint)uVar9;
        pbVar12 = pbVar26 + 1;
        *pbVar26 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar26 = pbVar12;
      } while (uVar22 != 0);
    }
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar27;
    puVar8 = local_e8 + (int)(uint)local_f0;
    puVar25 = local_e8;
    if (param_3 < (byte *)*param_4) goto LAB_0031657c;
LAB_003165e0:
                    /* try { // try from 003165e0 to 003165eb has its CatchHandler @ 00316d84 */
    param_3 = (byte *)FUN_00310ec4(param_4,param_3);
    puVar24 = puVar25 + 1;
    uVar9 = *puVar25;
    if (0x7f < uVar9) goto LAB_00316588;
LAB_00316564:
    *param_3 = (byte)uVar9;
    param_3 = param_3 + 1;
    while (puVar24 < puVar8) {
      while( true ) {
        puVar25 = puVar24;
        if ((byte *)*param_4 <= param_3) goto LAB_003165e0;
LAB_0031657c:
        puVar24 = puVar25 + 1;
        uVar9 = *puVar25;
        if (uVar9 < 0x80) goto LAB_00316564;
LAB_00316588:
        *param_3 = (byte)uVar9 | 0x80;
        if (uVar9 >> 0xe == 0) break;
        uVar9 = uVar9 >> 7;
        param_3 = param_3 + 2;
        do {
          pbVar12 = param_3;
          uVar10 = uVar9 >> 7;
          pbVar12[-1] = (byte)uVar9 | 0x80;
          param_3 = pbVar12 + 1;
          uVar22 = uVar9 >> 0xe;
          uVar9 = uVar10;
        } while (uVar22 != 0);
        *pbVar12 = (byte)uVar10;
        if (puVar8 <= puVar24) goto LAB_00316b5c;
      }
      param_3[1] = (byte)(uVar9 >> 7);
      param_3 = param_3 + 2;
    }
LAB_00316b5c:
    FUN_00329490(&local_f0);
    break;
  case 5:
                    /* try { // try from 003152c4 to 00315317 has its CatchHandler @ 00316f94 */
    piVar13 = (int *)FUN_0038e47c(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_003265e4(&local_f0);
      FUN_003268d8(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_00326990(&local_f0,0);
      pvVar15 = (void *)FUN_00326ad0(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 0031532c to 00315367 has its CatchHandler @ 00316f1c */
    uVar9 = FUN_00318848(param_1,param_2);
    uVar27 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      if ((byte *)*param_4 <= param_3) goto LAB_00315350;
    }
    else {
                    /* try { // try from 003169fc to 00316a07 has its CatchHandler @ 00316f1c */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      if ((byte *)*param_4 <= param_3) {
LAB_00315350:
        FUN_0030f640(&local_b0,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                     ,0x35a);
                    /* try { // try from 00315368 to 0031537b has its CatchHandler @ 00316dd8 */
        uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 0031537c to 00315383 has its CatchHandler @ 00316da8 */
        FUN_0030f41c(&puStack_68,uVar16);
        FUN_0030f658(&local_b0);
      }
    }
    uVar17 = uVar5 << 3 | 2;
    if (uVar17 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar17;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar17 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar17;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar17;
      }
    }
    if (0x7f < uVar27) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar26 = pbVar12;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar22 = uVar10 >> 0xe;
        uVar27 = (uint)uVar9;
        pbVar12 = pbVar26 + 1;
        *pbVar26 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar26 = pbVar12;
      } while (uVar22 != 0);
    }
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar27;
    puVar8 = (ulong *)((long)local_e8 + (long)(int)(uint)local_f0 * 4);
    puVar25 = local_e8;
    if (param_3 < (byte *)*param_4) goto LAB_003163a8;
LAB_0031640c:
                    /* try { // try from 0031640c to 00316417 has its CatchHandler @ 00316d8c */
    param_3 = (byte *)FUN_00310ec4(param_4,param_3);
    puVar24 = (ulong *)((long)puVar25 + 4);
    uVar9 = (ulong)(int)(uint)*puVar25;
    if (0x7f < (uint)*puVar25) goto LAB_003163b4;
LAB_00316390:
    *param_3 = (byte)uVar9;
    param_3 = param_3 + 1;
    while (puVar24 < puVar8) {
      while( true ) {
        puVar25 = puVar24;
        if ((byte *)*param_4 <= param_3) goto LAB_0031640c;
LAB_003163a8:
        puVar24 = (ulong *)((long)puVar25 + 4);
        uVar9 = (ulong)(int)(uint)*puVar25;
        if ((uint)*puVar25 < 0x80) goto LAB_00316390;
LAB_003163b4:
        *param_3 = (byte)uVar9 | 0x80;
        if ((uVar9 >> 0xe & 0x3ffff) == 0) break;
        uVar9 = uVar9 >> 7;
        param_3 = param_3 + 2;
        do {
          pbVar12 = param_3;
          uVar10 = uVar9 >> 7;
          pbVar12[-1] = (byte)uVar9 | 0x80;
          param_3 = pbVar12 + 1;
          uVar22 = uVar9 >> 0xe;
          uVar9 = uVar10;
        } while (uVar22 != 0);
        *pbVar12 = (byte)uVar10;
        if (puVar8 <= puVar24) goto LAB_00316aec;
      }
      param_3[1] = (byte)(uVar9 >> 7);
      param_3 = param_3 + 2;
    }
    goto LAB_00316aec;
  case 6:
                    /* try { // try from 00315494 to 003154e7 has its CatchHandler @ 00316f8c */
    piVar13 = (int *)FUN_0038e4e8(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_00328e64(&local_f0);
      FUN_00329158(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_00329210(&local_f0,0);
      pvVar15 = (void *)FUN_00329350(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13 << 3);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if (param_3 < (byte *)*param_4) {
      iVar6 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) goto LAB_00315514;
    }
    else {
                    /* try { // try from 00316904 to 0031690f has its CatchHandler @ 00316eb8 */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      iVar6 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) {
LAB_00315514:
                    /* try { // try from 00315514 to 0031552b has its CatchHandler @ 00316eb8 */
        FUN_0030f640(&local_b0,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                     ,0x35a);
                    /* try { // try from 0031552c to 0031553f has its CatchHandler @ 00316e28 */
        uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 00315540 to 00315547 has its CatchHandler @ 00316dd0 */
        FUN_0030f41c(&puStack_68,uVar16);
        FUN_0030f658(&local_b0);
      }
    }
    uVar27 = uVar5 << 3 | 2;
    uVar17 = iVar6 << 3;
    if (uVar27 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar27;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar27 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar27;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar27;
      }
    }
    uVar5 = uVar17;
    if (0x7f < uVar17) {
      uVar9 = (ulong)uVar17;
      pbVar26 = pbVar12;
      do {
        uVar10 = uVar9 >> 0xe;
        uVar5 = (uint)(uVar9 >> 7);
        pbVar12 = pbVar26 + 1;
        *pbVar26 = (byte)uVar9 | 0x80;
        uVar9 = uVar9 >> 7;
        pbVar26 = pbVar12;
      } while (uVar10 != 0);
    }
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar5;
    sVar28 = (size_t)(int)uVar17;
    if (*param_4 - (long)param_3 < (long)sVar28) {
                    /* try { // try from 00316b4c to 00316b57 has its CatchHandler @ 00316eb8 */
      param_3 = (byte *)FUN_00310fe4(param_4,local_e8,(ulong)uVar17,param_3);
      goto LAB_00316b5c;
    }
    memcpy(param_3,local_e8,sVar28);
    param_3 = param_3 + sVar28;
    FUN_00329490(&local_f0);
    break;
  case 7:
                    /* try { // try from 00315910 to 00315963 has its CatchHandler @ 00316f78 */
    piVar13 = (int *)FUN_0038e4c4(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_00327364(&local_f0);
      FUN_00327658(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_00327710(&local_f0,0);
      pvVar15 = (void *)FUN_00327850(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if (param_3 < (byte *)*param_4) {
      iVar6 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) goto LAB_00315990;
    }
    else {
                    /* try { // try from 00316994 to 0031699f has its CatchHandler @ 00316e80 */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      iVar6 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) {
LAB_00315990:
                    /* try { // try from 00315990 to 003159a7 has its CatchHandler @ 00316e80 */
        FUN_0030f640(&local_b0,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                     ,0x35a);
                    /* try { // try from 003159a8 to 003159bb has its CatchHandler @ 00316df8 */
        uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 003159bc to 003159c3 has its CatchHandler @ 00316dbc */
        FUN_0030f41c(&puStack_68,uVar16);
        FUN_0030f658(&local_b0);
      }
    }
    uVar27 = uVar5 << 3 | 2;
    uVar17 = iVar6 << 2;
    if (uVar27 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar27;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar27 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar27;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar27;
      }
    }
    uVar5 = uVar17;
    if (0x7f < uVar17) {
      uVar9 = (ulong)uVar17;
      pbVar26 = pbVar12;
      do {
        uVar10 = uVar9 >> 0xe;
        uVar5 = (uint)(uVar9 >> 7);
        pbVar12 = pbVar26 + 1;
        *pbVar26 = (byte)uVar9 | 0x80;
        uVar9 = uVar9 >> 7;
        pbVar26 = pbVar12;
      } while (uVar10 != 0);
    }
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar5;
    sVar28 = (size_t)(int)uVar17;
    if (*param_4 - (long)param_3 < (long)sVar28) {
                    /* try { // try from 00316c3c to 00316c47 has its CatchHandler @ 00316e80 */
      param_3 = (byte *)FUN_00310fe4(param_4,local_e8,(ulong)uVar17,param_3);
      goto LAB_00316c4c;
    }
    memcpy(param_3,local_e8,sVar28);
    param_3 = param_3 + sVar28;
    FUN_00327990(&local_f0);
    break;
  case 8:
                    /* try { // try from 003159f4 to 00315a47 has its CatchHandler @ 00316f74 */
    piVar13 = (int *)FUN_0038e554(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_00325870(&local_f0);
      FUN_00325b60(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_00325c18(&local_f0,0);
      pvVar15 = (void *)FUN_00325d58(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if (param_3 < (byte *)*param_4) {
      uVar27 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) goto LAB_00315a70;
    }
    else {
                    /* try { // try from 003169b8 to 003169c3 has its CatchHandler @ 00316e68 */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      uVar27 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) {
LAB_00315a70:
                    /* try { // try from 00315a70 to 00315a87 has its CatchHandler @ 00316e68 */
        FUN_0030f640(&local_b0,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                     ,0x35a);
                    /* try { // try from 00315a88 to 00315a9b has its CatchHandler @ 00316de8 */
        uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 00315a9c to 00315aa3 has its CatchHandler @ 00316db8 */
        FUN_0030f41c(&puStack_68,uVar16);
        FUN_0030f658(&local_b0);
      }
    }
    uVar17 = uVar5 << 3 | 2;
    if (uVar17 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar17;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar17 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar17;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar17;
      }
    }
    uVar5 = uVar27;
    if (0x7f < uVar27) {
      pbVar26 = pbVar12;
      uVar17 = uVar27;
      do {
        uVar5 = uVar17 >> 7;
        uVar1 = uVar17 >> 0xe;
        pbVar12 = pbVar26 + 1;
        *pbVar26 = (byte)uVar17 | 0x80;
        pbVar26 = pbVar12;
        uVar17 = uVar5;
      } while (uVar1 != 0);
    }
    sVar28 = (size_t)(int)uVar27;
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar5;
    if (*param_4 - (long)param_3 < (long)sVar28) {
                    /* try { // try from 00316c80 to 00316c8f has its CatchHandler @ 00316e68 */
      param_3 = (byte *)FUN_00310fe4(param_4,local_e8,uVar27,param_3);
    }
    else {
      memcpy(param_3,local_e8,sVar28);
      param_3 = param_3 + sVar28;
    }
    FUN_00325e98(&local_f0);
    break;
  default:
                    /* try { // try from 00315ca4 to 00315cbb has its CatchHandler @ 00316edc */
    FUN_0030f640(&local_b0,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/wire_format.cc"
                 ,0x525);
                    /* try { // try from 00315cbc to 00315ccf has its CatchHandler @ 00316ec4 */
    uVar16 = FUN_0030f3ac(&local_b0,"Invalid descriptor");
                    /* try { // try from 00315cd0 to 00315cd7 has its CatchHandler @ 00316ec0 */
    FUN_0030f41c(&local_f0,uVar16);
    FUN_0030f658(&local_b0);
    break;
  case 0xd:
                    /* try { // try from 00315bbc to 00315c0f has its CatchHandler @ 00316f6c */
    piVar13 = (int *)FUN_0038e4c4(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_00327364(&local_f0);
      FUN_00327658(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_00327710(&local_f0,0);
      pvVar15 = (void *)FUN_00327850(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 00315c24 to 00315c5f has its CatchHandler @ 00316ee0 */
    uVar9 = FUN_00318848(param_1,param_2);
    uVar27 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      if ((byte *)*param_4 <= param_3) goto LAB_00315c48;
    }
    else {
                    /* try { // try from 00316a9c to 00316aa7 has its CatchHandler @ 00316ee0 */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      if ((byte *)*param_4 <= param_3) {
LAB_00315c48:
        FUN_0030f640(&local_b0,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                     ,0x35a);
                    /* try { // try from 00315c60 to 00315c73 has its CatchHandler @ 00316db0 */
        uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 00315c74 to 00315c7b has its CatchHandler @ 00316d94 */
        FUN_0030f41c(&puStack_68,uVar16);
        FUN_0030f658(&local_b0);
      }
    }
    uVar17 = uVar5 << 3 | 2;
    if (uVar17 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar17;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar17 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar17;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar17;
      }
    }
    if (0x7f < uVar27) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar26 = pbVar12;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar22 = uVar10 >> 0xe;
        uVar27 = (uint)uVar9;
        pbVar12 = pbVar26 + 1;
        *pbVar26 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar26 = pbVar12;
      } while (uVar22 != 0);
    }
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar27;
    puVar8 = (ulong *)((long)local_e8 + (long)(int)(uint)local_f0 * 4);
    puVar25 = local_e8;
    if (param_3 < (byte *)*param_4) goto LAB_00316840;
LAB_003168a4:
                    /* try { // try from 003168a4 to 003168af has its CatchHandler @ 00316d78 */
    param_3 = (byte *)FUN_00310ec4(param_4,param_3);
    puVar24 = (ulong *)((long)puVar25 + 4);
    uVar5 = (uint)*puVar25;
    if (0x7f < uVar5) goto LAB_0031684c;
LAB_00316828:
    *param_3 = (byte)uVar5;
    param_3 = param_3 + 1;
    while (puVar24 < puVar8) {
      while( true ) {
        puVar25 = puVar24;
        if ((byte *)*param_4 <= param_3) goto LAB_003168a4;
LAB_00316840:
        puVar24 = (ulong *)((long)puVar25 + 4);
        uVar5 = (uint)*puVar25;
        if (uVar5 < 0x80) goto LAB_00316828;
LAB_0031684c:
        *param_3 = (byte)uVar5 | 0x80;
        if (uVar5 >> 0xe == 0) break;
        param_3 = param_3 + 2;
        uVar5 = uVar5 >> 7;
        do {
          pbVar12 = param_3;
          uVar27 = uVar5 >> 7;
          pbVar12[-1] = (byte)uVar5 | 0x80;
          param_3 = pbVar12 + 1;
          uVar17 = uVar5 >> 0xe;
          uVar5 = uVar27;
        } while (uVar17 != 0);
        *pbVar12 = (byte)uVar27;
        if (puVar8 <= puVar24) goto LAB_00316c4c;
      }
      param_3[1] = (byte)(uVar5 >> 7);
      param_3 = param_3 + 2;
    }
LAB_00316c4c:
    FUN_00327990(&local_f0);
    break;
  case 0xe:
                    /* try { // try from 00315ad4 to 00315b27 has its CatchHandler @ 00316f70 */
    piVar13 = (int *)FUN_0038e47c(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_003265e4(&local_f0);
      FUN_003268d8(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_00326990(&local_f0,0);
      pvVar15 = (void *)FUN_00326ad0(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 00315b3c to 00315b77 has its CatchHandler @ 00316ef8 */
    uVar9 = FUN_00318848(param_1,param_2);
    uVar27 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      if ((byte *)*param_4 <= param_3) goto LAB_00315b60;
    }
    else {
                    /* try { // try from 00316a7c to 00316a87 has its CatchHandler @ 00316ef8 */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      if ((byte *)*param_4 <= param_3) {
LAB_00315b60:
        FUN_0030f640(&local_b0,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                     ,0x35a);
                    /* try { // try from 00315b78 to 00315b8b has its CatchHandler @ 00316db4 */
        uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 00315b8c to 00315b93 has its CatchHandler @ 00316d98 */
        FUN_0030f41c(&puStack_68,uVar16);
        FUN_0030f658(&local_b0);
      }
    }
    uVar17 = uVar5 << 3 | 2;
    if (uVar17 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar17;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar17 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar17;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar17;
      }
    }
    if (0x7f < uVar27) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar26 = pbVar12;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar22 = uVar10 >> 0xe;
        uVar27 = (uint)uVar9;
        pbVar12 = pbVar26 + 1;
        *pbVar26 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar26 = pbVar12;
      } while (uVar22 != 0);
    }
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar27;
    puVar8 = (ulong *)((long)local_e8 + (long)(int)(uint)local_f0 * 4);
    puVar25 = local_e8;
    if (param_3 < (byte *)*param_4) goto LAB_00316754;
LAB_003167b8:
                    /* try { // try from 003167b8 to 003167c3 has its CatchHandler @ 00316d7c */
    param_3 = (byte *)FUN_00310ec4(param_4,param_3);
    puVar24 = (ulong *)((long)puVar25 + 4);
    uVar9 = (ulong)(int)(uint)*puVar25;
    if (0x7f < (uint)*puVar25) goto LAB_00316760;
LAB_0031673c:
    *param_3 = (byte)uVar9;
    param_3 = param_3 + 1;
    while (puVar24 < puVar8) {
      while( true ) {
        puVar25 = puVar24;
        if ((byte *)*param_4 <= param_3) goto LAB_003167b8;
LAB_00316754:
        puVar24 = (ulong *)((long)puVar25 + 4);
        uVar9 = (ulong)(int)(uint)*puVar25;
        if ((uint)*puVar25 < 0x80) goto LAB_0031673c;
LAB_00316760:
        *param_3 = (byte)uVar9 | 0x80;
        if ((uVar9 >> 0xe & 0x3ffff) == 0) break;
        uVar9 = uVar9 >> 7;
        param_3 = param_3 + 2;
        do {
          pbVar12 = param_3;
          uVar10 = uVar9 >> 7;
          pbVar12[-1] = (byte)uVar9 | 0x80;
          param_3 = pbVar12 + 1;
          uVar22 = uVar9 >> 0xe;
          uVar9 = uVar10;
        } while (uVar22 != 0);
        *pbVar12 = (byte)uVar10;
        if (puVar8 <= puVar24) goto LAB_00316aec;
      }
      param_3[1] = (byte)(uVar9 >> 7);
      param_3 = param_3 + 2;
    }
    goto LAB_00316aec;
  case 0xf:
                    /* try { // try from 003151e0 to 00315233 has its CatchHandler @ 00316f9c */
    piVar13 = (int *)FUN_0038e47c(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_003265e4(&local_f0);
      FUN_003268d8(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_00326990(&local_f0,0);
      pvVar15 = (void *)FUN_00326ad0(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if (param_3 < (byte *)*param_4) {
      iVar6 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) goto LAB_00315260;
    }
    else {
                    /* try { // try from 003168e0 to 003168eb has its CatchHandler @ 00316ebc */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      iVar6 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) {
LAB_00315260:
                    /* try { // try from 00315260 to 00315277 has its CatchHandler @ 00316ebc */
        FUN_0030f640(&local_b0,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                     ,0x35a);
                    /* try { // try from 00315278 to 0031528b has its CatchHandler @ 00316e38 */
        uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 0031528c to 00315293 has its CatchHandler @ 00316ddc */
        FUN_0030f41c(&puStack_68,uVar16);
        FUN_0030f658(&local_b0);
      }
    }
    uVar27 = uVar5 << 3 | 2;
    uVar17 = iVar6 << 2;
    if (uVar27 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar27;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar27 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar27;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar27;
      }
    }
    uVar5 = uVar17;
    if (0x7f < uVar17) {
      uVar9 = (ulong)uVar17;
      pbVar26 = pbVar12;
      do {
        uVar10 = uVar9 >> 0xe;
        uVar5 = (uint)(uVar9 >> 7);
        pbVar12 = pbVar26 + 1;
        *pbVar26 = (byte)uVar9 | 0x80;
        uVar9 = uVar9 >> 7;
        pbVar26 = pbVar12;
      } while (uVar10 != 0);
    }
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar5;
    sVar28 = (size_t)(int)uVar17;
    if (*param_4 - (long)param_3 < (long)sVar28) {
                    /* try { // try from 00316adc to 00316ae7 has its CatchHandler @ 00316ebc */
      param_3 = (byte *)FUN_00310fe4(param_4,local_e8,(ulong)uVar17,param_3);
    }
    else {
      memcpy(param_3,local_e8,sVar28);
      param_3 = param_3 + sVar28;
    }
LAB_00316aec:
    FUN_00326c10(&local_f0);
LAB_00316af4:
    if (ppuVar23 == (undefined **)0x0) {
      return param_3;
    }
    goto LAB_00316afc;
  case 0x10:
                    /* try { // try from 00315578 to 003155cb has its CatchHandler @ 00316f88 */
    piVar13 = (int *)FUN_0038e4a0(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_003280e4(&local_f0);
      FUN_003283d8(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_00328490(&local_f0,0);
      pvVar15 = (void *)FUN_003285d0(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13 << 3);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if (param_3 < (byte *)*param_4) {
      iVar6 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) goto LAB_003155f8;
    }
    else {
                    /* try { // try from 00316928 to 00316933 has its CatchHandler @ 00316eb4 */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      iVar6 = (uint)local_f0;
      if ((byte *)*param_4 <= param_3) {
LAB_003155f8:
                    /* try { // try from 003155f8 to 0031560f has its CatchHandler @ 00316eb4 */
        FUN_0030f640(&local_b0,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                     ,0x35a);
                    /* try { // try from 00315610 to 00315623 has its CatchHandler @ 00316e18 */
        uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 00315624 to 0031562b has its CatchHandler @ 00316dcc */
        FUN_0030f41c(&puStack_68,uVar16);
        FUN_0030f658(&local_b0);
      }
    }
    uVar27 = uVar5 << 3 | 2;
    uVar17 = iVar6 << 3;
    if (uVar27 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar27;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar27 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar27;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar27;
      }
    }
    uVar5 = uVar17;
    if (0x7f < uVar17) {
      uVar9 = (ulong)uVar17;
      pbVar26 = pbVar12;
      do {
        uVar10 = uVar9 >> 0xe;
        uVar5 = (uint)(uVar9 >> 7);
        pbVar12 = pbVar26 + 1;
        *pbVar26 = (byte)uVar9 | 0x80;
        uVar9 = uVar9 >> 7;
        pbVar26 = pbVar12;
      } while (uVar10 != 0);
    }
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar5;
    sVar28 = (size_t)(int)uVar17;
    if (*param_4 - (long)param_3 < (long)sVar28) {
                    /* try { // try from 00316b90 to 00316b9b has its CatchHandler @ 00316eb4 */
      param_3 = (byte *)FUN_00310fe4(param_4,local_e8,(ulong)uVar17,param_3);
      goto LAB_00316ba0;
    }
    memcpy(param_3,local_e8,sVar28);
    param_3 = param_3 + sVar28;
    FUN_00328710(&local_f0);
    break;
  case 0x11:
                    /* try { // try from 003153ac to 003153ff has its CatchHandler @ 00316f90 */
    piVar13 = (int *)FUN_0038e47c(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_003265e4(&local_f0);
      FUN_003268d8(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_00326990(&local_f0,0);
      pvVar15 = (void *)FUN_00326ad0(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 00315414 to 0031544f has its CatchHandler @ 00316f18 */
    uVar9 = FUN_00318848(param_1,param_2);
    uVar27 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      if (param_3 < (byte *)*param_4) goto LAB_00315474;
    }
    else {
                    /* try { // try from 00316a1c to 00316a27 has its CatchHandler @ 00316f18 */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      if (param_3 < (byte *)*param_4) goto LAB_00315474;
    }
    FUN_0030f640(&local_b0,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                 ,0x35a);
                    /* try { // try from 00315450 to 00315463 has its CatchHandler @ 00316dd4 */
    uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 00315464 to 0031546b has its CatchHandler @ 00316da4 */
    FUN_0030f41c(&puStack_68,uVar16);
    FUN_0030f658(&local_b0);
LAB_00315474:
    uVar17 = uVar5 << 3 | 2;
    if (uVar17 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar17;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar17 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar17;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar17;
      }
    }
    if (0x7f < uVar27) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar26 = pbVar12;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar22 = uVar10 >> 0xe;
        uVar27 = (uint)uVar9;
        pbVar12 = pbVar26 + 1;
        *pbVar26 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar26 = pbVar12;
      } while (uVar22 != 0);
    }
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar27;
    puVar8 = (ulong *)((long)local_e8 + (long)(int)(uint)local_f0 * 4);
    puVar25 = local_e8;
    if (param_3 < (byte *)*param_4) goto LAB_00316494;
    do {
                    /* try { // try from 00316500 to 0031650b has its CatchHandler @ 00316d88 */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
LAB_00316494:
      do {
        puVar24 = (ulong *)((long)puVar25 + 4);
        uVar5 = (uint)*puVar25 << 1 ^ (int)(uint)*puVar25 >> 0x1f;
        if (uVar5 < 0x80) {
          *param_3 = (byte)uVar5;
          param_3 = param_3 + 1;
        }
        else {
          *param_3 = (byte)uVar5 | 0x80;
          if (uVar5 >> 0xe == 0) {
            param_3[1] = (byte)(uVar5 >> 7);
            param_3 = param_3 + 2;
          }
          else {
            pbVar12 = param_3 + 2;
            uVar5 = uVar5 >> 7;
            do {
              pbVar26 = pbVar12;
              uVar27 = uVar5 >> 7;
              pbVar26[-1] = (byte)uVar5 | 0x80;
              uVar17 = uVar5 >> 0xe;
              pbVar12 = pbVar26 + 1;
              uVar5 = uVar27;
            } while (uVar17 != 0);
            *pbVar26 = (byte)uVar27;
            param_3 = pbVar26 + 1;
          }
        }
        if (puVar8 <= puVar24) goto LAB_00316aec;
        puVar25 = puVar24;
      } while (param_3 < (byte *)*param_4);
    } while( true );
  case 0x12:
                    /* try { // try from 003150f8 to 0031514b has its CatchHandler @ 00316fa0 */
    piVar13 = (int *)FUN_0038e4a0(extraout_x1,param_2,param_1);
    local_f0 = (undefined ***)0x0;
    local_e8 = (ulong *)0x0;
    if (*piVar13 != 0) {
      FUN_003280e4(&local_f0);
      FUN_003283d8(&local_f0,*piVar13);
      pvVar14 = (void *)FUN_00328490(&local_f0,0);
      pvVar15 = (void *)FUN_003285d0(piVar13,0);
      memcpy(pvVar14,pvVar15,(long)*piVar13 << 3);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 00315160 to 0031519b has its CatchHandler @ 00316f34 */
    uVar9 = FUN_00318848(param_1,param_2);
    uVar27 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      if (param_3 < (byte *)*param_4) goto LAB_003151c0;
    }
    else {
                    /* try { // try from 003169dc to 003169e7 has its CatchHandler @ 00316f34 */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
      if (param_3 < (byte *)*param_4) goto LAB_003151c0;
    }
    FUN_0030f640(&local_b0,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                 ,0x35a);
                    /* try { // try from 0031519c to 003151af has its CatchHandler @ 00316de0 */
    uVar16 = FUN_0030f3ac(&local_b0,"CHECK failed: ptr < end_: ");
                    /* try { // try from 003151b0 to 003151b7 has its CatchHandler @ 00316dac */
    FUN_0030f41c(&puStack_68,uVar16);
    FUN_0030f658(&local_b0);
LAB_003151c0:
    uVar17 = uVar5 << 3 | 2;
    if (uVar17 < 0x80) {
      pbVar12 = param_3 + 1;
      *param_3 = (byte)uVar17;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar12 = param_3 + 2;
      }
      else {
        pbVar12 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar26 = pbVar12;
          uVar17 = uVar5 >> 7;
          pbVar26[-1] = (byte)uVar5 | 0x80;
          pbVar12 = pbVar26 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar17;
        } while (uVar1 != 0);
        *pbVar26 = (byte)uVar17;
      }
    }
    if (0x7f < uVar27) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar26 = pbVar12;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar22 = uVar10 >> 0xe;
        uVar27 = (uint)uVar9;
        pbVar12 = pbVar26 + 1;
        *pbVar26 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar26 = pbVar12;
      } while (uVar22 != 0);
    }
    param_3 = pbVar12 + 1;
    *pbVar12 = (byte)uVar27;
    puVar8 = local_e8 + (int)(uint)local_f0;
    puVar25 = local_e8;
    if (param_3 < (byte *)*param_4) goto LAB_003162c0;
    do {
                    /* try { // try from 0031632c to 00316337 has its CatchHandler @ 00316d90 */
      param_3 = (byte *)FUN_00310ec4(param_4,param_3);
LAB_003162c0:
      do {
        puVar24 = puVar25 + 1;
        uVar9 = *puVar25 << 1 ^ (long)*puVar25 >> 0x3f;
        if (uVar9 < 0x80) {
          *param_3 = (byte)uVar9;
          param_3 = param_3 + 1;
        }
        else {
          *param_3 = (byte)uVar9 | 0x80;
          if (uVar9 >> 0xe == 0) {
            param_3[1] = (byte)(uVar9 >> 7);
            param_3 = param_3 + 2;
          }
          else {
            uVar9 = uVar9 >> 7;
            pbVar12 = param_3 + 2;
            do {
              pbVar26 = pbVar12;
              uVar10 = uVar9 >> 7;
              pbVar26[-1] = (byte)uVar9 | 0x80;
              uVar22 = uVar9 >> 0xe;
              uVar9 = uVar10;
              pbVar12 = pbVar26 + 1;
            } while (uVar22 != 0);
            *pbVar26 = (byte)uVar10;
            param_3 = pbVar26 + 1;
          }
        }
        if (puVar8 <= puVar24) goto LAB_00316ba0;
        puVar25 = puVar24;
      } while (param_3 < (byte *)*param_4);
    } while( true );
  }
  if (ppuVar23 != (undefined **)0x0) {
LAB_00316afc:
    FUN_002e2ea0(PTR_LAB_04373088,ppuVar23);
  }
  return param_3;
}


