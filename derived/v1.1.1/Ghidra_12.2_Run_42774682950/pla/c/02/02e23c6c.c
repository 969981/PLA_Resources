/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e23c6c; name: FUN_02e23c6c
 */


void FUN_02e23c6c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (((*(long *)(param_1 + 0x60) != 0) && (*(int *)(param_1 + 0xc4) != 0)) &&
     (FUN_02e25368(), 1 < *(uint *)(param_1 + 0xc4))) {
    uVar1 = 1;
    lVar2 = 0x18;
    do {
      FUN_02e25368(*(long *)(param_1 + 0x60) + lVar2);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar1 < *(uint *)(param_1 + 0xc4));
  }
  return;
}


