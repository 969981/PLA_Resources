/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e39ec; name: FUN_001e39ec
 */


void FUN_001e39ec(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN_001e3a3c();
  while (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    FUN_001e3920(lVar1);
    FUN_002044d4(lVar1);
  }
  FUN_002044d4(param_1);
  return;
}


