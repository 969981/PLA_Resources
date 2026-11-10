/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4de0; name: FUN_032c4de0
 */


void FUN_032c4de0(long *param_1)

{
  *(undefined4 *)(param_1 + 0x12) = 1;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = -0x7fffff8000000000;
  FUN_032c4d7c();
  return;
}


