/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00826cbc; name: FUN_00826cbc
 */


long FUN_00826cbc(long param_1,char param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    for (lVar1 = *(long *)(param_1 + 0xb0); lVar1 != param_1 + 0xa8; lVar1 = *(long *)(lVar1 + 8)) {
      if (*(char *)(lVar1 + 0x38) == param_2) {
        return lVar1 + 0x10;
      }
    }
  }
  return 0;
}


