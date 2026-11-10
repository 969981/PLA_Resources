/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e32f18; name: FUN_02e32f18
 */


void FUN_02e32f18(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x1c4) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_02e25368(*(long *)(param_1 + 0x118) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0x1c4));
  }
  return;
}


