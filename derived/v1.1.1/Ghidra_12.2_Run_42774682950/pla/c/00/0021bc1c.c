/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021bc1c; name: FUN_0021bc1c
 */


void FUN_0021bc1c(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 7) = 0xff00;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  return;
}


