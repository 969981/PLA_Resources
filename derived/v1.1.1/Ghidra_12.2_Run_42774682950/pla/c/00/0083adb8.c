/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083adb8; name: FUN_0083adb8
 */


void FUN_0083adb8(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x69) == '\0') {
    *(undefined1 *)(param_1 + 0x69) = 1;
    plVar1 = (long *)FUN_007ecfa4();
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + *plVar1 * 8000;
    return;
  }
  return;
}


