/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc5450; name: FUN_02bc5450
 */


void FUN_02bc5450(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = &PTR_LAB_04286348;
  param_1[1] = &PTR_LAB_04286430;
  param_1[2] = 0;
  uVar1 = FUN_0014f080(param_2,param_3,0);
  param_1[4] = uVar1;
  param_1[5] = param_2;
  param_1[6] = param_3;
  FUN_0014f1f0(uVar1,1);
  FUN_0014f4c0(param_1[4],1);
  *param_1 = &PTR_LAB_04286480;
  param_1[1] = &PTR_LAB_04286568;
  nn::os::InitializeLightEvent((long)param_1 + 0x3c,0,1);
  param_1[9] = 0;
  return;
}


