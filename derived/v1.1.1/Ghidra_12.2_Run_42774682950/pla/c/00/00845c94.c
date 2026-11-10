/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00845c94; name: FUN_00845c94
 */


long FUN_00845c94(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  
  uVar1 = *(int *)(param_1 + 0x14) + 1;
  uVar2 = *(ushort *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  if (uVar1 - uVar3 * uVar2 == *(int *)(param_1 + 0x1c)) {
    return 0;
  }
  lVar4 = (ulong)*(uint *)(param_1 + 0x14) * 0x650;
  FUN_007f0744(*(long *)(param_1 + 8) + lVar4);
  uVar1 = *(int *)(param_1 + 0x14) + 1;
  uVar2 = *(ushort *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  *(uint *)(param_1 + 0x14) = uVar1 - uVar3 * uVar2;
  return *(long *)(param_1 + 8) + lVar4;
}


