/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033214b8; name: FUN_033214b8
 */


void FUN_033214b8(long *param_1,long param_2,long param_3)

{
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_03321518();
  *param_1 = param_2;
  param_1[1] = param_2 + param_3;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[5] = 0;
  return;
}


