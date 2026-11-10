/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e06dac; name: FUN_02e06dac
 */


void FUN_02e06dac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if (*(char *)((long)param_1 + 0xd) != '\0') {
    FUN_02e06c44(param_1,uVar1);
  }
  FUN_02e04e90(param_4,uVar1,param_2);
  FUN_02e07180(1.0 / (float)*(uint *)(param_1 + 1),param_2);
  return;
}


