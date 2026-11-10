/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0d1e0; name: FUN_02f0d1e0
 */


void FUN_02f0d1e0(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0440a130 + 0x1c0) + -1;
  *(int *)(DAT_0440a130 + 0x1c0) = iVar1;
  if (iVar1 == 0) {
    FUN_02f0cbdc();
    return;
  }
  return;
}


