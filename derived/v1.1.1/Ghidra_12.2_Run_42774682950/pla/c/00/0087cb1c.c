/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087cb1c; name: FUN_0087cb1c
 */


void FUN_0087cb1c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar1 + 0x30) == *(long *)(lVar1 + 0x20)) {
    FUN_00878520();
    *(undefined8 *)(lVar1 + 0x30) = 0;
    return;
  }
  *(undefined8 *)(lVar1 + 0x30) = 0;
  return;
}


