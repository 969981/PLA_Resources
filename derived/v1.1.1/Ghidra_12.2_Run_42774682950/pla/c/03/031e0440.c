/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e0440; name: FUN_031e0440
 */


void FUN_031e0440(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined8 param_9,undefined4 *param_10,undefined4 *param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  long local_100;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined4 local_80;
  int local_7c;
  undefined4 local_68;
  undefined4 local_64;
  
  plVar2 = (long *)(param_3 + 0x20);
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar7 = *plVar2;
  }
  else {
    lVar7 = FUN_02898b44(plVar2,param_3,param_4,param_15);
  }
  plVar3 = (long *)(param_4 + 0x20);
  if (*(char *)(param_4 + 0x30) == '\x01') {
    local_100 = *plVar3;
  }
  else {
    local_100 = FUN_02898b44(plVar3);
  }
  local_90 = 0;
  local_88 = 0x8000000000000000;
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  FUN_031de5a0(param_1,param_12,param_13,param_14,param_15,&local_90,&local_a0,param_16);
  iVar9 = (int)local_88;
  local_b0 = 0;
  local_a8 = -0x8000000000000000;
  local_c0 = 0;
  local_b8 = 0x8000000000000000;
  if ((int)local_88 < 1) {
    if ((int)local_88 == 0) goto LAB_031e053c;
  }
  else {
    local_b0 = FUN_031d6208(PTR_PTR_0434a090,local_88 & 0xffffffff,0,0,(long)&local_a8 + 4);
    if ((int)local_a8 == iVar9) goto LAB_031e053c;
  }
  local_a8 = CONCAT44(local_a8._4_4_,iVar9);
LAB_031e053c:
  iVar9 = (int)local_98;
  if ((int)(local_b8._4_4_ & 0x3fffffff) < (int)local_98) {
    local_c0 = FUN_031d6208(PTR_PTR_0434a090,local_98 & 0xffffffff,local_c0,local_b8 & 0xffffffff,
                            (long)&local_b8 + 4);
  }
  lVar12 = local_90;
  if ((int)local_b8 != iVar9) {
    local_b8 = CONCAT44(local_b8._4_4_,iVar9);
  }
  uStack_d8 = param_5[1];
  local_e0 = *param_5;
  local_d0 = CONCAT44((float)((ulong)param_5[2] >> 0x20) - (float)((ulong)local_e0 >> 0x20),
                      (float)param_5[2] - (float)local_e0);
  uStack_c8 = CONCAT44((float)((ulong)param_5[3] >> 0x20) - (float)((ulong)uStack_d8 >> 0x20),
                       (float)param_5[3] - (float)uStack_d8);
  iVar9 = (int)local_88;
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar14 = *plVar2;
  }
  else {
    lVar14 = FUN_02898b44(plVar2);
  }
  if (param_7 != param_8) {
    iVar17 = 0;
    iVar13 = 0;
    iVar18 = iVar17;
    iVar15 = 0;
    if (iVar9 < 1) goto LAB_031e0684;
    do {
      piVar8 = (int *)(lVar12 + 8 + (long)iVar17 * 0x10);
      iVar15 = iVar17;
      do {
        iVar18 = iVar17;
        if (*piVar8 != iVar13) break;
        iVar15 = iVar15 + 1;
        piVar8 = piVar8 + 4;
      } while (iVar9 != iVar15);
LAB_031e0684:
      do {
        iVar17 = iVar15;
        if (iVar17 - iVar18 < 2) {
          local_80 = *param_7;
          local_7c = param_7[1];
          FUN_031e1300(param_3,(ulong)&local_80 | 4);
          puVar1 = (undefined4 *)(local_b0 + (long)iVar18 * 8);
          *puVar1 = local_80;
          puVar1[1] = local_7c;
          lVar16 = *(long *)(lVar14 + 0xe0) + (long)(local_7c - *(int *)(lVar14 + 0x30)) * 0x14;
          *(undefined8 *)(lVar16 + 8) = 0xffffffffffffffff;
          *(byte *)(lVar16 + 0x10) = *(byte *)(lVar16 + 0x10) & 0xbf;
        }
        else {
          local_68 = *param_7;
          local_64 = param_7[1];
          FUN_031e0f00(param_2,param_3,&local_e0,&local_68,lVar12 + (long)iVar18 * 0x10,
                       iVar17 - iVar18,local_b0 + (long)iVar18 * 8);
        }
        param_7 = param_7 + 2;
        iVar13 = iVar13 + 1;
        if (param_7 == param_8) goto LAB_031e06c4;
        iVar18 = iVar17;
        iVar15 = iVar17;
      } while (iVar9 <= iVar17);
    } while( true );
  }
