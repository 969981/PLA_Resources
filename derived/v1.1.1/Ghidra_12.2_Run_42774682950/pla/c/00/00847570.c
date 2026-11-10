/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00847570; name: FUN_00847570
 */


void FUN_00847570(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04378000 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_007e8f94();
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x28;
  return;
}


