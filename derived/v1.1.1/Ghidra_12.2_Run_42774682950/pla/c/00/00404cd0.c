/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00404cd0; name: FUN_00404cd0
 */


void FUN_00404cd0(long param_1)

{
  int iVar1;
  
  do {
    if (param_1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x50);
    param_1 = *(long *)(param_1 + 0x40);
    FUN_00403ee0();
  } while (iVar1 < 2);
  return;
}


