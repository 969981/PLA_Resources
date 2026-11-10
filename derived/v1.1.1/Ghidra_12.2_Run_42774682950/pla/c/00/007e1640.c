/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e1640; name: FUN_007e1640
 */


void FUN_007e1640(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}


