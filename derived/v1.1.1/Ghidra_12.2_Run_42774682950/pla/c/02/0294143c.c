/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294143c; name: FUN_0294143c
 */


undefined8 FUN_0294143c(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  int *piVar2;
  ulong *puVar3;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  if (9 < (int)param_2) {
    return 0;
  }
  lVar1 = param_1 + (ulong)param_2 * 4;
  if (*(int *)(lVar1 + 0x1a8) == 0) {
    return 0;
  }
  uVar8 = (ulong)param_2;
  lVar4 = param_1 + uVar8 * 4;
  uVar6 = *(uint *)(lVar4 + 0x180);
  if (uVar6 == 0) {
    return 0;
  }
  piVar2 = (int *)(lVar4 + 0x180);
  puVar10 = (uint *)(param_1 + uVar8 * 0x18 + 0x90);
  uVar11 = (ulong)uVar6;
  while (*puVar10 != (param_3 & 0xff)) {
    uVar11 = uVar11 - 1;
    puVar10 = puVar10 + 1;
    if (uVar11 == 0) {
      return 0;
    }
  }
  uVar11 = 0;
  puVar10 = (uint *)(param_1 + uVar8 * 0x18 + 0x90);
  while (*puVar10 != (param_3 & 0xff)) {
    uVar11 = uVar11 + 1;
    puVar10 = puVar10 + 1;
    if (uVar6 == uVar11) {
      return 0;
    }
  }
  if ((uint)uVar11 < 5) {
    uVar12 = uVar11;
    if ((1 - (uint)uVar11 & 1) != 0) {
      uVar12 = uVar11 + 1;
      *puVar10 = puVar10[1];
    }
    if (uVar11 == 4) {
      uVar11 = 5;
    }
    else {
      lVar13 = uVar12 << 2;
      uVar11 = 5;
      do {
        puVar5 = (undefined4 *)(param_1 + uVar8 * 0x18 + 0x90 + lVar13);
        lVar13 = lVar13 + 8;
        *puVar5 = puVar5[1];
        puVar5[1] = puVar5[2];
      } while (lVar13 != 0x14);
    }
  }
  *(undefined4 *)(param_1 + uVar8 * 0x18 + (uVar11 & 0xffffffff) * 4 + 0x90) = 0x1f;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + -1;
  puVar3 = (ulong *)(param_1 + uVar8 * 8 + 0x18);
  if (iVar7 + -1 == 0) {
    *puVar3 = 0xf8;
    param_1 = param_1 + uVar8 * 0x18;
    *(undefined4 *)(lVar4 + 0x68) = 0;
    *piVar2 = 0;
    *(undefined4 *)(lVar1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0x1f0000001f;
    *(undefined8 *)(param_1 + 0x90) = 0x1f0000001f;
    *(undefined8 *)(param_1 + 0x98) = 0x1f0000001f;
    return 1;
  }
  uVar11 = *puVar3;
  uVar9 = (uint)uVar11;
  uVar6 = uVar9 & 7;
  if (uVar6 == 4) {
    if ((uVar9 >> 0xe & 0x3f) != (param_3 & 0xff)) {
      return 0;
    }
  }
  else if (uVar6 == 3) {
    if ((uVar9 >> 8 & 0x3f) != (param_3 & 0xff)) {
      return 0;
    }
  }
  else if ((param_3 & 0xff) != 0x1f) {
    return 0;
  }
  uVar8 = (ulong)*(uint *)(param_1 + uVar8 * 0x18 + 0x90);
  if (uVar6 == 4) {
    uVar8 = uVar11 & 0xfffffffffff00000 | uVar11 & 0x3fff | (uVar8 & 0x3f) << 0xe;
  }
  else {
    if (uVar6 != 3) {
      return 0;
    }
    uVar8 = uVar11 & 0xffffffffffffc000 | uVar11 & 0xff | (uVar8 & 0x3f) << 8;
  }
  *puVar3 = uVar8;
  return 0;
}


