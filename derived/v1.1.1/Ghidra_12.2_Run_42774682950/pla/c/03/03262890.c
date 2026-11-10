/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03262890; name: FUN_03262890
 */


undefined8 FUN_03262890(long param_1,long *param_2)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long local_80;
  ulong local_78;
  long local_70;
  uint local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  uint local_48;
  
  uVar1 = *(uint *)(param_2 + 1);
  local_60 = 0;
  local_58 = 0x8000000000000000;
  lVar9 = tpidr_el0;
  local_48 = uVar1;
  if (uVar1 == 0) {
    local_50 = 0;
  }
  else {
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    lVar11 = *(long *)(lVar11 + 8);
    uVar10 = (ulong)(int)(uVar1 * 4 + 0x7f & 0xffffff80);
    if (uVar10 <= *(ulong *)(lVar11 + 0x10)) {
      local_50 = *(long *)(lVar11 + 0x18);
      uVar10 = local_50 + uVar10;
      if (uVar10 <= *(ulong *)(lVar11 + 0x20)) {
        *(ulong *)(lVar11 + 0x18) = uVar10;
        goto LAB_03262914;
      }
    }
    local_50 = FUN_032ce670(lVar11);
  }
LAB_03262914:
  local_58 = CONCAT44(uVar1,(undefined4)local_58) | 0x8000000000000000;
  if ((int)uVar1 < 1) {
    if ((int)uVar1 < 0) {
      local_58 = CONCAT44(local_58._4_4_,uVar1);
    }
  }
  else {
    uVar10 = 0;
    local_58 = CONCAT44(local_58._4_4_,uVar1);
    do {
      pfVar2 = (float *)(*param_2 + uVar10 * 0x10);
      fVar3 = *pfVar2;
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      auVar13._0_4_ =
           (int)((float)*(undefined8 *)(param_1 + 0x40) +
                 (float)*(undefined8 *)(param_1 + 0x10) * fVar3 +
                 (float)*(undefined8 *)(param_1 + 0x20) * fVar4 +
                 (float)*(undefined8 *)(param_1 + 0x30) * fVar5 + 0.5);
      auVar13._4_4_ =
           (int)((float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar3 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar4 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) * fVar5 + 0.5);
      auVar13._8_4_ =
           (int)((float)*(undefined8 *)(param_1 + 0x48) +
                 (float)*(undefined8 *)(param_1 + 0x18) * fVar3 +
                 (float)*(undefined8 *)(param_1 + 0x28) * fVar4 +
                 (float)*(undefined8 *)(param_1 + 0x38) * fVar5 + 0.5);
      auVar13._12_4_ =
           (int)((float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar3 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) * fVar4 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) * fVar5 + 0.5);
      auVar14._8_4_ = 0x3fff;
      auVar14._0_8_ = 0x3fff00003fff;
      auVar14._12_4_ = 0x3fff;
      auVar14 = NEON_smin(auVar14,auVar13,4);
      *(uint *)(local_50 + uVar10 * 4) = auVar14._4_4_ | auVar14._0_4_ << 0x10;
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar10);
  }
  local_60 = local_50;
  uVar10 = FUN_03261230(&local_60);
  if ((uVar10 & 1) == 0) {
    FUN_03261ce0(&local_60);
  }
  local_80 = 0;
  local_78 = 0x8000000000000000;
  local_68 = uVar1;
  if (uVar1 == 0) {
    local_70 = 0;
  }
  else {
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    lVar11 = *(long *)(lVar11 + 8);
    uVar10 = (ulong)(int)(uVar1 * 2 + 0x7f & 0xffffff80);
    if (uVar10 <= *(ulong *)(lVar11 + 0x10)) {
      local_70 = *(long *)(lVar11 + 0x18);
      uVar10 = local_70 + uVar10;
      if (uVar10 <= *(ulong *)(lVar11 + 0x20)) {
        *(ulong *)(lVar11 + 0x18) = uVar10;
        goto LAB_03262a00;
      }
    }
    local_70 = FUN_032ce670(lVar11);
  }
LAB_03262a00:
  local_78 = CONCAT44(uVar1,(undefined4)local_78) | 0x8000000000000000;
  local_80 = local_70;
  FUN_03261c00(&local_60,&local_80);
  FUN_032621a0(param_1,&local_60,0,&local_80);
  uVar1 = local_68;
  lVar8 = local_70;
  lVar11 = local_80;
  if (local_70 == local_80) {
    local_78 = local_78 & 0xffffffff00000000;
  }
  lVar12 = *(long *)(lVar9 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar12;
  }
  lVar12 = *(long *)(lVar12 + 8);
  uVar10 = (ulong)(int)(uVar1 * 2 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar12 + 0x10) < uVar10) || (*(long *)(lVar12 + 0x18) != uVar10 + lVar8)) ||
     (*(long *)(lVar12 + 0x28) == lVar8)) {
    FUN_032cedf0(lVar12,lVar8);
  }
  else {
    *(long *)(lVar12 + 0x18) = lVar8;
  }
  uVar7 = local_78;
  puVar6 = PTR_PTR_0434a080;
  uVar10 = local_78 >> 0x20;
  local_78 = local_78 & 0xffffffff00000000;
  if ((lVar11 != 0) && (-1 < (long)uVar7)) {
    FUN_032cf244(PTR_PTR_0434a080,lVar11,2,(uint)uVar10 & 0x3fffffff);
  }
  uVar1 = local_48;
  lVar8 = local_50;
  lVar11 = local_60;
  if (local_50 == local_60) {
    local_58 = local_58 & 0xffffffff00000000;
  }
  lVar12 = *(long *)(lVar9 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar12;
  }
  lVar9 = *(long *)(lVar12 + 8);
  uVar10 = (ulong)(int)(uVar1 * 4 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar9 + 0x10) < uVar10) || (*(long *)(lVar9 + 0x18) != uVar10 + lVar8)) ||
     (*(long *)(lVar9 + 0x28) == lVar8)) {
    FUN_032cedf0(lVar9,lVar8);
    uVar10 = local_58;
  }
  else {
    *(long *)(lVar9 + 0x18) = lVar8;
    uVar10 = local_58;
  }
  if (lVar11 != 0) {
    local_58 = uVar10 & 0xffffffff00000000;
    uVar7 = local_58;
    local_58._4_4_ = (uint)(uVar10 >> 0x20);
    if (-1 < (long)uVar7) {
      uVar1 = local_58._4_4_ & 0x3fffffff;
      local_58 = uVar7;
      FUN_032cf244(puVar6,lVar11,4,uVar1);
    }
  }
  return 1;
}


