/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e1a00; name: FUN_031e1a00
 */


void FUN_031e1a00(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
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
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  long local_100;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
    lVar17 = param_3;
  }
  else {
    auVar29 = FUN_02898b44(plVar2,param_3,param_14);
    lVar17 = auVar29._8_8_;
    lVar7 = auVar29._0_8_;
  }
  plVar3 = (long *)(param_4 + 0x20);
  if (*(char *)(param_4 + 0x30) == '\x01') {
    local_100 = *plVar3;
  }
  else {
    local_100 = FUN_02898b44(plVar3,lVar17,param_14);
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
    if ((int)local_88 == 0) goto LAB_031e1afc;
  }
  else {
    local_b0 = FUN_031d6208(PTR_PTR_0434a090,local_88 & 0xffffffff,0,0,(long)&local_a8 + 4);
    if ((int)local_a8 == iVar9) goto LAB_031e1afc;
  }
  local_a8 = CONCAT44(local_a8._4_4_,iVar9);
LAB_031e1afc:
  iVar9 = (int)local_98;
  if ((int)(local_b8._4_4_ & 0x3fffffff) < (int)local_98) {
    local_c0 = FUN_031d6208(PTR_PTR_0434a090,local_98 & 0xffffffff,local_c0,local_b8 & 0xffffffff,
                            (long)&local_b8 + 4);
  }
  lVar17 = local_90;
  if ((int)local_b8 != iVar9) {
    local_b8 = CONCAT44(local_b8._4_4_,iVar9);
  }
  fVar19 = 1.0 / *(float *)(param_5 + 4);
  fVar21 = (float)*param_5;
  fVar25 = (float)param_5[2] - fVar21;
  fVar22 = (float)((ulong)*param_5 >> 0x20);
  fVar26 = (float)((ulong)param_5[2] >> 0x20) - fVar22;
  fVar23 = (float)param_5[1];
  fVar27 = (float)param_5[3] - fVar23;
  fVar24 = (float)((ulong)param_5[1] >> 0x20);
  fVar28 = (float)((ulong)param_5[3] >> 0x20) - fVar24;
  fVar20 = -(fVar19 * *(float *)((long)param_5 + 0x24));
  uStack_d0 = CONCAT44(fVar26 * fVar19,fVar25 * fVar19);
  uStack_c8 = CONCAT44(fVar28 * fVar19,fVar27 * fVar19);
  uStack_d8 = CONCAT44(fVar24 + fVar28 * fVar20,fVar23 + fVar27 * fVar20);
  local_e0 = CONCAT44(fVar22 + fVar26 * fVar20,fVar21 + fVar25 * fVar20);
  iVar9 = (int)local_88;
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar18 = *plVar2;
  }
  else {
    lVar18 = FUN_02898b44(plVar2);
  }
  if (param_7 != param_8) {
    iVar14 = 0;
    iVar12 = 0;
    iVar15 = iVar14;
    iVar16 = 0;
    if (iVar9 < 1) goto LAB_031e1c5c;
    do {
      piVar8 = (int *)(lVar17 + 8 + (long)iVar14 * 0x10);
      iVar16 = iVar14;
      do {
        iVar15 = iVar14;
        if (*piVar8 != iVar12) break;
        iVar16 = iVar16 + 1;
        piVar8 = piVar8 + 4;
      } while (iVar9 != iVar16);
LAB_031e1c5c:
      do {
        iVar14 = iVar16;
        if (iVar14 - iVar15 < 2) {
          local_80 = *param_7;
          local_7c = param_7[1];
          FUN_031e1300(param_3,(ulong)&local_80 | 4);
          puVar1 = (undefined4 *)(local_b0 + (long)iVar15 * 8);
          *puVar1 = local_80;
          puVar1[1] = local_7c;
          lVar13 = *(long *)(lVar18 + 0xe0) + (long)(local_7c - *(int *)(lVar18 + 0x30)) * 0x14;
          *(undefined8 *)(lVar13 + 8) = 0xffffffffffffffff;
          *(byte *)(lVar13 + 0x10) = *(byte *)(lVar13 + 0x10) & 0xbf;
        }
        else {
          local_68 = *param_7;
          local_64 = param_7[1];
          FUN_031e0f00(param_2,param_3,&local_e0,&local_68,lVar17 + (long)iVar15 * 0x10,
                       iVar14 - iVar15,local_b0 + (long)iVar15 * 8);
        }
        param_7 = param_7 + 2;
        iVar12 = iVar12 + 1;
        if (param_7 == param_8) goto LAB_031e1c9c;
        iVar15 = iVar14;
        iVar16 = iVar14;
      } while (iVar9 <= iVar14);
    } while( true );
  }
