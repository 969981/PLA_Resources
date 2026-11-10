/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e58f68; name: FUN_02e58f68
 */


void FUN_02e58f68(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    do {
      FUN_02e58788(lVar1);
      lVar1 = lVar1 + 0x8c;
    } while (lVar1 != *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x8c);
  }
  return;
}


