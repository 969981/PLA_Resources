/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085082c; name: FUN_0085082c
 */


void FUN_0085082c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04378068 + 0x10);
  FUN_007f0ce0(param_1 + 1);
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = 0xfd;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  FUN_008506a8(param_1 + 9);
  FUN_008506a8(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}


