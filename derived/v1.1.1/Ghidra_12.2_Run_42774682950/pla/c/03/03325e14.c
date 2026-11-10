/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03325e14; name: FUN_03325e14
 */


void FUN_03325e14(long *param_1,long param_2)

{
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = -0x7ffffffc00000000;
  *(undefined2 *)((long)param_1 + 0x52) = 1;
  param_1[0xb] = param_2;
  param_1[0xc] = (long)DAT_0444b318;
  DAT_0444b318 = param_1;
  return;
}


