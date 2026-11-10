/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108c148; name: FUN_0108c148
 */


void FUN_0108c148(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 *param_6,undefined4 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  
  *param_6 = 0;
  param_6[1] = 0;
  uVar1 = *param_8;
  *(undefined4 *)(param_6 + 3) = param_5;
  *(undefined4 *)((long)param_6 + 0x1c) = param_7;
  *(undefined4 *)param_6 = param_1;
  param_6[2] = uVar1;
  *(undefined4 *)((long)param_6 + 4) = param_2;
  *(undefined4 *)(param_6 + 1) = param_3;
  *(undefined4 *)((long)param_6 + 0xc) = param_4;
  return;
}


