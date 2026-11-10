/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320bc50; name: FUN_0320bc50
 */


void FUN_0320bc50(long param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined4 local_f0 [2];
  undefined4 local_e8 [2];
  int local_e0 [2];
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  int local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  int local_88;
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  int local_70 [4];
  
  lVar12 = *(long *)(*(long *)(param_1 + 0x38) + (param_3 >> 0x16 & 0x3ff) * 0xf0);
  lVar7 = *(long *)(lVar12 + 0x20);
  uVar17 = param_3 & 0x3fffff;
  iVar16 = (int)uVar17;
  if ((*(int *)(lVar7 + 0x108) != 0) &&
     (bVar2 = *(byte *)(*(long *)(lVar7 + 0x100) + uVar17), (bVar2 & 1) != 0)) {
    if ((bVar2 >> 1 & 1) != 0) {
      return;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar12 + 0x38) + (*param_4 >> 0x20) * 0x18);
    if (*(char *)(puVar6 + 2) == '\x01') {
      uVar11 = *puVar6;
    }
    else {
      uVar11 = FUN_03165a00();
      lVar7 = *(long *)(lVar12 + 0x20);
    }
    iVar10 = iVar16 - *(int *)(lVar7 + 0x20);
    if (iVar16 < *(int *)(lVar7 + 0x20)) {
      uVar9 = uVar17;
      if ((*(int *)(lVar7 + 0x98) != 0) &&
         (uVar1 = *(uint *)(*(long *)(lVar7 + 0x90) + uVar17 * 4), uVar9 = (ulong)uVar1,
         uVar1 == 0xffffffff)) {
        puVar14 = (undefined4 *)(*(long *)(lVar7 + 0x18) + uVar17 * 0x10);
        goto LAB_0320c32c;
      }
      iVar10 = (int)uVar9;
      lVar7 = *(long *)(lVar7 + 0xb0);
    }
    else {
      lVar7 = *(long *)(lVar7 + 0xd0);
    }
    puVar14 = (undefined4 *)(lVar7 + (long)iVar10 * 0x10);
LAB_0320c32c:
    local_70[0] = iVar16;
    FUN_0315d798(uVar11,local_70);
    local_78[0] = *puVar14;
    local_80[0] = puVar14[1];
    FUN_0315dde8(uVar11,local_78,(long)*(short *)(puVar14 + 2),local_80,
                 (long)*(short *)((long)puVar14 + 10));
    return;
  }
  puVar6 = (undefined8 *)(*(long *)(lVar12 + 0x38) + (*param_4 >> 0x20) * 0x18);
  if (*(char *)(puVar6 + 2) == '\x01') {
    uVar11 = *puVar6;
  }
  else {
    uVar11 = FUN_03165a00();
    lVar7 = *(long *)(lVar12 + 0x20);
  }
  iVar10 = iVar16 - *(int *)(lVar7 + 0x20);
  iVar4 = *(int *)(lVar7 + 0x50);
  if (iVar16 < *(int *)(lVar7 + 0x20)) {
    iVar10 = iVar16;
    if ((*(int *)(lVar7 + 0x98) == 0) ||
       (iVar10 = *(int *)(*(long *)(lVar7 + 0x90) + uVar17 * 4), iVar10 != -1)) {
      lVar12 = *(long *)(lVar7 + 0x120) + (long)(iVar10 * iVar4) * 4;
      lVar7 = *(long *)(lVar7 + 0xb0);
      goto LAB_0320bd1c;
    }
    lVar12 = *(long *)(lVar7 + 0x48) + (long)(iVar4 * iVar16) * 4;
    puVar14 = (undefined4 *)(*(long *)(lVar7 + 0x18) + uVar17 * 0x10);
    lVar13 = lVar12 + (long)iVar4 * 4;
  }
  else {
    lVar12 = *(long *)(lVar7 + 0x140) + (long)(iVar4 * iVar10) * 4;
    lVar7 = *(long *)(lVar7 + 0xd0);
LAB_0320bd1c:
    lVar13 = lVar12 + (long)iVar4 * 4;
    puVar14 = (undefined4 *)(lVar7 + (long)iVar10 * 0x10);
  }
  sVar3 = *(short *)(puVar14 + 2);
  local_88 = (int)sVar3;
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  lVar7 = tpidr_el0;
  if (local_88 == 0) {
    local_90 = 0;
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar8;
    }
    lVar8 = *(long *)(lVar8 + 8);
    uVar17 = (long)(int)sVar3 * 8 + 0x7fU & 0xffffffffffffff80;
    if (uVar17 <= *(ulong *)(lVar8 + 0x10)) {
      local_90 = *(long *)(lVar8 + 0x18);
      uVar17 = local_90 + uVar17;
      if (uVar17 <= *(ulong *)(lVar8 + 0x20)) {
        *(ulong *)(lVar8 + 0x18) = uVar17;
        goto LAB_0320bd88;
      }
    }
    local_90 = FUN_032ce670(lVar8);
  }
