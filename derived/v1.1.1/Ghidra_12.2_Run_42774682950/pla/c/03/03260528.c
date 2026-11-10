/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03260528; name: FUN_03260528
 */


int FUN_03260528(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long lVar16;
  char local_d0 [8];
  undefined4 *local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 *local_70;
  undefined8 local_68;
  undefined4 auStack_60 [4];
  
  puVar4 = PTR_PTR_0434a090;
  local_68 = 0x8000000400000000;
  puVar15 = *(undefined4 **)(param_1 + 0x120);
  puVar10 = *(undefined4 **)(param_1 + 0x128);
  uVar14 = (long)puVar10 - (long)puVar15;
  uVar12 = uVar14 >> 2;
  iVar11 = (int)uVar12;
  local_c8 = auStack_60;
  if (4 < iVar11) {
    local_70 = auStack_60;
    if (iVar11 < 0x40000000) {
      uVar9 = 8;
    }
    else {
      FUN_032bd0a8(uVar12 & 0xffffffff);
      uVar1 = (local_68._4_4_ & 0x3fffffff) * 2;
      uVar9 = (ulong)uVar1;
      if (0x3ffffffe < uVar1) {
        uVar9 = 0x3fffffff;
      }
    }
    uVar12 = uVar12 & 0xffffffff;
    if (iVar11 <= (int)uVar9) {
      uVar12 = uVar9;
    }
    local_c8 = (undefined4 *)FUN_032bd1d4(puVar4,uVar12,4,auStack_60,0,(long)&local_68 + 4);
  }
  puVar3 = local_c8;
  for (; puVar15 != puVar10; puVar15 = puVar15 + 1) {
    *puVar3 = *puVar15;
    puVar3 = puVar3 + 1;
  }
  local_68 = CONCAT44((int)((ulong)local_68 >> 0x20),iVar11);
  local_b8 = *(undefined8 *)(param_1 + 0x120);
  uStack_b0 = *(undefined8 *)(param_1 + 0x128);
  local_98 = *(undefined8 *)(param_1 + 0x130);
  uStack_90 = *(undefined8 *)(param_1 + 0x138);
  local_78 = *(undefined8 *)(param_1 + 0x140);
  local_d0[0] = '\0';
  local_88 = 0;
  local_80 = -0x8000000000000000;
  lStack_c0 = (long)local_c8 + ((long)(uVar14 * 0x40000000) >> 0x1e);
  local_a8 = param_2;
  local_a0 = param_3;
  local_70 = local_c8;
  (**(code **)(**(long **)(param_1 + 0x148) + 0x20))(*(long **)(param_1 + 0x148),&local_b8,local_d0)
  ;
  puVar15 = local_70;
  if (local_d0[0] == '\0') {
    iVar5 = (int)local_68;
    lVar16 = (long)(int)local_68;
    puVar13 = (uint *)(param_1 + 0x14);
    uVar8 = *puVar13;
    iVar11 = *(int *)(param_1 + 0x10);
    uVar1 = iVar11 + (int)local_68;
    if ((int)(uVar8 & 0x3fffffff) < (int)uVar1) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar8 = *puVar13;
      }
      uVar8 = (uVar8 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar8) {
        uVar8 = 0x3fffffff;
      }
      uVar2 = uVar1;
      if ((int)uVar1 <= (int)uVar8) {
        uVar2 = uVar8;
      }
      lVar6 = FUN_032bd1d4(puVar4,uVar2,4,uVar7,iVar11,puVar13);
      *(long *)(param_1 + 8) = lVar6;
    }
    else {
      lVar6 = *(long *)(param_1 + 8);
    }
    if (iVar5 != 0) {
      lVar16 = lVar16 << 2;
      puVar10 = (undefined4 *)(lVar6 + (long)iVar11 * 4);
      do {
        lVar16 = lVar16 + -4;
        *puVar10 = *puVar15;
        puVar10 = puVar10 + 1;
        puVar15 = puVar15 + 1;
      } while (lVar16 != 0);
    }
    *(uint *)(param_1 + 0x10) = uVar1;
    iVar11 = *(int *)(param_1 + 0x118);
    *(int *)(param_1 + 0x118) = iVar11 + 1;
  }
  else {
    iVar11 = 0xffff;
  }
  lVar16 = local_80;
  uVar1 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar16) && (local_88 != 0)) {
    FUN_032cf244(puVar4,local_88,8,uVar1 & 0x3fffffff);
  }
  lVar16 = local_68;
  uVar1 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar16) && (local_70 != (undefined4 *)0x0)) {
    FUN_032cf244(puVar4,local_70,4,uVar1 & 0x3fffffff);
  }
  return iVar11;
}


