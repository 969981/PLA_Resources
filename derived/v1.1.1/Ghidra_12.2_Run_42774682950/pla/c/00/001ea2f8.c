/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ea2f8; name: FUN_001ea2f8
 */


void FUN_001ea2f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x658) != 0) {
    FUN_002044d4();
    *(undefined8 *)(lVar1 + 0x658) = 0;
  }
  return;
}