LAB_031e1c9c:
  lVar17 = local_a0;
  fVar19 = 1.0 / *(float *)(param_6 + 4);
  fVar21 = (float)*param_6;
  fVar25 = (float)param_6[2] - fVar21;
  fVar22 = (float)((ulong)*param_6 >> 0x20);
  fVar26 = (float)((ulong)param_6[2] >> 0x20) - fVar22;
  fVar23 = (float)param_6[1];
  fVar27 = (float)param_6[3] - fVar23;
  fVar24 = (float)((ulong)param_6[1] >> 0x20);
  fVar28 = (float)((ulong)param_6[3] >> 0x20) - fVar24;
  fVar20 = -(fVar19 * *(float *)((long)param_6 + 0x24));
  uStack_d0 = CONCAT44(fVar26 * fVar19,fVar25 * fVar19);
  uStack_c8 = CONCAT44(fVar28 * fVar19,fVar27 * fVar19);
  iVar9 = (int)local_98;
  uStack_d8 = CONCAT44(fVar24 + fVar28 * fVar20,fVar23 + fVar27 * fVar20);
  local_e0 = CONCAT44(fVar22 + fVar26 * fVar20,fVar21 + fVar25 * fVar20);
  if (*(char *)(param_4 + 0x30) == '\x01') {
    lVar18 = *plVar3;
  }
  else {
    lVar18 = FUN_02898b44(plVar3);
  }
  if (param_10 != param_11) {
    iVar14 = 0;
    iVar12 = 0;
    iVar15 = iVar14;
    iVar16 = 0;
    if (iVar9 < 1) goto LAB_031e1dc0;
    do {
      piVar8 = (int *)(lVar17 + 8 + (long)iVar14 * 0x10);
      iVar16 = iVar14;
      do {
        iVar15 = iVar14;
        if (*piVar8 != iVar12) break;
        iVar16 = iVar16 + 1;
        piVar8 = piVar8 + 4;
      } while (iVar9 != iVar16);
LAB_031e1dc0:
      do {
        iVar14 = iVar16;
        if (iVar14 - iVar15 < 2) {
          local_80 = *param_10;
          local_7c = param_10[1];
          FUN_031e1300(param_4,(ulong)&local_80 | 4);
          puVar1 = (undefined4 *)(local_c0 + (long)iVar15 * 8);
          *puVar1 = local_80;
          puVar1[1] = local_7c;
          lVar13 = *(long *)(lVar18 + 0xe0) + (long)(local_7c - *(int *)(lVar18 + 0x30)) * 0x14;
          *(undefined8 *)(lVar13 + 8) = 0xffffffffffffffff;
          *(byte *)(lVar13 + 0x10) = *(byte *)(lVar13 + 0x10) & 0xbf;
        }
        else {
          local_68 = *param_10;
          local_64 = param_10[1];
          FUN_031e0f00(param_2,param_4,&local_e0,&local_68,lVar17 + (long)iVar15 * 0x10,
                       iVar14 - iVar15,local_c0 + (long)iVar15 * 8);
        }
        param_10 = param_10 + 2;
        iVar12 = iVar12 + 1;
        if (param_10 == param_11) goto LAB_031e1e60;
        iVar15 = iVar14;
        iVar16 = iVar14;
      } while (iVar9 <= iVar14);
    } while( true );
  }
