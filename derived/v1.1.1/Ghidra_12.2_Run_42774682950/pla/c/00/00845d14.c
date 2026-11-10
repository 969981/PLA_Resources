/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00845d14; name: FUN_00845d14
 */


long FUN_00845d14(long param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(int *)(param_1 + 0x18) + param_2;
  uVar2 = *(ushort *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  uVar4 = (uint)uVar2;
  if (*(int *)(param_1 + 0x14) == uVar1 - uVar3 * uVar4) {
    return 0;
  }
  uVar1 = *(int *)(param_1 + 0x18) + param_2;
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = uVar1 / uVar4;
  }
  return *(long *)(param_1 + 8) + (ulong)(uVar1 - uVar3 * uVar4) * 0x650;
}


