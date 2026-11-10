/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e57474; name: FUN_02e57474
 */


long FUN_02e57474(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  param_2 = param_2 & 0xffffffff;
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN_02e576f0(param_1,iVar1);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar3 <= uVar2) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  uVar4 = lVar5 + (ulong)uVar2 * 0x50;
  if (uVar4 != 0) {
    lVar5 = lVar5 + (ulong)uVar2 * 0x50;
    *(undefined8 *)(lVar5 + 0x18) = 0x3f80000000000000;
    *(undefined8 *)(lVar5 + 0x20) = 0x3f800000;
    *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined2 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x2c) = 1;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined1 *)(lVar5 + 0x48) = 0;
    lVar5 = *param_1;
  }
  if (lVar5 + param_2 * 0x50 < uVar4) {
    do {
      uVar6 = uVar4 - 0x50;
      FUN_02e57670(uVar4,uVar6);
      lVar5 = *param_1;
      uVar4 = uVar6;
    } while (lVar5 + param_2 * 0x50 < uVar6);
  }
  lVar5 = lVar5 + param_2 * 0x50 + 0x40;
  FUN_02e437f0(lVar5);
  FUN_02e437f0(lVar5);
  lVar5 = *param_1;
  if (lVar5 + param_2 * 0x50 != 0) {
    lVar5 = lVar5 + param_2 * 0x50;
    *(undefined8 *)(lVar5 + 0x18) = 0x3f80000000000000;
    *(undefined8 *)(lVar5 + 0x20) = 0x3f800000;
    *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined2 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined1 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x2c) = 1;
    lVar5 = *param_1;
  }
  return lVar5 + param_2 * 0x50;
}


