/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032da910; name: FUN_032da910
 */


void FUN_032da910(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  *param_1 = &PTR_FUN_0434af50;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (ulong)param_3;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  return;
}


