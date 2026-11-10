/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318fec4; name: FUN_0318fec4
 */


void FUN_0318fec4(long param_1,int *param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long *plVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
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
  iVar8 = FUN_03190284(param_1 + 0x188,param_2,&local_90);
  lVar14 = local_68;
  puVar7 = PTR_PTR_0434a080;
  uVar4 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_70 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,local_70,uVar4 << 2);
  }
  lVar14 = local_78;
  uVar4 = local_78._4_4_;
  local_70 = 0;
  local_68 = CONCAT44(0x80000000,(undefined4)local_68);
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_80 != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,local_80,uVar4 << 2);
  }
  lVar14 = local_88;
  uVar12 = (ulong)local_88._4_4_;
  local_80 = 0;
  local_78 = CONCAT44(0x80000000,(undefined4)local_78);
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_90 != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,local_90,(uVar12 & 0x3fffffff) * 0x14);
  }
  lVar17 = *(long *)(param_1 + 0x188);
  lVar14 = lVar17 + (long)iVar8 * 0x38;
  plVar15 = (long *)(lVar14 + 8);
  lVar9 = *plVar15;
  lVar18 = (long)iVar8;
  piVar16 = (int *)(lVar14 + 0x10);
  iVar8 = *piVar16;
  lVar14 = *(long *)(param_1 + 0x18) + (long)*param_2 * 0x10;
  psVar2 = (short *)(lVar14 + 8);
  psVar3 = (short *)(lVar14 + 10);
  if (iVar8 < 1) {
    iVar10 = 0;
  }
  else {
    uVar12 = 0;
    pbVar13 = (byte *)(lVar9 + 0x10);
    do {
      if ((*pbVar13 >> 3 & 1) != 0) {
        *param_4 = lVar9 + (uVar12 & 0xffffffff) * 0x14;
        lVar17 = lVar17 + lVar18 * 0x38;
        iVar8 = *(int *)(param_1 + 0x60);
        lVar14 = *(long *)(lVar17 + 0x18) + (long)(iVar8 * (int)uVar12) * 4;
        param_4[1] = lVar14;
        param_4[2] = lVar14 + (long)iVar8 * 4;
        *(short *)(param_4 + 3) = *psVar2 + (short)uVar12 + *psVar3;
        *(undefined4 *)(*(long *)(lVar17 + 0x28) + (uVar12 & 0xffffffff) * 4) = param_3;
        return;
      }
      uVar12 = uVar12 + 1;
      pbVar13 = pbVar13 + 0x14;
      iVar10 = iVar8;
    } while ((long)iVar8 != uVar12);
  }
  iVar1 = iVar8 + 1;
  if ((int)(*(uint *)(lVar17 + lVar18 * 0x38 + 0x14) & 0x3fffffff) <= iVar8) {
    lVar9 = FUN_0318a8d4(puVar7,iVar1);
    *plVar15 = lVar9;
    iVar8 = *piVar16;
  }
  lVar9 = lVar9 + (long)iVar8 * 0x14;
  *piVar16 = iVar1;
  *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
  *(undefined4 *)(lVar9 + 0x10) = 4;
  *param_4 = lVar9;
  lVar14 = lVar17 + lVar18 * 0x38;
  uVar11 = *(uint *)(lVar14 + 0x24);
  plVar15 = (long *)(lVar14 + 0x18);
  uVar5 = *(uint *)(lVar14 + 0x20);
  uVar4 = uVar5 + *(int *)(param_1 + 0x60);
  if ((int)(uVar11 & 0x3fffffff) < (int)uVar4) {
    lVar9 = *plVar15;
    if (0x3fffffff < (int)uVar4) {
      FUN_032bd0a8(uVar4);
      uVar11 = *(uint *)(lVar14 + 0x24);
    }
    uVar11 = (uVar11 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    uVar6 = uVar4;
    if ((int)uVar4 <= (int)uVar11) {
      uVar6 = uVar11;
    }
    lVar9 = FUN_032bd1d4(puVar7,uVar6,4,lVar9,uVar5);
    *plVar15 = lVar9;
  }
  else {
    lVar9 = *plVar15;
  }
  *(uint *)(lVar14 + 0x20) = uVar4;
  iVar8 = *(int *)(param_1 + 0x60);
  lVar9 = lVar9 + (long)(int)uVar5 * 4;
  param_4[1] = lVar9;
  param_4[2] = lVar9 + (long)iVar8 * 4;
  *(short *)(param_4 + 3) = *psVar2 + (short)iVar10 + *psVar3;
  lVar17 = lVar17 + lVar18 * 0x38;
  lVar14 = *(long *)(lVar17 + 0x28);
  piVar16 = (int *)(lVar17 + 0x30);
  iVar10 = *piVar16;
  iVar8 = iVar10 + 1;
  if ((int)(*(uint *)(lVar17 + 0x34) & 0x3fffffff) <= iVar10) {
    lVar14 = FUN_031929a4(puVar7,iVar8);
    *(long *)(lVar17 + 0x28) = lVar14;
    iVar10 = *piVar16;
  }
  *(undefined4 *)(lVar14 + (long)iVar10 * 4) = param_3;
  *piVar16 = iVar8;
  return;
}


