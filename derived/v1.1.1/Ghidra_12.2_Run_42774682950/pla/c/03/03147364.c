/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03147364; name: FUN_03147364
 */


void FUN_03147364(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  param_1[2] = 1;
  *param_1 = &DAT_042dac50;
  param_1[1] = 0xffffffff;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 3) = param_3;
  *(undefined1 *)((long)param_1 + 0x19) = param_4;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x40800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = uVar2 & 0xffffffff;
  param_1[6] = uVar1;
  return;
}


