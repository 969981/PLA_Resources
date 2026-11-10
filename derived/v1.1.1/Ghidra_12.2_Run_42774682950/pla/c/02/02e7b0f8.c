/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7b0f8; name: FUN_02e7b0f8
 */


long FUN_02e7b0f8(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if (uVar5 <= uVar4) {
    iVar1 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    uVar6 = FUN_02e7b178(param_1,iVar1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar5 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar5 <= uVar4) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 1);
  lVar2 = *param_1 + (ulong)uVar4 * 0x20;
  *(uint *)(param_1 + 1) = uVar4 + 1;
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = *param_1 + (ulong)uVar4 * 0x20;
  *(undefined2 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 8) = 0;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  return lVar2;
}


