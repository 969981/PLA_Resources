/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03190328; name: FUN_03190328
 */


void FUN_03190328(long param_1,int *param_2,undefined4 param_3,long *param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  int *piVar19;
  long *plVar20;
  int iVar21;
  uint *puVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  undefined1 auVar26 [16];
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  local_90 = 0;
  local_88 = -0x8000000000000000;
  local_70 = 0;
  local_68 = -0x8000000000000000;
  local_80 = 0;
  local_78 = -0x8000000000000000;
  iVar7 = FUN_03190284(param_1 + 0x188,param_2,&local_90);
  lVar14 = local_68;
  puVar6 = PTR_PTR_0434a080;
  uVar2 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  uVar8 = extraout_x1;
  if ((-1 < lVar14) && (uVar8 = 0, local_70 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,local_70,uVar2 << 2);
    uVar8 = extraout_x1_00;
  }
  lVar14 = local_78;
  uVar2 = local_78._4_4_;
  local_70 = 0;
  local_68 = CONCAT44(0x80000000,(undefined4)local_68);
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar14) && (uVar8 = 0, local_80 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_80,uVar2 << 2);
    uVar8 = extraout_x1_01;
  }
  lVar14 = local_88;
  uVar10 = (ulong)local_88._4_4_;
  local_80 = 0;
  local_78 = CONCAT44(0x80000000,(undefined4)local_78);
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar14) && (uVar8 = 0, local_90 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_90,(uVar10 & 0x3fffffff) * 0x14);
    uVar8 = extraout_x1_02;
  }
  lVar25 = *(long *)(param_1 + 0x188);
  lVar18 = lVar25 + (long)iVar7 * 0x38;
  piVar19 = (int *)(lVar18 + 0x10);
  iVar21 = *piVar19;
  lVar14 = *(long *)(param_1 + 0x18) + (long)*param_2 * 0x10;
  lVar16 = (long)iVar7;
  plVar17 = (long *)(lVar18 + 8);
  sVar4 = *(short *)(lVar14 + 10) + *(short *)(lVar14 + 8);
  if (0 < iVar21) {
    lVar18 = *plVar17;
    auVar26._8_8_ = uVar8;
    auVar26._0_8_ = lVar18;
    lVar12 = (long)iVar21;
    lVar11 = 0;
    lVar14 = 0x10;
    do {
      if ((*(byte *)(lVar18 + lVar14) >> 3 & 1) != 0) {
        uVar10 = -lVar11;
        uVar23 = uVar10 & 0xffffffff;
        lVar15 = (uVar23 + (uVar10 & 0xffffffff) * 4) * 4;
        lVar13 = 0;
        lVar14 = lVar15 + 0x24;
        do {
          if (lVar12 <= (long)(uVar23 + lVar13 + 1)) {
            if ((int)(*(uint *)(lVar25 + lVar16 * 0x38 + 0x14) & 0x3fffffff) <= iVar21) {
              auVar26 = FUN_0318a8d4(puVar6,iVar21 + 1,lVar18,iVar21);
              *plVar17 = auVar26._0_8_;
              lVar12 = (long)*piVar19;
            }
            lVar14 = auVar26._0_8_ + lVar12 * 0x14;
            *piVar19 = iVar21 + 1;
            *(undefined8 *)(lVar14 + 8) = 0xffffffffffffffff;
            *(undefined4 *)(lVar14 + 0x10) = 4;
            param_4[4] = lVar14;
            lVar14 = lVar25 + lVar16 * 0x38;
            uVar9 = *(uint *)(lVar14 + 0x24);
            plVar24 = (long *)(lVar14 + 0x18);
            uVar3 = *(uint *)(lVar14 + 0x20);
            uVar2 = uVar3 + *(int *)(param_1 + 0x60);
            if ((int)(uVar9 & 0x3fffffff) < (int)uVar2) {
              lVar18 = *plVar24;
              if (0x3fffffff < (int)uVar2) {
                FUN_032bd0a8(uVar2,auVar26._8_8_,auVar26._0_8_,lVar18);
                uVar9 = *(uint *)(lVar14 + 0x24);
              }
              uVar9 = (uVar9 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar9) {
                uVar9 = 0x3fffffff;
              }
              uVar5 = uVar2;
              if ((int)uVar2 <= (int)uVar9) {
                uVar5 = uVar9;
              }
              lVar18 = FUN_032bd1d4(puVar6,uVar5,4,lVar18,uVar3);
              *plVar24 = lVar18;
            }
            else {
              lVar18 = *plVar24;
            }
            *(uint *)(lVar14 + 0x20) = uVar2;
            iVar7 = *(int *)(param_1 + 0x60);
            lVar18 = lVar18 + (long)(int)uVar3 * 4;
            param_4[5] = lVar18;
            param_4[6] = lVar18 + (long)iVar7 * 4;
            *(short *)(param_4 + 7) = sVar4 + (short)iVar21;
            lVar25 = lVar25 + lVar16 * 0x38;
            plVar20 = (long *)(lVar25 + 0x28);
            lVar14 = *plVar20;
            piVar19 = (int *)(lVar25 + 0x30);
            iVar21 = *piVar19;
            iVar7 = iVar21 + 1;
            if ((int)(*(uint *)(lVar25 + 0x34) & 0x3fffffff) <= iVar21) {
              lVar14 = FUN_031929a4(puVar6,iVar7);
              *plVar20 = lVar14;
              iVar21 = *piVar19;
            }
            *(undefined4 *)(lVar14 + (long)iVar21 * 4) = param_3;
            *piVar19 = iVar7;
            *param_4 = *plVar17 + uVar23 * 0x14;
            iVar7 = *(int *)(param_1 + 0x60);
            lVar14 = *plVar24 + (long)(iVar7 * (int)uVar10) * 4;
            param_4[1] = lVar14;
            param_4[2] = lVar14 + (long)iVar7 * 4;
            *(short *)(param_4 + 3) = sVar4 + (short)uVar10;
            *(undefined4 *)(*plVar20 + uVar23 * 4) = param_3;
            return;
          }
          pbVar1 = (byte *)(lVar18 + lVar14);
          lVar13 = lVar13 + 1;
          lVar14 = lVar14 + 0x14;
        } while ((*pbVar1 >> 3 & 1) == 0);
        *param_4 = lVar18 + lVar15;
        lVar25 = lVar25 + lVar16 * 0x38;
        iVar7 = *(int *)(param_1 + 0x60);
        lVar14 = *(long *)(lVar25 + 0x18) + (long)(iVar7 * (int)uVar10) * 4;
        param_4[1] = lVar14;
        param_4[2] = lVar14 + (long)iVar7 * 4;
        *(short *)(param_4 + 3) = sVar4 + (short)uVar10;
        uVar10 = lVar13 + (uVar10 & 0xffffffff);
        *(undefined4 *)(*(long *)(lVar25 + 0x28) + uVar23 * 4) = param_3;
        param_4[4] = *plVar17 + (uVar10 & 0xffffffff) * 0x14;
        iVar7 = *(int *)(param_1 + 0x60);
        lVar14 = *(long *)(lVar25 + 0x18) + (long)(iVar7 * ((int)lVar13 - (int)lVar11)) * 4;
        param_4[5] = lVar14;
        param_4[6] = lVar14 + (long)iVar7 * 4;
        *(short *)(param_4 + 7) = sVar4 + (short)uVar10;
        *(undefined4 *)(*(long *)(lVar25 + 0x28) + (uVar10 & 0xffffffff) * 4) = param_3;
        return;
      }
      lVar11 = lVar11 + -1;
      lVar14 = lVar14 + 0x14;
    } while (-lVar11 != lVar12);
  }
  lVar14 = lVar25 + lVar16 * 0x38;
  sVar4 = sVar4 + (short)iVar21;
  uVar9 = *(uint *)(lVar14 + 0x24);
  uVar3 = *(uint *)(lVar14 + 0x20);
  uVar2 = uVar3 + *(int *)(param_1 + 0x60) * 2;
  plVar24 = (long *)(lVar14 + 0x18);
  if ((int)(uVar9 & 0x3fffffff) < (int)uVar2) {
    lVar18 = *plVar24;
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
      uVar9 = *(uint *)(lVar14 + 0x24);
    }
    uVar9 = (uVar9 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    uVar5 = uVar2;
    if ((int)uVar2 <= (int)uVar9) {
      uVar5 = uVar9;
    }
    lVar18 = FUN_032bd1d4(puVar6,uVar5,4,lVar18,uVar3);
    *plVar24 = lVar18;
    iVar21 = *piVar19;
  }
  else {
    lVar18 = *plVar24;
  }
  *(uint *)(lVar14 + 0x20) = uVar2;
  lVar14 = *plVar17;
  lVar18 = lVar18 + (long)(int)uVar3 * 4;
  iVar7 = iVar21 + 2;
  if ((int)(*(uint *)(lVar25 + lVar16 * 0x38 + 0x14) & 0x3fffffff) < iVar7) {
    lVar14 = FUN_0318a8d4(puVar6,iVar7,lVar14,iVar21);
    *plVar17 = lVar14;
  }
  *piVar19 = iVar7;
  *param_4 = lVar14 + (long)iVar21 * 0x14;
  iVar7 = *(int *)(param_1 + 0x60);
  *(short *)(param_4 + 3) = sVar4;
  param_4[1] = lVar18;
  param_4[2] = lVar18 + (long)iVar7 * 4;
  lVar25 = lVar25 + lVar16 * 0x38;
  plVar17 = (long *)(lVar25 + 0x28);
  lVar14 = *plVar17;
  piVar19 = (int *)(lVar25 + 0x30);
  iVar21 = *piVar19;
  iVar7 = iVar21 + 1;
  puVar22 = (uint *)(lVar25 + 0x34);
  if ((int)(*puVar22 & 0x3fffffff) <= iVar21) {
    lVar14 = FUN_031929a4(puVar6,iVar7,lVar14,iVar21,puVar22);
    *plVar17 = lVar14;
    iVar21 = *piVar19;
  }
  *(undefined4 *)(lVar14 + (long)iVar21 * 4) = param_3;
  *piVar19 = iVar7;
  param_4[4] = *param_4 + 0x14;
  lVar14 = (long)*(int *)(param_1 + 0x60) * 4;
  lVar18 = lVar18 + lVar14;
  param_4[5] = lVar18;
  param_4[6] = lVar18 + lVar14;
  *(short *)(param_4 + 7) = sVar4 + 1;
  iVar21 = *piVar19;
  lVar14 = *plVar17;
  iVar7 = iVar21 + 1;
  if ((int)(*puVar22 & 0x3fffffff) <= iVar21) {
    lVar14 = FUN_031929a4(puVar6,iVar7,lVar14,iVar21,puVar22);
    *plVar17 = lVar14;
    iVar21 = *piVar19;
  }
  *(undefined4 *)(lVar14 + (long)iVar21 * 4) = param_3;
  *piVar19 = iVar7;
  return;
}


