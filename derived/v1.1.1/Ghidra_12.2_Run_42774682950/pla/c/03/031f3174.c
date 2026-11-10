/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f3174; name: FUN_031f3174
 */


void FUN_031f3174(undefined8 *param_1,undefined8 param_2,long param_3,undefined1 param_4,
                 undefined4 param_5)

{
  *param_1 = &PTR_LAB_04302c40;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = param_4;
  *(undefined4 *)((long)param_1 + 0x1c) = param_5;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = param_3;
  if (param_3 != 0) {
    FUN_032d645c(param_3);
  }
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  return;
}


