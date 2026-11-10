/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00830e48; name: FUN_00830e48
 */


uint FUN_00830e48(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x40);
  if (0 < (int)uVar1) {
    uVar3 = (ulong)uVar1;
    lVar2 = *(long *)(param_1 + 0x38) + 8;
    do {
      FUN_007f0f88(param_2,lVar2);
      param_2 = param_2 + 0x20;
      lVar2 = lVar2 + 0x38;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar1;
}


