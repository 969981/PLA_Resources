/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03190b20; name: FUN_03190b20
 */


void FUN_03190b20(long param_1,undefined4 param_2,long param_3,undefined2 param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  void *__dest;
  undefined1 *puVar2;
  int iVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  long *plVar21;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  int local_b8 [2];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  
  FUN_031865f0(param_3,auStack_b0,auStack_a0,auStack_90,auStack_80);
  bVar10 = *(int *)(param_3 + 0x30) != *(int *)(param_1 + 0x178);
  lVar19 = 0x38;
  if (bVar10) {
    lVar19 = 0x3c;
  }
  local_b8[0] = *(int *)(param_3 + lVar19);
  lVar19 = (long)local_b8[0];
  local_e8 = 0;
  local_e0 = -0x8000000000000000;
  puVar2 = auStack_b0;
  if (bVar10) {
    puVar2 = auStack_90;
  }
  local_c8 = 0;
  local_c0 = -0x8000000000000000;
  local_d8 = 0;
  local_d0 = -0x8000000000000000;
  iVar11 = FUN_03190284(param_1 + 0x188,local_b8,&local_e8);
  lVar12 = local_c0;
  puVar9 = PTR_PTR_0434a080;
  uVar1 = local_c0._4_4_;
  local_c0 = (ulong)local_c0._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_c8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,local_c8,uVar1 << 2);
  }
  lVar12 = local_d0;
  uVar1 = local_d0._4_4_;
  local_c8 = 0;
  local_c0 = CONCAT44(0x80000000,(undefined4)local_c0);
  local_d0 = (ulong)local_d0._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_d8 != 0)) {
    (**(code **)(*(long *)puVar9 + 0x18))(puVar9,local_d8,uVar1 << 2);
  }
  lVar12 = local_e0;
  uVar15 = (ulong)local_e0._4_4_;
  local_d8 = 0;
  local_d0 = CONCAT44(0x80000000,(undefined4)local_d0);
  local_e0 = (ulong)local_e0._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_e8 != 0)) {
    (**(code **)(*(long *)puVar9 + 0x18))(puVar9,local_e8,(uVar15 & 0x3fffffff) * 0x14);
  }
  lVar16 = *(long *)(param_1 + 0x188);
  iVar3 = *(int *)(param_1 + 0x40);
  iVar13 = *(int *)(param_1 + 0xf8);
  lVar18 = lVar16 + (long)iVar11 * 0x38;
  FUN_0318f32c(param_1,puVar2,2);
  lVar12 = *(long *)(lVar18 + 8);
  lVar19 = *(long *)(param_1 + 0x18) + lVar19 * 0x10;
  iVar13 = iVar13 + iVar3;
  sVar5 = *(short *)(lVar19 + 8);
  sVar6 = *(short *)(lVar19 + 10);
  iVar3 = *(int *)(lVar18 + 0x10);
  if ((int)(*(uint *)(lVar18 + 0x14) & 0x3fffffff) <= iVar3) {
    lVar12 = FUN_0318a8d4(puVar9,iVar3 + 1,lVar12,iVar3,(uint *)(lVar18 + 0x14));
    *(long *)(lVar18 + 8) = lVar12;
  }
  piVar17 = (int *)(lVar12 + (long)iVar3 * 0x14);
  *(int *)(lVar18 + 0x10) = iVar3 + 1;
  *piVar17 = iVar13;
  piVar17[1] = iVar13 + 1;
  piVar17[2] = -1;
  piVar17[3] = -1;
  pbVar20 = (byte *)(piVar17 + 4);
  pbVar20[0] = 0x50;
  pbVar20[1] = 0;
  *(undefined2 *)((long)piVar17 + 0x12) = param_4;
  lVar19 = lVar16 + (long)iVar11 * 0x38;
  uVar7 = *(uint *)(lVar19 + 0x20);
  uVar14 = *(uint *)(lVar19 + 0x24);
  uVar1 = uVar7 + *(int *)(param_1 + 0x60);
  plVar21 = (long *)(lVar19 + 0x18);
  if ((int)(uVar14 & 0x3fffffff) < (int)uVar1) {
    lVar12 = *plVar21;
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar14 = *(uint *)(lVar19 + 0x24);
    }
    uVar14 = (uVar14 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar14) {
      uVar14 = 0x3fffffff;
    }
    uVar8 = uVar1;
    if ((int)uVar1 <= (int)uVar14) {
      uVar8 = uVar14;
    }
    lVar12 = FUN_032bd1d4(puVar9,uVar8,4,lVar12,uVar7);
    *plVar21 = lVar12;
  }
  else {
    lVar12 = *plVar21;
  }
  *(uint *)(lVar19 + 0x20) = uVar1;
  lVar19 = (long)*(int *)(param_1 + 0x60);
  __dest = (void *)(lVar12 + (long)(int)uVar7 * 4);
  if (*(int *)(param_3 + 0x30) == *(int *)(param_1 + 0x178)) {
    memcpy(__dest,*(void **)(param_3 + 0x40),lVar19 << 2);
    bVar4 = *(byte *)(param_3 + 0x84);
  }
  else {
    memcpy(__dest,*(void **)(param_3 + 0x60),lVar19 << 2);
    bVar4 = *(byte *)(param_3 + 0x84) >> 1;
  }
  if ((bVar4 & 1) == 0) {
    *pbVar20 = *pbVar20 | 0x20;
  }
  *(short *)(param_5 + 3) = sVar6 + sVar5 + (short)iVar3;
  param_5[2] = (void *)((long)__dest + lVar19 * 4);
  *param_5 = piVar17;
  param_5[1] = __dest;
  lVar16 = lVar16 + (long)iVar11 * 0x38;
  lVar19 = *(long *)(lVar16 + 0x28);
  piVar17 = (int *)(lVar16 + 0x30);
  iVar13 = *piVar17;
  iVar11 = iVar13 + 1;
  if ((int)(*(uint *)(lVar16 + 0x34) & 0x3fffffff) <= iVar13) {
    lVar19 = FUN_031929a4(puVar9,iVar11);
    *(long *)(lVar16 + 0x28) = lVar19;
    iVar13 = *piVar17;
  }
  *(undefined4 *)(lVar19 + (long)iVar13 * 4) = param_2;
  *piVar17 = iVar11;
  return;
}


