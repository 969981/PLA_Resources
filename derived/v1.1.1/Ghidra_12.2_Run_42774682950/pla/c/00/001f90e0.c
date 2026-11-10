/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f90e0; name: FUN_001f90e0
 */


undefined8 FUN_001f90e0(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x1138) == 0) {
    lVar1 = FUN_002044c4(*(undefined8 *)(param_1 + 0xc18));
    *(long *)(param_1 + 0x1138) = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
  }
  return 0;
}