LAB_0320bd88:
  local_98 = CONCAT44((int)sVar3,(undefined4)local_98) | 0x8000000000000000;
  iVar10 = (int)*(short *)((long)puVar14 + 10) + (int)*(short *)(puVar14 + 2);
  local_c0 = 0;
  local_b8 = 0x8000000000000000;
  local_a8 = iVar10;
  local_a0 = local_90;
  if (iVar10 == 0) {
    local_b0 = 0;
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar8;
    }
    lVar8 = *(long *)(lVar8 + 8);
    uVar17 = (ulong)(int)(iVar10 * 8 + 0x7fU & 0xffffff80);
    if (uVar17 <= *(ulong *)(lVar8 + 0x10)) {
      local_b0 = *(long *)(lVar8 + 0x18);
      uVar17 = local_b0 + uVar17;
      if (uVar17 <= *(ulong *)(lVar8 + 0x20)) {
        *(ulong *)(lVar8 + 0x18) = uVar17;
        goto LAB_0320bdfc;
      }
    }
    local_b0 = FUN_032ce670(lVar8);
  }
LAB_0320bdfc:
  lVar15 = (long)DAT_0444b53c;
  local_b8 = CONCAT44(iVar10,(undefined4)local_b8) | 0x8000000000000000;
  local_c8 = -0x8000000000000000;
  local_d0 = 0;
  lVar8 = *(long *)(lVar7 + 0x38d490);
  local_c0 = local_b0;
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar8;
  }
  if (*(long *)(lVar8 + lVar15 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  local_d8 = CONCAT44((int)param_4[3],(int)param_4[3]);
  FUN_0316a4d0(param_1,param_4[2],param_3 & 0xffffffff,puVar14,lVar12,lVar13,param_2,&local_d8,
               &local_a0,&local_c0,&local_d0,param_5);
  lVar13 = (long)DAT_0444b53c;
  lVar12 = *(long *)(lVar7 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar12;
  }
  if (*(long *)(lVar12 + lVar13 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  FUN_0315ecec(uVar11,&local_a0);
  local_e0[0] = iVar16;
  FUN_0315d564(uVar11,local_e0,&local_d0);
  local_e8[0] = *puVar14;
  local_f0[0] = puVar14[1];
  FUN_0315d934(uVar11,local_e8,(long)*(short *)(puVar14 + 2),local_f0,
               (long)*(short *)((long)puVar14 + 10),&local_c0);
  lVar12 = local_c8;
  uVar1 = local_c8._4_4_;
  local_c8 = (ulong)local_c8._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_d0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))(PTR_PTR_0434a090,local_d0,uVar1 << 2);
  }
  iVar16 = local_a8;
  lVar12 = local_b0;
  if (local_b0 == local_c0) {
    local_b8 = local_b8 & 0xffffffff00000000;
  }
  lVar13 = *(long *)(lVar7 + 0x38d490);
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar13;
  }
  lVar13 = *(long *)(lVar13 + 8);
  uVar17 = (ulong)(int)(iVar16 * 8 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar13 + 0x10) < uVar17) || (*(long *)(lVar13 + 0x18) != uVar17 + lVar12)) ||
     (*(long *)(lVar13 + 0x28) == lVar12)) {
    FUN_032cedf0(lVar13,lVar12);
  }
  else {
    *(long *)(lVar13 + 0x18) = lVar12;
  }
  uVar17 = local_b8;
  puVar5 = PTR_PTR_0434a080;
  uVar9 = (ulong)local_b8._4_4_;
  local_b8 = (ulong)local_b8._4_4_ << 0x20;
  if ((-1 < (long)uVar17) && (local_c0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_c0,(uVar9 & 0x3fffffff) << 3);
  }
  iVar16 = local_88;
  lVar12 = local_90;
  if (local_90 == local_a0) {
    local_98 = local_98 & 0xffffffff00000000;
  }
  lVar13 = *(long *)(lVar7 + 0x38d490);
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar13;
  }
  lVar7 = *(long *)(lVar13 + 8);
  uVar17 = (ulong)(int)(iVar16 * 8 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar7 + 0x10) < uVar17) || (*(long *)(lVar7 + 0x18) != uVar17 + lVar12)) ||
     (*(long *)(lVar7 + 0x28) == lVar12)) {
    FUN_032cedf0(lVar7,lVar12);
  }
  else {
    *(long *)(lVar7 + 0x18) = lVar12;
  }
  uVar17 = local_98;
  uVar9 = (ulong)local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < (long)uVar17) && (local_a0 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_a0,(uVar9 & 0x3fffffff) << 3);
  }
  return;
}


