/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0271c970; name: FUN_0271c970
 */


void FUN_0271c970(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x40);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    return;
  }
  FUN_02a439f4(*(undefined8 *)(lVar1 + 0x58));
  return;
}