LAB_031e06c4:
  lVar12 = local_a0;
  iVar9 = (int)local_98;
  uStack_d8 = param_6[1];
  local_e0 = *param_6;
  local_d0 = CONCAT44((float)((ulong)param_6[2] >> 0x20) - (float)((ulong)local_e0 >> 0x20),
                      (float)param_6[2] - (float)local_e0);
  uStack_c8 = CONCAT44((float)((ulong)param_6[3] >> 0x20) - (float)((ulong)uStack_d8 >> 0x20),
                       (float)param_6[3] - (float)uStack_d8);
  if (*(char *)(param_4 + 0x30) == '\x01') {
    lVar14 = *plVar3;
  }
  else {
    lVar14 = FUN_02898b44(plVar3);
  }
  if (param_10 != param_11) {
    iVar17 = 0;
    iVar13 = 0;
    iVar18 = iVar17;
    iVar15 = 0;
    if (iVar9 < 1) goto LAB_031e07d4;
    do {
      piVar8 = (int *)(lVar12 + 8 + (long)iVar17 * 0x10);
      iVar15 = iVar17;
      do {
        iVar18 = iVar17;
        if (*piVar8 != iVar13) break;
        iVar15 = iVar15 + 1;
        piVar8 = piVar8 + 4;
      } while (iVar9 != iVar15);
LAB_031e07d4:
      do {
        iVar17 = iVar15;
        if (iVar17 - iVar18 < 2) {
          local_80 = *param_10;
          local_7c = param_10[1];
          FUN_031e1300(param_4,(ulong)&local_80 | 4);
          puVar1 = (undefined4 *)(local_c0 + (long)iVar18 * 8);
          *puVar1 = local_80;
          puVar1[1] = local_7c;
          lVar16 = *(long *)(lVar14 + 0xe0) + (long)(local_7c - *(int *)(lVar14 + 0x30)) * 0x14;
          *(undefined8 *)(lVar16 + 8) = 0xffffffffffffffff;
          *(byte *)(lVar16 + 0x10) = *(byte *)(lVar16 + 0x10) & 0xbf;
        }
        else {
          local_68 = *param_10;
          local_64 = param_10[1];
          FUN_031e0f00(param_2,param_4,&local_e0,&local_68,lVar12 + (long)iVar18 * 0x10,
                       iVar17 - iVar18,local_c0 + (long)iVar18 * 8);
        }
        param_10 = param_10 + 2;
        iVar13 = iVar13 + 1;
        if (param_10 == param_11) goto LAB_031e0874;
        iVar18 = iVar17;
        iVar15 = iVar17;
      } while (iVar9 <= iVar17);
    } while( true );
  }
