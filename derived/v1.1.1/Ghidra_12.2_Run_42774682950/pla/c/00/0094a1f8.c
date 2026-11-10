/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0094a1f8; name: FUN_0094a1f8
 */


void FUN_0094a1f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_041c2be8;
  param_1[1] = &PTR_LAB_041c2cc8;
  param_1[2] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x24,0,1);
  param_1[6] = 0;
  FUN_02bcf164(param_1 + 7,param_2,param_3);
  *(undefined4 *)(param_1 + 0x15) = 0;
  return;
}


