/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008154b4; name: FUN_008154b4
 */


void FUN_008154b4(long *param_1)

{
  FUN_007f2058();
  *param_1 = (long)(PTR_DAT_04377a58 + 0x10);
  FUN_007f0ce0(param_1 + 0x57);
  memset(param_1 + 0x17,0,0x200);
  param_1[4] = (long)(param_1 + 0x17);
  FUN_007f0d58(param_1 + 0x57);
  return;
}


