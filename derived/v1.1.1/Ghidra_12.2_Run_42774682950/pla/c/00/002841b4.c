/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002841b4; name: FUN_002841b4
 */


void FUN_002841b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 8)) {
    lVar1 = 0;
    lVar2 = 0x110;
    do {
      FUN_0028ca5c(*(long *)(param_1 + 0x10) + lVar2);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x9e8;
    } while (lVar1 < *(int *)(param_1 + 8));
  }
  return;
}


