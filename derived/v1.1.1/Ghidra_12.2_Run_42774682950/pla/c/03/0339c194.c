/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339c194; name: FUN_0339c194
 */


void FUN_0339c194(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    lVar3 = (long)*(int *)(param_1 + 0x30) << 4;
    do {
      lVar1 = lVar2 + lVar3;
      FUN_032c7b9c(lVar1 + -8);
      FUN_032c7b9c(lVar1 + -0x10);
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


