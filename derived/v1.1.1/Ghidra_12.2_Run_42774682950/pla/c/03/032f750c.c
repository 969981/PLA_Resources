/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f750c; name: FUN_032f750c
 */


void FUN_032f750c(ulong *param_1,ulong param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (ulong)DAT_0444ac08 & 0xfffffffffffffffc;
  param_1[1] = param_2;
  DAT_0444ac08 = param_1;
  return;
}


