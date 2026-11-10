/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017ecc4c; name: FUN_017ecc4c
 */


undefined8 FUN_017ecc4c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  while( true ) {
    if (lVar1 == param_1 + 0x58) {
      return 1;
    }
    if (*(int *)(*(long *)(lVar1 + 0x10) + 0x70) == 0) break;
    lVar1 = *(long *)(lVar1 + 8);
  }
  return 0;
}


