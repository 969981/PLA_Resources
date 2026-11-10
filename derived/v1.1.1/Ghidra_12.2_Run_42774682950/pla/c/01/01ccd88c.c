/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ccd88c; name: FUN_01ccd88c
 */


void FUN_01ccd88c(long param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_01cccee8(param_2,param_1);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 0x10);
  return;
}


