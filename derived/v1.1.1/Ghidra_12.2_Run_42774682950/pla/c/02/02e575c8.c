/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e575c8; name: FUN_02e575c8
 */


long FUN_02e575c8(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN_02e576f0(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar3 <= uVar2) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  lVar4 = *param_1 + (ulong)uVar2 * 0x50;
  if (lVar4 == 0) {
    return 0;
  }
  lVar6 = *param_1 + (ulong)uVar2 * 0x50;
  *(undefined8 *)(lVar6 + 0x18) = 0x3f80000000000000;
  *(undefined8 *)(lVar6 + 0x20) = 0x3f800000;
  *(undefined2 *)(lVar6 + 0x28) = 0;
  *(undefined8 *)(lVar6 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 0x2c) = 1;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(undefined1 *)(lVar6 + 0x48) = 0;
  return lVar4;
}