LAB_031e0874:
  if ((int)local_a8 != 0) {
    lVar14 = (long)(int)local_a8 << 3;
    lVar12 = local_b0 + 4;
    do {
      FUN_031e1300(param_3,lVar12);
      lVar14 = lVar14 + -8;
      lVar12 = lVar12 + 8;
    } while (lVar14 != 0);
  }
  if ((int)local_b8 != 0) {
    lVar14 = (long)(int)local_b8 << 3;
    lVar12 = local_c0 + 4;
    do {
      FUN_031e1300(param_4,lVar12);
      lVar14 = lVar14 + -8;
      lVar12 = lVar12 + 8;
    } while (lVar14 != 0);
  }
  iVar9 = *(int *)(*(long *)(param_3 + 0x20) + 0x17c);
  iVar13 = *(int *)(*(long *)(param_4 + 0x20) + 0x17c);
  if (0 < (int)local_88) {
    plVar2 = (long *)(lVar7 + 0xc0);
    plVar3 = (long *)(lVar7 + 0x70);
    if (iVar9 == iVar13) {
      lVar12 = 0;
      lVar14 = 0xc;
      lVar16 = 4;
      lVar11 = local_90;
      iVar15 = (int)local_88;
      do {
        if (*(int *)(lVar11 + lVar14) != -1) {
          iVar15 = *(int *)(local_b0 + lVar16);
          iVar18 = iVar15 - *(int *)(lVar7 + 0x30);
          if (iVar15 < *(int *)(lVar7 + 0x30)) {
            iVar18 = iVar15;
            if (*(int *)(lVar7 + 0x78) != 0) {
              iVar18 = *(int *)(*plVar3 + (long)iVar15 * 4);
            }
            if (iVar18 != -1) {
              lVar10 = *plVar2;
              goto LAB_031e0930;
            }
            lVar10 = FUN_031e16b0(*(undefined8 *)(lVar7 + 0x28),plVar2,*(undefined8 *)(lVar7 + 0x58)
                                  ,lVar7 + 0x130,plVar3,lVar7 + 0x80,iVar15,
                                  *(undefined4 *)(lVar7 + 0x60));
            lVar11 = local_90;
          }
          else {
            lVar10 = *(long *)(lVar7 + 0xe0);
LAB_031e0930:
            lVar10 = lVar10 + (long)iVar18 * 0x14;
          }
          *(undefined4 *)(lVar10 + 0xc) =
               *(undefined4 *)(local_c0 + (long)*(int *)(lVar11 + lVar14) * 8);
          *(undefined4 *)(lVar10 + 8) =
               *(undefined4 *)(local_c0 + (long)*(int *)(lVar11 + lVar14) * 8 + 4);
          *(byte *)(lVar10 + 0x10) = *(byte *)(lVar10 + 0x10) & 0xbf;
          iVar15 = (int)local_88;
        }
        lVar12 = lVar12 + 1;
        lVar14 = lVar14 + 0x10;
        lVar16 = lVar16 + 8;
      } while (lVar12 < iVar15);
    }
    else {
      lVar12 = 0;
      lVar14 = 0xc;
      lVar16 = 4;
      lVar11 = local_90;
      iVar15 = (int)local_88;
      do {
        if (*(int *)(lVar11 + lVar14) != -1) {
          iVar15 = *(int *)(local_b0 + lVar16);
          iVar18 = iVar15 - *(int *)(lVar7 + 0x30);
          if (iVar15 < *(int *)(lVar7 + 0x30)) {
            iVar18 = iVar15;
            if (*(int *)(lVar7 + 0x78) != 0) {
              iVar18 = *(int *)(*plVar3 + (long)iVar15 * 4);
            }
            if (iVar18 != -1) {
              lVar10 = *plVar2;
              goto LAB_031e0a08;
            }
            lVar10 = FUN_031e16b0(*(undefined8 *)(lVar7 + 0x28),plVar2,*(undefined8 *)(lVar7 + 0x58)
                                  ,lVar7 + 0x130,plVar3,lVar7 + 0x80,iVar15,
                                  *(undefined4 *)(lVar7 + 0x60));
            lVar11 = local_90;
          }
          else {
            lVar10 = *(long *)(lVar7 + 0xe0);
LAB_031e0a08:
            lVar10 = lVar10 + (long)iVar18 * 0x14;
          }
          *(uint *)(lVar10 + 0xc) =
               *(uint *)(local_c0 + (long)*(int *)(lVar11 + lVar14) * 8) | iVar13 << 0x16;
          *(uint *)(lVar10 + 8) =
               *(uint *)(local_c0 + (long)*(int *)(lVar11 + lVar14) * 8 + 4) | iVar13 << 0x16;
          *(byte *)(lVar10 + 0x10) = *(byte *)(lVar10 + 0x10) | 0x40;
          iVar15 = (int)local_88;
        }
        lVar12 = lVar12 + 1;
        lVar14 = lVar14 + 0x10;
        lVar16 = lVar16 + 8;
      } while (lVar12 < iVar15);
    }
  }
  if (0 < (int)local_98) {
    plVar2 = (long *)(local_100 + 0xc0);
    plVar3 = (long *)(local_100 + 0x70);
    if (iVar9 == iVar13) {
      lVar7 = 0;
      lVar12 = 0xc;
      lVar14 = 4;
      lVar16 = local_a0;
      iVar9 = (int)local_98;
      do {
        if (*(int *)(lVar16 + lVar12) != -1) {
          iVar9 = *(int *)(local_c0 + lVar14);
          iVar13 = iVar9 - *(int *)(local_100 + 0x30);
          if (iVar9 < *(int *)(local_100 + 0x30)) {
            iVar13 = iVar9;
            if (*(int *)(local_100 + 0x78) != 0) {
              iVar13 = *(int *)(*plVar3 + (long)iVar9 * 4);
            }
            if (iVar13 != -1) {
              lVar11 = *plVar2;
              goto LAB_031e0b18;
            }
            lVar11 = FUN_031e16b0(*(undefined8 *)(local_100 + 0x28),plVar2,
                                  *(undefined8 *)(local_100 + 0x58),local_100 + 0x130,plVar3,
                                  local_100 + 0x80,iVar9,*(undefined4 *)(local_100 + 0x60));
            lVar16 = local_a0;
          }
          else {
            lVar11 = *(long *)(local_100 + 0xe0);
LAB_031e0b18:
            lVar11 = lVar11 + (long)iVar13 * 0x14;
          }
          *(undefined4 *)(lVar11 + 0xc) =
               *(undefined4 *)(local_b0 + (long)*(int *)(lVar16 + lVar12) * 8);
          *(undefined4 *)(lVar11 + 8) =
               *(undefined4 *)(local_b0 + (long)*(int *)(lVar16 + lVar12) * 8 + 4);
          *(byte *)(lVar11 + 0x10) = *(byte *)(lVar11 + 0x10) & 0xbf;
          iVar9 = (int)local_98;
        }
        lVar7 = lVar7 + 1;
        lVar12 = lVar12 + 0x10;
        lVar14 = lVar14 + 8;
      } while (lVar7 < iVar9);
    }
    else {
      lVar7 = 0;
      lVar12 = 0xc;
      lVar14 = 4;
      lVar16 = local_a0;
      iVar13 = (int)local_98;
      do {
        if (*(int *)(lVar16 + lVar12) != -1) {
          iVar13 = *(int *)(local_c0 + lVar14);
          iVar15 = iVar13 - *(int *)(local_100 + 0x30);
          if (iVar13 < *(int *)(local_100 + 0x30)) {
            iVar15 = iVar13;
            if (*(int *)(local_100 + 0x78) != 0) {
              iVar15 = *(int *)(*plVar3 + (long)iVar13 * 4);
            }
            if (iVar15 != -1) {
              lVar11 = *plVar2;
              goto LAB_031e0bf0;
            }
            lVar11 = FUN_031e16b0(*(undefined8 *)(local_100 + 0x28),plVar2,
                                  *(undefined8 *)(local_100 + 0x58),local_100 + 0x130,plVar3,
                                  local_100 + 0x80,iVar13,*(undefined4 *)(local_100 + 0x60));
            lVar16 = local_a0;
          }
          else {
            lVar11 = *(long *)(local_100 + 0xe0);
LAB_031e0bf0:
            lVar11 = lVar11 + (long)iVar15 * 0x14;
          }
          *(uint *)(lVar11 + 0xc) =
               *(uint *)(local_b0 + (long)*(int *)(lVar16 + lVar12) * 8) | iVar9 << 0x16;
          *(uint *)(lVar11 + 8) =
               *(uint *)(local_b0 + (long)*(int *)(lVar16 + lVar12) * 8 + 4) | iVar9 << 0x16;
          *(byte *)(lVar11 + 0x10) = *(byte *)(lVar11 + 0x10) | 0x40;
          iVar13 = (int)local_98;
        }
        lVar7 = lVar7 + 1;
        lVar12 = lVar12 + 0x10;
        lVar14 = lVar14 + 8;
      } while (lVar7 < iVar13);
    }
  }
  uVar5 = local_b8;
  puVar4 = PTR_PTR_0434a090;
  uVar6 = local_b8._4_4_;
  local_b8 = (ulong)local_b8._4_4_ << 0x20;
  if ((-1 < (long)uVar5) && (local_c0 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_c0,8,uVar6 & 0x3fffffff);
  }
  lVar7 = local_a8;
  uVar6 = local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_b0 != 0)) {
    FUN_032cf244(puVar4,local_b0,8,uVar6 & 0x3fffffff);
  }
  uVar5 = local_98;
  uVar6 = local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < (long)uVar5) && (local_a0 != 0)) {
    FUN_032cf244(puVar4,local_a0,0x10,uVar6 & 0x3fffffff);
  }
  uVar5 = local_88;
  uVar6 = local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < (long)uVar5) && (local_90 != 0)) {
    FUN_032cf244(puVar4,local_90,0x10,uVar6 & 0x3fffffff);
  }
  return;
}


