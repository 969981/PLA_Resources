/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00979a4c; name: FUN_00979a4c
 */


void FUN_00979a4c(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_00979b64();
  *param_1 = lVar1;
  if (lVar1 == 0) {
    return;
  }
  FUN_02a439f4(*(undefined8 *)(lVar1 + 0x58));
  return;
}


