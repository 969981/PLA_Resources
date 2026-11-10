/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebcc3c; name: FUN_02ebcc3c
 */


void FUN_02ebcc3c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x20) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x20) * 0x30;
    do {
      FUN_02ebce28(lVar1);
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  FUN_02ebd590((long *)(param_1 + 0x18));
  return;
}


