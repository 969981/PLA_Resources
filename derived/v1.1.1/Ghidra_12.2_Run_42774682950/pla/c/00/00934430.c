/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00934430; name: FUN_00934430
 */


undefined1 FUN_00934430(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00934074(param_1,0);
  if (lVar1 == 0) {
    return 0x1f;
  }
  return *(undefined1 *)(*(long *)(lVar1 + 0x70) + 0x7d);
}


