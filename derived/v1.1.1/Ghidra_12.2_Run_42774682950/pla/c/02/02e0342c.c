/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0342c; name: FUN_02e0342c
 */


void FUN_02e0342c(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *param_1 = &PTR_LAB_042a4d20;
  *(undefined4 *)(param_1 + 3) = 0x800;
  *(undefined8 *)((long)param_1 + 0x24) = 0x8003f800000;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_02e04070(param_1 + 9);
  return;
}


