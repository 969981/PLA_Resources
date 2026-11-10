/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300dd7c; name: FUN_0300dd7c
 */


void FUN_0300dd7c(undefined8 *param_1)

{
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_042daba0;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 2;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x49742400c9742400;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x24) = 0x3f4ccccd3f4ccccd;
  return;
}