LAB_031e1e60:
  if ((int)local_a8 != 0) {
    lVar18 = (long)(int)local_a8 << 3;
    lVar17 = local_b0 + 4;
    do {
      FUN_031e1300(param_3,lVar17);
      lVar18 = lVar18 + -8;
      lVar17 = lVar17 + 8;
    } while (lVar18 != 0);
  }
  if ((int)local_b8 != 0) {
    lVar18 = (long)(int)local_b8 << 3;
    lVar17 = local_c0 + 4;
    do {
      FUN_031e1300(param_4,lVar17);
      lVar18 = lVar18 + -8;
      lVar17 = lVar17 + 8;
    } while (lVar18 != 0);
  }
  iVar9 = *(int *)(*(long *)(param_3 + 0x20) + 0x17c);
  iVar12 = *(int *)(*(long *)(param_4 + 0x20) + 0x17c);
  if (0 < (int)local_88) {
    plVar2 = (long *)(lVar7 + 0xc0);
    plVar3 = (long *)(lVar7 + 0x70);
    if (iVar9 == iVar12) {
      lVar17 = 0;
      lVar18 = 0xc;
      lVar13 = 4;
      lVar11 = local_90;
      iVar16 = (int)local_88;
      do {
        if (*(int *)(lVar11 + lVar18) != -1) {
          iVar16 = *(int *)(local_b0 + lVar13);
          iVar15 = iVar16 - *(int *)(lVar7 + 0x30);
          if (iVar16 < *(int *)(lVar7 + 0x30)) {
            iVar15 = iVar16;
            if (*(int *)(lVar7 + 0x78) != 0) {
              iVar15 = *(int *)(*plVar3 + (long)iVar16 * 4);
            }
            if (iVar15 != -1) {
              lVar10 = *plVar2;
              goto LAB_031e1f24;
            }
            lVar10 = FUN_031e16b0(*(undefined8 *)(lVar7 + 0x28),plVar2,*(undefined8 *)(lVar7 + 0x58)
                                  ,lVar7 + 0x130,plVar3,lVar7 + 0x80,iVar16,
                                  *(undefined4 *)(lVar7 + 0x60));
            lVar11 = local_90;
          }
          else {
            lVar10 = *(long *)(lVar7 + 0xe0);
LAB_031e1f24:
            lVar10 = lVar10 + (long)iVar15 * 0x14;
          }
          *(undefined4 *)(lVar10 + 0xc) =
               *(undefined4 *)(local_c0 + (long)*(int *)(lVar11 + lVar18) * 8);
          *(undefined4 *)(lVar10 + 8) =
               *(undefined4 *)(local_c0 + (long)*(int *)(lVar11 + lVar18) * 8 + 4);
          *(byte *)(lVar10 + 0x10) = *(byte *)(lVar10 + 0x10) & 0xbf;
          iVar16 = (int)local_88;
        }
        lVar17 = lVar17 + 1;
        lVar18 = lVar18 + 0x10;
        lVar13 = lVar13 + 8;
      } while (lVar17 < iVar16);
    }
    else {
      lVar17 = 0;
      lVar18 = 0xc;
      lVar13 = 4;
      lVar11 = local_90;
      iVar16 = (int)local_88;
      do {
        if (*(int *)(lVar11 + lVar18) != -1) {
          iVar16 = *(int *)(local_b0 + lVar13);
          iVar15 = iVar16 - *(int *)(lVar7 + 0x30);
          if (iVar16 < *(int *)(lVar7 + 0x30)) {
            iVar15 = iVar16;
            if (*(int *)(lVar7 + 0x78) != 0) {
              iVar15 = *(int *)(*plVar3 + (long)iVar16 * 4);
            }
            if (iVar15 != -1) {
              lVar10 = *plVar2;
              goto LAB_031e1ffc;
            }
            lVar10 = FUN_031e16b0(*(undefined8 *)(lVar7 + 0x28),plVar2,*(undefined8 *)(lVar7 + 0x58)
                                  ,lVar7 + 0x130,plVar3,lVar7 + 0x80,iVar16,
                                  *(undefined4 *)(lVar7 + 0x60));
            lVar11 = local_90;
          }
          else {
            lVar10 = *(long *)(lVar7 + 0xe0);
LAB_031e1ffc:
            lVar10 = lVar10 + (long)iVar15 * 0x14;
          }
          *(uint *)(lVar10 + 0xc) =
               *(uint *)(local_c0 + (long)*(int *)(lVar11 + lVar18) * 8) | iVar12 << 0x16;
          *(uint *)(lVar10 + 8) =
               *(uint *)(local_c0 + (long)*(int *)(lVar11 + lVar18) * 8 + 4) | iVar12 << 0x16;
          *(byte *)(lVar10 + 0x10) = *(byte *)(lVar10 + 0x10) | 0x40;
          iVar16 = (int)local_88;
        }
        lVar17 = lVar17 + 1;
        lVar18 = lVar18 + 0x10;
        lVar13 = lVar13 + 8;
      } while (lVar17 < iVar16);
    }
  }
  if (0 < (int)local_98) {
    plVar2 = (long *)(local_100 + 0xc0);
    plVar3 = (long *)(local_100 + 0x70);
    if (iVar9 == iVar12) {
      lVar17 = 0;
      lVar7 = 0xc;
      lVar18 = 4;
      lVar13 = local_a0;
      iVar9 = (int)local_98;
      do {
        if (*(int *)(lVar13 + lVar7) != -1) {
          iVar9 = *(int *)(local_c0 + lVar18);
          iVar12 = iVar9 - *(int *)(local_100 + 0x30);
          if (iVar9 < *(int *)(local_100 + 0x30)) {
            iVar12 = iVar9;
            if (*(int *)(local_100 + 0x78) != 0) {
              iVar12 = *(int *)(*plVar3 + (long)iVar9 * 4);
            }
            if (iVar12 != -1) {
              lVar11 = *plVar2;
              goto LAB_031e2108;
            }
            lVar11 = FUN_031e16b0(*(undefined8 *)(local_100 + 0x28),plVar2,
                                  *(undefined8 *)(local_100 + 0x58),local_100 + 0x130,plVar3,
                                  local_100 + 0x80,iVar9,*(undefined4 *)(local_100 + 0x60));
            lVar13 = local_a0;
          }
          else {
            lVar11 = *(long *)(local_100 + 0xe0);
LAB_031e2108:
            lVar11 = lVar11 + (long)iVar12 * 0x14;
          }
          *(undefined4 *)(lVar11 + 0xc) =
               *(undefined4 *)(local_b0 + (long)*(int *)(lVar13 + lVar7) * 8);
          *(undefined4 *)(lVar11 + 8) =
               *(undefined4 *)(local_b0 + (long)*(int *)(lVar13 + lVar7) * 8 + 4);
          *(byte *)(lVar11 + 0x10) = *(byte *)(lVar11 + 0x10) & 0xbf;
          iVar9 = (int)local_98;
        }
        lVar17 = lVar17 + 1;
        lVar7 = lVar7 + 0x10;
        lVar18 = lVar18 + 8;
      } while (lVar17 < iVar9);
    }
    else {
      lVar17 = 0;
      lVar7 = 0xc;
      lVar18 = 4;
      lVar13 = local_a0;
      iVar12 = (int)local_98;
      do {
        if (*(int *)(lVar13 + lVar7) != -1) {
          iVar12 = *(int *)(local_c0 + lVar18);
          iVar16 = iVar12 - *(int *)(local_100 + 0x30);
          if (iVar12 < *(int *)(local_100 + 0x30)) {
            iVar16 = iVar12;
            if (*(int *)(local_100 + 0x78) != 0) {
              iVar16 = *(int *)(*plVar3 + (long)iVar12 * 4);
            }
            if (iVar16 != -1) {
              lVar11 = *plVar2;
              goto LAB_031e21e0;
            }
            lVar11 = FUN_031e16b0(*(undefined8 *)(local_100 + 0x28),plVar2,
                                  *(undefined8 *)(local_100 + 0x58),local_100 + 0x130,plVar3,
                                  local_100 + 0x80,iVar12,*(undefined4 *)(local_100 + 0x60));
            lVar13 = local_a0;
          }
          else {
            lVar11 = *(long *)(local_100 + 0xe0);
LAB_031e21e0:
            lVar11 = lVar11 + (long)iVar16 * 0x14;
          }
          *(uint *)(lVar11 + 0xc) =
               *(uint *)(local_b0 + (long)*(int *)(lVar13 + lVar7) * 8) | iVar9 << 0x16;
          *(uint *)(lVar11 + 8) =
               *(uint *)(local_b0 + (long)*(int *)(lVar13 + lVar7) * 8 + 4) | iVar9 << 0x16;
          *(byte *)(lVar11 + 0x10) = *(byte *)(lVar11 + 0x10) | 0x40;
          iVar12 = (int)local_98;
        }
        lVar17 = lVar17 + 1;
        lVar7 = lVar7 + 0x10;
        lVar18 = lVar18 + 8;
      } while (lVar17 < iVar12);
    }
  }
  uVar5 = local_b8;
  puVar4 = PTR_PTR_0434a090;
  uVar6 = local_b8._4_4_;
  local_b8 = (ulong)local_b8._4_4_ << 0x20;
  if ((-1 < (long)uVar5) && (local_c0 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_c0,8,uVar6 & 0x3fffffff);
  }
  lVar17 = local_a8;
  uVar6 = local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar17) && (local_b0 != 0)) {
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


